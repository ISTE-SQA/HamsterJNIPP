#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "ProtectionDomain_KeyProxy.h"

// includes for parameter and return type proxy classes
#include "java\security\ProtectionDomainProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::security;


std::string ProtectionDomain_KeyProxy::className = "java/security/ProtectionDomain$Key";
jclass ProtectionDomain_KeyProxy::objectClass = NULL;

jclass ProtectionDomain_KeyProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

ProtectionDomain_KeyProxy::ProtectionDomain_KeyProxy(void* unused)
{
}

jobject ProtectionDomain_KeyProxy::_getPeerObject() const
{
	return peerObject;
}

jclass ProtectionDomain_KeyProxy::getObjectClass()
{
	return _getObjectClass();
}

ProtectionDomain_KeyProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
ProtectionDomain_KeyProxy::ProtectionDomain_KeyProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

ProtectionDomain_KeyProxy::~ProtectionDomain_KeyProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

ProtectionDomain_KeyProxy& ProtectionDomain_KeyProxy::operator=(const ProtectionDomain_KeyProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
