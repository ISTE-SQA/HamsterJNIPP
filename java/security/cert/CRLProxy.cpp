#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "CRLProxy.h"

// includes for parameter and return type proxy classes
#include "java\security\cert\CertificateProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::security::cert;


std::string CRLProxy::className = "java/security/cert/CRL";
jclass CRLProxy::objectClass = NULL;

jclass CRLProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

CRLProxy::CRLProxy(void* unused)
{
}

jobject CRLProxy::_getPeerObject() const
{
	return peerObject;
}

jclass CRLProxy::getObjectClass()
{
	return _getObjectClass();
}

CRLProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
CRLProxy::CRLProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

CRLProxy::~CRLProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

CRLProxy& CRLProxy::operator=(const CRLProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
jboolean CRLProxy::isRevoked(::java::security::cert::CertificateProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "isRevoked", "(Ljava/security/cert/Certificate;)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

::net::sourceforge::jnipp::JStringHelper CRLProxy::toString()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "toString", "()Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::net::sourceforge::jnipp::JStringHelper CRLProxy::getType()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getType", "()Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

