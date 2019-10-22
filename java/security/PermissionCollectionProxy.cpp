#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "PermissionCollectionProxy.h"

// includes for parameter and return type proxy classes
#include "java\security\PermissionProxy.h"
#include "java\util\EnumerationProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::security;


std::string PermissionCollectionProxy::className = "java/security/PermissionCollection";
jclass PermissionCollectionProxy::objectClass = NULL;

jclass PermissionCollectionProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

PermissionCollectionProxy::PermissionCollectionProxy(void* unused)
{
}

jobject PermissionCollectionProxy::_getPeerObject() const
{
	return peerObject;
}

jclass PermissionCollectionProxy::getObjectClass()
{
	return _getObjectClass();
}

PermissionCollectionProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
PermissionCollectionProxy::PermissionCollectionProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

PermissionCollectionProxy::PermissionCollectionProxy()
{
	jmethodID mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "<init>", "()V" );
	peerObject = JNIEnvHelper::NewGlobalRef( JNIEnvHelper::NewObject( _getObjectClass(), mid ) );
}

PermissionCollectionProxy::~PermissionCollectionProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

PermissionCollectionProxy& PermissionCollectionProxy::operator=(const PermissionCollectionProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
jboolean PermissionCollectionProxy::implies(::java::security::PermissionProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "implies", "(Ljava/security/Permission;)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

::java::util::EnumerationProxy PermissionCollectionProxy::elements()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "elements", "()Ljava/util/Enumeration;" );
	return ::java::util::EnumerationProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

void PermissionCollectionProxy::add(::java::security::PermissionProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "add", "(Ljava/security/Permission;)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

jboolean PermissionCollectionProxy::isReadOnly()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "isReadOnly", "()Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid );
}

::net::sourceforge::jnipp::JStringHelper PermissionCollectionProxy::toString()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "toString", "()Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

void PermissionCollectionProxy::setReadOnly()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "setReadOnly", "()V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid );
}

