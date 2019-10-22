#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "DomainCombinerProxy.h"

// includes for parameter and return type proxy classes
#include "java\security\ProtectionDomainProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::security;


std::string DomainCombinerProxy::className = "java/security/DomainCombiner";
jclass DomainCombinerProxy::objectClass = NULL;

jclass DomainCombinerProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

DomainCombinerProxy::DomainCombinerProxy(void* unused)
{
}

jobject DomainCombinerProxy::_getPeerObject() const
{
	return peerObject;
}

jclass DomainCombinerProxy::getObjectClass()
{
	return _getObjectClass();
}

DomainCombinerProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
DomainCombinerProxy::DomainCombinerProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

DomainCombinerProxy::~DomainCombinerProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

DomainCombinerProxy& DomainCombinerProxy::operator=(const DomainCombinerProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
::net::sourceforge::jnipp::PA<::java::security::ProtectionDomainProxy>::ProxyArray<1> DomainCombinerProxy::combine(::net::sourceforge::jnipp::PA<::java::security::ProtectionDomainProxy>::ProxyArray<1> p0, ::net::sourceforge::jnipp::PA<::java::security::ProtectionDomainProxy>::ProxyArray<1> p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "combine", "([Ljava/security/ProtectionDomain;[Ljava/security/ProtectionDomain;)[Ljava/security/ProtectionDomain;" );
	return ::net::sourceforge::jnipp::PA<::java::security::ProtectionDomainProxy>::ProxyArray<1>( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobjectArray>( p0 ), static_cast<jobjectArray>( p1 ) )  );
}

