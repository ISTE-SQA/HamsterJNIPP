#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "ParameterizedTypeProxy.h"

// includes for parameter and return type proxy classes
#include "java\lang\reflect\TypeProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::lang::reflect;


std::string ParameterizedTypeProxy::className = "java/lang/reflect/ParameterizedType";
jclass ParameterizedTypeProxy::objectClass = NULL;

jclass ParameterizedTypeProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

ParameterizedTypeProxy::ParameterizedTypeProxy(void* unused)
{
}

jobject ParameterizedTypeProxy::_getPeerObject() const
{
	return peerObject;
}

jclass ParameterizedTypeProxy::getObjectClass()
{
	return _getObjectClass();
}

ParameterizedTypeProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
ParameterizedTypeProxy::ParameterizedTypeProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

ParameterizedTypeProxy::~ParameterizedTypeProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

ParameterizedTypeProxy& ParameterizedTypeProxy::operator=(const ParameterizedTypeProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
::java::lang::reflect::TypeProxy ParameterizedTypeProxy::getOwnerType()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getOwnerType", "()Ljava/lang/reflect/Type;" );
	return ::java::lang::reflect::TypeProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::lang::reflect::TypeProxy ParameterizedTypeProxy::getRawType()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getRawType", "()Ljava/lang/reflect/Type;" );
	return ::java::lang::reflect::TypeProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::net::sourceforge::jnipp::PA<::java::lang::reflect::TypeProxy>::ProxyArray<1> ParameterizedTypeProxy::getActualTypeArguments()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getActualTypeArguments", "()[Ljava/lang/reflect/Type;" );
	return ::net::sourceforge::jnipp::PA<::java::lang::reflect::TypeProxy>::ProxyArray<1>( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

