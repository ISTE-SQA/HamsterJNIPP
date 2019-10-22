#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "LongFunctionProxy.h"

// includes for parameter and return type proxy classes
#include "java\lang\ObjectProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::util::function;


std::string LongFunctionProxy::className = "java/util/function/LongFunction";
jclass LongFunctionProxy::objectClass = NULL;

jclass LongFunctionProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

LongFunctionProxy::LongFunctionProxy(void* unused)
{
}

jobject LongFunctionProxy::_getPeerObject() const
{
	return peerObject;
}

jclass LongFunctionProxy::getObjectClass()
{
	return _getObjectClass();
}

LongFunctionProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
LongFunctionProxy::LongFunctionProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

LongFunctionProxy::~LongFunctionProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

LongFunctionProxy& LongFunctionProxy::operator=(const LongFunctionProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
::java::lang::ObjectProxy LongFunctionProxy::apply(jlong p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "apply", "(J)Ljava/lang/Object;" );
	return ::java::lang::ObjectProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0 )  );
}

