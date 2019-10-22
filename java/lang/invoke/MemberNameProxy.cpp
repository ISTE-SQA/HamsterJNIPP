#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "MemberNameProxy.h"

// includes for parameter and return type proxy classes
#include "java\lang\ClassProxy.h"
#include "java\lang\ObjectProxy.h"
#include "java\lang\invoke\MethodTypeProxy.h"
#include "java\lang\reflect\ConstructorProxy.h"
#include "java\lang\reflect\FieldProxy.h"
#include "java\lang\reflect\MethodProxy.h"
#include "java\lang\ClassLoaderProxy.h"
#include "java\lang\IllegalAccessExceptionProxy.h"
#include "java\lang\ReflectiveOperationExceptionProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::lang::invoke;


std::string MemberNameProxy::className = "java/lang/invoke/MemberName";
jclass MemberNameProxy::objectClass = NULL;

jclass MemberNameProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

MemberNameProxy::MemberNameProxy(void* unused)
{
}

jobject MemberNameProxy::_getPeerObject() const
{
	return peerObject;
}

jclass MemberNameProxy::getObjectClass()
{
	return _getObjectClass();
}

MemberNameProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
MemberNameProxy::MemberNameProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

MemberNameProxy::MemberNameProxy(jbyte p0, ::java::lang::ClassProxy p1, ::net::sourceforge::jnipp::JStringHelper p2, ::java::lang::ObjectProxy p3)
{
	jmethodID mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "<init>", "(BLjava/lang/Class;Ljava/lang/String;Ljava/lang/Object;)V" );
	peerObject = JNIEnvHelper::NewGlobalRef( JNIEnvHelper::NewObject( _getObjectClass(), mid, p0, static_cast<jclass>( p1 ), static_cast<jstring>( p2 ), static_cast<jobject>( p3 ) ) );
}

MemberNameProxy::MemberNameProxy(::java::lang::ClassProxy p0)
{
	jmethodID mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "<init>", "(Ljava/lang/Class;)V" );
	peerObject = JNIEnvHelper::NewGlobalRef( JNIEnvHelper::NewObject( _getObjectClass(), mid, static_cast<jclass>( p0 ) ) );
}

MemberNameProxy::MemberNameProxy(::java::lang::ClassProxy p0, ::net::sourceforge::jnipp::JStringHelper p1, ::java::lang::ClassProxy p2, jbyte p3)
{
	jmethodID mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "<init>", "(Ljava/lang/Class;Ljava/lang/String;Ljava/lang/Class;B)V" );
	peerObject = JNIEnvHelper::NewGlobalRef( JNIEnvHelper::NewObject( _getObjectClass(), mid, static_cast<jclass>( p0 ), static_cast<jstring>( p1 ), static_cast<jclass>( p2 ), p3 ) );
}

MemberNameProxy::MemberNameProxy(::java::lang::ClassProxy p0, ::net::sourceforge::jnipp::JStringHelper p1, ::java::lang::invoke::MethodTypeProxy p2, jbyte p3)
{
	jmethodID mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "<init>", "(Ljava/lang/Class;Ljava/lang/String;Ljava/lang/invoke/MethodType;B)V" );
	peerObject = JNIEnvHelper::NewGlobalRef( JNIEnvHelper::NewObject( _getObjectClass(), mid, static_cast<jclass>( p0 ), static_cast<jstring>( p1 ), static_cast<jobject>( p2 ), p3 ) );
}

MemberNameProxy::MemberNameProxy(::java::lang::reflect::ConstructorProxy p0)
{
	jmethodID mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "<init>", "(Ljava/lang/reflect/Constructor;)V" );
	peerObject = JNIEnvHelper::NewGlobalRef( JNIEnvHelper::NewObject( _getObjectClass(), mid, static_cast<jobject>( p0 ) ) );
}

MemberNameProxy::MemberNameProxy(::java::lang::reflect::FieldProxy p0)
{
	jmethodID mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "<init>", "(Ljava/lang/reflect/Field;)V" );
	peerObject = JNIEnvHelper::NewGlobalRef( JNIEnvHelper::NewObject( _getObjectClass(), mid, static_cast<jobject>( p0 ) ) );
}

