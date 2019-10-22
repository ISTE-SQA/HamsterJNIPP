#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "URLStreamHandlerFactoryProxy.h"

// includes for parameter and return type proxy classes
#include "java\net\URLStreamHandlerProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::net;


std::string URLStreamHandlerFactoryProxy::className = "java/net/URLStreamHandlerFactory";
jclass URLStreamHandlerFactoryProxy::objectClass = NULL;

jclass URLStreamHandlerFactoryProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

URLStreamHandlerFactoryProxy::URLStreamHandlerFactoryProxy(void* unused)
{
}

jobject URLStreamHandlerFactoryProxy::_getPeerObject() const
{
	return peerObject;
}

jclass URLStreamHandlerFactoryProxy::getObjectClass()
{
	return _getObjectClass();
}

URLStreamHandlerFactoryProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
URLStreamHandlerFactoryProxy::URLStreamHandlerFactoryProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

URLStreamHandlerFactoryProxy::~URLStreamHandlerFactoryProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

URLStreamHandlerFactoryProxy& URLStreamHandlerFactoryProxy::operator=(const URLStreamHandlerFactoryProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
::java::net::URLStreamHandlerProxy URLStreamHandlerFactoryProxy::createURLStreamHandler(::net::sourceforge::jnipp::JStringHelper p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "createURLStreamHandler", "(Ljava/lang/String;)Ljava/net/URLStreamHandler;" );
	return ::java::net::URLStreamHandlerProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jstring>( p0 ) )  );
}

