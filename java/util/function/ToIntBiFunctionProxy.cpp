#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "ToIntBiFunctionProxy.h"

// includes for parameter and return type proxy classes
#include "java\lang\ObjectProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::util::function;


std::string ToIntBiFunctionProxy::className = "java/util/function/ToIntBiFunction";
jclass ToIntBiFunctionProxy::objectClass = NULL;

jclass ToIntBiFunctionProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

ToIntBiFunctionProxy::ToIntBiFunctionProxy(void* unused)
{
}

jobject ToIntBiFunctionProxy::_getPeerObject() const
{
	return peerObject;
}

jclass ToIntBiFunctionProxy::getObjectClass()
{
	return _getObjectClass();
}

ToIntBiFunctionProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
ToIntBiFunctionProxy::ToIntBiFunctionProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

ToIntBiFunctionProxy::~ToIntBiFunctionProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

ToIntBiFunctionProxy& ToIntBiFunctionProxy::operator=(const ToIntBiFunctionProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
jint ToIntBiFunctionProxy::applyAsInt(::java::lang::ObjectProxy p0, ::java::lang::ObjectProxy p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "applyAsInt", "(Ljava/lang/Object;Ljava/lang/Object;)I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), static_cast<jobject>( p1 ) );
}

