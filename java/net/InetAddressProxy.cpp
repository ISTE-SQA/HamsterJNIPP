#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "InetAddressProxy.h"

// includes for parameter and return type proxy classes
#include "java\lang\ObjectProxy.h"
#include "java\net\NetworkInterfaceProxy.h"
#include "java\net\InetAddress_InetAddressHolderProxy.h"
#include "java\io\ObjectStreamFieldProxy.h"
#include "java\util\HashMapProxy.h"
#include "sun\misc\UnsafeProxy.h"
#include "java\net\InetAddress_CacheProxy.h"
#include "java\util\ListProxy.h"
#include "java\net\InetAddressImplProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::net;


std::string InetAddressProxy::className = "java/net/InetAddress";
jclass InetAddressProxy::objectClass = NULL;

jclass InetAddressProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

InetAddressProxy::InetAddressProxy(void* unused)
{
}

jobject InetAddressProxy::_getPeerObject() const
{
	return peerObject;
}

jclass InetAddressProxy::getObjectClass()
{
	return _getObjectClass();
}

InetAddressProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
InetAddressProxy::InetAddressProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

InetAddressProxy::~InetAddressProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

InetAddressProxy& InetAddressProxy::operator=(const InetAddressProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
jboolean InetAddressProxy::equals(::java::lang::ObjectProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "equals", "(Ljava/lang/Object;)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

jboolean InetAddressProxy::isAnyLocalAddress()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "isAnyLocalAddress", "()Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid );
}

jboolean InetAddressProxy::isLinkLocalAddress()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "isLinkLocalAddress", "()Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid );
}

jboolean InetAddressProxy::isLoopbackAddress()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "isLoopbackAddress", "()Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid );
}

jboolean InetAddressProxy::isMCGlobal()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "isMCGlobal", "()Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid );
}

jboolean InetAddressProxy::isMCLinkLocal()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "isMCLinkLocal", "()Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid );
}

jboolean InetAddressProxy::isMCNodeLocal()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "isMCNodeLocal", "()Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid );
}

jboolean InetAddressProxy::isMCOrgLocal()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "isMCOrgLocal", "()Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid );
}

jboolean InetAddressProxy::isMCSiteLocal()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "isMCSiteLocal", "()Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid );
}

jboolean InetAddressProxy::isMulticastAddress()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "isMulticastAddress", "()Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid );
}

jboolean InetAddressProxy::isReachable(jint p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "isReachable", "(I)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, p0 );
}

jboolean InetAddressProxy::isReachable(::java::net::NetworkInterfaceProxy p0, jint p1, jint p2)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "isReachable", "(Ljava/net/NetworkInterface;II)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), p1, p2 );
}

jboolean InetAddressProxy::isSiteLocalAddress()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "isSiteLocalAddress", "()Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid );
}

::net::sourceforge::jnipp::JByteArrayHelper<1> InetAddressProxy::getAddress()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getAddress", "()[B" );
	return ::net::sourceforge::jnipp::JByteArrayHelper<1>( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

jint InetAddressProxy::hashCode()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "hashCode", "()I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid );
}

::net::sourceforge::jnipp::JStringHelper InetAddressProxy::getCanonicalHostName()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getCanonicalHostName", "()Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::net::sourceforge::jnipp::JStringHelper InetAddressProxy::getHostAddress()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getHostAddress", "()Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::net::sourceforge::jnipp::JStringHelper InetAddressProxy::getHostName()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getHostName", "()Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::net::sourceforge::jnipp::JStringHelper InetAddressProxy::toString()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "toString", "()Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::net::InetAddressProxy InetAddressProxy::getByAddress(::net::sourceforge::jnipp::JByteArrayHelper<1> p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "getByAddress", "([B)Ljava/net/InetAddress;" );
	return ::java::net::InetAddressProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, static_cast<jbyteArray>( p0 ) )  );
}

::java::net::InetAddressProxy InetAddressProxy::getByAddress(::net::sourceforge::jnipp::JStringHelper p0, ::net::sourceforge::jnipp::JByteArrayHelper<1> p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "getByAddress", "(Ljava/lang/String;[B)Ljava/net/InetAddress;" );
	return ::java::net::InetAddressProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, static_cast<jstring>( p0 ), static_cast<jbyteArray>( p1 ) )  );
}

::java::net::InetAddressProxy InetAddressProxy::getByName(::net::sourceforge::jnipp::JStringHelper p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "getByName", "(Ljava/lang/String;)Ljava/net/InetAddress;" );
	return ::java::net::InetAddressProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, static_cast<jstring>( p0 ) )  );
}

::java::net::InetAddressProxy InetAddressProxy::getLocalHost()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "getLocalHost", "()Ljava/net/InetAddress;" );
	return ::java::net::InetAddressProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid )  );
}

::java::net::InetAddressProxy InetAddressProxy::getLoopbackAddress()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "getLoopbackAddress", "()Ljava/net/InetAddress;" );
	return ::java::net::InetAddressProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid )  );
}

::net::sourceforge::jnipp::PA<::java::net::InetAddressProxy>::ProxyArray<1> InetAddressProxy::getAllByName(::net::sourceforge::jnipp::JStringHelper p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "getAllByName", "(Ljava/lang/String;)[Ljava/net/InetAddress;" );
	return ::net::sourceforge::jnipp::PA<::java::net::InetAddressProxy>::ProxyArray<1>( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, static_cast<jstring>( p0 ) )  );
}

