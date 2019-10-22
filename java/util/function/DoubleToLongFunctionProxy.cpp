#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "DoubleToLongFunctionProxy.h"

// includes for parameter and return type proxy classes

using namespace net::sourceforge::jnipp;
using namespace java::util::function;


std::string DoubleToLongFunctionProxy::className = "java/util/function/DoubleToLongFunction";
jclass DoubleToLongFunctionProxy::objectClass = NULL;

jclass DoubleToLongFunctionProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

DoubleToLongFunctionProxy::DoubleToLongFunctionProxy(void* unused)
{
}

jobject DoubleToLongFunctionProxy::_getPeerObject() const
{
	return peerObject;
}

jclass DoubleToLongFunctionProxy::getObjectClass()
{
	return _getObjectClass();
}

DoubleToLongFunctionProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
DoubleToLongFunctionProxy::DoubleToLongFunctionProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

DoubleToLongFunctionProxy::~DoubleToLongFunctionProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

DoubleToLongFunctionProxy& DoubleToLongFunctionProxy::operator=(const DoubleToLongFunctionProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
jlong DoubleToLongFunctionProxy::applyAsLong(jdouble p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "applyAsLong", "(D)J" );
	return JNIEnvHelper::CallLongMethod( _getPeerObject(), mid, p0 );
}

