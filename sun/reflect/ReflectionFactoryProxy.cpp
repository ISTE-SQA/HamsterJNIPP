#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "ReflectionFactoryProxy.h"

// includes for parameter and return type proxy classes
#include "java\lang\reflect\ExecutableProxy.h"
#include "java\lang\ClassProxy.h"
#include "java\io\OptionalDataExceptionProxy.h"
#include "java\lang\invoke\MethodHandleProxy.h"
#include "java\lang\reflect\ConstructorProxy.h"
#include "java\lang\reflect\FieldProxy.h"
#include "java\lang\reflect\MethodProxy.h"
#include "sun\reflect\ConstructorAccessorProxy.h"
#include "sun\reflect\FieldAccessorProxy.h"
#include "sun\reflect\MethodAccessorProxy.h"
#include "sun\reflect\LangReflectAccessProxy.h"
#include "java\security\PermissionProxy.h"

using namespace net::sourceforge::jnipp;
using namespace sun::reflect;


std::string ReflectionFactoryProxy::className = "sun/reflect/ReflectionFactory";
jclass ReflectionFactoryProxy::objectClass = NULL;

jclass ReflectionFactoryProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

ReflectionFactoryProxy::ReflectionFactoryProxy(void* unused)
{
}

jobject ReflectionFactoryProxy::_getPeerObject() const
{
	return peerObject;
}

jclass ReflectionFactoryProxy::getObjectClass()
{
	return _getObjectClass();
}

ReflectionFactoryProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
ReflectionFactoryProxy::ReflectionFactoryProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

ReflectionFactoryProxy::~ReflectionFactoryProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

ReflectionFactoryProxy& ReflectionFactoryProxy::operator=(const ReflectionFactoryProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
::net::sourceforge::jnipp::JByteArrayHelper<1> ReflectionFactoryProxy::getExecutableTypeAnnotationBytes(::java::lang::reflect::ExecutableProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getExecutableTypeAnnotationBytes", "(Ljava/lang/reflect/Executable;)[B" );
	return ::net::sourceforge::jnipp::JByteArrayHelper<1>( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

jboolean ReflectionFactoryProxy::hasStaticInitializerForSerialization(::java::lang::ClassProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "hasStaticInitializerForSerialization", "(Ljava/lang/Class;)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, static_cast<jclass>( p0 ) );
}

::java::io::OptionalDataExceptionProxy ReflectionFactoryProxy::newOptionalDataExceptionForSerialization(jboolean p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "newOptionalDataExceptionForSerialization", "(Z)Ljava/io/OptionalDataException;" );
	return ::java::io::OptionalDataExceptionProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0 )  );
}

::java::lang::invoke::MethodHandleProxy ReflectionFactoryProxy::readObjectForSerialization(::java::lang::ClassProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "readObjectForSerialization", "(Ljava/lang/Class;)Ljava/lang/invoke/MethodHandle;" );
	return ::java::lang::invoke::MethodHandleProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jclass>( p0 ) )  );
}

::java::lang::invoke::MethodHandleProxy ReflectionFactoryProxy::readObjectNoDataForSerialization(::java::lang::ClassProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "readObjectNoDataForSerialization", "(Ljava/lang/Class;)Ljava/lang/invoke/MethodHandle;" );
	return ::java::lang::invoke::MethodHandleProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jclass>( p0 ) )  );
}

::java::lang::invoke::MethodHandleProxy ReflectionFactoryProxy::readResolveForSerialization(::java::lang::ClassProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "readResolveForSerialization", "(Ljava/lang/Class;)Ljava/lang/invoke/MethodHandle;" );
	return ::java::lang::invoke::MethodHandleProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jclass>( p0 ) )  );
}

::java::lang::invoke::MethodHandleProxy ReflectionFactoryProxy::writeObjectForSerialization(::java::lang::ClassProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "writeObjectForSerialization", "(Ljava/lang/Class;)Ljava/lang/invoke/MethodHandle;" );
	return ::java::lang::invoke::MethodHandleProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jclass>( p0 ) )  );
}

