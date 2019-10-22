#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "OptionalIntProxy.h"

// includes for parameter and return type proxy classes
#include "java\lang\ObjectProxy.h"
#include "java\util\function\IntSupplierProxy.h"
#include "java\util\function\SupplierProxy.h"
#include "java\util\function\IntConsumerProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::util;


std::string OptionalIntProxy::className = "java/util/OptionalInt";
jclass OptionalIntProxy::objectClass = NULL;

jclass OptionalIntProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

OptionalIntProxy::OptionalIntProxy(void* unused)
{
}

jobject OptionalIntProxy::_getPeerObject() const
{
	return peerObject;
}

jclass OptionalIntProxy::getObjectClass()
{
	return _getObjectClass();
}

OptionalIntProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
OptionalIntProxy::OptionalIntProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

OptionalIntProxy::~OptionalIntProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

OptionalIntProxy& OptionalIntProxy::operator=(const OptionalIntProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
jboolean OptionalIntProxy::equals(::java::lang::ObjectProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "equals", "(Ljava/lang/Object;)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

jboolean OptionalIntProxy::isPresent()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "isPresent", "()Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid );
}

jint OptionalIntProxy::getAsInt()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getAsInt", "()I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid );
}

jint OptionalIntProxy::hashCode()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "hashCode", "()I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid );
}

jint OptionalIntProxy::orElse(jint p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "orElse", "(I)I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid, p0 );
}

jint OptionalIntProxy::orElseGet(::java::util::function::IntSupplierProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "orElseGet", "(Ljava/util/function/IntSupplier;)I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

jint OptionalIntProxy::orElseThrow(::java::util::function::SupplierProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "orElseThrow", "(Ljava/util/function/Supplier;)I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

::net::sourceforge::jnipp::JStringHelper OptionalIntProxy::toString()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "toString", "()Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::util::OptionalIntProxy OptionalIntProxy::empty()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "empty", "()Ljava/util/OptionalInt;" );
	return ::java::util::OptionalIntProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid )  );
}

::java::util::OptionalIntProxy OptionalIntProxy::of(jint p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "of", "(I)Ljava/util/OptionalInt;" );
	return ::java::util::OptionalIntProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, p0 )  );
}

void OptionalIntProxy::ifPresent(::java::util::function::IntConsumerProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "ifPresent", "(Ljava/util/function/IntConsumer;)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

