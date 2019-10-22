#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "AsynchronousFileChannelProxy.h"

// includes for parameter and return type proxy classes
#include "java\nio\channels\FileLockProxy.h"
#include "java\util\concurrent\FutureProxy.h"
#include "java\nio\ByteBufferProxy.h"
#include "java\lang\ObjectProxy.h"
#include "java\nio\channels\CompletionHandlerProxy.h"
#include "java\nio\file\PathProxy.h"
#include "java\nio\file\OpenOptionProxy.h"
#include "java\util\SetProxy.h"
#include "java\util\concurrent\ExecutorServiceProxy.h"
#include "java\nio\file\attribute\FileAttributeProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::nio::channels;


std::string AsynchronousFileChannelProxy::className = "java/nio/channels/AsynchronousFileChannel";
jclass AsynchronousFileChannelProxy::objectClass = NULL;

jclass AsynchronousFileChannelProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

AsynchronousFileChannelProxy::AsynchronousFileChannelProxy(void* unused)
{
}

jobject AsynchronousFileChannelProxy::_getPeerObject() const
{
	return peerObject;
}

jclass AsynchronousFileChannelProxy::getObjectClass()
{
	return _getObjectClass();
}

AsynchronousFileChannelProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
AsynchronousFileChannelProxy::AsynchronousFileChannelProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

AsynchronousFileChannelProxy::~AsynchronousFileChannelProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

AsynchronousFileChannelProxy& AsynchronousFileChannelProxy::operator=(const AsynchronousFileChannelProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
::java::nio::channels::AsynchronousFileChannelProxy AsynchronousFileChannelProxy::truncate(jlong p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "truncate", "(J)Ljava/nio/channels/AsynchronousFileChannel;" );
	return ::java::nio::channels::AsynchronousFileChannelProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0 )  );
}

::java::nio::channels::FileLockProxy AsynchronousFileChannelProxy::tryLock(jlong p0, jlong p1, jboolean p2)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "tryLock", "(JJZ)Ljava/nio/channels/FileLock;" );
	return ::java::nio::channels::FileLockProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0, p1, p2 )  );
}

::java::util::concurrent::FutureProxy AsynchronousFileChannelProxy::lock(jlong p0, jlong p1, jboolean p2)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "lock", "(JJZ)Ljava/util/concurrent/Future;" );
	return ::java::util::concurrent::FutureProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0, p1, p2 )  );
}

::java::util::concurrent::FutureProxy AsynchronousFileChannelProxy::read(::java::nio::ByteBufferProxy p0, jlong p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "read", "(Ljava/nio/ByteBuffer;J)Ljava/util/concurrent/Future;" );
	return ::java::util::concurrent::FutureProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), p1 )  );
}

::java::util::concurrent::FutureProxy AsynchronousFileChannelProxy::write(::java::nio::ByteBufferProxy p0, jlong p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "write", "(Ljava/nio/ByteBuffer;J)Ljava/util/concurrent/Future;" );
	return ::java::util::concurrent::FutureProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), p1 )  );
}

jlong AsynchronousFileChannelProxy::size()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "size", "()J" );
	return JNIEnvHelper::CallLongMethod( _getPeerObject(), mid );
}

void AsynchronousFileChannelProxy::force(jboolean p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "force", "(Z)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, p0 );
}

void AsynchronousFileChannelProxy::lock(jlong p0, jlong p1, jboolean p2, ::java::lang::ObjectProxy p3, ::java::nio::channels::CompletionHandlerProxy p4)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "lock", "(JJZLjava/lang/Object;Ljava/nio/channels/CompletionHandler;)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, p0, p1, p2, static_cast<jobject>( p3 ), static_cast<jobject>( p4 ) );
}

void AsynchronousFileChannelProxy::read(::java::nio::ByteBufferProxy p0, jlong p1, ::java::lang::ObjectProxy p2, ::java::nio::channels::CompletionHandlerProxy p3)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "read", "(Ljava/nio/ByteBuffer;JLjava/lang/Object;Ljava/nio/channels/CompletionHandler;)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), p1, static_cast<jobject>( p2 ), static_cast<jobject>( p3 ) );
}

void AsynchronousFileChannelProxy::write(::java::nio::ByteBufferProxy p0, jlong p1, ::java::lang::ObjectProxy p2, ::java::nio::channels::CompletionHandlerProxy p3)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "write", "(Ljava/nio/ByteBuffer;JLjava/lang/Object;Ljava/nio/channels/CompletionHandler;)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), p1, static_cast<jobject>( p2 ), static_cast<jobject>( p3 ) );
}

::java::nio::channels::FileLockProxy AsynchronousFileChannelProxy::tryLock()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "tryLock", "()Ljava/nio/channels/FileLock;" );
	return ::java::nio::channels::FileLockProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::util::concurrent::FutureProxy AsynchronousFileChannelProxy::lock()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "lock", "()Ljava/util/concurrent/Future;" );
	return ::java::util::concurrent::FutureProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

void AsynchronousFileChannelProxy::lock(::java::lang::ObjectProxy p0, ::java::nio::channels::CompletionHandlerProxy p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "lock", "(Ljava/lang/Object;Ljava/nio/channels/CompletionHandler;)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), static_cast<jobject>( p1 ) );
}

::java::nio::channels::AsynchronousFileChannelProxy AsynchronousFileChannelProxy::open(::java::nio::file::PathProxy p0, ::net::sourceforge::jnipp::PA<::java::nio::file::OpenOptionProxy>::ProxyArray<1> p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "open", "(Ljava/nio/file/Path;[Ljava/nio/file/OpenOption;)Ljava/nio/channels/AsynchronousFileChannel;" );
	return ::java::nio::channels::AsynchronousFileChannelProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, static_cast<jobject>( p0 ), static_cast<jobjectArray>( p1 ) )  );
}

::java::nio::channels::AsynchronousFileChannelProxy AsynchronousFileChannelProxy::open(::java::nio::file::PathProxy p0, ::java::util::SetProxy p1, ::java::util::concurrent::ExecutorServiceProxy p2, ::net::sourceforge::jnipp::PA<::java::nio::file::attribute::FileAttributeProxy>::ProxyArray<1> p3)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "open", "(Ljava/nio/file/Path;Ljava/util/Set;Ljava/util/concurrent/ExecutorService;[Ljava/nio/file/attribute/FileAttribute;)Ljava/nio/channels/AsynchronousFileChannel;" );
	return ::java::nio::channels::AsynchronousFileChannelProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, static_cast<jobject>( p0 ), static_cast<jobject>( p1 ), static_cast<jobject>( p2 ), static_cast<jobjectArray>( p3 ) )  );
}

