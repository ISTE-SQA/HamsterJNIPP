#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "IntToLongFunctionProxy.h"

// includes for parameter and return type proxy classes

using namespace net::sourceforge::jnipp;
using namespace java::util::function;


std::string IntToLongFunctionProxy::className = "java/util/function/IntToLongFunction";
jclass IntToLongFunctionProxy::objectClass = NULL;

jclass IntToLongFunctionProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

IntToLongFunctionProxy::IntToLongFunctionProxy(void* unused)
{
}

jobject IntToLongFunctionProxy::_getPeerObject() const
{
	return peerObject;
}

jclass IntToLongFunctionProxy::getObjectClass()
{
	return _getObjectClass();
}

IntToLongFunctionProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
IntToLongFunctionProxy::IntToLongFunctionProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

IntToLongFunctionProxy::~IntToLongFunctionProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

IntToLongFunctionProxy& IntToLongFunctionProxy::operator=(const IntToLongFunctionProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
jlong IntToLongFunctionProxy::applyAsLong(jint p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "applyAsLong", "(I)J" );
	return JNIEnvHelper::CallLongMethod( _getPeerObject(), mid, p0 );
}

