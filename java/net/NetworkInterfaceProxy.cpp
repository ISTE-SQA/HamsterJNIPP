#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "NetworkInterfaceProxy.h"

// includes for parameter and return type proxy classes
#include "java\lang\ObjectProxy.h"
#include "java\util\EnumerationProxy.h"
#include "java\util\ListProxy.h"
#include "java\net\InetAddressProxy.h"
#include "java\net\InterfaceAddressProxy.h"
#include "java\net\NetworkInterfaceProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::net;


std::string NetworkInterfaceProxy::className = "java/net/NetworkInterface";
jclass NetworkInterfaceProxy::objectClass = NULL;

jclass NetworkInterfaceProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

NetworkInterfaceProxy::NetworkInterfaceProxy(void* unused)
{
}

jobject NetworkInterfaceProxy::_getPeerObject() const
{
	return peerObject;
}

jclass NetworkInterfaceProxy::getObjectClass()
{
	return _getObjectClass();
}

NetworkInterfaceProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
NetworkInterfaceProxy::NetworkInterfaceProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

NetworkInterfaceProxy::~NetworkInterfaceProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

NetworkInterfaceProxy& NetworkInterfaceProxy::operator=(const NetworkInterfaceProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
jboolean NetworkInterfaceProxy::equals(::java::lang::ObjectProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "equals", "(Ljava/lang/Object;)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

jboolean NetworkInterfaceProxy::isLoopback()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "isLoopback", "()Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid );
}

jboolean NetworkInterfaceProxy::isPointToPoint()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "isPointToPoint", "()Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid );
}

jboolean NetworkInterfaceProxy::isUp()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "isUp", "()Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid );
}

jboolean NetworkInterfaceProxy::isVirtual()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "isVirtual", "()Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid );
}

jboolean NetworkInterfaceProxy::supportsMulticast()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "supportsMulticast", "()Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid );
}

::net::sourceforge::jnipp::JByteArrayHelper<1> NetworkInterfaceProxy::getHardwareAddress()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getHardwareAddress", "()[B" );
	return ::net::sourceforge::jnipp::JByteArrayHelper<1>( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

jint NetworkInterfaceProxy::getIndex()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getIndex", "()I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid );
}

jint NetworkInterfaceProxy::getMTU()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getMTU", "()I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid );
}

jint NetworkInterfaceProxy::hashCode()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "hashCode", "()I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid );
}

::net::sourceforge::jnipp::JStringHelper NetworkInterfaceProxy::getDisplayName()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getDisplayName", "()Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::net::sourceforge::jnipp::JStringHelper NetworkInterfaceProxy::getName()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getName", "()Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::net::sourceforge::jnipp::JStringHelper NetworkInterfaceProxy::toString()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "toString", "()Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::net::NetworkInterfaceProxy NetworkInterfaceProxy::getParent()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getParent", "()Ljava/net/NetworkInterface;" );
	return ::java::net::NetworkInterfaceProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::util::EnumerationProxy NetworkInterfaceProxy::getInetAddresses()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getInetAddresses", "()Ljava/util/Enumeration;" );
	return ::java::util::EnumerationProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::util::EnumerationProxy NetworkInterfaceProxy::getSubInterfaces()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getSubInterfaces", "()Ljava/util/Enumeration;" );
	return ::java::util::EnumerationProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::util::ListProxy NetworkInterfaceProxy::getInterfaceAddresses()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getInterfaceAddresses", "()Ljava/util/List;" );
	return ::java::util::ListProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::net::NetworkInterfaceProxy NetworkInterfaceProxy::getByIndex(jint p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "getByIndex", "(I)Ljava/net/NetworkInterface;" );
	return ::java::net::NetworkInterfaceProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, p0 )  );
}

::java::net::NetworkInterfaceProxy NetworkInterfaceProxy::getByInetAddress(::java::net::InetAddressProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "getByInetAddress", "(Ljava/net/InetAddress;)Ljava/net/NetworkInterface;" );
	return ::java::net::NetworkInterfaceProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, static_cast<jobject>( p0 ) )  );
}

::java::net::NetworkInterfaceProxy NetworkInterfaceProxy::getByName(::net::sourceforge::jnipp::JStringHelper p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "getByName", "(Ljava/lang/String;)Ljava/net/NetworkInterface;" );
	return ::java::net::NetworkInterfaceProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, static_cast<jstring>( p0 ) )  );
}

::java::util::EnumerationProxy NetworkInterfaceProxy::getNetworkInterfaces()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "getNetworkInterfaces", "()Ljava/util/Enumeration;" );
	return ::java::util::EnumerationProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid )  );
}

