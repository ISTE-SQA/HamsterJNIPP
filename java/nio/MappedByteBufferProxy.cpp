#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "MappedByteBufferProxy.h"

// includes for parameter and return type proxy classes
#include "java\io\FileDescriptorProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::nio;


std::string MappedByteBufferProxy::className = "java/nio/MappedByteBuffer";
jclass MappedByteBufferProxy::objectClass = NULL;

jclass MappedByteBufferProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

MappedByteBufferProxy::MappedByteBufferProxy(void* unused)
{
}

jobject MappedByteBufferProxy::_getPeerObject() const
{
	return peerObject;
}

jclass MappedByteBufferProxy::getObjectClass()
{
	return _getObjectClass();
}

MappedByteBufferProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
MappedByteBufferProxy::MappedByteBufferProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

MappedByteBufferProxy::~MappedByteBufferProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

MappedByteBufferProxy& MappedByteBufferProxy::operator=(const MappedByteBufferProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
jboolean MappedByteBufferProxy::isLoaded()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "isLoaded", "()Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid );
}

::java::nio::MappedByteBufferProxy MappedByteBufferProxy::force()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "force", "()Ljava/nio/MappedByteBuffer;" );
	return ::java::nio::MappedByteBufferProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::nio::MappedByteBufferProxy MappedByteBufferProxy::load()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "load", "()Ljava/nio/MappedByteBuffer;" );
	return ::java::nio::MappedByteBufferProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

