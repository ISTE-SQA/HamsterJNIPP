#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "DirectoryStream_FilterProxy.h"

// includes for parameter and return type proxy classes
#include "java\lang\ObjectProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::nio::file;


std::string DirectoryStream_FilterProxy::className = "java/nio/file/DirectoryStream$Filter";
jclass DirectoryStream_FilterProxy::objectClass = NULL;

jclass DirectoryStream_FilterProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

DirectoryStream_FilterProxy::DirectoryStream_FilterProxy(void* unused)
{
}

jobject DirectoryStream_FilterProxy::_getPeerObject() const
{
	return peerObject;
}

jclass DirectoryStream_FilterProxy::getObjectClass()
{
	return _getObjectClass();
}

DirectoryStream_FilterProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
DirectoryStream_FilterProxy::DirectoryStream_FilterProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

DirectoryStream_FilterProxy::~DirectoryStream_FilterProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

DirectoryStream_FilterProxy& DirectoryStream_FilterProxy::operator=(const DirectoryStream_FilterProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
jboolean DirectoryStream_FilterProxy::accept(::java::lang::ObjectProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "accept", "(Ljava/lang/Object;)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

