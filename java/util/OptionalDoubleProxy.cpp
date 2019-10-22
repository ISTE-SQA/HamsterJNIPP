#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "OptionalDoubleProxy.h"

// includes for parameter and return type proxy classes
#include "java\lang\ObjectProxy.h"
#include "java\util\function\DoubleSupplierProxy.h"
#include "java\util\function\SupplierProxy.h"
#include "java\util\function\DoubleConsumerProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::util;


std::string OptionalDoubleProxy::className = "java/util/OptionalDouble";
jclass OptionalDoubleProxy::objectClass = NULL;

jclass OptionalDoubleProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

OptionalDoubleProxy::OptionalDoubleProxy(void* unused)
{
}

jobject OptionalDoubleProxy::_getPeerObject() const
{
	return peerObject;
}

jclass OptionalDoubleProxy::getObjectClass()
{
	return _getObjectClass();
}

OptionalDoubleProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
OptionalDoubleProxy::OptionalDoubleProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

OptionalDoubleProxy::~OptionalDoubleProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

OptionalDoubleProxy& OptionalDoubleProxy::operator=(const OptionalDoubleProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
jboolean OptionalDoubleProxy::equals(::java::lang::ObjectProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "equals", "(Ljava/lang/Object;)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

jboolean OptionalDoubleProxy::isPresent()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "isPresent", "()Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid );
}

jdouble OptionalDoubleProxy::getAsDouble()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getAsDouble", "()D" );
	return JNIEnvHelper::CallDoubleMethod( _getPeerObject(), mid );
}

jdouble OptionalDoubleProxy::orElse(jdouble p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "orElse", "(D)D" );
	return JNIEnvHelper::CallDoubleMethod( _getPeerObject(), mid, p0 );
}

jdouble OptionalDoubleProxy::orElseGet(::java::util::function::DoubleSupplierProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "orElseGet", "(Ljava/util/function/DoubleSupplier;)D" );
	return JNIEnvHelper::CallDoubleMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

jdouble OptionalDoubleProxy::orElseThrow(::java::util::function::SupplierProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "orElseThrow", "(Ljava/util/function/Supplier;)D" );
	return JNIEnvHelper::CallDoubleMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

jint OptionalDoubleProxy::hashCode()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "hashCode", "()I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid );
}

::net::sourceforge::jnipp::JStringHelper OptionalDoubleProxy::toString()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "toString", "()Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::util::OptionalDoubleProxy OptionalDoubleProxy::empty()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "empty", "()Ljava/util/OptionalDouble;" );
	return ::java::util::OptionalDoubleProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid )  );
}

::java::util::OptionalDoubleProxy OptionalDoubleProxy::of(jdouble p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "of", "(D)Ljava/util/OptionalDouble;" );
	return ::java::util::OptionalDoubleProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, p0 )  );
}

void OptionalDoubleProxy::ifPresent(::java::util::function::DoubleConsumerProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "ifPresent", "(Ljava/util/function/DoubleConsumer;)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

