#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "CodeSignerProxy.h"

// includes for parameter and return type proxy classes
#include "java\security\cert\CertPathProxy.h"
#include "java\security\TimestampProxy.h"
#include "java\lang\ObjectProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::security;


std::string CodeSignerProxy::className = "java/security/CodeSigner";
jclass CodeSignerProxy::objectClass = NULL;

jclass CodeSignerProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

CodeSignerProxy::CodeSignerProxy(void* unused)
{
}

jobject CodeSignerProxy::_getPeerObject() const
{
	return peerObject;
}

jclass CodeSignerProxy::getObjectClass()
{
	return _getObjectClass();
}

CodeSignerProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
CodeSignerProxy::CodeSignerProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

CodeSignerProxy::CodeSignerProxy(::java::security::cert::CertPathProxy p0, ::java::security::TimestampProxy p1)
{
	jmethodID mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "<init>", "(Ljava/security/cert/CertPath;Ljava/security/Timestamp;)V" );
	peerObject = JNIEnvHelper::NewGlobalRef( JNIEnvHelper::NewObject( _getObjectClass(), mid, static_cast<jobject>( p0 ), static_cast<jobject>( p1 ) ) );
}

CodeSignerProxy::~CodeSignerProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

CodeSignerProxy& CodeSignerProxy::operator=(const CodeSignerProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
jboolean CodeSignerProxy::equals(::java::lang::ObjectProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "equals", "(Ljava/lang/Object;)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

jint CodeSignerProxy::hashCode()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "hashCode", "()I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid );
}

::net::sourceforge::jnipp::JStringHelper CodeSignerProxy::toString()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "toString", "()Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::security::TimestampProxy CodeSignerProxy::getTimestamp()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getTimestamp", "()Ljava/security/Timestamp;" );
	return ::java::security::TimestampProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::security::cert::CertPathProxy CodeSignerProxy::getSignerCertPath()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getSignerCertPath", "()Ljava/security/cert/CertPath;" );
	return ::java::security::cert::CertPathProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

