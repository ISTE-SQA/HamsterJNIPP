#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "TimestampProxy.h"

// includes for parameter and return type proxy classes
#include "java\util\DateProxy.h"
#include "java\security\cert\CertPathProxy.h"
#include "java\lang\ObjectProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::security;


std::string TimestampProxy::className = "java/security/Timestamp";
jclass TimestampProxy::objectClass = NULL;

jclass TimestampProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

TimestampProxy::TimestampProxy(void* unused)
{
}

jobject TimestampProxy::_getPeerObject() const
{
	return peerObject;
}

jclass TimestampProxy::getObjectClass()
{
	return _getObjectClass();
}

TimestampProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
TimestampProxy::TimestampProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

TimestampProxy::TimestampProxy(::java::util::DateProxy p0, ::java::security::cert::CertPathProxy p1)
{
	jmethodID mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "<init>", "(Ljava/util/Date;Ljava/security/cert/CertPath;)V" );
	peerObject = JNIEnvHelper::NewGlobalRef( JNIEnvHelper::NewObject( _getObjectClass(), mid, static_cast<jobject>( p0 ), static_cast<jobject>( p1 ) ) );
}

TimestampProxy::~TimestampProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

TimestampProxy& TimestampProxy::operator=(const TimestampProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
jboolean TimestampProxy::equals(::java::lang::ObjectProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "equals", "(Ljava/lang/Object;)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

jint TimestampProxy::hashCode()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "hashCode", "()I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid );
}

::net::sourceforge::jnipp::JStringHelper TimestampProxy::toString()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "toString", "()Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::security::cert::CertPathProxy TimestampProxy::getSignerCertPath()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getSignerCertPath", "()Ljava/security/cert/CertPath;" );
	return ::java::security::cert::CertPathProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::util::DateProxy TimestampProxy::getTimestamp()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getTimestamp", "()Ljava/util/Date;" );
	return ::java::util::DateProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

