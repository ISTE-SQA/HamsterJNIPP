#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "ToIntFunctionProxy.h"

// includes for parameter and return type proxy classes
#include "java\lang\ObjectProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::util::function;


std::string ToIntFunctionProxy::className = "java/util/function/ToIntFunction";
jclass ToIntFunctionProxy::objectClass = NULL;

jclass ToIntFunctionProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

ToIntFunctionProxy::ToIntFunctionProxy(void* unused)
{
}

jobject ToIntFunctionProxy::_getPeerObject() const
{
	return peerObject;
}

jclass ToIntFunctionProxy::getObjectClass()
{
	return _getObjectClass();
}

ToIntFunctionProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
ToIntFunctionProxy::ToIntFunctionProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

ToIntFunctionProxy::~ToIntFunctionProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

ToIntFunctionProxy& ToIntFunctionProxy::operator=(const ToIntFunctionProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
jint ToIntFunctionProxy::applyAsInt(::java::lang::ObjectProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "applyAsInt", "(Ljava/lang/Object;)I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

