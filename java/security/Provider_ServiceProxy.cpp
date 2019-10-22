#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "Provider_ServiceProxy.h"

// includes for parameter and return type proxy classes
#include "java\security\ProviderProxy.h"
#include "java\util\ListProxy.h"
#include "java\util\MapProxy.h"
#include "java\lang\ObjectProxy.h"
#include "java\lang\ClassProxy.h"
#include "java\lang\BooleanProxy.h"
#include "java\lang\ref\ReferenceProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::security;


std::string Provider_ServiceProxy::className = "java/security/Provider$Service";
jclass Provider_ServiceProxy::objectClass = NULL;

jclass Provider_ServiceProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

Provider_ServiceProxy::Provider_ServiceProxy(void* unused)
{
}

jobject Provider_ServiceProxy::_getPeerObject() const
{
	return peerObject;
}

jclass Provider_ServiceProxy::getObjectClass()
{
	return _getObjectClass();
}

Provider_ServiceProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
Provider_ServiceProxy::Provider_ServiceProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

Provider_ServiceProxy::Provider_ServiceProxy(::java::security::ProviderProxy p0, ::net::sourceforge::jnipp::JStringHelper p1, ::net::sourceforge::jnipp::JStringHelper p2, ::net::sourceforge::jnipp::JStringHelper p3, ::java::util::ListProxy p4, ::java::util::MapProxy p5)
{
	jmethodID mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "<init>", "(Ljava/security/Provider;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/util/List;Ljava/util/Map;)V" );
	peerObject = JNIEnvHelper::NewGlobalRef( JNIEnvHelper::NewObject( _getObjectClass(), mid, static_cast<jobject>( p0 ), static_cast<jstring>( p1 ), static_cast<jstring>( p2 ), static_cast<jstring>( p3 ), static_cast<jobject>( p4 ), static_cast<jobject>( p5 ) ) );
}

Provider_ServiceProxy::~Provider_ServiceProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

Provider_ServiceProxy& Provider_ServiceProxy::operator=(const Provider_ServiceProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
jboolean Provider_ServiceProxy::supportsParameter(::java::lang::ObjectProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "supportsParameter", "(Ljava/lang/Object;)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

::net::sourceforge::jnipp::JStringHelper Provider_ServiceProxy::getAlgorithm()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getAlgorithm", "()Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::net::sourceforge::jnipp::JStringHelper Provider_ServiceProxy::getAttribute(::net::sourceforge::jnipp::JStringHelper p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getAttribute", "(Ljava/lang/String;)Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jstring>( p0 ) )  );
}

::net::sourceforge::jnipp::JStringHelper Provider_ServiceProxy::getClassName()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getClassName", "()Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::net::sourceforge::jnipp::JStringHelper Provider_ServiceProxy::getType()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getType", "()Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::security::ProviderProxy Provider_ServiceProxy::getProvider()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getProvider", "()Ljava/security/Provider;" );
	return ::java::security::ProviderProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::lang::ObjectProxy Provider_ServiceProxy::newInstance(::java::lang::ObjectProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "newInstance", "(Ljava/lang/Object;)Ljava/lang/Object;" );
	return ::java::lang::ObjectProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::net::sourceforge::jnipp::JStringHelper Provider_ServiceProxy::toString()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "toString", "()Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

