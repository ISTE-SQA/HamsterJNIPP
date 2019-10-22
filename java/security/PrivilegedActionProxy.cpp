#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "PrivilegedActionProxy.h"

// includes for parameter and return type proxy classes
#include "java\lang\ObjectProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::security;


std::string PrivilegedActionProxy::className = "java/security/PrivilegedAction";
jclass PrivilegedActionProxy::objectClass = NULL;

jclass PrivilegedActionProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

PrivilegedActionProxy::PrivilegedActionProxy(void* unused)
{
}

jobject PrivilegedActionProxy::_getPeerObject() const
{
	return peerObject;
}

jclass PrivilegedActionProxy::getObjectClass()
{
	return _getObjectClass();
}

PrivilegedActionProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
PrivilegedActionProxy::PrivilegedActionProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

PrivilegedActionProxy::~PrivilegedActionProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

PrivilegedActionProxy& PrivilegedActionProxy::operator=(const PrivilegedActionProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
::java::lang::ObjectProxy PrivilegedActionProxy::run()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "run", "()Ljava/lang/Object;" );
	return ::java::lang::ObjectProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

