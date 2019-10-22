#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "ConstructorAccessorProxy.h"

// includes for parameter and return type proxy classes
#include "java\lang\ObjectProxy.h"

using namespace net::sourceforge::jnipp;
using namespace sun::reflect;


std::string ConstructorAccessorProxy::className = "sun/reflect/ConstructorAccessor";
jclass ConstructorAccessorProxy::objectClass = NULL;

jclass ConstructorAccessorProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

ConstructorAccessorProxy::ConstructorAccessorProxy(void* unused)
{
}

jobject ConstructorAccessorProxy::_getPeerObject() const
{
	return peerObject;
}

jclass ConstructorAccessorProxy::getObjectClass()
{
	return _getObjectClass();
}

ConstructorAccessorProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
ConstructorAccessorProxy::ConstructorAccessorProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

ConstructorAccessorProxy::~ConstructorAccessorProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

ConstructorAccessorProxy& ConstructorAccessorProxy::operator=(const ConstructorAccessorProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
::java::lang::ObjectProxy ConstructorAccessorProxy::newInstance(::net::sourceforge::jnipp::PA<::java::lang::ObjectProxy>::ProxyArray<1> p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "newInstance", "([Ljava/lang/Object;)Ljava/lang/Object;" );
	return ::java::lang::ObjectProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobjectArray>( p0 ) )  );
}

