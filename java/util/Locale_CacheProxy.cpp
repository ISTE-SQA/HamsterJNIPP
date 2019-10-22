#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "Locale_CacheProxy.h"

// includes for parameter and return type proxy classes

using namespace net::sourceforge::jnipp;
using namespace java::util;


std::string Locale_CacheProxy::className = "java/util/Locale$Cache";
jclass Locale_CacheProxy::objectClass = NULL;

jclass Locale_CacheProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

Locale_CacheProxy::Locale_CacheProxy(void* unused)
{
}

jobject Locale_CacheProxy::_getPeerObject() const
{
	return peerObject;
}

jclass Locale_CacheProxy::getObjectClass()
{
	return _getObjectClass();
}

Locale_CacheProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
Locale_CacheProxy::Locale_CacheProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

Locale_CacheProxy::~Locale_CacheProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

Locale_CacheProxy& Locale_CacheProxy::operator=(const Locale_CacheProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
