#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "IntFunctionProxy.h"

// includes for parameter and return type proxy classes
#include "java\lang\ObjectProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::util::function;


std::string IntFunctionProxy::className = "java/util/function/IntFunction";
jclass IntFunctionProxy::objectClass = NULL;

jclass IntFunctionProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

IntFunctionProxy::IntFunctionProxy(void* unused)
{
}

jobject IntFunctionProxy::_getPeerObject() const
{
	return peerObject;
}

jclass IntFunctionProxy::getObjectClass()
{
	return _getObjectClass();
}

IntFunctionProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
IntFunctionProxy::IntFunctionProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

IntFunctionProxy::~IntFunctionProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

IntFunctionProxy& IntFunctionProxy::operator=(const IntFunctionProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
::java::lang::ObjectProxy IntFunctionProxy::apply(jint p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "apply", "(I)Ljava/lang/Object;" );
	return ::java::lang::ObjectProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0 )  );
}

