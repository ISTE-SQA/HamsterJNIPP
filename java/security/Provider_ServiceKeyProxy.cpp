#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "Provider_ServiceKeyProxy.h"

// includes for parameter and return type proxy classes
#include "java\lang\ObjectProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::security;


std::string Provider_ServiceKeyProxy::className = "java/security/Provider$ServiceKey";
jclass Provider_ServiceKeyProxy::objectClass = NULL;

jclass Provider_ServiceKeyProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

Provider_ServiceKeyProxy::Provider_ServiceKeyProxy(void* unused)
{
}

jobject Provider_ServiceKeyProxy::_getPeerObject() const
{
	return peerObject;
}

jclass Provider_ServiceKeyProxy::getObjectClass()
{
	return _getObjectClass();
}

Provider_ServiceKeyProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
Provider_ServiceKeyProxy::Provider_ServiceKeyProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

Provider_ServiceKeyProxy::~Provider_ServiceKeyProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

Provider_ServiceKeyProxy& Provider_ServiceKeyProxy::operator=(const Provider_ServiceKeyProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
jboolean Provider_ServiceKeyProxy::equals(::java::lang::ObjectProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "equals", "(Ljava/lang/Object;)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

jint Provider_ServiceKeyProxy::hashCode()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "hashCode", "()I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid );
}

