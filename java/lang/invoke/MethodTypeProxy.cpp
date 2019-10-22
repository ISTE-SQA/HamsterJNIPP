#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "MethodTypeProxy.h"

// includes for parameter and return type proxy classes
#include "java\lang\ObjectProxy.h"
#include "java\lang\ClassProxy.h"
#include "java\util\ListProxy.h"
#include "java\lang\ClassLoaderProxy.h"
#include "java\lang\invoke\InvokersProxy.h"
#include "java\lang\invoke\MethodTypeFormProxy.h"
#include "java\io\ObjectStreamFieldProxy.h"
#include "java\lang\invoke\MethodTypeProxy.h"
#include "java\lang\invoke\MethodType_ConcurrentWeakInternSetProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::lang::invoke;


std::string MethodTypeProxy::className = "java/lang/invoke/MethodType";
jclass MethodTypeProxy::objectClass = NULL;

jclass MethodTypeProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

MethodTypeProxy::MethodTypeProxy(void* unused)
{
}

jobject MethodTypeProxy::_getPeerObject() const
{
	return peerObject;
}

jclass MethodTypeProxy::getObjectClass()
{
	return _getObjectClass();
}

MethodTypeProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
MethodTypeProxy::MethodTypeProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

MethodTypeProxy::~MethodTypeProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

MethodTypeProxy& MethodTypeProxy::operator=(const MethodTypeProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
jboolean MethodTypeProxy::equals(::java::lang::ObjectProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "equals", "(Ljava/lang/Object;)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

jboolean MethodTypeProxy::hasPrimitives()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "hasPrimitives", "()Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid );
}

jboolean MethodTypeProxy::hasWrappers()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "hasWrappers", "()Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid );
}

jint MethodTypeProxy::hashCode()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "hashCode", "()I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid );
}

jint MethodTypeProxy::parameterCount()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "parameterCount", "()I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid );
}

::java::lang::ClassProxy MethodTypeProxy::parameterType(jint p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "parameterType", "(I)Ljava/lang/Class;" );
	return ::java::lang::ClassProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0 )  );
}

::java::lang::ClassProxy MethodTypeProxy::returnType()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "returnType", "()Ljava/lang/Class;" );
	return ::java::lang::ClassProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::net::sourceforge::jnipp::PA<::java::lang::ClassProxy>::ProxyArray<1> MethodTypeProxy::parameterArray()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "parameterArray", "()[Ljava/lang/Class;" );
	return ::net::sourceforge::jnipp::PA<::java::lang::ClassProxy>::ProxyArray<1>( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::net::sourceforge::jnipp::JStringHelper MethodTypeProxy::toMethodDescriptorString()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "toMethodDescriptorString", "()Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::net::sourceforge::jnipp::JStringHelper MethodTypeProxy::toString()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "toString", "()Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::lang::invoke::MethodTypeProxy MethodTypeProxy::appendParameterTypes(::net::sourceforge::jnipp::PA<::java::lang::ClassProxy>::ProxyArray<1> p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "appendParameterTypes", "([Ljava/lang/Class;)Ljava/lang/invoke/MethodType;" );
	return ::java::lang::invoke::MethodTypeProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobjectArray>( p0 ) )  );
}

::java::lang::invoke::MethodTypeProxy MethodTypeProxy::appendParameterTypes(::java::util::ListProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "appendParameterTypes", "(Ljava/util/List;)Ljava/lang/invoke/MethodType;" );
	return ::java::lang::invoke::MethodTypeProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::java::lang::invoke::MethodTypeProxy MethodTypeProxy::changeParameterType(jint p0, ::java::lang::ClassProxy p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "changeParameterType", "(ILjava/lang/Class;)Ljava/lang/invoke/MethodType;" );
	return ::java::lang::invoke::MethodTypeProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0, static_cast<jclass>( p1 ) )  );
}

::java::lang::invoke::MethodTypeProxy MethodTypeProxy::changeReturnType(::java::lang::ClassProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "changeReturnType", "(Ljava/lang/Class;)Ljava/lang/invoke/MethodType;" );
	return ::java::lang::invoke::MethodTypeProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jclass>( p0 ) )  );
}

::java::lang::invoke::MethodTypeProxy MethodTypeProxy::dropParameterTypes(jint p0, jint p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "dropParameterTypes", "(II)Ljava/lang/invoke/MethodType;" );
	return ::java::lang::invoke::MethodTypeProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0, p1 )  );
}

::java::lang::invoke::MethodTypeProxy MethodTypeProxy::erase()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "erase", "()Ljava/lang/invoke/MethodType;" );
	return ::java::lang::invoke::MethodTypeProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::lang::invoke::MethodTypeProxy MethodTypeProxy::generic()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "generic", "()Ljava/lang/invoke/MethodType;" );
	return ::java::lang::invoke::MethodTypeProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::lang::invoke::MethodTypeProxy MethodTypeProxy::insertParameterTypes(jint p0, ::net::sourceforge::jnipp::PA<::java::lang::ClassProxy>::ProxyArray<1> p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "insertParameterTypes", "(I[Ljava/lang/Class;)Ljava/lang/invoke/MethodType;" );
	return ::java::lang::invoke::MethodTypeProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0, static_cast<jobjectArray>( p1 ) )  );
}

