#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "BaseLocale_CacheProxy.h"

// includes for parameter and return type proxy classes

using namespace net::sourceforge::jnipp;
using namespace sun::util::locale;


std::string BaseLocale_CacheProxy::className = "sun/util/locale/BaseLocale$Cache";
jclass BaseLocale_CacheProxy::objectClass = NULL;

jclass BaseLocale_CacheProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

BaseLocale_CacheProxy::BaseLocale_CacheProxy(void* unused)
{
}

jobject BaseLocale_CacheProxy::_getPeerObject() const
{
	return peerObject;
}

jclass BaseLocale_CacheProxy::getObjectClass()
{
	return _getObjectClass();
}

BaseLocale_CacheProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
BaseLocale_CacheProxy::BaseLocale_CacheProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

BaseLocale_CacheProxy::BaseLocale_CacheProxy()
{
	jmethodID mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "<init>", "()V" );
	peerObject = JNIEnvHelper::NewGlobalRef( JNIEnvHelper::NewObject( _getObjectClass(), mid ) );
}

BaseLocale_CacheProxy::~BaseLocale_CacheProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

BaseLocale_CacheProxy& BaseLocale_CacheProxy::operator=(const BaseLocale_CacheProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
