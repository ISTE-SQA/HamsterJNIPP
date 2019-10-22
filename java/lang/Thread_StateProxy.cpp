#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "Thread_StateProxy.h"

// includes for parameter and return type proxy classes
#include "java\lang\Thread_StateProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::lang;


std::string Thread_StateProxy::className = "java/lang/Thread$State";
jclass Thread_StateProxy::objectClass = NULL;

jclass Thread_StateProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

Thread_StateProxy::Thread_StateProxy(void* unused)
{
}

jobject Thread_StateProxy::_getPeerObject() const
{
	return peerObject;
}

jclass Thread_StateProxy::getObjectClass()
{
	return _getObjectClass();
}

Thread_StateProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
Thread_StateProxy::Thread_StateProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

Thread_StateProxy::~Thread_StateProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

Thread_StateProxy& Thread_StateProxy::operator=(const Thread_StateProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
::java::lang::Thread_StateProxy Thread_StateProxy::valueOf(::net::sourceforge::jnipp::JStringHelper p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "valueOf", "(Ljava/lang/String;)Ljava/lang/Thread$State;" );
	return ::java::lang::Thread_StateProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, static_cast<jstring>( p0 ) )  );
}

::net::sourceforge::jnipp::PA<::java::lang::Thread_StateProxy>::ProxyArray<1> Thread_StateProxy::values()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "values", "()[Ljava/lang/Thread$State;" );
	return ::net::sourceforge::jnipp::PA<::java::lang::Thread_StateProxy>::ProxyArray<1>( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid )  );
}

