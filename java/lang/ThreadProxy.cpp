#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "ThreadProxy.h"

// includes for parameter and return type proxy classes
#include "java\lang\RunnableProxy.h"
#include "java\lang\ThreadGroupProxy.h"
#include "java\lang\ThrowableProxy.h"
#include "java\lang\ClassLoaderProxy.h"
#include "java\lang\Thread_StateProxy.h"
#include "java\lang\Thread_UncaughtExceptionHandlerProxy.h"
#include "java\util\MapProxy.h"
#include "java\lang\ObjectProxy.h"
#include "java\lang\ThreadLocal_ThreadLocalMapProxy.h"
#include "java\security\AccessControlContextProxy.h"
#include "java\lang\RuntimePermissionProxy.h"
#include "sun\nio\ch\InterruptibleProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::lang;


std::string ThreadProxy::className = "java/lang/Thread";
jclass ThreadProxy::objectClass = NULL;

jclass ThreadProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

ThreadProxy::ThreadProxy(void* unused)
{
}

jobject ThreadProxy::_getPeerObject() const
{
	return peerObject;
}

jclass ThreadProxy::getObjectClass()
{
	return _getObjectClass();
}

ThreadProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
ThreadProxy::ThreadProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

ThreadProxy::ThreadProxy()
{
	jmethodID mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "<init>", "()V" );
	peerObject = JNIEnvHelper::NewGlobalRef( JNIEnvHelper::NewObject( _getObjectClass(), mid ) );
}

ThreadProxy::ThreadProxy(::java::lang::RunnableProxy p0)
{
	jmethodID mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "<init>", "(Ljava/lang/Runnable;)V" );
	peerObject = JNIEnvHelper::NewGlobalRef( JNIEnvHelper::NewObject( _getObjectClass(), mid, static_cast<jobject>( p0 ) ) );
}

ThreadProxy::ThreadProxy(::java::lang::RunnableProxy p0, ::net::sourceforge::jnipp::JStringHelper p1)
{
	jmethodID mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "<init>", "(Ljava/lang/Runnable;Ljava/lang/String;)V" );
	peerObject = JNIEnvHelper::NewGlobalRef( JNIEnvHelper::NewObject( _getObjectClass(), mid, static_cast<jobject>( p0 ), static_cast<jstring>( p1 ) ) );
}

ThreadProxy::ThreadProxy(::net::sourceforge::jnipp::JStringHelper p0)
{
	jmethodID mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "<init>", "(Ljava/lang/String;)V" );
	peerObject = JNIEnvHelper::NewGlobalRef( JNIEnvHelper::NewObject( _getObjectClass(), mid, static_cast<jstring>( p0 ) ) );
}

ThreadProxy::ThreadProxy(::java::lang::ThreadGroupProxy p0, ::java::lang::RunnableProxy p1)
{
	jmethodID mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "<init>", "(Ljava/lang/ThreadGroup;Ljava/lang/Runnable;)V" );
	peerObject = JNIEnvHelper::NewGlobalRef( JNIEnvHelper::NewObject( _getObjectClass(), mid, static_cast<jobject>( p0 ), static_cast<jobject>( p1 ) ) );
}

ThreadProxy::ThreadProxy(::java::lang::ThreadGroupProxy p0, ::java::lang::RunnableProxy p1, ::net::sourceforge::jnipp::JStringHelper p2)
{
	jmethodID mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "<init>", "(Ljava/lang/ThreadGroup;Ljava/lang/Runnable;Ljava/lang/String;)V" );
	peerObject = JNIEnvHelper::NewGlobalRef( JNIEnvHelper::NewObject( _getObjectClass(), mid, static_cast<jobject>( p0 ), static_cast<jobject>( p1 ), static_cast<jstring>( p2 ) ) );
}

ThreadProxy::ThreadProxy(::java::lang::ThreadGroupProxy p0, ::java::lang::RunnableProxy p1, ::net::sourceforge::jnipp::JStringHelper p2, jlong p3)
{
	jmethodID mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "<init>", "(Ljava/lang/ThreadGroup;Ljava/lang/Runnable;Ljava/lang/String;J)V" );
	peerObject = JNIEnvHelper::NewGlobalRef( JNIEnvHelper::NewObject( _getObjectClass(), mid, static_cast<jobject>( p0 ), static_cast<jobject>( p1 ), static_cast<jstring>( p2 ), p3 ) );
}

ThreadProxy::ThreadProxy(::java::lang::ThreadGroupProxy p0, ::net::sourceforge::jnipp::JStringHelper p1)
{
	jmethodID mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "<init>", "(Ljava/lang/ThreadGroup;Ljava/lang/String;)V" );
	peerObject = JNIEnvHelper::NewGlobalRef( JNIEnvHelper::NewObject( _getObjectClass(), mid, static_cast<jobject>( p0 ), static_cast<jstring>( p1 ) ) );
}

ThreadProxy::~ThreadProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

ThreadProxy& ThreadProxy::operator=(const ThreadProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
jboolean ThreadProxy::isInterrupted()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "isInterrupted", "()Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid );
}

jboolean ThreadProxy::isDaemon()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "isDaemon", "()Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid );
}

jint ThreadProxy::getPriority()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getPriority", "()I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid );
}

::net::sourceforge::jnipp::JStringHelper ThreadProxy::getName()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getName", "()Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::lang::ThreadGroupProxy ThreadProxy::getThreadGroup()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getThreadGroup", "()Ljava/lang/ThreadGroup;" );
	return ::java::lang::ThreadGroupProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

jboolean ThreadProxy::isAlive()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "isAlive", "()Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid );
}

void ThreadProxy::join(jlong p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "join", "(J)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, p0 );
}