::java::lang::invoke::MethodHandleProxy ReflectionFactoryProxy::writeReplaceForSerialization(::java::lang::ClassProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "writeReplaceForSerialization", "(Ljava/lang/Class;)Ljava/lang/invoke/MethodHandle;" );
	return ::java::lang::invoke::MethodHandleProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jclass>( p0 ) )  );
}

::java::lang::reflect::ConstructorProxy ReflectionFactoryProxy::newConstructorForExternalization(::java::lang::ClassProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "newConstructorForExternalization", "(Ljava/lang/Class;)Ljava/lang/reflect/Constructor;" );
	return ::java::lang::reflect::ConstructorProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jclass>( p0 ) )  );
}

::java::lang::reflect::ConstructorProxy ReflectionFactoryProxy::newConstructorForSerialization(::java::lang::ClassProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "newConstructorForSerialization", "(Ljava/lang/Class;)Ljava/lang/reflect/Constructor;" );
	return ::java::lang::reflect::ConstructorProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jclass>( p0 ) )  );
}

::java::lang::reflect::ConstructorProxy ReflectionFactoryProxy::copyConstructor(::java::lang::reflect::ConstructorProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "copyConstructor", "(Ljava/lang/reflect/Constructor;)Ljava/lang/reflect/Constructor;" );
	return ::java::lang::reflect::ConstructorProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::java::lang::reflect::ConstructorProxy ReflectionFactoryProxy::newConstructor(::java::lang::ClassProxy p0, ::net::sourceforge::jnipp::PA<::java::lang::ClassProxy>::ProxyArray<1> p1, ::net::sourceforge::jnipp::PA<::java::lang::ClassProxy>::ProxyArray<1> p2, jint p3, jint p4, ::net::sourceforge::jnipp::JStringHelper p5, ::net::sourceforge::jnipp::JByteArrayHelper<1> p6, ::net::sourceforge::jnipp::JByteArrayHelper<1> p7)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "newConstructor", "(Ljava/lang/Class;[Ljava/lang/Class;[Ljava/lang/Class;IILjava/lang/String;[B[B)Ljava/lang/reflect/Constructor;" );
	return ::java::lang::reflect::ConstructorProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jclass>( p0 ), static_cast<jobjectArray>( p1 ), static_cast<jobjectArray>( p2 ), p3, p4, static_cast<jstring>( p5 ), static_cast<jbyteArray>( p6 ), static_cast<jbyteArray>( p7 ) )  );
}

::java::lang::reflect::ConstructorProxy ReflectionFactoryProxy::newConstructorForSerialization(::java::lang::ClassProxy p0, ::java::lang::reflect::ConstructorProxy p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "newConstructorForSerialization", "(Ljava/lang/Class;Ljava/lang/reflect/Constructor;)Ljava/lang/reflect/Constructor;" );
	return ::java::lang::reflect::ConstructorProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jclass>( p0 ), static_cast<jobject>( p1 ) )  );
}

::java::lang::reflect::FieldProxy ReflectionFactoryProxy::copyField(::java::lang::reflect::FieldProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "copyField", "(Ljava/lang/reflect/Field;)Ljava/lang/reflect/Field;" );
	return ::java::lang::reflect::FieldProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::java::lang::reflect::FieldProxy ReflectionFactoryProxy::newField(::java::lang::ClassProxy p0, ::net::sourceforge::jnipp::JStringHelper p1, ::java::lang::ClassProxy p2, jint p3, jint p4, ::net::sourceforge::jnipp::JStringHelper p5, ::net::sourceforge::jnipp::JByteArrayHelper<1> p6)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "newField", "(Ljava/lang/Class;Ljava/lang/String;Ljava/lang/Class;IILjava/lang/String;[B)Ljava/lang/reflect/Field;" );
	return ::java::lang::reflect::FieldProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jclass>( p0 ), static_cast<jstring>( p1 ), static_cast<jclass>( p2 ), p3, p4, static_cast<jstring>( p5 ), static_cast<jbyteArray>( p6 ) )  );
}

