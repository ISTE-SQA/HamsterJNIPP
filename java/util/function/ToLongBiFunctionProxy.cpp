#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "ToLongBiFunctionProxy.h"

// includes for parameter and return type proxy classes
#include "java\lang\ObjectProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::util::function;


std::string ToLongBiFunctionProxy::className = "java/util/function/ToLongBiFunction";
jclass ToLongBiFunctionProxy::objectClass = NULL;

jclass ToLongBiFunctionProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

ToLongBiFunctionProxy::ToLongBiFunctionProxy(void* unused)
{
}

jobject ToLongBiFunctionProxy::_getPeerObject() const
{
	return peerObject;
}

jclass ToLongBiFunctionProxy::getObjectClass()
{
	return _getObjectClass();
}

ToLongBiFunctionProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
ToLongBiFunctionProxy::ToLongBiFunctionProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

ToLongBiFunctionProxy::~ToLongBiFunctionProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

ToLongBiFunctionProxy& ToLongBiFunctionProxy::operator=(const ToLongBiFunctionProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
jlong ToLongBiFunctionProxy::applyAsLong(::java::lang::ObjectProxy p0, ::java::lang::ObjectProxy p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "applyAsLong", "(Ljava/lang/Object;Ljava/lang/Object;)J" );
	return JNIEnvHelper::CallLongMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), static_cast<jobject>( p1 ) );
}

