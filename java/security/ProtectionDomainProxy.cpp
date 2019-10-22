#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "ProtectionDomainProxy.h"

// includes for parameter and return type proxy classes
#include "java\security\CodeSourceProxy.h"
#include "java\security\PermissionCollectionProxy.h"
#include "java\lang\ClassLoaderProxy.h"
#include "java\security\PrincipalProxy.h"
#include "java\security\PermissionProxy.h"
#include "java\security\ProtectionDomain_KeyProxy.h"
#include "sun\security\util\DebugProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::security;


std::string ProtectionDomainProxy::className = "java/security/ProtectionDomain";
jclass ProtectionDomainProxy::objectClass = NULL;

jclass ProtectionDomainProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

ProtectionDomainProxy::ProtectionDomainProxy(void* unused)
{
}

jobject ProtectionDomainProxy::_getPeerObject() const
{
	return peerObject;
}

jclass ProtectionDomainProxy::getObjectClass()
{
	return _getObjectClass();
}

ProtectionDomainProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
ProtectionDomainProxy::ProtectionDomainProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

ProtectionDomainProxy::ProtectionDomainProxy(::java::security::CodeSourceProxy p0, ::java::security::PermissionCollectionProxy p1)
{
	jmethodID mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "<init>", "(Ljava/security/CodeSource;Ljava/security/PermissionCollection;)V" );
	peerObject = JNIEnvHelper::NewGlobalRef( JNIEnvHelper::NewObject( _getObjectClass(), mid, static_cast<jobject>( p0 ), static_cast<jobject>( p1 ) ) );
}

ProtectionDomainProxy::ProtectionDomainProxy(::java::security::CodeSourceProxy p0, ::java::security::PermissionCollectionProxy p1, ::java::lang::ClassLoaderProxy p2, ::net::sourceforge::jnipp::PA<::java::security::PrincipalProxy>::ProxyArray<1> p3)
{
	jmethodID mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "<init>", "(Ljava/security/CodeSource;Ljava/security/PermissionCollection;Ljava/lang/ClassLoader;[Ljava/security/Principal;)V" );
	peerObject = JNIEnvHelper::NewGlobalRef( JNIEnvHelper::NewObject( _getObjectClass(), mid, static_cast<jobject>( p0 ), static_cast<jobject>( p1 ), static_cast<jobject>( p2 ), static_cast<jobjectArray>( p3 ) ) );
}

ProtectionDomainProxy::~ProtectionDomainProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

ProtectionDomainProxy& ProtectionDomainProxy::operator=(const ProtectionDomainProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
jboolean ProtectionDomainProxy::implies(::java::security::PermissionProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "implies", "(Ljava/security/Permission;)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

::java::lang::ClassLoaderProxy ProtectionDomainProxy::getClassLoader()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getClassLoader", "()Ljava/lang/ClassLoader;" );
	return ::java::lang::ClassLoaderProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::security::CodeSourceProxy ProtectionDomainProxy::getCodeSource()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getCodeSource", "()Ljava/security/CodeSource;" );
	return ::java::security::CodeSourceProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::security::PermissionCollectionProxy ProtectionDomainProxy::getPermissions()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getPermissions", "()Ljava/security/PermissionCollection;" );
	return ::java::security::PermissionCollectionProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::net::sourceforge::jnipp::PA<::java::security::PrincipalProxy>::ProxyArray<1> ProtectionDomainProxy::getPrincipals()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getPrincipals", "()[Ljava/security/Principal;" );
	return ::net::sourceforge::jnipp::PA<::java::security::PrincipalProxy>::ProxyArray<1>( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::net::sourceforge::jnipp::JStringHelper ProtectionDomainProxy::toString()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "toString", "()Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

