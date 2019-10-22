#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "FileFilterProxy.h"

// includes for parameter and return type proxy classes
#include "java\io\FileProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::io;


std::string FileFilterProxy::className = "java/io/FileFilter";
jclass FileFilterProxy::objectClass = NULL;

jclass FileFilterProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

FileFilterProxy::FileFilterProxy(void* unused)
{
}

jobject FileFilterProxy::_getPeerObject() const
{
	return peerObject;
}

jclass FileFilterProxy::getObjectClass()
{
	return _getObjectClass();
}

FileFilterProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
FileFilterProxy::FileFilterProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

FileFilterProxy::~FileFilterProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

FileFilterProxy& FileFilterProxy::operator=(const FileFilterProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
jboolean FileFilterProxy::accept(::java::io::FileProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "accept", "(Ljava/io/File;)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