::java::lang::reflect::MethodProxy ReflectionFactoryProxy::copyMethod(::java::lang::reflect::MethodProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "copyMethod", "(Ljava/lang/reflect/Method;)Ljava/lang/reflect/Method;" );
	return ::java::lang::reflect::MethodProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::java::lang::reflect::MethodProxy ReflectionFactoryProxy::newMethod(::java::lang::ClassProxy p0, ::net::sourceforge::jnipp::JStringHelper p1, ::net::sourceforge::jnipp::PA<::java::lang::ClassProxy>::ProxyArray<1> p2, ::java::lang::ClassProxy p3, ::net::sourceforge::jnipp::PA<::java::lang::ClassProxy>::ProxyArray<1> p4, jint p5, jint p6, ::net::sourceforge::jnipp::JStringHelper p7, ::net::sourceforge::jnipp::JByteArrayHelper<1> p8, ::net::sourceforge::jnipp::JByteArrayHelper<1> p9, ::net::sourceforge::jnipp::JByteArrayHelper<1> p10)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "newMethod", "(Ljava/lang/Class;Ljava/lang/String;[Ljava/lang/Class;Ljava/lang/Class;[Ljava/lang/Class;IILjava/lang/String;[B[B[B)Ljava/lang/reflect/Method;" );
	return ::java::lang::reflect::MethodProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jclass>( p0 ), static_cast<jstring>( p1 ), static_cast<jobjectArray>( p2 ), static_cast<jclass>( p3 ), static_cast<jobjectArray>( p4 ), p5, p6, static_cast<jstring>( p7 ), static_cast<jbyteArray>( p8 ), static_cast<jbyteArray>( p9 ), static_cast<jbyteArray>( p10 ) )  );
}

::sun::reflect::ReflectionFactoryProxy ReflectionFactoryProxy::getReflectionFactory()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "getReflectionFactory", "()Lsun/reflect/ReflectionFactory;" );
	return ::sun::reflect::ReflectionFactoryProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid )  );
}

::sun::reflect::ConstructorAccessorProxy ReflectionFactoryProxy::getConstructorAccessor(::java::lang::reflect::ConstructorProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getConstructorAccessor", "(Ljava/lang/reflect/Constructor;)Lsun/reflect/ConstructorAccessor;" );
	return ::sun::reflect::ConstructorAccessorProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::sun::reflect::ConstructorAccessorProxy ReflectionFactoryProxy::newConstructorAccessor(::java::lang::reflect::ConstructorProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "newConstructorAccessor", "(Ljava/lang/reflect/Constructor;)Lsun/reflect/ConstructorAccessor;" );
	return ::sun::reflect::ConstructorAccessorProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::sun::reflect::FieldAccessorProxy ReflectionFactoryProxy::newFieldAccessor(::java::lang::reflect::FieldProxy p0, jboolean p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "newFieldAccessor", "(Ljava/lang/reflect/Field;Z)Lsun/reflect/FieldAccessor;" );
	return ::sun::reflect::FieldAccessorProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), p1 )  );
}

::sun::reflect::MethodAccessorProxy ReflectionFactoryProxy::getMethodAccessor(::java::lang::reflect::MethodProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getMethodAccessor", "(Ljava/lang/reflect/Method;)Lsun/reflect/MethodAccessor;" );
	return ::sun::reflect::MethodAccessorProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::sun::reflect::MethodAccessorProxy ReflectionFactoryProxy::newMethodAccessor(::java::lang::reflect::MethodProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "newMethodAccessor", "(Ljava/lang/reflect/Method;)Lsun/reflect/MethodAccessor;" );
	return ::sun::reflect::MethodAccessorProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

void ReflectionFactoryProxy::setConstructorAccessor(::java::lang::reflect::ConstructorProxy p0, ::sun::reflect::ConstructorAccessorProxy p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "setConstructorAccessor", "(Ljava/lang/reflect/Constructor;Lsun/reflect/ConstructorAccessor;)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), static_cast<jobject>( p1 ) );
}

void ReflectionFactoryProxy::setLangReflectAccess(::sun::reflect::LangReflectAccessProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "setLangReflectAccess", "(Lsun/reflect/LangReflectAccess;)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

void ReflectionFactoryProxy::setMethodAccessor(::java::lang::reflect::MethodProxy p0, ::sun::reflect::MethodAccessorProxy p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "setMethodAccessor", "(Ljava/lang/reflect/Method;Lsun/reflect/MethodAccessor;)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), static_cast<jobject>( p1 ) );
}

