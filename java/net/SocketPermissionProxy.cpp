#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "SocketPermissionProxy.h"

// includes for parameter and return type proxy classes
#include "java\lang\ObjectProxy.h"
#include "java\security\PermissionProxy.h"
#include "java\security\PermissionCollectionProxy.h"
#include "sun\security\util\DebugProxy.h"
#include "java\net\InetAddressProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::net;


std::string SocketPermissionProxy::className = "java/net/SocketPermission";
jclass SocketPermissionProxy::objectClass = NULL;

jclass SocketPermissionProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

SocketPermissionProxy::SocketPermissionProxy(void* unused)
{
}

jobject SocketPermissionProxy::_getPeerObject() const
{
	return peerObject;
}

jclass SocketPermissionProxy::getObjectClass()
{
	return _getObjectClass();
}

SocketPermissionProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
SocketPermissionProxy::SocketPermissionProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

SocketPermissionProxy::SocketPermissionProxy(::net::sourceforge::jnipp::JStringHelper p0, ::net::sourceforge::jnipp::JStringHelper p1)
{
	jmethodID mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "<init>", "(Ljava/lang/String;Ljava/lang/String;)V" );
	peerObject = JNIEnvHelper::NewGlobalRef( JNIEnvHelper::NewObject( _getObjectClass(), mid, static_cast<jstring>( p0 ), static_cast<jstring>( p1 ) ) );
}

SocketPermissionProxy::~SocketPermissionProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

SocketPermissionProxy& SocketPermissionProxy::operator=(const SocketPermissionProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
jboolean SocketPermissionProxy::equals(::java::lang::ObjectProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "equals", "(Ljava/lang/Object;)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

jboolean SocketPermissionProxy::implies(::java::security::PermissionProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "implies", "(Ljava/security/Permission;)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

jint SocketPermissionProxy::hashCode()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "hashCode", "()I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid );
}

::net::sourceforge::jnipp::JStringHelper SocketPermissionProxy::getActions()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getActions", "()Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::security::PermissionCollectionProxy SocketPermissionProxy::newPermissionCollection()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "newPermissionCollection", "()Ljava/security/PermissionCollection;" );
	return ::java::security::PermissionCollectionProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