MemberNameProxy::MemberNameProxy(::java::lang::reflect::FieldProxy p0, jboolean p1)
{
	jmethodID mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "<init>", "(Ljava/lang/reflect/Field;Z)V" );
	peerObject = JNIEnvHelper::NewGlobalRef( JNIEnvHelper::NewObject( _getObjectClass(), mid, static_cast<jobject>( p0 ), p1 ) );
}

MemberNameProxy::MemberNameProxy(::java::lang::reflect::MethodProxy p0)
{
	jmethodID mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "<init>", "(Ljava/lang/reflect/Method;)V" );
	peerObject = JNIEnvHelper::NewGlobalRef( JNIEnvHelper::NewObject( _getObjectClass(), mid, static_cast<jobject>( p0 ) ) );
}

MemberNameProxy::MemberNameProxy(::java::lang::reflect::MethodProxy p0, jboolean p1)
{
	jmethodID mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "<init>", "(Ljava/lang/reflect/Method;Z)V" );
	peerObject = JNIEnvHelper::NewGlobalRef( JNIEnvHelper::NewObject( _getObjectClass(), mid, static_cast<jobject>( p0 ), p1 ) );
}

MemberNameProxy::~MemberNameProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

MemberNameProxy& MemberNameProxy::operator=(const MemberNameProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
jboolean MemberNameProxy::canBeStaticallyBound()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "canBeStaticallyBound", "()Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid );
}

jboolean MemberNameProxy::equals(::java::lang::ObjectProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "equals", "(Ljava/lang/Object;)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

jboolean MemberNameProxy::equals(::java::lang::invoke::MemberNameProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "equals", "(Ljava/lang/invoke/MemberName;)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

jboolean MemberNameProxy::hasReceiverTypeDispatch()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "hasReceiverTypeDispatch", "()Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid );
}

jboolean MemberNameProxy::isAbstract()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "isAbstract", "()Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid );
}

jboolean MemberNameProxy::isAccessibleFrom(::java::lang::ClassProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "isAccessibleFrom", "(Ljava/lang/Class;)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, static_cast<jclass>( p0 ) );
}

jboolean MemberNameProxy::isBridge()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "isBridge", "()Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid );
}

jboolean MemberNameProxy::isCallerSensitive()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "isCallerSensitive", "()Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid );
}

jboolean MemberNameProxy::isConstructor()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "isConstructor", "()Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid );
}

jboolean MemberNameProxy::isField()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "isField", "()Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid );
}

jboolean MemberNameProxy::isFieldOrMethod()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "isFieldOrMethod", "()Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid );
}

jboolean MemberNameProxy::isFinal()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "isFinal", "()Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid );
}

jboolean MemberNameProxy::isGetter()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "isGetter", "()Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid );
}

jboolean MemberNameProxy::isInvocable()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "isInvocable", "()Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid );
}

jboolean MemberNameProxy::isMethod()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "isMethod", "()Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid );
}

jboolean MemberNameProxy::isMethodHandleInvoke()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "isMethodHandleInvoke", "()Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid );
}

jboolean MemberNameProxy::isNative()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "isNative", "()Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid );
}

jboolean MemberNameProxy::isPackage()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "isPackage", "()Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid );
}

jboolean MemberNameProxy::isPrivate()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "isPrivate", "()Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid );
}

jboolean MemberNameProxy::isProtected()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "isProtected", "()Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid );
}

jboolean MemberNameProxy::isPublic()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "isPublic", "()Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid );
}

jboolean MemberNameProxy::isResolved()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "isResolved", "()Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid );
}

jboolean MemberNameProxy::isSetter()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "isSetter", "()Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid );
}

jboolean MemberNameProxy::isStatic()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "isStatic", "()Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid );
}

jboolean MemberNameProxy::isSynthetic()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "isSynthetic", "()Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid );
}

jboolean MemberNameProxy::isType()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "isType", "()Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid );
}

jboolean MemberNameProxy::isVarargs()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "isVarargs", "()Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid );
}

jboolean MemberNameProxy::isVolatile()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "isVolatile", "()Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid );
}

jbyte MemberNameProxy::getReferenceKind()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getReferenceKind", "()B" );
	return JNIEnvHelper::CallByteMethod( _getPeerObject(), mid );
}

jint MemberNameProxy::getModifiers()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getModifiers", "()I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid );
}

