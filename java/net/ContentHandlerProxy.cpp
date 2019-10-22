#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "ContentHandlerProxy.h"

// includes for parameter and return type proxy classes
#include "java\net\URLConnectionProxy.h"
#include "java\lang\ObjectProxy.h"
#include "java\lang\ClassProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::net;


std::string ContentHandlerProxy::className = "java/net/ContentHandler";
jclass ContentHandlerProxy::objectClass = NULL;

jclass ContentHandlerProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

ContentHandlerProxy::ContentHandlerProxy(void* unused)
{
}

jobject ContentHandlerProxy::_getPeerObject() const
{
	return peerObject;
}

jclass ContentHandlerProxy::getObjectClass()
{
	return _getObjectClass();
}

ContentHandlerProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
ContentHandlerProxy::ContentHandlerProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

ContentHandlerProxy::ContentHandlerProxy()
{
	jmethodID mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "<init>", "()V" );
	peerObject = JNIEnvHelper::NewGlobalRef( JNIEnvHelper::NewObject( _getObjectClass(), mid ) );
}

ContentHandlerProxy::~ContentHandlerProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

ContentHandlerProxy& ContentHandlerProxy::operator=(const ContentHandlerProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
::java::lang::ObjectProxy ContentHandlerProxy::getContent(::java::net::URLConnectionProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getContent", "(Ljava/net/URLConnection;)Ljava/lang/Object;" );
	return ::java::lang::ObjectProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::java::lang::ObjectProxy ContentHandlerProxy::getContent(::java::net::URLConnectionProxy p0, ::net::sourceforge::jnipp::PA<::java::lang::ClassProxy>::ProxyArray<1> p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getContent", "(Ljava/net/URLConnection;[Ljava/lang/Class;)Ljava/lang/Object;" );
	return ::java::lang::ObjectProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), static_cast<jobjectArray>( p1 ) )  );
}

