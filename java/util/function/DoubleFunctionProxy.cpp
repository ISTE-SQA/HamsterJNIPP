#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "DoubleFunctionProxy.h"

// includes for parameter and return type proxy classes
#include "java\lang\ObjectProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::util::function;


std::string DoubleFunctionProxy::className = "java/util/function/DoubleFunction";
jclass DoubleFunctionProxy::objectClass = NULL;

jclass DoubleFunctionProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

DoubleFunctionProxy::DoubleFunctionProxy(void* unused)
{
}

jobject DoubleFunctionProxy::_getPeerObject() const
{
	return peerObject;
}

jclass DoubleFunctionProxy::getObjectClass()
{
	return _getObjectClass();
}

DoubleFunctionProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
DoubleFunctionProxy::DoubleFunctionProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

DoubleFunctionProxy::~DoubleFunctionProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

DoubleFunctionProxy& DoubleFunctionProxy::operator=(const DoubleFunctionProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
::java::lang::ObjectProxy DoubleFunctionProxy::apply(jdouble p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "apply", "(D)Ljava/lang/Object;" );
	return ::java::lang::ObjectProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0 )  );
}

