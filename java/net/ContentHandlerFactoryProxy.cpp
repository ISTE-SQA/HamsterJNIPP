#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "ContentHandlerFactoryProxy.h"

// includes for parameter and return type proxy classes
#include "java\net\ContentHandlerProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::net;


std::string ContentHandlerFactoryProxy::className = "java/net/ContentHandlerFactory";
jclass ContentHandlerFactoryProxy::objectClass = NULL;

jclass ContentHandlerFactoryProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

ContentHandlerFactoryProxy::ContentHandlerFactoryProxy(void* unused)
{
}

jobject ContentHandlerFactoryProxy::_getPeerObject() const
{
	return peerObject;
}

jclass ContentHandlerFactoryProxy::getObjectClass()
{
	return _getObjectClass();
}

ContentHandlerFactoryProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
ContentHandlerFactoryProxy::ContentHandlerFactoryProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

ContentHandlerFactoryProxy::~ContentHandlerFactoryProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

ContentHandlerFactoryProxy& ContentHandlerFactoryProxy::operator=(const ContentHandlerFactoryProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
::java::net::ContentHandlerProxy ContentHandlerFactoryProxy::createContentHandler(::net::sourceforge::jnipp::JStringHelper p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "createContentHandler", "(Ljava/lang/String;)Ljava/net/ContentHandler;" );
	return ::java::net::ContentHandlerProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jstring>( p0 ) )  );
}

