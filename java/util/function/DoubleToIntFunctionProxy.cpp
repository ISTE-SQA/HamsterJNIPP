#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "DoubleToIntFunctionProxy.h"

// includes for parameter and return type proxy classes

using namespace net::sourceforge::jnipp;
using namespace java::util::function;


std::string DoubleToIntFunctionProxy::className = "java/util/function/DoubleToIntFunction";
jclass DoubleToIntFunctionProxy::objectClass = NULL;

jclass DoubleToIntFunctionProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

DoubleToIntFunctionProxy::DoubleToIntFunctionProxy(void* unused)
{
}

jobject DoubleToIntFunctionProxy::_getPeerObject() const
{
	return peerObject;
}

jclass DoubleToIntFunctionProxy::getObjectClass()
{
	return _getObjectClass();
}

DoubleToIntFunctionProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
DoubleToIntFunctionProxy::DoubleToIntFunctionProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

DoubleToIntFunctionProxy::~DoubleToIntFunctionProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

DoubleToIntFunctionProxy& DoubleToIntFunctionProxy::operator=(const DoubleToIntFunctionProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
jint DoubleToIntFunctionProxy::applyAsInt(jdouble p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "applyAsInt", "(D)I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid, p0 );
}

