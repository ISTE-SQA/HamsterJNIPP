#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "PrivilegedExceptionActionProxy.h"

// includes for parameter and return type proxy classes
#include "java\lang\ObjectProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::security;


std::string PrivilegedExceptionActionProxy::className = "java/security/PrivilegedExceptionAction";
jclass PrivilegedExceptionActionProxy::objectClass = NULL;

jclass PrivilegedExceptionActionProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

PrivilegedExceptionActionProxy::PrivilegedExceptionActionProxy(void* unused)
{
}

jobject PrivilegedExceptionActionProxy::_getPeerObject() const
{
	return peerObject;
}

jclass PrivilegedExceptionActionProxy::getObjectClass()
{
	return _getObjectClass();
}

PrivilegedExceptionActionProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
PrivilegedExceptionActionProxy::PrivilegedExceptionActionProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

PrivilegedExceptionActionProxy::~PrivilegedExceptionActionProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

PrivilegedExceptionActionProxy& PrivilegedExceptionActionProxy::operator=(const PrivilegedExceptionActionProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
::java::lang::ObjectProxy PrivilegedExceptionActionProxy::run()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "run", "()Ljava/lang/Object;" );
	return ::java::lang::ObjectProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

