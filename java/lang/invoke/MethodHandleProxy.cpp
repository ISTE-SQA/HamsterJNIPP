#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "MethodHandleProxy.h"

// includes for parameter and return type proxy classes
#include "java\lang\ObjectProxy.h"
#include "java\util\ListProxy.h"
#include "java\lang\ClassProxy.h"
#include "java\lang\invoke\MethodTypeProxy.h"
#include "java\lang\invoke\LambdaFormProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::lang::invoke;


std::string MethodHandleProxy::className = "java/lang/invoke/MethodHandle";
jclass MethodHandleProxy::objectClass = NULL;

jclass MethodHandleProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

MethodHandleProxy::MethodHandleProxy(void* unused)
{
}

jobject MethodHandleProxy::_getPeerObject() const
{
	return peerObject;
}

jclass MethodHandleProxy::getObjectClass()
{
	return _getObjectClass();
}

MethodHandleProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
MethodHandleProxy::MethodHandleProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

MethodHandleProxy::~MethodHandleProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

MethodHandleProxy& MethodHandleProxy::operator=(const MethodHandleProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
jboolean MethodHandleProxy::isVarargsCollector()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "isVarargsCollector", "()Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid );
}

::java::lang::ObjectProxy MethodHandleProxy::invoke(::net::sourceforge::jnipp::PA<::java::lang::ObjectProxy>::ProxyArray<1> p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "invoke", "([Ljava/lang/Object;)Ljava/lang/Object;" );
	return ::java::lang::ObjectProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobjectArray>( p0 ) )  );
}

::java::lang::ObjectProxy MethodHandleProxy::invokeExact(::net::sourceforge::jnipp::PA<::java::lang::ObjectProxy>::ProxyArray<1> p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "invokeExact", "([Ljava/lang/Object;)Ljava/lang/Object;" );
	return ::java::lang::ObjectProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobjectArray>( p0 ) )  );
}

::java::lang::ObjectProxy MethodHandleProxy::invokeWithArguments(::net::sourceforge::jnipp::PA<::java::lang::ObjectProxy>::ProxyArray<1> p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "invokeWithArguments", "([Ljava/lang/Object;)Ljava/lang/Object;" );
	return ::java::lang::ObjectProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobjectArray>( p0 ) )  );
}

::java::lang::ObjectProxy MethodHandleProxy::invokeWithArguments(::java::util::ListProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "invokeWithArguments", "(Ljava/util/List;)Ljava/lang/Object;" );
	return ::java::lang::ObjectProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::net::sourceforge::jnipp::JStringHelper MethodHandleProxy::toString()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "toString", "()Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::lang::invoke::MethodHandleProxy MethodHandleProxy::asCollector(::java::lang::ClassProxy p0, jint p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "asCollector", "(Ljava/lang/Class;I)Ljava/lang/invoke/MethodHandle;" );
	return ::java::lang::invoke::MethodHandleProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jclass>( p0 ), p1 )  );
}

::java::lang::invoke::MethodHandleProxy MethodHandleProxy::asFixedArity()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "asFixedArity", "()Ljava/lang/invoke/MethodHandle;" );
	return ::java::lang::invoke::MethodHandleProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::lang::invoke::MethodHandleProxy MethodHandleProxy::asSpreader(::java::lang::ClassProxy p0, jint p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "asSpreader", "(Ljava/lang/Class;I)Ljava/lang/invoke/MethodHandle;" );
	return ::java::lang::invoke::MethodHandleProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jclass>( p0 ), p1 )  );
}

::java::lang::invoke::MethodHandleProxy MethodHandleProxy::asType(::java::lang::invoke::MethodTypeProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "asType", "(Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/MethodHandle;" );
	return ::java::lang::invoke::MethodHandleProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::java::lang::invoke::MethodHandleProxy MethodHandleProxy::asVarargsCollector(::java::lang::ClassProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "asVarargsCollector", "(Ljava/lang/Class;)Ljava/lang/invoke/MethodHandle;" );
	return ::java::lang::invoke::MethodHandleProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jclass>( p0 ) )  );
}

::java::lang::invoke::MethodHandleProxy MethodHandleProxy::bindTo(::java::lang::ObjectProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "bindTo", "(Ljava/lang/Object;)Ljava/lang/invoke/MethodHandle;" );
	return ::java::lang::invoke::MethodHandleProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::java::lang::invoke::MethodTypeProxy MethodHandleProxy::type()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "type", "()Ljava/lang/invoke/MethodType;" );
	return ::java::lang::invoke::MethodTypeProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

