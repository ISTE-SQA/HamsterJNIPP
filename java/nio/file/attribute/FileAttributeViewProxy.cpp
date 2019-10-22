#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "FileAttributeViewProxy.h"

// includes for parameter and return type proxy classes

using namespace net::sourceforge::jnipp;
using namespace java::nio::file::attribute;


std::string FileAttributeViewProxy::className = "java/nio/file/attribute/FileAttributeView";
jclass FileAttributeViewProxy::objectClass = NULL;

jclass FileAttributeViewProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

FileAttributeViewProxy::FileAttributeViewProxy(void* unused)
{
}

jobject FileAttributeViewProxy::_getPeerObject() const
{
	return peerObject;
}

jclass FileAttributeViewProxy::getObjectClass()
{
	return _getObjectClass();
}

FileAttributeViewProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
FileAttributeViewProxy::FileAttributeViewProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

FileAttributeViewProxy::~FileAttributeViewProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

FileAttributeViewProxy& FileAttributeViewProxy::operator=(const FileAttributeViewProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
