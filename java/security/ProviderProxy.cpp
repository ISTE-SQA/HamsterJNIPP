#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "ProviderProxy.h"

// includes for parameter and return type proxy classes
#include "java\lang\ObjectProxy.h"
#include "java\util\CollectionProxy.h"
#include "java\util\EnumerationProxy.h"
#include "java\util\SetProxy.h"
#include "java\util\function\BiFunctionProxy.h"
#include "java\util\function\FunctionProxy.h"
#include "java\security\Provider_ServiceProxy.h"
#include "java\util\function\BiConsumerProxy.h"
#include "java\io\InputStreamProxy.h"
#include "java\util\MapProxy.h"
#include "sun\security\util\DebugProxy.h"
#include "java\security\Provider_ServiceKeyProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::security;


std::string ProviderProxy::className = "java/security/Provider";
jclass ProviderProxy::objectClass = NULL;

jclass ProviderProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

ProviderProxy::ProviderProxy(void* unused)
{
}

jobject ProviderProxy::_getPeerObject() const
{
	return peerObject;
}

jclass ProviderProxy::getObjectClass()
{
	return _getObjectClass();
}

ProviderProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
ProviderProxy::ProviderProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

ProviderProxy::~ProviderProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

ProviderProxy& ProviderProxy::operator=(const ProviderProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
jdouble ProviderProxy::getVersion()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getVersion", "()D" );
	return JNIEnvHelper::CallDoubleMethod( _getPeerObject(), mid );
}

::java::lang::ObjectProxy ProviderProxy::get(::java::lang::ObjectProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "get", "(Ljava/lang/Object;)Ljava/lang/Object;" );
	return ::java::lang::ObjectProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::net::sourceforge::jnipp::JStringHelper ProviderProxy::getInfo()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getInfo", "()Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::net::sourceforge::jnipp::JStringHelper ProviderProxy::getName()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getName", "()Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::net::sourceforge::jnipp::JStringHelper ProviderProxy::getProperty(::net::sourceforge::jnipp::JStringHelper p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getProperty", "(Ljava/lang/String;)Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jstring>( p0 ) )  );
}

::net::sourceforge::jnipp::JStringHelper ProviderProxy::toString()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "toString", "()Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::util::CollectionProxy ProviderProxy::values()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "values", "()Ljava/util/Collection;" );
	return ::java::util::CollectionProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::util::EnumerationProxy ProviderProxy::elements()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "elements", "()Ljava/util/Enumeration;" );
	return ::java::util::EnumerationProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::util::EnumerationProxy ProviderProxy::keys()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "keys", "()Ljava/util/Enumeration;" );
	return ::java::util::EnumerationProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::util::SetProxy ProviderProxy::keySet()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "keySet", "()Ljava/util/Set;" );
	return ::java::util::SetProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

jboolean ProviderProxy::remove(::java::lang::ObjectProxy p0, ::java::lang::ObjectProxy p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "remove", "(Ljava/lang/Object;Ljava/lang/Object;)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), static_cast<jobject>( p1 ) );
}

jboolean ProviderProxy::replace(::java::lang::ObjectProxy p0, ::java::lang::ObjectProxy p1, ::java::lang::ObjectProxy p2)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "replace", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), static_cast<jobject>( p1 ), static_cast<jobject>( p2 ) );
}

::java::lang::ObjectProxy ProviderProxy::compute(::java::lang::ObjectProxy p0, ::java::util::function::BiFunctionProxy p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "compute", "(Ljava/lang/Object;Ljava/util/function/BiFunction;)Ljava/lang/Object;" );
	return ::java::lang::ObjectProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), static_cast<jobject>( p1 ) )  );
}

::java::lang::ObjectProxy ProviderProxy::computeIfAbsent(::java::lang::ObjectProxy p0, ::java::util::function::FunctionProxy p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "computeIfAbsent", "(Ljava/lang/Object;Ljava/util/function/Function;)Ljava/lang/Object;" );
	return ::java::lang::ObjectProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), static_cast<jobject>( p1 ) )  );
}

::java::lang::ObjectProxy ProviderProxy::computeIfPresent(::java::lang::ObjectProxy p0, ::java::util::function::BiFunctionProxy p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "computeIfPresent", "(Ljava/lang/Object;Ljava/util/function/BiFunction;)Ljava/lang/Object;" );
	return ::java::lang::ObjectProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), static_cast<jobject>( p1 ) )  );
}

::java::lang::ObjectProxy ProviderProxy::getOrDefault(::java::lang::ObjectProxy p0, ::java::lang::ObjectProxy p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getOrDefault", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;" );
	return ::java::lang::ObjectProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), static_cast<jobject>( p1 ) )  );
}

::java::lang::ObjectProxy ProviderProxy::merge(::java::lang::ObjectProxy p0, ::java::lang::ObjectProxy p1, ::java::util::function::BiFunctionProxy p2)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "merge", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/util/function/BiFunction;)Ljava/lang/Object;" );
	return ::java::lang::ObjectProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), static_cast<jobject>( p1 ), static_cast<jobject>( p2 ) )  );
}

::java::lang::ObjectProxy ProviderProxy::put(::java::lang::ObjectProxy p0, ::java::lang::ObjectProxy p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "put", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;" );
	return ::java::lang::ObjectProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), static_cast<jobject>( p1 ) )  );
}

::java::lang::ObjectProxy ProviderProxy::putIfAbsent(::java::lang::ObjectProxy p0, ::java::lang::ObjectProxy p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "putIfAbsent", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;" );
	return ::java::lang::ObjectProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), static_cast<jobject>( p1 ) )  );
}

::java::lang::ObjectProxy ProviderProxy::remove(::java::lang::ObjectProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "remove", "(Ljava/lang/Object;)Ljava/lang/Object;" );
	return ::java::lang::ObjectProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::java::lang::ObjectProxy ProviderProxy::replace(::java::lang::ObjectProxy p0, ::java::lang::ObjectProxy p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "replace", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;" );
	return ::java::lang::ObjectProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), static_cast<jobject>( p1 ) )  );
}

::java::security::Provider_ServiceProxy ProviderProxy::getService(::net::sourceforge::jnipp::JStringHelper p0, ::net::sourceforge::jnipp::JStringHelper p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getService", "(Ljava/lang/String;Ljava/lang/String;)Ljava/security/Provider$Service;" );
	return ::java::security::Provider_ServiceProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jstring>( p0 ), static_cast<jstring>( p1 ) )  );
}

::java::util::SetProxy ProviderProxy::entrySet()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "entrySet", "()Ljava/util/Set;" );
	return ::java::util::SetProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::util::SetProxy ProviderProxy::getServices()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getServices", "()Ljava/util/Set;" );
	return ::java::util::SetProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

void ProviderProxy::clear()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "clear", "()V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid );
}

void ProviderProxy::forEach(::java::util::function::BiConsumerProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "forEach", "(Ljava/util/function/BiConsumer;)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

void ProviderProxy::load(::java::io::InputStreamProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "load", "(Ljava/io/InputStream;)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

void ProviderProxy::putAll(::java::util::MapProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "putAll", "(Ljava/util/Map;)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

void ProviderProxy::replaceAll(::java::util::function::BiFunctionProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "replaceAll", "(Ljava/util/function/BiFunction;)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

