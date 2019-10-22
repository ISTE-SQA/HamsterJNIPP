#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "ReflectiveOperationExceptionProxy.h"

// includes for parameter and return type proxy classes
#include "java\lang\ThrowableProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::lang;


std::string ReflectiveOperationExceptionProxy::className = "java/lang/ReflectiveOperationException";
jclass ReflectiveOperationExceptionProxy::objectClass = NULL;

jclass ReflectiveOperationExceptionProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

ReflectiveOperationExceptionProxy::ReflectiveOperationExceptionProxy(void* unused)
{
}

jobject ReflectiveOperationExceptionProxy::_getPeerObject() const
{
	return peerObject;
}

jclass ReflectiveOperationExceptionProxy::getObjectClass()
{
	return _getObjectClass();
}

ReflectiveOperationExceptionProxy::operator jobject()
{
	return _getPeerObject();
}

ReflectiveOperationExceptionProxy::operator jthrowable()
{
	return reinterpret_cast<jthrowable>(_getPeerObject());
}

// constructors
ReflectiveOperationExceptionProxy::ReflectiveOperationExceptionProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

ReflectiveOperationExceptionProxy::ReflectiveOperationExceptionProxy()
{
	jmethodID mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "<init>", "()V" );
	peerObject = JNIEnvHelper::NewGlobalRef( JNIEnvHelper::NewObject( _getObjectClass(), mid ) );
}

ReflectiveOperationExceptionProxy::ReflectiveOperationExceptionProxy(::net::sourceforge::jnipp::JStringHelper p0)
{
	jmethodID mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "<init>", "(Ljava/lang/String;)V" );
	peerObject = JNIEnvHelper::NewGlobalRef( JNIEnvHelper::NewObject( _getObjectClass(), mid, static_cast<jstring>( p0 ) ) );
}

ReflectiveOperationExceptionProxy::ReflectiveOperationExceptionProxy(::net::sourceforge::jnipp::JStringHelper p0, ::java::lang::ThrowableProxy p1)
{
	jmethodID mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V" );
	peerObject = JNIEnvHelper::NewGlobalRef( JNIEnvHelper::NewObject( _getObjectClass(), mid, static_cast<jstring>( p0 ), static_cast<jobject>( p1 ) ) );
}

ReflectiveOperationExceptionProxy::ReflectiveOperationExceptionProxy(::java::lang::ThrowableProxy p0)
{
	jmethodID mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "<init>", "(Ljava/lang/Throwable;)V" );
	peerObject = JNIEnvHelper::NewGlobalRef( JNIEnvHelper::NewObject( _getObjectClass(), mid, static_cast<jobject>( p0 ) ) );
}

ReflectiveOperationExceptionProxy::~ReflectiveOperationExceptionProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

ReflectiveOperationExceptionProxy& ReflectiveOperationExceptionProxy::operator=(const ReflectiveOperationExceptionProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
