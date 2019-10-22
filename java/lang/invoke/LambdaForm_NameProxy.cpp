#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "LambdaForm_NameProxy.h"

// includes for parameter and return type proxy classes
#include "java\lang\ObjectProxy.h"
#include "java\lang\invoke\LambdaForm_BasicTypeProxy.h"
#include "java\lang\invoke\LambdaForm_NamedFunctionProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::lang::invoke;


std::string LambdaForm_NameProxy::className = "java/lang/invoke/LambdaForm$Name";
jclass LambdaForm_NameProxy::objectClass = NULL;

jclass LambdaForm_NameProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

LambdaForm_NameProxy::LambdaForm_NameProxy(void* unused)
{
}

jobject LambdaForm_NameProxy::_getPeerObject() const
{
	return peerObject;
}

jclass LambdaForm_NameProxy::getObjectClass()
{
	return _getObjectClass();
}

LambdaForm_NameProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
LambdaForm_NameProxy::LambdaForm_NameProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

LambdaForm_NameProxy::~LambdaForm_NameProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

LambdaForm_NameProxy& LambdaForm_NameProxy::operator=(const LambdaForm_NameProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
jboolean LambdaForm_NameProxy::equals(::java::lang::ObjectProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "equals", "(Ljava/lang/Object;)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

jboolean LambdaForm_NameProxy::equals(::java::lang::invoke::LambdaForm_NameProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "equals", "(Ljava/lang/invoke/LambdaForm$Name;)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

jint LambdaForm_NameProxy::hashCode()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "hashCode", "()I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid );
}

::net::sourceforge::jnipp::JStringHelper LambdaForm_NameProxy::debugString()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "debugString", "()Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::net::sourceforge::jnipp::JStringHelper LambdaForm_NameProxy::exprString()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "exprString", "()Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::net::sourceforge::jnipp::JStringHelper LambdaForm_NameProxy::paramString()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "paramString", "()Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::net::sourceforge::jnipp::JStringHelper LambdaForm_NameProxy::toString()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "toString", "()Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

