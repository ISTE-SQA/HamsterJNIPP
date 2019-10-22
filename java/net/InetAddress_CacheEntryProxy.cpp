#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "InetAddress_CacheEntryProxy.h"

// includes for parameter and return type proxy classes

using namespace net::sourceforge::jnipp;
using namespace java::net;


std::string InetAddress_CacheEntryProxy::className = "java/net/InetAddress$CacheEntry";
jclass InetAddress_CacheEntryProxy::objectClass = NULL;

jclass InetAddress_CacheEntryProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

InetAddress_CacheEntryProxy::InetAddress_CacheEntryProxy(void* unused)
{
}

jobject InetAddress_CacheEntryProxy::_getPeerObject() const
{
	return peerObject;
}

jclass InetAddress_CacheEntryProxy::getObjectClass()
{
	return _getObjectClass();
}

InetAddress_CacheEntryProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
InetAddress_CacheEntryProxy::InetAddress_CacheEntryProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

InetAddress_CacheEntryProxy::~InetAddress_CacheEntryProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

InetAddress_CacheEntryProxy& InetAddress_CacheEntryProxy::operator=(const InetAddress_CacheEntryProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
