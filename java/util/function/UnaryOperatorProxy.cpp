#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "UnaryOperatorProxy.h"

// includes for parameter and return type proxy classes

using namespace net::sourceforge::jnipp;
using namespace java::util::function;


std::string UnaryOperatorProxy::className = "java/util/function/UnaryOperator";
jclass UnaryOperatorProxy::objectClass = NULL;

jclass UnaryOperatorProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

UnaryOperatorProxy::UnaryOperatorProxy(void* unused)
{
}

jobject UnaryOperatorProxy::_getPeerObject() const
{
	return peerObject;
}

jclass UnaryOperatorProxy::getObjectClass()
{
	return _getObjectClass();
}

UnaryOperatorProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
UnaryOperatorProxy::UnaryOperatorProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

UnaryOperatorProxy::~UnaryOperatorProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

UnaryOperatorProxy& UnaryOperatorProxy::operator=(const UnaryOperatorProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
::java::util::function::UnaryOperatorProxy UnaryOperatorProxy::identity()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "identity", "()Ljava/util/function/UnaryOperator;" );
	return ::java::util::function::UnaryOperatorProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid )  );
}

