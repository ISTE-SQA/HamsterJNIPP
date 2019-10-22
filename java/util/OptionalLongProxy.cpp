#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "OptionalLongProxy.h"

// includes for parameter and return type proxy classes
#include "java\lang\ObjectProxy.h"
#include "java\util\function\LongSupplierProxy.h"
#include "java\util\function\SupplierProxy.h"
#include "java\util\function\LongConsumerProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::util;


std::string OptionalLongProxy::className = "java/util/OptionalLong";
jclass OptionalLongProxy::objectClass = NULL;

jclass OptionalLongProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

OptionalLongProxy::OptionalLongProxy(void* unused)
{
}

jobject OptionalLongProxy::_getPeerObject() const
{
	return peerObject;
}

jclass OptionalLongProxy::getObjectClass()
{
	return _getObjectClass();
}

OptionalLongProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
OptionalLongProxy::OptionalLongProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

OptionalLongProxy::~OptionalLongProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

OptionalLongProxy& OptionalLongProxy::operator=(const OptionalLongProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
jboolean OptionalLongProxy::equals(::java::lang::ObjectProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "equals", "(Ljava/lang/Object;)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

jboolean OptionalLongProxy::isPresent()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "isPresent", "()Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid );
}

jint OptionalLongProxy::hashCode()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "hashCode", "()I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid );
}

::net::sourceforge::jnipp::JStringHelper OptionalLongProxy::toString()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "toString", "()Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

jlong OptionalLongProxy::getAsLong()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getAsLong", "()J" );
	return JNIEnvHelper::CallLongMethod( _getPeerObject(), mid );
}

jlong OptionalLongProxy::orElse(jlong p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "orElse", "(J)J" );
	return JNIEnvHelper::CallLongMethod( _getPeerObject(), mid, p0 );
}

jlong OptionalLongProxy::orElseGet(::java::util::function::LongSupplierProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "orElseGet", "(Ljava/util/function/LongSupplier;)J" );
	return JNIEnvHelper::CallLongMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

jlong OptionalLongProxy::orElseThrow(::java::util::function::SupplierProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "orElseThrow", "(Ljava/util/function/Supplier;)J" );
	return JNIEnvHelper::CallLongMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

::java::util::OptionalLongProxy OptionalLongProxy::empty()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "empty", "()Ljava/util/OptionalLong;" );
	return ::java::util::OptionalLongProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid )  );
}

::java::util::OptionalLongProxy OptionalLongProxy::of(jlong p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "of", "(J)Ljava/util/OptionalLong;" );
	return ::java::util::OptionalLongProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, p0 )  );
}

void OptionalLongProxy::ifPresent(::java::util::function::LongConsumerProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "ifPresent", "(Ljava/util/function/LongConsumer;)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

