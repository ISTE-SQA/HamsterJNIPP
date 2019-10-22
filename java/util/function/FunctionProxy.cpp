#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "FunctionProxy.h"

// includes for parameter and return type proxy classes
#include "java\lang\ObjectProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::util::function;


std::string FunctionProxy::className = "java/util/function/Function";
jclass FunctionProxy::objectClass = NULL;

jclass FunctionProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

FunctionProxy::FunctionProxy(void* unused)
{
}

jobject FunctionProxy::_getPeerObject() const
{
	return peerObject;
}

jclass FunctionProxy::getObjectClass()
{
	return _getObjectClass();
}

FunctionProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
FunctionProxy::FunctionProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

FunctionProxy::~FunctionProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

FunctionProxy& FunctionProxy::operator=(const FunctionProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
::java::lang::ObjectProxy FunctionProxy::apply(::java::lang::ObjectProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "apply", "(Ljava/lang/Object;)Ljava/lang/Object;" );
	return ::java::lang::ObjectProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::java::util::function::FunctionProxy FunctionProxy::andThen(::java::util::function::FunctionProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "andThen", "(Ljava/util/function/Function;)Ljava/util/function/Function;" );
	return ::java::util::function::FunctionProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::java::util::function::FunctionProxy FunctionProxy::compose(::java::util::function::FunctionProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "compose", "(Ljava/util/function/Function;)Ljava/util/function/Function;" );
	return ::java::util::function::FunctionProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::java::util::function::FunctionProxy FunctionProxy::identity()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "identity", "()Ljava/util/function/Function;" );
	return ::java::util::function::FunctionProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid )  );
}

