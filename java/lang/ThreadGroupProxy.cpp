#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "ThreadGroupProxy.h"

// includes for parameter and return type proxy classes
#include "java\lang\ThreadGroupProxy.h"
#include "java\lang\ThreadProxy.h"
#include "java\lang\ThrowableProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::lang;


std::string ThreadGroupProxy::className = "java/lang/ThreadGroup";
jclass ThreadGroupProxy::objectClass = NULL;

jclass ThreadGroupProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

ThreadGroupProxy::ThreadGroupProxy(void* unused)
{
}

jobject ThreadGroupProxy::_getPeerObject() const
{
	return peerObject;
}

jclass ThreadGroupProxy::getObjectClass()
{
	return _getObjectClass();
}

ThreadGroupProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
ThreadGroupProxy::ThreadGroupProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

ThreadGroupProxy::ThreadGroupProxy(::net::sourceforge::jnipp::JStringHelper p0)
{
	jmethodID mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "<init>", "(Ljava/lang/String;)V" );
	peerObject = JNIEnvHelper::NewGlobalRef( JNIEnvHelper::NewObject( _getObjectClass(), mid, static_cast<jstring>( p0 ) ) );
}

ThreadGroupProxy::ThreadGroupProxy(::java::lang::ThreadGroupProxy p0, ::net::sourceforge::jnipp::JStringHelper p1)
{
	jmethodID mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "<init>", "(Ljava/lang/ThreadGroup;Ljava/lang/String;)V" );
	peerObject = JNIEnvHelper::NewGlobalRef( JNIEnvHelper::NewObject( _getObjectClass(), mid, static_cast<jobject>( p0 ), static_cast<jstring>( p1 ) ) );
}

ThreadGroupProxy::~ThreadGroupProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

ThreadGroupProxy& ThreadGroupProxy::operator=(const ThreadGroupProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
jboolean ThreadGroupProxy::allowThreadSuspension(jboolean p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "allowThreadSuspension", "(Z)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, p0 );
}

jboolean ThreadGroupProxy::isDaemon()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "isDaemon", "()Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid );
}

jboolean ThreadGroupProxy::parentOf(::java::lang::ThreadGroupProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "parentOf", "(Ljava/lang/ThreadGroup;)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

jint ThreadGroupProxy::getMaxPriority()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getMaxPriority", "()I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid );
}

::net::sourceforge::jnipp::JStringHelper ThreadGroupProxy::getName()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getName", "()Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::lang::ThreadGroupProxy ThreadGroupProxy::getParent()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getParent", "()Ljava/lang/ThreadGroup;" );
	return ::java::lang::ThreadGroupProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

void ThreadGroupProxy::checkAccess()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "checkAccess", "()V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid );
}

void ThreadGroupProxy::destroy()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "destroy", "()V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid );
}

void ThreadGroupProxy::interrupt()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "interrupt", "()V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid );
}

void ThreadGroupProxy::resume()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "resume", "()V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid );
}

void ThreadGroupProxy::setDaemon(jboolean p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "setDaemon", "(Z)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, p0 );
}

void ThreadGroupProxy::setMaxPriority(jint p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "setMaxPriority", "(I)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, p0 );
}

void ThreadGroupProxy::stop()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "stop", "()V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid );
}

void ThreadGroupProxy::suspend()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "suspend", "()V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid );
}

jint ThreadGroupProxy::activeCount()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "activeCount", "()I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid );
}

jint ThreadGroupProxy::activeGroupCount()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "activeGroupCount", "()I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid );
}

jint ThreadGroupProxy::enumerate(::net::sourceforge::jnipp::PA<::java::lang::ThreadGroupProxy>::ProxyArray<1> p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "enumerate", "([Ljava/lang/ThreadGroup;)I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid, static_cast<jobjectArray>( p0 ) );
}

jint ThreadGroupProxy::enumerate(::net::sourceforge::jnipp::PA<::java::lang::ThreadGroupProxy>::ProxyArray<1> p0, jboolean p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "enumerate", "([Ljava/lang/ThreadGroup;Z)I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid, static_cast<jobjectArray>( p0 ), p1 );
}

jint ThreadGroupProxy::enumerate(::net::sourceforge::jnipp::PA<::java::lang::ThreadProxy>::ProxyArray<1> p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "enumerate", "([Ljava/lang/Thread;)I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid, static_cast<jobjectArray>( p0 ) );
}

jint ThreadGroupProxy::enumerate(::net::sourceforge::jnipp::PA<::java::lang::ThreadProxy>::ProxyArray<1> p0, jboolean p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "enumerate", "([Ljava/lang/Thread;Z)I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid, static_cast<jobjectArray>( p0 ), p1 );
}

::net::sourceforge::jnipp::JStringHelper ThreadGroupProxy::toString()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "toString", "()Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

jboolean ThreadGroupProxy::isDestroyed()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "isDestroyed", "()Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid );
}

void ThreadGroupProxy::list()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "list", "()V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid );
}

void ThreadGroupProxy::uncaughtException(::java::lang::ThreadProxy p0, ::java::lang::ThrowableProxy p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "uncaughtException", "(Ljava/lang/Thread;Ljava/lang/Throwable;)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), static_cast<jobject>( p1 ) );
}

