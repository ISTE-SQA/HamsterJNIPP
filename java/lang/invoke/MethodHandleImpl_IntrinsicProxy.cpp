#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "MethodHandleImpl_IntrinsicProxy.h"

// includes for parameter and return type proxy classes
#include "java\lang\invoke\MethodHandleImpl_IntrinsicProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::lang::invoke;


std::string MethodHandleImpl_IntrinsicProxy::className = "java/lang/invoke/MethodHandleImpl$Intrinsic";
jclass MethodHandleImpl_IntrinsicProxy::objectClass = NULL;

jclass MethodHandleImpl_IntrinsicProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

MethodHandleImpl_IntrinsicProxy::MethodHandleImpl_IntrinsicProxy(void* unused)
{
}

jobject MethodHandleImpl_IntrinsicProxy::_getPeerObject() const
{
	return peerObject;
}

jclass MethodHandleImpl_IntrinsicProxy::getObjectClass()
{
	return _getObjectClass();
}

MethodHandleImpl_IntrinsicProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
MethodHandleImpl_IntrinsicProxy::MethodHandleImpl_IntrinsicProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

MethodHandleImpl_IntrinsicProxy::~MethodHandleImpl_IntrinsicProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

MethodHandleImpl_IntrinsicProxy& MethodHandleImpl_IntrinsicProxy::operator=(const MethodHandleImpl_IntrinsicProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
::java::lang::invoke::MethodHandleImpl_IntrinsicProxy MethodHandleImpl_IntrinsicProxy::valueOf(::net::sourceforge::jnipp::JStringHelper p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "valueOf", "(Ljava/lang/String;)Ljava/lang/invoke/MethodHandleImpl$Intrinsic;" );
	return ::java::lang::invoke::MethodHandleImpl_IntrinsicProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, static_cast<jstring>( p0 ) )  );
}

::net::sourceforge::jnipp::PA<::java::lang::invoke::MethodHandleImpl_IntrinsicProxy>::ProxyArray<1> MethodHandleImpl_IntrinsicProxy::values()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "values", "()[Ljava/lang/invoke/MethodHandleImpl$Intrinsic;" );
	return ::net::sourceforge::jnipp::PA<::java::lang::invoke::MethodHandleImpl_IntrinsicProxy>::ProxyArray<1>( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid )  );
}

