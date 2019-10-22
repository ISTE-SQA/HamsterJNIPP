#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "ReadableByteChannelProxy.h"

// includes for parameter and return type proxy classes
#include "java\nio\ByteBufferProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::nio::channels;


std::string ReadableByteChannelProxy::className = "java/nio/channels/ReadableByteChannel";
jclass ReadableByteChannelProxy::objectClass = NULL;

jclass ReadableByteChannelProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

ReadableByteChannelProxy::ReadableByteChannelProxy(void* unused)
{
}

jobject ReadableByteChannelProxy::_getPeerObject() const
{
	return peerObject;
}

jclass ReadableByteChannelProxy::getObjectClass()
{
	return _getObjectClass();
}

ReadableByteChannelProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
ReadableByteChannelProxy::ReadableByteChannelProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

ReadableByteChannelProxy::~ReadableByteChannelProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

ReadableByteChannelProxy& ReadableByteChannelProxy::operator=(const ReadableByteChannelProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
jint ReadableByteChannelProxy::read(::java::nio::ByteBufferProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "read", "(Ljava/nio/ByteBuffer;)I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

