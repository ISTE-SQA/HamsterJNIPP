#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "FutureProxy.h"

// includes for parameter and return type proxy classes
#include "java\lang\ObjectProxy.h"
#include "java\util\concurrent\TimeUnitProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::util::concurrent;


std::string FutureProxy::className = "java/util/concurrent/Future";
jclass FutureProxy::objectClass = NULL;

jclass FutureProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

FutureProxy::FutureProxy(void* unused)
{
}

jobject FutureProxy::_getPeerObject() const
{
	return peerObject;
}

jclass FutureProxy::getObjectClass()
{
	return _getObjectClass();
}

FutureProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
FutureProxy::FutureProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

FutureProxy::~FutureProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

FutureProxy& FutureProxy::operator=(const FutureProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
jboolean FutureProxy::cancel(jboolean p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "cancel", "(Z)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, p0 );
}

jboolean FutureProxy::isCancelled()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "isCancelled", "()Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid );
}

jboolean FutureProxy::isDone()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "isDone", "()Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid );
}

::java::lang::ObjectProxy FutureProxy::get()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "get", "()Ljava/lang/Object;" );
	return ::java::lang::ObjectProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::lang::ObjectProxy FutureProxy::get(jlong p0, ::java::util::concurrent::TimeUnitProxy p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "get", "(JLjava/util/concurrent/TimeUnit;)Ljava/lang/Object;" );
	return ::java::lang::ObjectProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0, static_cast<jobject>( p1 ) )  );
}

