#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "PublicKeyProxy.h"

// includes for parameter and return type proxy classes

using namespace net::sourceforge::jnipp;
using namespace java::security;


std::string PublicKeyProxy::className = "java/security/PublicKey";
jclass PublicKeyProxy::objectClass = NULL;

jclass PublicKeyProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

PublicKeyProxy::PublicKeyProxy(void* unused)
{
}

jobject PublicKeyProxy::_getPeerObject() const
{
	return peerObject;
}

jclass PublicKeyProxy::getObjectClass()
{
	return _getObjectClass();
}

PublicKeyProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
PublicKeyProxy::PublicKeyProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

PublicKeyProxy::~PublicKeyProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

PublicKeyProxy& PublicKeyProxy::operator=(const PublicKeyProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
