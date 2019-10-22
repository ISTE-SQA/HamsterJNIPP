#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "SeekableByteChannelProxy.h"

// includes for parameter and return type proxy classes
#include "java\nio\ByteBufferProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::nio::channels;


std::string SeekableByteChannelProxy::className = "java/nio/channels/SeekableByteChannel";
jclass SeekableByteChannelProxy::objectClass = NULL;

jclass SeekableByteChannelProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

SeekableByteChannelProxy::SeekableByteChannelProxy(void* unused)
{
}

jobject SeekableByteChannelProxy::_getPeerObject() const
{
	return peerObject;
}

jclass SeekableByteChannelProxy::getObjectClass()
{
	return _getObjectClass();
}

SeekableByteChannelProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
SeekableByteChannelProxy::SeekableByteChannelProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

SeekableByteChannelProxy::~SeekableByteChannelProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

SeekableByteChannelProxy& SeekableByteChannelProxy::operator=(const SeekableByteChannelProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
jint SeekableByteChannelProxy::read(::java::nio::ByteBufferProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "read", "(Ljava/nio/ByteBuffer;)I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

jint SeekableByteChannelProxy::write(::java::nio::ByteBufferProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "write", "(Ljava/nio/ByteBuffer;)I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

::java::nio::channels::SeekableByteChannelProxy SeekableByteChannelProxy::position(jlong p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "position", "(J)Ljava/nio/channels/SeekableByteChannel;" );
	return ::java::nio::channels::SeekableByteChannelProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0 )  );
}

::java::nio::channels::SeekableByteChannelProxy SeekableByteChannelProxy::truncate(jlong p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "truncate", "(J)Ljava/nio/channels/SeekableByteChannel;" );
	return ::java::nio::channels::SeekableByteChannelProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0 )  );
}

jlong SeekableByteChannelProxy::position()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "position", "()J" );
	return JNIEnvHelper::CallLongMethod( _getPeerObject(), mid );
}

jlong SeekableByteChannelProxy::size()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "size", "()J" );
	return JNIEnvHelper::CallLongMethod( _getPeerObject(), mid );
}

