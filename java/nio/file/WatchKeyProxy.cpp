#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "WatchKeyProxy.h"

// includes for parameter and return type proxy classes
#include "java\nio\file\WatchableProxy.h"
#include "java\util\ListProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::nio::file;


std::string WatchKeyProxy::className = "java/nio/file/WatchKey";
jclass WatchKeyProxy::objectClass = NULL;

jclass WatchKeyProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

WatchKeyProxy::WatchKeyProxy(void* unused)
{
}

jobject WatchKeyProxy::_getPeerObject() const
{
	return peerObject;
}

jclass WatchKeyProxy::getObjectClass()
{
	return _getObjectClass();
}

WatchKeyProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
WatchKeyProxy::WatchKeyProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

WatchKeyProxy::~WatchKeyProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

WatchKeyProxy& WatchKeyProxy::operator=(const WatchKeyProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
jboolean WatchKeyProxy::isValid()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "isValid", "()Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid );
}

jboolean WatchKeyProxy::reset()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "reset", "()Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid );
}

::java::nio::file::WatchableProxy WatchKeyProxy::watchable()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "watchable", "()Ljava/nio/file/Watchable;" );
	return ::java::nio::file::WatchableProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::util::ListProxy WatchKeyProxy::pollEvents()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "pollEvents", "()Ljava/util/List;" );
	return ::java::util::ListProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

void WatchKeyProxy::cancel()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "cancel", "()V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid );
}

