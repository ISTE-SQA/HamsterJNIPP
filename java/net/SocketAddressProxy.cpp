#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "SocketAddressProxy.h"

// includes for parameter and return type proxy classes

using namespace net::sourceforge::jnipp;
using namespace java::net;


std::string SocketAddressProxy::className = "java/net/SocketAddress";
jclass SocketAddressProxy::objectClass = NULL;

jclass SocketAddressProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

SocketAddressProxy::SocketAddressProxy(void* unused)
{
}

jobject SocketAddressProxy::_getPeerObject() const
{
	return peerObject;
}

jclass SocketAddressProxy::getObjectClass()
{
	return _getObjectClass();
}

SocketAddressProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
SocketAddressProxy::SocketAddressProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

SocketAddressProxy::SocketAddressProxy()
{
	jmethodID mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "<init>", "()V" );
	peerObject = JNIEnvHelper::NewGlobalRef( JNIEnvHelper::NewObject( _getObjectClass(), mid ) );
}

SocketAddressProxy::~SocketAddressProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

SocketAddressProxy& SocketAddressProxy::operator=(const SocketAddressProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
