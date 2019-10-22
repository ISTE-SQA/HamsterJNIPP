#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "LambdaFormProxy.h"

// includes for parameter and return type proxy classes
#include "java\lang\ObjectProxy.h"
#include "java\lang\invoke\MethodTypeProxy.h"
#include "java\lang\invoke\LambdaForm_NameProxy.h"
#include "java\lang\invoke\MethodHandleProxy.h"
#include "java\lang\invoke\MemberNameProxy.h"
#include "java\lang\invoke\LambdaForm_NamedFunctionProxy.h"
#include "java\lang\invoke\LambdaFormProxy.h"
#include "java\lang\invoke\MemberName_FactoryProxy.h"
#include "java\util\HashMapProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::lang::invoke;


std::string LambdaFormProxy::className = "java/lang/invoke/LambdaForm";
jclass LambdaFormProxy::objectClass = NULL;

jclass LambdaFormProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

LambdaFormProxy::LambdaFormProxy(void* unused)
{
}

jobject LambdaFormProxy::_getPeerObject() const
{
	return peerObject;
}

jclass LambdaFormProxy::getObjectClass()
{
	return _getObjectClass();
}

LambdaFormProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
LambdaFormProxy::LambdaFormProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

LambdaFormProxy::~LambdaFormProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

LambdaFormProxy& LambdaFormProxy::operator=(const LambdaFormProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
jboolean LambdaFormProxy::equals(::java::lang::ObjectProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "equals", "(Ljava/lang/Object;)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

jboolean LambdaFormProxy::equals(::java::lang::invoke::LambdaFormProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "equals", "(Ljava/lang/invoke/LambdaForm;)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

jint LambdaFormProxy::hashCode()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "hashCode", "()I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid );
}

::net::sourceforge::jnipp::JStringHelper LambdaFormProxy::toString()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "toString", "()Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::net::sourceforge::jnipp::JStringHelper LambdaFormProxy::basicTypeSignature(::java::lang::invoke::MethodTypeProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "basicTypeSignature", "(Ljava/lang/invoke/MethodType;)Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, static_cast<jobject>( p0 ) )  );
}

::net::sourceforge::jnipp::JStringHelper LambdaFormProxy::shortenSignature(::net::sourceforge::jnipp::JStringHelper p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "shortenSignature", "(Ljava/lang/String;)Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, static_cast<jstring>( p0 ) )  );
}

void LambdaFormProxy::prepare()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "prepare", "()V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid );
}

