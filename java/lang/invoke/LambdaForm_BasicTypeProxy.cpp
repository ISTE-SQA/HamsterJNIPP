#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "LambdaForm_BasicTypeProxy.h"

// includes for parameter and return type proxy classes
#include "java\lang\invoke\LambdaForm_BasicTypeProxy.h"
#include "java\lang\ClassProxy.h"
#include "sun\invoke\util\WrapperProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::lang::invoke;


std::string LambdaForm_BasicTypeProxy::className = "java/lang/invoke/LambdaForm$BasicType";
jclass LambdaForm_BasicTypeProxy::objectClass = NULL;

jclass LambdaForm_BasicTypeProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

LambdaForm_BasicTypeProxy::LambdaForm_BasicTypeProxy(void* unused)
{
}

jobject LambdaForm_BasicTypeProxy::_getPeerObject() const
{
	return peerObject;
}

jclass LambdaForm_BasicTypeProxy::getObjectClass()
{
	return _getObjectClass();
}

LambdaForm_BasicTypeProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
LambdaForm_BasicTypeProxy::LambdaForm_BasicTypeProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

LambdaForm_BasicTypeProxy::~LambdaForm_BasicTypeProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

LambdaForm_BasicTypeProxy& LambdaForm_BasicTypeProxy::operator=(const LambdaForm_BasicTypeProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
::java::lang::invoke::LambdaForm_BasicTypeProxy LambdaForm_BasicTypeProxy::valueOf(::net::sourceforge::jnipp::JStringHelper p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "valueOf", "(Ljava/lang/String;)Ljava/lang/invoke/LambdaForm$BasicType;" );
	return ::java::lang::invoke::LambdaForm_BasicTypeProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, static_cast<jstring>( p0 ) )  );
}

::net::sourceforge::jnipp::PA<::java::lang::invoke::LambdaForm_BasicTypeProxy>::ProxyArray<1> LambdaForm_BasicTypeProxy::values()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "values", "()[Ljava/lang/invoke/LambdaForm$BasicType;" );
	return ::net::sourceforge::jnipp::PA<::java::lang::invoke::LambdaForm_BasicTypeProxy>::ProxyArray<1>( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid )  );
}

