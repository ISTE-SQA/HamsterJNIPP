#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "InetAddress_InetAddressHolderProxy.h"

// includes for parameter and return type proxy classes

using namespace net::sourceforge::jnipp;
using namespace java::net;


std::string InetAddress_InetAddressHolderProxy::className = "java/net/InetAddress$InetAddressHolder";
jclass InetAddress_InetAddressHolderProxy::objectClass = NULL;

jclass InetAddress_InetAddressHolderProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

InetAddress_InetAddressHolderProxy::InetAddress_InetAddressHolderProxy(void* unused)
{
}

jobject InetAddress_InetAddressHolderProxy::_getPeerObject() const
{
	return peerObject;
}

jclass InetAddress_InetAddressHolderProxy::getObjectClass()
{
	return _getObjectClass();
}

InetAddress_InetAddressHolderProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
InetAddress_InetAddressHolderProxy::InetAddress_InetAddressHolderProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

InetAddress_InetAddressHolderProxy::~InetAddress_InetAddressHolderProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

InetAddress_InetAddressHolderProxy& InetAddress_InetAddressHolderProxy::operator=(const InetAddress_InetAddressHolderProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
