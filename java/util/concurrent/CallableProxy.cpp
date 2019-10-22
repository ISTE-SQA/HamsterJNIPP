#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "CallableProxy.h"

// includes for parameter and return type proxy classes
#include "java\lang\ObjectProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::util::concurrent;


std::string CallableProxy::className = "java/util/concurrent/Callable";
jclass CallableProxy::objectClass = NULL;

jclass CallableProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

CallableProxy::CallableProxy(void* unused)
{
}

jobject CallableProxy::_getPeerObject() const
{
	return peerObject;
}

jclass CallableProxy::getObjectClass()
{
	return _getObjectClass();
}

CallableProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
CallableProxy::CallableProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

CallableProxy::~CallableProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

CallableProxy& CallableProxy::operator=(const CallableProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
::java::lang::ObjectProxy CallableProxy::call()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "call", "()Ljava/lang/Object;" );
	return ::java::lang::ObjectProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

