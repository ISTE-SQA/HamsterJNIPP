#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "InvokersProxy.h"

// includes for parameter and return type proxy classes
#include "java\lang\invoke\MethodHandleProxy.h"
#include "java\lang\invoke\MethodTypeProxy.h"
#include "java\lang\invoke\LambdaForm_NamedFunctionProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::lang::invoke;


std::string InvokersProxy::className = "java/lang/invoke/Invokers";
jclass InvokersProxy::objectClass = NULL;

jclass InvokersProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

InvokersProxy::InvokersProxy(void* unused)
{
}

jobject InvokersProxy::_getPeerObject() const
{
	return peerObject;
}

jclass InvokersProxy::getObjectClass()
{
	return _getObjectClass();
}

InvokersProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
InvokersProxy::InvokersProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

InvokersProxy::~InvokersProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

InvokersProxy& InvokersProxy::operator=(const InvokersProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
::net::sourceforge::jnipp::JStringHelper InvokersProxy::toString()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "toString", "()Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

