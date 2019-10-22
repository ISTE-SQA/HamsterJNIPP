#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "ToDoubleBiFunctionProxy.h"

// includes for parameter and return type proxy classes
#include "java\lang\ObjectProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::util::function;


std::string ToDoubleBiFunctionProxy::className = "java/util/function/ToDoubleBiFunction";
jclass ToDoubleBiFunctionProxy::objectClass = NULL;

jclass ToDoubleBiFunctionProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

ToDoubleBiFunctionProxy::ToDoubleBiFunctionProxy(void* unused)
{
}

jobject ToDoubleBiFunctionProxy::_getPeerObject() const
{
	return peerObject;
}

jclass ToDoubleBiFunctionProxy::getObjectClass()
{
	return _getObjectClass();
}

ToDoubleBiFunctionProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
ToDoubleBiFunctionProxy::ToDoubleBiFunctionProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

ToDoubleBiFunctionProxy::~ToDoubleBiFunctionProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

ToDoubleBiFunctionProxy& ToDoubleBiFunctionProxy::operator=(const ToDoubleBiFunctionProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
jdouble ToDoubleBiFunctionProxy::applyAsDouble(::java::lang::ObjectProxy p0, ::java::lang::ObjectProxy p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "applyAsDouble", "(Ljava/lang/Object;Ljava/lang/Object;)D" );
	return JNIEnvHelper::CallDoubleMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), static_cast<jobject>( p1 ) );
}

