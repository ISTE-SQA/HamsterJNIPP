#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "DirectoryStreamProxy.h"

// includes for parameter and return type proxy classes
#include "java\util\IteratorProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::nio::file;


std::string DirectoryStreamProxy::className = "java/nio/file/DirectoryStream";
jclass DirectoryStreamProxy::objectClass = NULL;

jclass DirectoryStreamProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

DirectoryStreamProxy::DirectoryStreamProxy(void* unused)
{
}

jobject DirectoryStreamProxy::_getPeerObject() const
{
	return peerObject;
}

jclass DirectoryStreamProxy::getObjectClass()
{
	return _getObjectClass();
}

DirectoryStreamProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
DirectoryStreamProxy::DirectoryStreamProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

DirectoryStreamProxy::~DirectoryStreamProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

DirectoryStreamProxy& DirectoryStreamProxy::operator=(const DirectoryStreamProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
::java::util::IteratorProxy DirectoryStreamProxy::iterator()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "iterator", "()Ljava/util/Iterator;" );
	return ::java::util::IteratorProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

