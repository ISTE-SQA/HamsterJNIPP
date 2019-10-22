#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "Thread_UncaughtExceptionHandlerProxy.h"

// includes for parameter and return type proxy classes
#include "java\lang\ThreadProxy.h"
#include "java\lang\ThrowableProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::lang;


std::string Thread_UncaughtExceptionHandlerProxy::className = "java/lang/Thread$UncaughtExceptionHandler";
jclass Thread_UncaughtExceptionHandlerProxy::objectClass = NULL;

jclass Thread_UncaughtExceptionHandlerProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

Thread_UncaughtExceptionHandlerProxy::Thread_UncaughtExceptionHandlerProxy(void* unused)
{
}

jobject Thread_UncaughtExceptionHandlerProxy::_getPeerObject() const
{
	return peerObject;
}

jclass Thread_UncaughtExceptionHandlerProxy::getObjectClass()
{
	return _getObjectClass();
}

Thread_UncaughtExceptionHandlerProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
Thread_UncaughtExceptionHandlerProxy::Thread_UncaughtExceptionHandlerProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

Thread_UncaughtExceptionHandlerProxy::~Thread_UncaughtExceptionHandlerProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

Thread_UncaughtExceptionHandlerProxy& Thread_UncaughtExceptionHandlerProxy::operator=(const Thread_UncaughtExceptionHandlerProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
void Thread_UncaughtExceptionHandlerProxy::uncaughtException(::java::lang::ThreadProxy p0, ::java::lang::ThrowableProxy p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "uncaughtException", "(Ljava/lang/Thread;Ljava/lang/Throwable;)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), static_cast<jobject>( p1 ) );
}

