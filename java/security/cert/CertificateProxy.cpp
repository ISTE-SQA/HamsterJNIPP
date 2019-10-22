#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "CertificateProxy.h"

// includes for parameter and return type proxy classes
#include "java\security\PublicKeyProxy.h"
#include "java\lang\ObjectProxy.h"
#include "java\security\ProviderProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::security::cert;


std::string CertificateProxy::className = "java/security/cert/Certificate";
jclass CertificateProxy::objectClass = NULL;

jclass CertificateProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

CertificateProxy::CertificateProxy(void* unused)
{
}

jobject CertificateProxy::_getPeerObject() const
{
	return peerObject;
}

jclass CertificateProxy::getObjectClass()
{
	return _getObjectClass();
}

CertificateProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
CertificateProxy::CertificateProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

CertificateProxy::~CertificateProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

CertificateProxy& CertificateProxy::operator=(const CertificateProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
::net::sourceforge::jnipp::JByteArrayHelper<1> CertificateProxy::getEncoded()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getEncoded", "()[B" );
	return ::net::sourceforge::jnipp::JByteArrayHelper<1>( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::net::sourceforge::jnipp::JStringHelper CertificateProxy::toString()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "toString", "()Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::security::PublicKeyProxy CertificateProxy::getPublicKey()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getPublicKey", "()Ljava/security/PublicKey;" );
	return ::java::security::PublicKeyProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

void CertificateProxy::verify(::java::security::PublicKeyProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "verify", "(Ljava/security/PublicKey;)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

void CertificateProxy::verify(::java::security::PublicKeyProxy p0, ::net::sourceforge::jnipp::JStringHelper p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "verify", "(Ljava/security/PublicKey;Ljava/lang/String;)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), static_cast<jstring>( p1 ) );
}

jboolean CertificateProxy::equals(::java::lang::ObjectProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "equals", "(Ljava/lang/Object;)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

::net::sourceforge::jnipp::JStringHelper CertificateProxy::getType()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getType", "()Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

jint CertificateProxy::hashCode()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "hashCode", "()I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid );
}

void CertificateProxy::verify(::java::security::PublicKeyProxy p0, ::java::security::ProviderProxy p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "verify", "(Ljava/security/PublicKey;Ljava/security/Provider;)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), static_cast<jobject>( p1 ) );
}

