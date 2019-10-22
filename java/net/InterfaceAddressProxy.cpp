#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "InterfaceAddressProxy.h"

// includes for parameter and return type proxy classes
#include "java\lang\ObjectProxy.h"
#include "java\net\InetAddressProxy.h"
#include "java\net\Inet4AddressProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::net;


std::string InterfaceAddressProxy::className = "java/net/InterfaceAddress";
jclass InterfaceAddressProxy::objectClass = NULL;

jclass InterfaceAddressProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

InterfaceAddressProxy::InterfaceAddressProxy(void* unused)
{
}

jobject InterfaceAddressProxy::_getPeerObject() const
{
	return peerObject;
}

jclass InterfaceAddressProxy::getObjectClass()
{
	return _getObjectClass();
}

InterfaceAddressProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
InterfaceAddressProxy::InterfaceAddressProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

InterfaceAddressProxy::~InterfaceAddressProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

InterfaceAddressProxy& InterfaceAddressProxy::operator=(const InterfaceAddressProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
jboolean InterfaceAddressProxy::equals(::java::lang::ObjectProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "equals", "(Ljava/lang/Object;)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

jint InterfaceAddressProxy::hashCode()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "hashCode", "()I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid );
}

::net::sourceforge::jnipp::JStringHelper InterfaceAddressProxy::toString()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "toString", "()Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::net::InetAddressProxy InterfaceAddressProxy::getAddress()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getAddress", "()Ljava/net/InetAddress;" );
	return ::java::net::InetAddressProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::net::InetAddressProxy InterfaceAddressProxy::getBroadcast()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getBroadcast", "()Ljava/net/InetAddress;" );
	return ::java::net::InetAddressProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

jshort InterfaceAddressProxy::getNetworkPrefixLength()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getNetworkPrefixLength", "()S" );
	return JNIEnvHelper::CallShortMethod( _getPeerObject(), mid );
}

