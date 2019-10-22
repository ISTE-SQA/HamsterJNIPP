#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "WatchServiceProxy.h"

// includes for parameter and return type proxy classes
#include "java\nio\file\WatchKeyProxy.h"
#include "java\util\concurrent\TimeUnitProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::nio::file;


std::string WatchServiceProxy::className = "java/nio/file/WatchService";
jclass WatchServiceProxy::objectClass = NULL;

jclass WatchServiceProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

WatchServiceProxy::WatchServiceProxy(void* unused)
{
}

jobject WatchServiceProxy::_getPeerObject() const
{
	return peerObject;
}

jclass WatchServiceProxy::getObjectClass()
{
	return _getObjectClass();
}

WatchServiceProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
WatchServiceProxy::WatchServiceProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

WatchServiceProxy::~WatchServiceProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

WatchServiceProxy& WatchServiceProxy::operator=(const WatchServiceProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
::java::nio::file::WatchKeyProxy WatchServiceProxy::poll()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "poll", "()Ljava/nio/file/WatchKey;" );
	return ::java::nio::file::WatchKeyProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::nio::file::WatchKeyProxy WatchServiceProxy::poll(jlong p0, ::java::util::concurrent::TimeUnitProxy p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "poll", "(JLjava/util/concurrent/TimeUnit;)Ljava/nio/file/WatchKey;" );
	return ::java::nio::file::WatchKeyProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0, static_cast<jobject>( p1 ) )  );
}

::java::nio::file::WatchKeyProxy WatchServiceProxy::take()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "take", "()Ljava/nio/file/WatchKey;" );
	return ::java::nio::file::WatchKeyProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

void WatchServiceProxy::close()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "close", "()V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid );
}

