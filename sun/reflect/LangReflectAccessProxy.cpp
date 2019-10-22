#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "LangReflectAccessProxy.h"

// includes for parameter and return type proxy classes
#include "java\lang\reflect\ConstructorProxy.h"
#include "java\lang\reflect\ExecutableProxy.h"
#include "java\lang\ClassProxy.h"
#include "java\lang\reflect\FieldProxy.h"
#include "java\lang\reflect\MethodProxy.h"
#include "sun\reflect\ConstructorAccessorProxy.h"
#include "sun\reflect\MethodAccessorProxy.h"

using namespace net::sourceforge::jnipp;
using namespace sun::reflect;


std::string LangReflectAccessProxy::className = "sun/reflect/LangReflectAccess";
jclass LangReflectAccessProxy::objectClass = NULL;

jclass LangReflectAccessProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

LangReflectAccessProxy::LangReflectAccessProxy(void* unused)
{
}

jobject LangReflectAccessProxy::_getPeerObject() const
{
	return peerObject;
}

jclass LangReflectAccessProxy::getObjectClass()
{
	return _getObjectClass();
}

LangReflectAccessProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
LangReflectAccessProxy::LangReflectAccessProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

LangReflectAccessProxy::~LangReflectAccessProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

LangReflectAccessProxy& LangReflectAccessProxy::operator=(const LangReflectAccessProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
::net::sourceforge::jnipp::JByteArrayHelper<1> LangReflectAccessProxy::getConstructorAnnotations(::java::lang::reflect::ConstructorProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getConstructorAnnotations", "(Ljava/lang/reflect/Constructor;)[B" );
	return ::net::sourceforge::jnipp::JByteArrayHelper<1>( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::net::sourceforge::jnipp::JByteArrayHelper<1> LangReflectAccessProxy::getConstructorParameterAnnotations(::java::lang::reflect::ConstructorProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getConstructorParameterAnnotations", "(Ljava/lang/reflect/Constructor;)[B" );
	return ::net::sourceforge::jnipp::JByteArrayHelper<1>( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::net::sourceforge::jnipp::JByteArrayHelper<1> LangReflectAccessProxy::getExecutableTypeAnnotationBytes(::java::lang::reflect::ExecutableProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getExecutableTypeAnnotationBytes", "(Ljava/lang/reflect/Executable;)[B" );
	return ::net::sourceforge::jnipp::JByteArrayHelper<1>( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

jint LangReflectAccessProxy::getConstructorSlot(::java::lang::reflect::ConstructorProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getConstructorSlot", "(Ljava/lang/reflect/Constructor;)I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

::net::sourceforge::jnipp::JStringHelper LangReflectAccessProxy::getConstructorSignature(::java::lang::reflect::ConstructorProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getConstructorSignature", "(Ljava/lang/reflect/Constructor;)Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::java::lang::reflect::ConstructorProxy LangReflectAccessProxy::copyConstructor(::java::lang::reflect::ConstructorProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "copyConstructor", "(Ljava/lang/reflect/Constructor;)Ljava/lang/reflect/Constructor;" );
	return ::java::lang::reflect::ConstructorProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::java::lang::reflect::ConstructorProxy LangReflectAccessProxy::newConstructor(::java::lang::ClassProxy p0, ::net::sourceforge::jnipp::PA<::java::lang::ClassProxy>::ProxyArray<1> p1, ::net::sourceforge::jnipp::PA<::java::lang::ClassProxy>::ProxyArray<1> p2, jint p3, jint p4, ::net::sourceforge::jnipp::JStringHelper p5, ::net::sourceforge::jnipp::JByteArrayHelper<1> p6, ::net::sourceforge::jnipp::JByteArrayHelper<1> p7)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "newConstructor", "(Ljava/lang/Class;[Ljava/lang/Class;[Ljava/lang/Class;IILjava/lang/String;[B[B)Ljava/lang/reflect/Constructor;" );
	return ::java::lang::reflect::ConstructorProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jclass>( p0 ), static_cast<jobjectArray>( p1 ), static_cast<jobjectArray>( p2 ), p3, p4, static_cast<jstring>( p5 ), static_cast<jbyteArray>( p6 ), static_cast<jbyteArray>( p7 ) )  );
}

::java::lang::reflect::FieldProxy LangReflectAccessProxy::copyField(::java::lang::reflect::FieldProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "copyField", "(Ljava/lang/reflect/Field;)Ljava/lang/reflect/Field;" );
	return ::java::lang::reflect::FieldProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::java::lang::reflect::FieldProxy LangReflectAccessProxy::newField(::java::lang::ClassProxy p0, ::net::sourceforge::jnipp::JStringHelper p1, ::java::lang::ClassProxy p2, jint p3, jint p4, ::net::sourceforge::jnipp::JStringHelper p5, ::net::sourceforge::jnipp::JByteArrayHelper<1> p6)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "newField", "(Ljava/lang/Class;Ljava/lang/String;Ljava/lang/Class;IILjava/lang/String;[B)Ljava/lang/reflect/Field;" );
	return ::java::lang::reflect::FieldProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jclass>( p0 ), static_cast<jstring>( p1 ), static_cast<jclass>( p2 ), p3, p4, static_cast<jstring>( p5 ), static_cast<jbyteArray>( p6 ) )  );
}

::java::lang::reflect::MethodProxy LangReflectAccessProxy::copyMethod(::java::lang::reflect::MethodProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "copyMethod", "(Ljava/lang/reflect/Method;)Ljava/lang/reflect/Method;" );
	return ::java::lang::reflect::MethodProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::java::lang::reflect::MethodProxy LangReflectAccessProxy::newMethod(::java::lang::ClassProxy p0, ::net::sourceforge::jnipp::JStringHelper p1, ::net::sourceforge::jnipp::PA<::java::lang::ClassProxy>::ProxyArray<1> p2, ::java::lang::ClassProxy p3, ::net::sourceforge::jnipp::PA<::java::lang::ClassProxy>::ProxyArray<1> p4, jint p5, jint p6, ::net::sourceforge::jnipp::JStringHelper p7, ::net::sourceforge::jnipp::JByteArrayHelper<1> p8, ::net::sourceforge::jnipp::JByteArrayHelper<1> p9, ::net::sourceforge::jnipp::JByteArrayHelper<1> p10)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "newMethod", "(Ljava/lang/Class;Ljava/lang/String;[Ljava/lang/Class;Ljava/lang/Class;[Ljava/lang/Class;IILjava/lang/String;[B[B[B)Ljava/lang/reflect/Method;" );
	return ::java::lang::reflect::MethodProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jclass>( p0 ), static_cast<jstring>( p1 ), static_cast<jobjectArray>( p2 ), static_cast<jclass>( p3 ), static_cast<jobjectArray>( p4 ), p5, p6, static_cast<jstring>( p7 ), static_cast<jbyteArray>( p8 ), static_cast<jbyteArray>( p9 ), static_cast<jbyteArray>( p10 ) )  );
}