::java::lang::invoke::MethodTypeProxy MethodTypeProxy::insertParameterTypes(jint p0, ::java::util::ListProxy p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "insertParameterTypes", "(ILjava/util/List;)Ljava/lang/invoke/MethodType;" );
	return ::java::lang::invoke::MethodTypeProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0, static_cast<jobject>( p1 ) )  );
}

::java::lang::invoke::MethodTypeProxy MethodTypeProxy::unwrap()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "unwrap", "()Ljava/lang/invoke/MethodType;" );
	return ::java::lang::invoke::MethodTypeProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::lang::invoke::MethodTypeProxy MethodTypeProxy::wrap()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "wrap", "()Ljava/lang/invoke/MethodType;" );
	return ::java::lang::invoke::MethodTypeProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::util::ListProxy MethodTypeProxy::parameterList()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "parameterList", "()Ljava/util/List;" );
	return ::java::util::ListProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::lang::invoke::MethodTypeProxy MethodTypeProxy::fromMethodDescriptorString(::net::sourceforge::jnipp::JStringHelper p0, ::java::lang::ClassLoaderProxy p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "fromMethodDescriptorString", "(Ljava/lang/String;Ljava/lang/ClassLoader;)Ljava/lang/invoke/MethodType;" );
	return ::java::lang::invoke::MethodTypeProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, static_cast<jstring>( p0 ), static_cast<jobject>( p1 ) )  );
}

::java::lang::invoke::MethodTypeProxy MethodTypeProxy::genericMethodType(jint p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "genericMethodType", "(I)Ljava/lang/invoke/MethodType;" );
	return ::java::lang::invoke::MethodTypeProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, p0 )  );
}

::java::lang::invoke::MethodTypeProxy MethodTypeProxy::genericMethodType(jint p0, jboolean p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "genericMethodType", "(IZ)Ljava/lang/invoke/MethodType;" );
	return ::java::lang::invoke::MethodTypeProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, p0, p1 )  );
}

::java::lang::invoke::MethodTypeProxy MethodTypeProxy::methodType(::java::lang::ClassProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "methodType", "(Ljava/lang/Class;)Ljava/lang/invoke/MethodType;" );
	return ::java::lang::invoke::MethodTypeProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, static_cast<jclass>( p0 ) )  );
}

::java::lang::invoke::MethodTypeProxy MethodTypeProxy::methodType(::java::lang::ClassProxy p0, ::java::lang::ClassProxy p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "methodType", "(Ljava/lang/Class;Ljava/lang/Class;)Ljava/lang/invoke/MethodType;" );
	return ::java::lang::invoke::MethodTypeProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, static_cast<jclass>( p0 ), static_cast<jclass>( p1 ) )  );
}

::java::lang::invoke::MethodTypeProxy MethodTypeProxy::methodType(::java::lang::ClassProxy p0, ::java::lang::ClassProxy p1, ::net::sourceforge::jnipp::PA<::java::lang::ClassProxy>::ProxyArray<1> p2)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "methodType", "(Ljava/lang/Class;Ljava/lang/Class;[Ljava/lang/Class;)Ljava/lang/invoke/MethodType;" );
	return ::java::lang::invoke::MethodTypeProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, static_cast<jclass>( p0 ), static_cast<jclass>( p1 ), static_cast<jobjectArray>( p2 ) )  );
}

::java::lang::invoke::MethodTypeProxy MethodTypeProxy::methodType(::java::lang::ClassProxy p0, ::net::sourceforge::jnipp::PA<::java::lang::ClassProxy>::ProxyArray<1> p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "methodType", "(Ljava/lang/Class;[Ljava/lang/Class;)Ljava/lang/invoke/MethodType;" );
	return ::java::lang::invoke::MethodTypeProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, static_cast<jclass>( p0 ), static_cast<jobjectArray>( p1 ) )  );
}

::java::lang::invoke::MethodTypeProxy MethodTypeProxy::methodType(::java::lang::ClassProxy p0, ::java::lang::invoke::MethodTypeProxy p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "methodType", "(Ljava/lang/Class;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/MethodType;" );
	return ::java::lang::invoke::MethodTypeProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, static_cast<jclass>( p0 ), static_cast<jobject>( p1 ) )  );
}

::java::lang::invoke::MethodTypeProxy MethodTypeProxy::methodType(::java::lang::ClassProxy p0, ::java::util::ListProxy p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "methodType", "(Ljava/lang/Class;Ljava/util/List;)Ljava/lang/invoke/MethodType;" );
	return ::java::lang::invoke::MethodTypeProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, static_cast<jclass>( p0 ), static_cast<jobject>( p1 ) )  );
}

