#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "SemaphoreProxy.h"

// includes for parameter and return type proxy classes
#include "java\util\concurrent\TimeUnitProxy.h"
#include "java\util\concurrent\Semaphore_SyncProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::util::concurrent;


std::string SemaphoreProxy::className = "java/util/concurrent/Semaphore";
jclass SemaphoreProxy::objectClass = NULL;

jclass SemaphoreProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

SemaphoreProxy::SemaphoreProxy(void* unused)
{
}

jobject SemaphoreProxy::_getPeerObject() const
{
	return peerObject;
}

jclass SemaphoreProxy::getObjectClass()
{
	return _getObjectClass();
}

SemaphoreProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
SemaphoreProxy::SemaphoreProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

SemaphoreProxy::SemaphoreProxy(jint p0)
{
	jmethodID mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "<init>", "(I)V" );
	peerObject = JNIEnvHelper::NewGlobalRef( JNIEnvHelper::NewObject( _getObjectClass(), mid, p0 ) );
}

SemaphoreProxy::SemaphoreProxy(jint p0, jboolean p1)
{
	jmethodID mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "<init>", "(IZ)V" );
	peerObject = JNIEnvHelper::NewGlobalRef( JNIEnvHelper::NewObject( _getObjectClass(), mid, p0, p1 ) );
}

SemaphoreProxy::~SemaphoreProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

SemaphoreProxy& SemaphoreProxy::operator=(const SemaphoreProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
jboolean SemaphoreProxy::isFair()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "isFair", "()Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid );
}

jboolean SemaphoreProxy::tryAcquire()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "tryAcquire", "()Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid );
}

jboolean SemaphoreProxy::tryAcquire(jint p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "tryAcquire", "(I)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, p0 );
}

jboolean SemaphoreProxy::tryAcquire(jint p0, jlong p1, ::java::util::concurrent::TimeUnitProxy p2)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "tryAcquire", "(IJLjava/util/concurrent/TimeUnit;)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, p0, p1, static_cast<jobject>( p2 ) );
}

jboolean SemaphoreProxy::tryAcquire(jlong p0, ::java::util::concurrent::TimeUnitProxy p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "tryAcquire", "(JLjava/util/concurrent/TimeUnit;)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, p0, static_cast<jobject>( p1 ) );
}

jboolean SemaphoreProxy::hasQueuedThreads()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "hasQueuedThreads", "()Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid );
}

jint SemaphoreProxy::getQueueLength()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getQueueLength", "()I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid );
}

jint SemaphoreProxy::availablePermits()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "availablePermits", "()I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid );
}

jint SemaphoreProxy::drainPermits()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "drainPermits", "()I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid );
}

::net::sourceforge::jnipp::JStringHelper SemaphoreProxy::toString()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "toString", "()Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

void SemaphoreProxy::acquire()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "acquire", "()V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid );
}

void SemaphoreProxy::acquire(jint p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "acquire", "(I)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, p0 );
}

void SemaphoreProxy::acquireUninterruptibly()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "acquireUninterruptibly", "()V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid );
}

void SemaphoreProxy::acquireUninterruptibly(jint p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "acquireUninterruptibly", "(I)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, p0 );
}

void SemaphoreProxy::release()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "release", "()V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid );
}

void SemaphoreProxy::release(jint p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "release", "(I)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, p0 );
}

