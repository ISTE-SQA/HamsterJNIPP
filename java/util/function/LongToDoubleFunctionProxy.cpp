#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "LongToDoubleFunctionProxy.h"

// includes for parameter and return type proxy classes

using namespace net::sourceforge::jnipp;
using namespace java::util::function;


std::string LongToDoubleFunctionProxy::className = "java/util/function/LongToDoubleFunction";
jclass LongToDoubleFunctionProxy::objectClass = NULL;

jclass LongToDoubleFunctionProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

LongToDoubleFunctionProxy::LongToDoubleFunctionProxy(void* unused)
{
}

jobject LongToDoubleFunctionProxy::_getPeerObject() const
{
	return peerObject;
}

jclass LongToDoubleFunctionProxy::getObjectClass()
{
	return _getObjectClass();
}

LongToDoubleFunctionProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
LongToDoubleFunctionProxy::LongToDoubleFunctionProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

LongToDoubleFunctionProxy::~LongToDoubleFunctionProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

LongToDoubleFunctionProxy& LongToDoubleFunctionProxy::operator=(const LongToDoubleFunctionProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
jdouble LongToDoubleFunctionProxy::applyAsDouble(jlong p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "applyAsDouble", "(J)D" );
	return JNIEnvHelper::CallDoubleMethod( _getPeerObject(), mid, p0 );
}

