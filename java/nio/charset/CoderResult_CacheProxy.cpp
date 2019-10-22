#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "CoderResult_CacheProxy.h"

// includes for parameter and return type proxy classes
#include "java\util\MapProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::nio::charset;


std::string CoderResult_CacheProxy::className = "java/nio/charset/CoderResult$Cache";
jclass CoderResult_CacheProxy::objectClass = NULL;

jclass CoderResult_CacheProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

CoderResult_CacheProxy::CoderResult_CacheProxy(void* unused)
{
}

jobject CoderResult_CacheProxy::_getPeerObject() const
{
	return peerObject;
}

jclass CoderResult_CacheProxy::getObjectClass()
{
	return _getObjectClass();
}

CoderResult_CacheProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
CoderResult_CacheProxy::CoderResult_CacheProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

CoderResult_CacheProxy::~CoderResult_CacheProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

CoderResult_CacheProxy& CoderResult_CacheProxy::operator=(const CoderResult_CacheProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
