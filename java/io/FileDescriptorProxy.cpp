#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "FileDescriptorProxy.h"

// includes for parameter and return type proxy classes
#include "java\io\CloseableProxy.h"
#include "java\util\ListProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::io;


std::string FileDescriptorProxy::className = "java/io/FileDescriptor";
jclass FileDescriptorProxy::objectClass = NULL;

jclass FileDescriptorProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

FileDescriptorProxy::FileDescriptorProxy(void* unused)
{
}

jobject FileDescriptorProxy::_getPeerObject() const
{
	return peerObject;
}

jclass FileDescriptorProxy::getObjectClass()
{
	return _getObjectClass();
}

FileDescriptorProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
FileDescriptorProxy::FileDescriptorProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

FileDescriptorProxy::FileDescriptorProxy()
{
	jmethodID mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "<init>", "()V" );
	peerObject = JNIEnvHelper::NewGlobalRef( JNIEnvHelper::NewObject( _getObjectClass(), mid ) );
}

FileDescriptorProxy::~FileDescriptorProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

FileDescriptorProxy& FileDescriptorProxy::operator=(const FileDescriptorProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
jboolean FileDescriptorProxy::valid()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "valid", "()Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid );
}

void FileDescriptorProxy::sync()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "sync", "()V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid );
}

