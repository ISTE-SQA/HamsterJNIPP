#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "BiFunctionProxy.h"

// includes for parameter and return type proxy classes
#include "java\lang\ObjectProxy.h"
#include "java\util\function\FunctionProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::util::function;


std::string BiFunctionProxy::className = "java/util/function/BiFunction";
jclass BiFunctionProxy::objectClass = NULL;

jclass BiFunctionProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

BiFunctionProxy::BiFunctionProxy(void* unused)
{
}

jobject BiFunctionProxy::_getPeerObject() const
{
	return peerObject;
}

jclass BiFunctionProxy::getObjectClass()
{
	return _getObjectClass();
}

BiFunctionProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
BiFunctionProxy::BiFunctionProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

BiFunctionProxy::~BiFunctionProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

BiFunctionProxy& BiFunctionProxy::operator=(const BiFunctionProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
::java::lang::ObjectProxy BiFunctionProxy::apply(::java::lang::ObjectProxy p0, ::java::lang::ObjectProxy p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "apply", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;" );
	return ::java::lang::ObjectProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), static_cast<jobject>( p1 ) )  );
}

::java::util::function::BiFunctionProxy BiFunctionProxy::andThen(::java::util::function::FunctionProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "andThen", "(Ljava/util/function/Function;)Ljava/util/function/BiFunction;" );
	return ::java::util::function::BiFunctionProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

