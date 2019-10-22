#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "Proxy_TypeProxy.h"

// includes for parameter and return type proxy classes
#include "java\net\Proxy_TypeProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::net;


std::string Proxy_TypeProxy::className = "java/net/Proxy$Type";
jclass Proxy_TypeProxy::objectClass = NULL;

jclass Proxy_TypeProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

Proxy_TypeProxy::Proxy_TypeProxy(void* unused)
{
}

jobject Proxy_TypeProxy::_getPeerObject() const
{
	return peerObject;
}

jclass Proxy_TypeProxy::getObjectClass()
{
	return _getObjectClass();
}

Proxy_TypeProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
Proxy_TypeProxy::Proxy_TypeProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

Proxy_TypeProxy::~Proxy_TypeProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

Proxy_TypeProxy& Proxy_TypeProxy::operator=(const Proxy_TypeProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
::java::net::Proxy_TypeProxy Proxy_TypeProxy::valueOf(::net::sourceforge::jnipp::JStringHelper p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "valueOf", "(Ljava/lang/String;)Ljava/net/Proxy$Type;" );
	return ::java::net::Proxy_TypeProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, static_cast<jstring>( p0 ) )  );
}

::net::sourceforge::jnipp::PA<::java::net::Proxy_TypeProxy>::ProxyArray<1> Proxy_TypeProxy::values()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "values", "()[Ljava/net/Proxy$Type;" );
	return ::net::sourceforge::jnipp::PA<::java::net::Proxy_TypeProxy>::ProxyArray<1>( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid )  );
}

