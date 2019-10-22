#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "FileChannelProxy.h"

// includes for parameter and return type proxy classes
#include "java\nio\ByteBufferProxy.h"
#include "java\nio\channels\FileChannel_MapModeProxy.h"
#include "java\nio\MappedByteBufferProxy.h"
#include "java\nio\channels\FileLockProxy.h"
#include "java\nio\channels\ReadableByteChannelProxy.h"
#include "java\nio\channels\WritableByteChannelProxy.h"
#include "java\nio\file\PathProxy.h"
#include "java\nio\file\OpenOptionProxy.h"
#include "java\util\SetProxy.h"
#include "java\nio\file\attribute\FileAttributeProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::nio::channels;


std::string FileChannelProxy::className = "java/nio/channels/FileChannel";
jclass FileChannelProxy::objectClass = NULL;

jclass FileChannelProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

FileChannelProxy::FileChannelProxy(void* unused)
{
}

jobject FileChannelProxy::_getPeerObject() const
{
	return peerObject;
}

jclass FileChannelProxy::getObjectClass()
{
	return _getObjectClass();
}

FileChannelProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
FileChannelProxy::FileChannelProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

FileChannelProxy::~FileChannelProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

FileChannelProxy& FileChannelProxy::operator=(const FileChannelProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
jint FileChannelProxy::read(::java::nio::ByteBufferProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "read", "(Ljava/nio/ByteBuffer;)I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

jint FileChannelProxy::read(::java::nio::ByteBufferProxy p0, jlong p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "read", "(Ljava/nio/ByteBuffer;J)I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), p1 );
}

jint FileChannelProxy::write(::java::nio::ByteBufferProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "write", "(Ljava/nio/ByteBuffer;)I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

jint FileChannelProxy::write(::java::nio::ByteBufferProxy p0, jlong p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "write", "(Ljava/nio/ByteBuffer;J)I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), p1 );
}

::java::nio::MappedByteBufferProxy FileChannelProxy::map(::java::nio::channels::FileChannel_MapModeProxy p0, jlong p1, jlong p2)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "map", "(Ljava/nio/channels/FileChannel$MapMode;JJ)Ljava/nio/MappedByteBuffer;" );
	return ::java::nio::MappedByteBufferProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), p1, p2 )  );
}

::java::nio::channels::FileChannelProxy FileChannelProxy::position(jlong p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "position", "(J)Ljava/nio/channels/FileChannel;" );
	return ::java::nio::channels::FileChannelProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0 )  );
}

::java::nio::channels::FileChannelProxy FileChannelProxy::truncate(jlong p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "truncate", "(J)Ljava/nio/channels/FileChannel;" );
	return ::java::nio::channels::FileChannelProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0 )  );
}

::java::nio::channels::FileLockProxy FileChannelProxy::lock(jlong p0, jlong p1, jboolean p2)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "lock", "(JJZ)Ljava/nio/channels/FileLock;" );
	return ::java::nio::channels::FileLockProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0, p1, p2 )  );
}

::java::nio::channels::FileLockProxy FileChannelProxy::tryLock(jlong p0, jlong p1, jboolean p2)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "tryLock", "(JJZ)Ljava/nio/channels/FileLock;" );
	return ::java::nio::channels::FileLockProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0, p1, p2 )  );
}

jlong FileChannelProxy::position()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "position", "()J" );
	return JNIEnvHelper::CallLongMethod( _getPeerObject(), mid );
}

jlong FileChannelProxy::read(::net::sourceforge::jnipp::PA<::java::nio::ByteBufferProxy>::ProxyArray<1> p0, jint p1, jint p2)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "read", "([Ljava/nio/ByteBuffer;II)J" );
	return JNIEnvHelper::CallLongMethod( _getPeerObject(), mid, static_cast<jobjectArray>( p0 ), p1, p2 );
}

jlong FileChannelProxy::size()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "size", "()J" );
	return JNIEnvHelper::CallLongMethod( _getPeerObject(), mid );
}

jlong FileChannelProxy::transferFrom(::java::nio::channels::ReadableByteChannelProxy p0, jlong p1, jlong p2)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "transferFrom", "(Ljava/nio/channels/ReadableByteChannel;JJ)J" );
	return JNIEnvHelper::CallLongMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), p1, p2 );
}

jlong FileChannelProxy::transferTo(jlong p0, jlong p1, ::java::nio::channels::WritableByteChannelProxy p2)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "transferTo", "(JJLjava/nio/channels/WritableByteChannel;)J" );
	return JNIEnvHelper::CallLongMethod( _getPeerObject(), mid, p0, p1, static_cast<jobject>( p2 ) );
}

jlong FileChannelProxy::write(::net::sourceforge::jnipp::PA<::java::nio::ByteBufferProxy>::ProxyArray<1> p0, jint p1, jint p2)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "write", "([Ljava/nio/ByteBuffer;II)J" );
	return JNIEnvHelper::CallLongMethod( _getPeerObject(), mid, static_cast<jobjectArray>( p0 ), p1, p2 );
}

void FileChannelProxy::force(jboolean p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "force", "(Z)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, p0 );
}

::java::nio::channels::FileLockProxy FileChannelProxy::lock()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "lock", "()Ljava/nio/channels/FileLock;" );
	return ::java::nio::channels::FileLockProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::nio::channels::FileLockProxy FileChannelProxy::tryLock()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "tryLock", "()Ljava/nio/channels/FileLock;" );
	return ::java::nio::channels::FileLockProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

jlong FileChannelProxy::read(::net::sourceforge::jnipp::PA<::java::nio::ByteBufferProxy>::ProxyArray<1> p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "read", "([Ljava/nio/ByteBuffer;)J" );
	return JNIEnvHelper::CallLongMethod( _getPeerObject(), mid, static_cast<jobjectArray>( p0 ) );
}

jlong FileChannelProxy::write(::net::sourceforge::jnipp::PA<::java::nio::ByteBufferProxy>::ProxyArray<1> p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "write", "([Ljava/nio/ByteBuffer;)J" );
	return JNIEnvHelper::CallLongMethod( _getPeerObject(), mid, static_cast<jobjectArray>( p0 ) );
}

::java::nio::channels::FileChannelProxy FileChannelProxy::open(::java::nio::file::PathProxy p0, ::net::sourceforge::jnipp::PA<::java::nio::file::OpenOptionProxy>::ProxyArray<1> p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "open", "(Ljava/nio/file/Path;[Ljava/nio/file/OpenOption;)Ljava/nio/channels/FileChannel;" );
	return ::java::nio::channels::FileChannelProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, static_cast<jobject>( p0 ), static_cast<jobjectArray>( p1 ) )  );
}

::java::nio::channels::FileChannelProxy FileChannelProxy::open(::java::nio::file::PathProxy p0, ::java::util::SetProxy p1, ::net::sourceforge::jnipp::PA<::java::nio::file::attribute::FileAttributeProxy>::ProxyArray<1> p2)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "open", "(Ljava/nio/file/Path;Ljava/util/Set;[Ljava/nio/file/attribute/FileAttribute;)Ljava/nio/channels/FileChannel;" );
	return ::java::nio::channels::FileChannelProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, static_cast<jobject>( p0 ), static_cast<jobject>( p1 ), static_cast<jobjectArray>( p2 ) )  );
}

