#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "ExecutableProxy.h"

// includes for parameter and return type proxy classes
#include "java\lang\ClassProxy.h"
#include "java\lang\annotation\AnnotationProxy.h"
#include "java\lang\reflect\AnnotatedTypeProxy.h"
#include "java\lang\reflect\TypeVariableProxy.h"
#include "java\lang\reflect\ParameterProxy.h"
#include "java\lang\reflect\TypeProxy.h"
#include "java\util\MapProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::lang::reflect;


std::string ExecutableProxy::className = "java/lang/reflect/Executable";
jclass ExecutableProxy::objectClass = NULL;

jclass ExecutableProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

ExecutableProxy::ExecutableProxy(void* unused)
{
}

jobject ExecutableProxy::_getPeerObject() const
{
	return peerObject;
}

jclass ExecutableProxy::getObjectClass()
{
	return _getObjectClass();
}

ExecutableProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
ExecutableProxy::ExecutableProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

ExecutableProxy::~ExecutableProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

ExecutableProxy& ExecutableProxy::operator=(const ExecutableProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
jint ExecutableProxy::getModifiers()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getModifiers", "()I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid );
}

::java::lang::ClassProxy ExecutableProxy::getDeclaringClass()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getDeclaringClass", "()Ljava/lang/Class;" );
	return ::java::lang::ClassProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::net::sourceforge::jnipp::PA<::java::lang::ClassProxy>::ProxyArray<1> ExecutableProxy::getExceptionTypes()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getExceptionTypes", "()[Ljava/lang/Class;" );
	return ::net::sourceforge::jnipp::PA<::java::lang::ClassProxy>::ProxyArray<1>( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::net::sourceforge::jnipp::PA<::java::lang::ClassProxy>::ProxyArray<1> ExecutableProxy::getParameterTypes()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getParameterTypes", "()[Ljava/lang/Class;" );
	return ::net::sourceforge::jnipp::PA<::java::lang::ClassProxy>::ProxyArray<1>( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::net::sourceforge::jnipp::JStringHelper ExecutableProxy::getName()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getName", "()Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::net::sourceforge::jnipp::JStringHelper ExecutableProxy::toGenericString()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "toGenericString", "()Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::net::sourceforge::jnipp::PA<::java::lang::annotation::AnnotationProxy>::ProxyArray<2> ExecutableProxy::getParameterAnnotations()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getParameterAnnotations", "()[[Ljava/lang/annotation/Annotation;" );
	return ::net::sourceforge::jnipp::PA<::java::lang::annotation::AnnotationProxy>::ProxyArray<2>( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::lang::reflect::AnnotatedTypeProxy ExecutableProxy::getAnnotatedReturnType()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getAnnotatedReturnType", "()Ljava/lang/reflect/AnnotatedType;" );
	return ::java::lang::reflect::AnnotatedTypeProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::net::sourceforge::jnipp::PA<::java::lang::reflect::TypeVariableProxy>::ProxyArray<1> ExecutableProxy::getTypeParameters()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getTypeParameters", "()[Ljava/lang/reflect/TypeVariable;" );
	return ::net::sourceforge::jnipp::PA<::java::lang::reflect::TypeVariableProxy>::ProxyArray<1>( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

jboolean ExecutableProxy::isSynthetic()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "isSynthetic", "()Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid );
}

jboolean ExecutableProxy::isVarArgs()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "isVarArgs", "()Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid );
}

jint ExecutableProxy::getParameterCount()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getParameterCount", "()I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid );
}

::java::lang::annotation::AnnotationProxy ExecutableProxy::getAnnotation(::java::lang::ClassProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getAnnotation", "(Ljava/lang/Class;)Ljava/lang/annotation/Annotation;" );
	return ::java::lang::annotation::AnnotationProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jclass>( p0 ) )  );
}

::net::sourceforge::jnipp::PA<::java::lang::annotation::AnnotationProxy>::ProxyArray<1> ExecutableProxy::getAnnotationsByType(::java::lang::ClassProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getAnnotationsByType", "(Ljava/lang/Class;)[Ljava/lang/annotation/Annotation;" );
	return ::net::sourceforge::jnipp::PA<::java::lang::annotation::AnnotationProxy>::ProxyArray<1>( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jclass>( p0 ) )  );
}

::net::sourceforge::jnipp::PA<::java::lang::annotation::AnnotationProxy>::ProxyArray<1> ExecutableProxy::getDeclaredAnnotations()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getDeclaredAnnotations", "()[Ljava/lang/annotation/Annotation;" );
	return ::net::sourceforge::jnipp::PA<::java::lang::annotation::AnnotationProxy>::ProxyArray<1>( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::lang::reflect::AnnotatedTypeProxy ExecutableProxy::getAnnotatedReceiverType()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getAnnotatedReceiverType", "()Ljava/lang/reflect/AnnotatedType;" );
	return ::java::lang::reflect::AnnotatedTypeProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::net::sourceforge::jnipp::PA<::java::lang::reflect::AnnotatedTypeProxy>::ProxyArray<1> ExecutableProxy::getAnnotatedExceptionTypes()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getAnnotatedExceptionTypes", "()[Ljava/lang/reflect/AnnotatedType;" );
	return ::net::sourceforge::jnipp::PA<::java::lang::reflect::AnnotatedTypeProxy>::ProxyArray<1>( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::net::sourceforge::jnipp::PA<::java::lang::reflect::AnnotatedTypeProxy>::ProxyArray<1> ExecutableProxy::getAnnotatedParameterTypes()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getAnnotatedParameterTypes", "()[Ljava/lang/reflect/AnnotatedType;" );
	return ::net::sourceforge::jnipp::PA<::java::lang::reflect::AnnotatedTypeProxy>::ProxyArray<1>( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::net::sourceforge::jnipp::PA<::java::lang::reflect::ParameterProxy>::ProxyArray<1> ExecutableProxy::getParameters()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getParameters", "()[Ljava/lang/reflect/Parameter;" );
	return ::net::sourceforge::jnipp::PA<::java::lang::reflect::ParameterProxy>::ProxyArray<1>( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::net::sourceforge::jnipp::PA<::java::lang::reflect::TypeProxy>::ProxyArray<1> ExecutableProxy::getGenericExceptionTypes()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getGenericExceptionTypes", "()[Ljava/lang/reflect/Type;" );
	return ::net::sourceforge::jnipp::PA<::java::lang::reflect::TypeProxy>::ProxyArray<1>( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::net::sourceforge::jnipp::PA<::java::lang::reflect::TypeProxy>::ProxyArray<1> ExecutableProxy::getGenericParameterTypes()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getGenericParameterTypes", "()[Ljava/lang/reflect/Type;" );
	return ::net::sourceforge::jnipp::PA<::java::lang::reflect::TypeProxy>::ProxyArray<1>( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

