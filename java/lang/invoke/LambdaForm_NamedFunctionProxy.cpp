#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "LambdaForm_NamedFunctionProxy.h"

// includes for parameter and return type proxy classes
#include "java\lang\ObjectProxy.h"
#include "java\lang\invoke\MethodHandleImpl_IntrinsicProxy.h"
#include "java\lang\invoke\MemberNameProxy.h"
#include "java\lang\invoke\MethodHandleProxy.h"
#include "java\lang\invoke\MethodTypeProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::lang::invoke;


std::string LambdaForm_NamedFunctionProxy::className = "java/lang/invoke/LambdaForm$NamedFunction";
jclass LambdaForm_NamedFunctionProxy::objectClass = NULL;

jclass LambdaForm_NamedFunctionProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

LambdaForm_NamedFunctionProxy::LambdaForm_NamedFunctionProxy(void* unused)
{
}

jobject LambdaForm_NamedFunctionProxy::_getPeerObject() const
{
	return peerObject;
}

jclass LambdaForm_NamedFunctionProxy::getObjectClass()
{
	return _getObjectClass();
}

LambdaForm_NamedFunctionProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
LambdaForm_NamedFunctionProxy::LambdaForm_NamedFunctionProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

LambdaForm_NamedFunctionProxy::~LambdaForm_NamedFunctionProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

LambdaForm_NamedFunctionProxy& LambdaForm_NamedFunctionProxy::operator=(const LambdaForm_NamedFunctionProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
jboolean LambdaForm_NamedFunctionProxy::equals(::java::lang::ObjectProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "equals", "(Ljava/lang/Object;)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

jboolean LambdaForm_NamedFunctionProxy::isConstantZero()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "isConstantZero", "()Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid );
}

jboolean LambdaForm_NamedFunctionProxy::isIdentity()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "isIdentity", "()Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid );
}

jint LambdaForm_NamedFunctionProxy::hashCode()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "hashCode", "()I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid );
}

::net::sourceforge::jnipp::JStringHelper LambdaForm_NamedFunctionProxy::toString()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "toString", "()Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::lang::invoke::MethodHandleImpl_IntrinsicProxy LambdaForm_NamedFunctionProxy::intrinsicName()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "intrinsicName", "()Ljava/lang/invoke/MethodHandleImpl$Intrinsic;" );
	return ::java::lang::invoke::MethodHandleImpl_IntrinsicProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