jint MemberNameProxy::hashCode()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "hashCode", "()I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid );
}

::java::lang::ClassProxy MemberNameProxy::getDeclaringClass()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getDeclaringClass", "()Ljava/lang/Class;" );
	return ::java::lang::ClassProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::lang::ClassProxy MemberNameProxy::getFieldType()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getFieldType", "()Ljava/lang/Class;" );
	return ::java::lang::ClassProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::lang::ClassProxy MemberNameProxy::getReturnType()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getReturnType", "()Ljava/lang/Class;" );
	return ::java::lang::ClassProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::lang::ClassLoaderProxy MemberNameProxy::getClassLoader()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getClassLoader", "()Ljava/lang/ClassLoader;" );
	return ::java::lang::ClassLoaderProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::net::sourceforge::jnipp::PA<::java::lang::ClassProxy>::ProxyArray<1> MemberNameProxy::getParameterTypes()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getParameterTypes", "()[Ljava/lang/Class;" );
	return ::net::sourceforge::jnipp::PA<::java::lang::ClassProxy>::ProxyArray<1>( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::lang::IllegalAccessExceptionProxy MemberNameProxy::makeAccessException(::net::sourceforge::jnipp::JStringHelper p0, ::java::lang::ObjectProxy p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "makeAccessException", "(Ljava/lang/String;Ljava/lang/Object;)Ljava/lang/IllegalAccessException;" );
	return ::java::lang::IllegalAccessExceptionProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jstring>( p0 ), static_cast<jobject>( p1 ) )  );
}

::java::lang::ObjectProxy MemberNameProxy::getType()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getType", "()Ljava/lang/Object;" );
	return ::java::lang::ObjectProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::lang::ReflectiveOperationExceptionProxy MemberNameProxy::makeAccessException()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "makeAccessException", "()Ljava/lang/ReflectiveOperationException;" );
	return ::java::lang::ReflectiveOperationExceptionProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::net::sourceforge::jnipp::JStringHelper MemberNameProxy::getName()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getName", "()Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::net::sourceforge::jnipp::JStringHelper MemberNameProxy::getSignature()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getSignature", "()Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::net::sourceforge::jnipp::JStringHelper MemberNameProxy::toString()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "toString", "()Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::lang::invoke::MemberNameProxy MemberNameProxy::asConstructor()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "asConstructor", "()Ljava/lang/invoke/MemberName;" );
	return ::java::lang::invoke::MemberNameProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::lang::invoke::MemberNameProxy MemberNameProxy::asNormalOriginal()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "asNormalOriginal", "()Ljava/lang/invoke/MemberName;" );
	return ::java::lang::invoke::MemberNameProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::lang::invoke::MemberNameProxy MemberNameProxy::asSetter()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "asSetter", "()Ljava/lang/invoke/MemberName;" );
	return ::java::lang::invoke::MemberNameProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::lang::invoke::MemberNameProxy MemberNameProxy::asSpecial()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "asSpecial", "()Ljava/lang/invoke/MemberName;" );
	return ::java::lang::invoke::MemberNameProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::lang::invoke::MemberNameProxy MemberNameProxy::getDefinition()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getDefinition", "()Ljava/lang/invoke/MemberName;" );
	return ::java::lang::invoke::MemberNameProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::lang::invoke::MethodTypeProxy MemberNameProxy::getInvocationType()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getInvocationType", "()Ljava/lang/invoke/MethodType;" );
	return ::java::lang::invoke::MethodTypeProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::lang::invoke::MethodTypeProxy MemberNameProxy::getMethodOrFieldType()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getMethodOrFieldType", "()Ljava/lang/invoke/MethodType;" );
	return ::java::lang::invoke::MethodTypeProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::lang::invoke::MethodTypeProxy MemberNameProxy::getMethodType()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getMethodType", "()Ljava/lang/invoke/MethodType;" );
	return ::java::lang::invoke::MethodTypeProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

jboolean MemberNameProxy::isMethodHandleInvokeName(::net::sourceforge::jnipp::JStringHelper p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "isMethodHandleInvokeName", "(Ljava/lang/String;)Z" );
	return JNIEnvHelper::CallStaticBooleanMethod( _getObjectClass(), mid, static_cast<jstring>( p0 ) );
}

