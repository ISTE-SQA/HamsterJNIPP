#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "IntToDoubleFunctionProxy.h"

// includes for parameter and return type proxy classes

using namespace net::sourceforge::jnipp;
using namespace java::util::function;


std::string IntToDoubleFunctionProxy::className = "java/util/function/IntToDoubleFunction";
jclass IntToDoubleFunctionProxy::objectClass = NULL;

jclass IntToDoubleFunctionProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

IntToDoubleFunctionProxy::IntToDoubleFunctionProxy(void* unused)
{
}

jobject IntToDoubleFunctionProxy::_getPeerObject() const
{
	return peerObject;
}

jclass IntToDoubleFunctionProxy::getObjectClass()
{
	return _getObjectClass();
}

IntToDoubleFunctionProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
IntToDoubleFunctionProxy::IntToDoubleFunctionProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

IntToDoubleFunctionProxy::~IntToDoubleFunctionProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

IntToDoubleFunctionProxy& IntToDoubleFunctionProxy::operator=(const IntToDoubleFunctionProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
jdouble IntToDoubleFunctionProxy::applyAsDouble(jint p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "applyAsDouble", "(I)D" );
	return JNIEnvHelper::CallDoubleMethod( _getPeerObject(), mid, p0 );
}

