#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "URLStreamHandlerProxy.h"

// includes for parameter and return type proxy classes

using namespace net::sourceforge::jnipp;
using namespace java::net;


std::string URLStreamHandlerProxy::className = "java/net/URLStreamHandler";
jclass URLStreamHandlerProxy::objectClass = NULL;

jclass URLStreamHandlerProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

URLStreamHandlerProxy::URLStreamHandlerProxy(void* unused)
{
}

jobject URLStreamHandlerProxy::_getPeerObject() const
{
	return peerObject;
}

jclass URLStreamHandlerProxy::getObjectClass()
{
	return _getObjectClass();
}

URLStreamHandlerProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
URLStreamHandlerProxy::URLStreamHandlerProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

URLStreamHandlerProxy::URLStreamHandlerProxy()
{
	jmethodID mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "<init>", "()V" );
	peerObject = JNIEnvHelper::NewGlobalRef( JNIEnvHelper::NewObject( _getObjectClass(), mid ) );
}

URLStreamHandlerProxy::~URLStreamHandlerProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

URLStreamHandlerProxy& URLStreamHandlerProxy::operator=(const URLStreamHandlerProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
