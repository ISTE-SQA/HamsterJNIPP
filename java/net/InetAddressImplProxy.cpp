#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "InetAddressImplProxy.h"

// includes for parameter and return type proxy classes
#include "java\net\InetAddressProxy.h"
#include "java\net\NetworkInterfaceProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::net;


std::string InetAddressImplProxy::className = "java/net/InetAddressImpl";
jclass InetAddressImplProxy::objectClass = NULL;

jclass InetAddressImplProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

InetAddressImplProxy::InetAddressImplProxy(void* unused)
{
}

jobject InetAddressImplProxy::_getPeerObject() const
{
	return peerObject;
}

jclass InetAddressImplProxy::getObjectClass()
{
	return _getObjectClass();
}

InetAddressImplProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
InetAddressImplProxy::InetAddressImplProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

InetAddressImplProxy::~InetAddressImplProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

InetAddressImplProxy& InetAddressImplProxy::operator=(const InetAddressImplProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
jboolean InetAddressImplProxy::isReachable(::java::net::InetAddressProxy p0, jint p1, ::java::net::NetworkInterfaceProxy p2, jint p3)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "isReachable", "(Ljava/net/InetAddress;ILjava/net/NetworkInterface;I)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), p1, static_cast<jobject>( p2 ), p3 );
}

::net::sourceforge::jnipp::JStringHelper InetAddressImplProxy::getHostByAddr(::net::sourceforge::jnipp::JByteArrayHelper<1> p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getHostByAddr", "([B)Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jbyteArray>( p0 ) )  );
}

::net::sourceforge::jnipp::JStringHelper InetAddressImplProxy::getLocalHostName()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getLocalHostName", "()Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::net::InetAddressProxy InetAddressImplProxy::anyLocalAddress()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "anyLocalAddress", "()Ljava/net/InetAddress;" );
	return ::java::net::InetAddressProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::net::InetAddressProxy InetAddressImplProxy::loopbackAddress()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "loopbackAddress", "()Ljava/net/InetAddress;" );
	return ::java::net::InetAddressProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::net::sourceforge::jnipp::PA<::java::net::InetAddressProxy>::ProxyArray<1> InetAddressImplProxy::lookupAllHostAddr(::net::sourceforge::jnipp::JStringHelper p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "lookupAllHostAddr", "(Ljava/lang/String;)[Ljava/net/InetAddress;" );
	return ::net::sourceforge::jnipp::PA<::java::net::InetAddressProxy>::ProxyArray<1>( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jstring>( p0 ) )  );
}