void ThreadProxy::join(jlong p0, jint p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "join", "(JI)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, p0, p1 );
}

void ThreadProxy::setName(::net::sourceforge::jnipp::JStringHelper p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "setName", "(Ljava/lang/String;)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, static_cast<jstring>( p0 ) );
}

void ThreadProxy::stop(::java::lang::ThrowableProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "stop", "(Ljava/lang/Throwable;)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

void ThreadProxy::checkAccess()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "checkAccess", "()V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid );
}

void ThreadProxy::join()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "join", "()V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid );
}

void ThreadProxy::resume()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "resume", "()V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid );
}

void ThreadProxy::setDaemon(jboolean p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "setDaemon", "(Z)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, p0 );
}

void ThreadProxy::setPriority(jint p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "setPriority", "(I)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, p0 );
}

void ThreadProxy::stop()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "stop", "()V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid );
}

void ThreadProxy::suspend()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "suspend", "()V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid );
}

::java::lang::ClassLoaderProxy ThreadProxy::getContextClassLoader()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getContextClassLoader", "()Ljava/lang/ClassLoader;" );
	return ::java::lang::ClassLoaderProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::net::sourceforge::jnipp::PA<::java::lang::StackTraceElementProxy>::ProxyArray<1> ThreadProxy::getStackTrace()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getStackTrace", "()[Ljava/lang/StackTraceElement;" );
	return ::net::sourceforge::jnipp::PA<::java::lang::StackTraceElementProxy>::ProxyArray<1>( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::net::sourceforge::jnipp::JStringHelper ThreadProxy::toString()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "toString", "()Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::lang::Thread_StateProxy ThreadProxy::getState()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getState", "()Ljava/lang/Thread$State;" );
	return ::java::lang::Thread_StateProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::lang::Thread_UncaughtExceptionHandlerProxy ThreadProxy::getUncaughtExceptionHandler()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getUncaughtExceptionHandler", "()Ljava/lang/Thread$UncaughtExceptionHandler;" );
	return ::java::lang::Thread_UncaughtExceptionHandlerProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

jlong ThreadProxy::getId()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getId", "()J" );
	return JNIEnvHelper::CallLongMethod( _getPeerObject(), mid );
}

jint ThreadProxy::countStackFrames()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "countStackFrames", "()I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid );
}

jboolean ThreadProxy::interrupted()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "interrupted", "()Z" );
	return JNIEnvHelper::CallStaticBooleanMethod( _getObjectClass(), mid );
}

jint ThreadProxy::activeCount()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "activeCount", "()I" );
	return JNIEnvHelper::CallStaticIntMethod( _getObjectClass(), mid );
}

jint ThreadProxy::enumerate(::net::sourceforge::jnipp::PA<::java::lang::ThreadProxy>::ProxyArray<1> p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "enumerate", "([Ljava/lang/Thread;)I" );
	return JNIEnvHelper::CallStaticIntMethod( _getObjectClass(), mid, static_cast<jobjectArray>( p0 ) );
}

::java::lang::Thread_UncaughtExceptionHandlerProxy ThreadProxy::getDefaultUncaughtExceptionHandler()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "getDefaultUncaughtExceptionHandler", "()Ljava/lang/Thread$UncaughtExceptionHandler;" );
	return ::java::lang::Thread_UncaughtExceptionHandlerProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid )  );
}

::java::util::MapProxy ThreadProxy::getAllStackTraces()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "getAllStackTraces", "()Ljava/util/Map;" );
	return ::java::util::MapProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid )  );
}

jboolean ThreadProxy::holdsLock(::java::lang::ObjectProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "holdsLock", "(Ljava/lang/Object;)Z" );
	return JNIEnvHelper::CallStaticBooleanMethod( _getObjectClass(), mid, static_cast<jobject>( p0 ) );
}

::java::lang::ThreadProxy ThreadProxy::currentThread()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "currentThread", "()Ljava/lang/Thread;" );
	return ::java::lang::ThreadProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid )  );
}

void ThreadProxy::sleep(jlong p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "sleep", "(J)V" );
	JNIEnvHelper::CallStaticVoidMethod( _getObjectClass(), mid, p0 );
}

void ThreadProxy::yield()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "yield", "()V" );
	JNIEnvHelper::CallStaticVoidMethod( _getObjectClass(), mid );
}

void ThreadProxy::dumpStack()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "dumpStack", "()V" );
	JNIEnvHelper::CallStaticVoidMethod( _getObjectClass(), mid );
}

void ThreadProxy::setDefaultUncaughtExceptionHandler(::java::lang::Thread_UncaughtExceptionHandlerProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "setDefaultUncaughtExceptionHandler", "(Ljava/lang/Thread$UncaughtExceptionHandler;)V" );
	JNIEnvHelper::CallStaticVoidMethod( _getObjectClass(), mid, static_cast<jobject>( p0 ) );
}

void ThreadProxy::sleep(jlong p0, jint p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "sleep", "(JI)V" );
	JNIEnvHelper::CallStaticVoidMethod( _getObjectClass(), mid, p0, p1 );
}

void ThreadProxy::start()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "start", "()V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid );
}

void ThreadProxy::destroy()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "destroy", "()V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid );
}

void ThreadProxy::interrupt()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "interrupt", "()V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid );
}

void ThreadProxy::run()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "run", "()V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid );
}

void ThreadProxy::setContextClassLoader(::java::lang::ClassLoaderProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "setContextClassLoader", "(Ljava/lang/ClassLoader;)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

void ThreadProxy::setUncaughtExceptionHandler(::java::lang::Thread_UncaughtExceptionHandlerProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "setUncaughtExceptionHandler", "(Ljava/lang/Thread$UncaughtExceptionHandler;)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

