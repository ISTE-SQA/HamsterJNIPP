#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "WritableByteChannelProxy.h"

// includes for parameter and return type proxy classes
#include "java\nio\ByteBufferProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::nio::channels;


std::string WritableByteChannelProxy::className = "java/nio/channels/WritableByteChannel";
jclass WritableByteChannelProxy::objectClass = NULL;

jclass WritableByteChannelProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

WritableByteChannelProxy::WritableByteChannelProxy(void* unused)
{
}

jobject WritableByteChannelProxy::_getPeerObject() const
{
	return peerObject;
}

jclass WritableByteChannelProxy::getObjectClass()
{
	return _getObjectClass();
}

WritableByteChannelProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
WritableByteChannelProxy::WritableByteChannelProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

WritableByteChannelProxy::~WritableByteChannelProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

WritableByteChannelProxy& WritableByteChannelProxy::operator=(const WritableByteChannelProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
jint WritableByteChannelProxy::write(::java::nio::ByteBufferProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "write", "(Ljava/nio/ByteBuffer;)I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

