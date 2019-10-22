#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "FileStoreAttributeViewProxy.h"

// includes for parameter and return type proxy classes

using namespace net::sourceforge::jnipp;
using namespace java::nio::file::attribute;


std::string FileStoreAttributeViewProxy::className = "java/nio/file/attribute/FileStoreAttributeView";
jclass FileStoreAttributeViewProxy::objectClass = NULL;

jclass FileStoreAttributeViewProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

FileStoreAttributeViewProxy::FileStoreAttributeViewProxy(void* unused)
{
}

jobject FileStoreAttributeViewProxy::_getPeerObject() const
{
	return peerObject;
}

jclass FileStoreAttributeViewProxy::getObjectClass()
{
	return _getObjectClass();
}

FileStoreAttributeViewProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
FileStoreAttributeViewProxy::FileStoreAttributeViewProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

FileStoreAttributeViewProxy::~FileStoreAttributeViewProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

FileStoreAttributeViewProxy& FileStoreAttributeViewProxy::operator=(const FileStoreAttributeViewProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
