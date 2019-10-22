#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "ExecutorServiceProxy.h"

// includes for parameter and return type proxy classes
#include "java\util\concurrent\TimeUnitProxy.h"
#include "java\util\CollectionProxy.h"
#include "java\lang\ObjectProxy.h"
#include "java\util\ListProxy.h"
#include "java\lang\RunnableProxy.h"
#include "java\util\concurrent\FutureProxy.h"
#include "java\util\concurrent\CallableProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::util::concurrent;


std::string ExecutorServiceProxy::className = "java/util/concurrent/ExecutorService";
jclass ExecutorServiceProxy::objectClass = NULL;

jclass ExecutorServiceProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

ExecutorServiceProxy::ExecutorServiceProxy(void* unused)
{
}

jobject ExecutorServiceProxy::_getPeerObject() const
{
	return peerObject;
}

jclass ExecutorServiceProxy::getObjectClass()
{
	return _getObjectClass();
}

ExecutorServiceProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
ExecutorServiceProxy::ExecutorServiceProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

ExecutorServiceProxy::~ExecutorServiceProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

ExecutorServiceProxy& ExecutorServiceProxy::operator=(const ExecutorServiceProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
jboolean ExecutorServiceProxy::awaitTermination(jlong p0, ::java::util::concurrent::TimeUnitProxy p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "awaitTermination", "(JLjava/util/concurrent/TimeUnit;)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, p0, static_cast<jobject>( p1 ) );
}

jboolean ExecutorServiceProxy::isShutdown()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "isShutdown", "()Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid );
}

jboolean ExecutorServiceProxy::isTerminated()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "isTerminated", "()Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid );
}

::java::lang::ObjectProxy ExecutorServiceProxy::invokeAny(::java::util::CollectionProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "invokeAny", "(Ljava/util/Collection;)Ljava/lang/Object;" );
	return ::java::lang::ObjectProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::java::lang::ObjectProxy ExecutorServiceProxy::invokeAny(::java::util::CollectionProxy p0, jlong p1, ::java::util::concurrent::TimeUnitProxy p2)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "invokeAny", "(Ljava/util/Collection;JLjava/util/concurrent/TimeUnit;)Ljava/lang/Object;" );
	return ::java::lang::ObjectProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), p1, static_cast<jobject>( p2 ) )  );
}

::java::util::ListProxy ExecutorServiceProxy::invokeAll(::java::util::CollectionProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "invokeAll", "(Ljava/util/Collection;)Ljava/util/List;" );
	return ::java::util::ListProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::java::util::ListProxy ExecutorServiceProxy::invokeAll(::java::util::CollectionProxy p0, jlong p1, ::java::util::concurrent::TimeUnitProxy p2)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "invokeAll", "(Ljava/util/Collection;JLjava/util/concurrent/TimeUnit;)Ljava/util/List;" );
	return ::java::util::ListProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), p1, static_cast<jobject>( p2 ) )  );
}

::java::util::ListProxy ExecutorServiceProxy::shutdownNow()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "shutdownNow", "()Ljava/util/List;" );
	return ::java::util::ListProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::util::concurrent::FutureProxy ExecutorServiceProxy::submit(::java::lang::RunnableProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "submit", "(Ljava/lang/Runnable;)Ljava/util/concurrent/Future;" );
	return ::java::util::concurrent::FutureProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::java::util::concurrent::FutureProxy ExecutorServiceProxy::submit(::java::lang::RunnableProxy p0, ::java::lang::ObjectProxy p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "submit", "(Ljava/lang/Runnable;Ljava/lang/Object;)Ljava/util/concurrent/Future;" );
	return ::java::util::concurrent::FutureProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), static_cast<jobject>( p1 ) )  );
}

::java::util::concurrent::FutureProxy ExecutorServiceProxy::submit(::java::util::concurrent::CallableProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "submit", "(Ljava/util/concurrent/Callable;)Ljava/util/concurrent/Future;" );
	return ::java::util::concurrent::FutureProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

void ExecutorServiceProxy::shutdown()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "shutdown", "()V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid );
}

