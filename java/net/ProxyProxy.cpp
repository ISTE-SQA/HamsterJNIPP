#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "ProxyProxy.h"

// includes for parameter and return type proxy classes
#include "java\net\Proxy_TypeProxy.h"
#include "java\net\SocketAddressProxy.h"
#include "java\lang\ObjectProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::net;


std::string ProxyProxy::className = "java/net/Proxy";
jclass ProxyProxy::objectClass = NULL;

jclass ProxyProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

ProxyProxy::ProxyProxy(void* unused)
{
}

jobject ProxyProxy::_getPeerObject() const
{
	return peerObject;
}

jclass ProxyProxy::getObjectClass()
{
	return _getObjectClass();
}

ProxyProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
ProxyProxy::ProxyProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

ProxyProxy::ProxyProxy(::java::net::Proxy_TypeProxy p0, ::java::net::SocketAddressProxy p1)
{
	jmethodID mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "<init>", "(Ljava/net/Proxy$Type;Ljava/net/SocketAddress;)V" );
	peerObject = JNIEnvHelper::NewGlobalRef( JNIEnvHelper::NewObject( _getObjectClass(), mid, static_cast<jobject>( p0 ), static_cast<jobject>( p1 ) ) );
}

ProxyProxy::~ProxyProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

ProxyProxy& ProxyProxy::operator=(const ProxyProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
jboolean ProxyProxy::equals(::java::lang::ObjectProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "equals", "(Ljava/lang/Object;)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

jint ProxyProxy::hashCode()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "hashCode", "()I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid );
}

::net::sourceforge::jnipp::JStringHelper ProxyProxy::toString()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "toString", "()Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::net::Proxy_TypeProxy ProxyProxy::type()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "type", "()Ljava/net/Proxy$Type;" );
	return ::java::net::Proxy_TypeProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::net::SocketAddressProxy ProxyProxy::address()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "address", "()Ljava/net/SocketAddress;" );
	return ::java::net::SocketAddressProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