::sun::reflect::ConstructorAccessorProxy LangReflectAccessProxy::getConstructorAccessor(::java::lang::reflect::ConstructorProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getConstructorAccessor", "(Ljava/lang/reflect/Constructor;)Lsun/reflect/ConstructorAccessor;" );
	return ::sun::reflect::ConstructorAccessorProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::sun::reflect::MethodAccessorProxy LangReflectAccessProxy::getMethodAccessor(::java::lang::reflect::MethodProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getMethodAccessor", "(Ljava/lang/reflect/Method;)Lsun/reflect/MethodAccessor;" );
	return ::sun::reflect::MethodAccessorProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

void LangReflectAccessProxy::setConstructorAccessor(::java::lang::reflect::ConstructorProxy p0, ::sun::reflect::ConstructorAccessorProxy p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "setConstructorAccessor", "(Ljava/lang/reflect/Constructor;Lsun/reflect/ConstructorAccessor;)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), static_cast<jobject>( p1 ) );
}

void LangReflectAccessProxy::setMethodAccessor(::java::lang::reflect::MethodProxy p0, ::sun::reflect::MethodAccessorProxy p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "setMethodAccessor", "(Ljava/lang/reflect/Method;Lsun/reflect/MethodAccessor;)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), static_cast<jobject>( p1 ) );
}

