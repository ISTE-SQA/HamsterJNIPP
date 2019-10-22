#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "ToLongFunctionProxy.h"

// includes for parameter and return type proxy classes
#include "java\lang\ObjectProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::util::function;


std::string ToLongFunctionProxy::className = "java/util/function/ToLongFunction";
jclass ToLongFunctionProxy::objectClass = NULL;

jclass ToLongFunctionProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

ToLongFunctionProxy::ToLongFunctionProxy(void* unused)
{
}

jobject ToLongFunctionProxy::_getPeerObject() const
{
	return peerObject;
}

jclass ToLongFunctionProxy::getObjectClass()
{
	return _getObjectClass();
}

ToLongFunctionProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
ToLongFunctionProxy::ToLongFunctionProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

ToLongFunctionProxy::~ToLongFunctionProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

ToLongFunctionProxy& ToLongFunctionProxy::operator=(const ToLongFunctionProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
jlong ToLongFunctionProxy::applyAsLong(::java::lang::ObjectProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "applyAsLong", "(Ljava/lang/Object;)J" );
	return JNIEnvHelper::CallLongMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

