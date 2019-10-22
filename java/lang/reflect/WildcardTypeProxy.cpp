#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "WildcardTypeProxy.h"

// includes for parameter and return type proxy classes
#include "java\lang\reflect\TypeProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::lang::reflect;


std::string WildcardTypeProxy::className = "java/lang/reflect/WildcardType";
jclass WildcardTypeProxy::objectClass = NULL;

jclass WildcardTypeProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

WildcardTypeProxy::WildcardTypeProxy(void* unused)
{
}

jobject WildcardTypeProxy::_getPeerObject() const
{
	return peerObject;
}

jclass WildcardTypeProxy::getObjectClass()
{
	return _getObjectClass();
}

WildcardTypeProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
WildcardTypeProxy::WildcardTypeProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

WildcardTypeProxy::~WildcardTypeProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

WildcardTypeProxy& WildcardTypeProxy::operator=(const WildcardTypeProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
::net::sourceforge::jnipp::PA<::java::lang::reflect::TypeProxy>::ProxyArray<1> WildcardTypeProxy::getLowerBounds()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getLowerBounds", "()[Ljava/lang/reflect/Type;" );
	return ::net::sourceforge::jnipp::PA<::java::lang::reflect::TypeProxy>::ProxyArray<1>( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::net::sourceforge::jnipp::PA<::java::lang::reflect::TypeProxy>::ProxyArray<1> WildcardTypeProxy::getUpperBounds()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getUpperBounds", "()[Ljava/lang/reflect/Type;" );
	return ::net::sourceforge::jnipp::PA<::java::lang::reflect::TypeProxy>::ProxyArray<1>( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

