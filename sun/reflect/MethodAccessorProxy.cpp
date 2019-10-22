#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "MethodAccessorProxy.h"

// includes for parameter and return type proxy classes
#include "java\lang\ObjectProxy.h"

using namespace net::sourceforge::jnipp;
using namespace sun::reflect;


std::string MethodAccessorProxy::className = "sun/reflect/MethodAccessor";
jclass MethodAccessorProxy::objectClass = NULL;

jclass MethodAccessorProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

MethodAccessorProxy::MethodAccessorProxy(void* unused)
{
}

jobject MethodAccessorProxy::_getPeerObject() const
{
	return peerObject;
}

jclass MethodAccessorProxy::getObjectClass()
{
	return _getObjectClass();
}

MethodAccessorProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
MethodAccessorProxy::MethodAccessorProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

MethodAccessorProxy::~MethodAccessorProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

MethodAccessorProxy& MethodAccessorProxy::operator=(const MethodAccessorProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
::java::lang::ObjectProxy MethodAccessorProxy::invoke(::java::lang::ObjectProxy p0, ::net::sourceforge::jnipp::PA<::java::lang::ObjectProxy>::ProxyArray<1> p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "invoke", "(Ljava/lang/Object;[Ljava/lang/Object;)Ljava/lang/Object;" );
	return ::java::lang::ObjectProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), static_cast<jobjectArray>( p1 ) )  );
}

