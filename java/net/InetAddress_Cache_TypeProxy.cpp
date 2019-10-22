#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "InetAddress_Cache_TypeProxy.h"

// includes for parameter and return type proxy classes
#include "java\net\InetAddress_Cache_TypeProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::net;


std::string InetAddress_Cache_TypeProxy::className = "java/net/InetAddress$Cache$Type";
jclass InetAddress_Cache_TypeProxy::objectClass = NULL;

jclass InetAddress_Cache_TypeProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

InetAddress_Cache_TypeProxy::InetAddress_Cache_TypeProxy(void* unused)
{
}

jobject InetAddress_Cache_TypeProxy::_getPeerObject() const
{
	return peerObject;
}

jclass InetAddress_Cache_TypeProxy::getObjectClass()
{
	return _getObjectClass();
}

InetAddress_Cache_TypeProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
InetAddress_Cache_TypeProxy::InetAddress_Cache_TypeProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

InetAddress_Cache_TypeProxy::~InetAddress_Cache_TypeProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

InetAddress_Cache_TypeProxy& InetAddress_Cache_TypeProxy::operator=(const InetAddress_Cache_TypeProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
::java::net::InetAddress_Cache_TypeProxy InetAddress_Cache_TypeProxy::valueOf(::net::sourceforge::jnipp::JStringHelper p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "valueOf", "(Ljava/lang/String;)Ljava/net/InetAddress$Cache$Type;" );
	return ::java::net::InetAddress_Cache_TypeProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, static_cast<jstring>( p0 ) )  );
}

::net::sourceforge::jnipp::PA<::java::net::InetAddress_Cache_TypeProxy>::ProxyArray<1> InetAddress_Cache_TypeProxy::values()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "values", "()[Ljava/net/InetAddress$Cache$Type;" );
	return ::net::sourceforge::jnipp::PA<::java::net::InetAddress_Cache_TypeProxy>::ProxyArray<1>( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid )  );
}

