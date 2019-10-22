#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "AccessControlContextProxy.h"

// includes for parameter and return type proxy classes
#include "java\security\DomainCombinerProxy.h"
#include "java\security\ProtectionDomainProxy.h"
#include "java\lang\ObjectProxy.h"
#include "java\security\PermissionProxy.h"
#include "sun\security\util\DebugProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::security;


std::string AccessControlContextProxy::className = "java/security/AccessControlContext";
jclass AccessControlContextProxy::objectClass = NULL;

jclass AccessControlContextProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

AccessControlContextProxy::AccessControlContextProxy(void* unused)
{
}

jobject AccessControlContextProxy::_getPeerObject() const
{
	return peerObject;
}

jclass AccessControlContextProxy::getObjectClass()
{
	return _getObjectClass();
}

AccessControlContextProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
AccessControlContextProxy::AccessControlContextProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

AccessControlContextProxy::AccessControlContextProxy(::java::security::AccessControlContextProxy p0, ::java::security::DomainCombinerProxy p1)
{
	jmethodID mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "<init>", "(Ljava/security/AccessControlContext;Ljava/security/DomainCombiner;)V" );
	peerObject = JNIEnvHelper::NewGlobalRef( JNIEnvHelper::NewObject( _getObjectClass(), mid, static_cast<jobject>( p0 ), static_cast<jobject>( p1 ) ) );
}

AccessControlContextProxy::AccessControlContextProxy(::net::sourceforge::jnipp::PA<::java::security::ProtectionDomainProxy>::ProxyArray<1> p0)
{
	jmethodID mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "<init>", "([Ljava/security/ProtectionDomain;)V" );
	peerObject = JNIEnvHelper::NewGlobalRef( JNIEnvHelper::NewObject( _getObjectClass(), mid, static_cast<jobjectArray>( p0 ) ) );
}

AccessControlContextProxy::~AccessControlContextProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

AccessControlContextProxy& AccessControlContextProxy::operator=(const AccessControlContextProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
jboolean AccessControlContextProxy::equals(::java::lang::ObjectProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "equals", "(Ljava/lang/Object;)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

jint AccessControlContextProxy::hashCode()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "hashCode", "()I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid );
}

::java::security::DomainCombinerProxy AccessControlContextProxy::getDomainCombiner()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getDomainCombiner", "()Ljava/security/DomainCombiner;" );
	return ::java::security::DomainCombinerProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

void AccessControlContextProxy::checkPermission(::java::security::PermissionProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "checkPermission", "(Ljava/security/Permission;)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

