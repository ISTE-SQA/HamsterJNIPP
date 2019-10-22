#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "ToDoubleFunctionProxy.h"

// includes for parameter and return type proxy classes
#include "java\lang\ObjectProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::util::function;


std::string ToDoubleFunctionProxy::className = "java/util/function/ToDoubleFunction";
jclass ToDoubleFunctionProxy::objectClass = NULL;

jclass ToDoubleFunctionProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

ToDoubleFunctionProxy::ToDoubleFunctionProxy(void* unused)
{
}

jobject ToDoubleFunctionProxy::_getPeerObject() const
{
	return peerObject;
}

jclass ToDoubleFunctionProxy::getObjectClass()
{
	return _getObjectClass();
}

ToDoubleFunctionProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
ToDoubleFunctionProxy::ToDoubleFunctionProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

ToDoubleFunctionProxy::~ToDoubleFunctionProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

ToDoubleFunctionProxy& ToDoubleFunctionProxy::operator=(const ToDoubleFunctionProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
jdouble ToDoubleFunctionProxy::applyAsDouble(::java::lang::ObjectProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "applyAsDouble", "(Ljava/lang/Object;)D" );
	return JNIEnvHelper::CallDoubleMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

