#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "InetAddress_CacheProxy.h"

// includes for parameter and return type proxy classes
#include "java\net\InetAddress_Cache_TypeProxy.h"
#include "java\net\InetAddress_CacheEntryProxy.h"
#include "java\util\LinkedHashMapProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::net;


std::string InetAddress_CacheProxy::className = "java/net/InetAddress$Cache";
jclass InetAddress_CacheProxy::objectClass = NULL;

jclass InetAddress_CacheProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

InetAddress_CacheProxy::InetAddress_CacheProxy(void* unused)
{
}

jobject InetAddress_CacheProxy::_getPeerObject() const
{
	return peerObject;
}

jclass InetAddress_CacheProxy::getObjectClass()
{
	return _getObjectClass();
}

InetAddress_CacheProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
InetAddress_CacheProxy::InetAddress_CacheProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

InetAddress_CacheProxy::InetAddress_CacheProxy(::java::net::InetAddress_Cache_TypeProxy p0)
{
	jmethodID mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "<init>", "(Ljava/net/InetAddress$Cache$Type;)V" );
	peerObject = JNIEnvHelper::NewGlobalRef( JNIEnvHelper::NewObject( _getObjectClass(), mid, static_cast<jobject>( p0 ) ) );
}

InetAddress_CacheProxy::~InetAddress_CacheProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

InetAddress_CacheProxy& InetAddress_CacheProxy::operator=(const InetAddress_CacheProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
::java::net::InetAddress_CacheProxy InetAddress_CacheProxy::put(::net::sourceforge::jnipp::JStringHelper p0, ::net::sourceforge::jnipp::PA<::java::net::InetAddressProxy>::ProxyArray<1> p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "put", "(Ljava/lang/String;[Ljava/net/InetAddress;)Ljava/net/InetAddress$Cache;" );
	return ::java::net::InetAddress_CacheProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jstring>( p0 ), static_cast<jobjectArray>( p1 ) )  );
}

::java::net::InetAddress_CacheEntryProxy InetAddress_CacheProxy::get(::net::sourceforge::jnipp::JStringHelper p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "get", "(Ljava/lang/String;)Ljava/net/InetAddress$CacheEntry;" );
	return ::java::net::InetAddress_CacheEntryProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jstring>( p0 ) )  );
}

