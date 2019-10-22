#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "PrincipalProxy.h"

// includes for parameter and return type proxy classes
#include "java\lang\ObjectProxy.h"
#include "javax\security\auth\SubjectProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::security;


std::string PrincipalProxy::className = "java/security/Principal";
jclass PrincipalProxy::objectClass = NULL;

jclass PrincipalProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

PrincipalProxy::PrincipalProxy(void* unused)
{
}

jobject PrincipalProxy::_getPeerObject() const
{
	return peerObject;
}

jclass PrincipalProxy::getObjectClass()
{
	return _getObjectClass();
}

PrincipalProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
PrincipalProxy::PrincipalProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

PrincipalProxy::~PrincipalProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

PrincipalProxy& PrincipalProxy::operator=(const PrincipalProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
jboolean PrincipalProxy::equals(::java::lang::ObjectProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "equals", "(Ljava/lang/Object;)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

jint PrincipalProxy::hashCode()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "hashCode", "()I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid );
}

::net::sourceforge::jnipp::JStringHelper PrincipalProxy::getName()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getName", "()Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::net::sourceforge::jnipp::JStringHelper PrincipalProxy::toString()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "toString", "()Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

jboolean PrincipalProxy::implies(::javax::security::auth::SubjectProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "implies", "(Ljavax/security/auth/Subject;)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

