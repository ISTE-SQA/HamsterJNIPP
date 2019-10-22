#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "MethodTypeFormProxy.h"

// includes for parameter and return type proxy classes
#include "java\lang\invoke\LambdaFormProxy.h"
#include "java\lang\invoke\MethodHandleProxy.h"
#include "java\lang\invoke\MethodTypeProxy.h"
#include "java\lang\ref\SoftReferenceProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::lang::invoke;


std::string MethodTypeFormProxy::className = "java/lang/invoke/MethodTypeForm";
jclass MethodTypeFormProxy::objectClass = NULL;

jclass MethodTypeFormProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

MethodTypeFormProxy::MethodTypeFormProxy(void* unused)
{
}

jobject MethodTypeFormProxy::_getPeerObject() const
{
	return peerObject;
}

jclass MethodTypeFormProxy::getObjectClass()
{
	return _getObjectClass();
}

MethodTypeFormProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
MethodTypeFormProxy::MethodTypeFormProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

MethodTypeFormProxy::~MethodTypeFormProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

MethodTypeFormProxy& MethodTypeFormProxy::operator=(const MethodTypeFormProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
jboolean MethodTypeFormProxy::hasLongPrimitives()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "hasLongPrimitives", "()Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid );
}

jboolean MethodTypeFormProxy::hasNonVoidPrimitives()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "hasNonVoidPrimitives", "()Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid );
}

jboolean MethodTypeFormProxy::hasPrimitives()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "hasPrimitives", "()Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid );
}

jint MethodTypeFormProxy::argSlotToParameter(jint p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "argSlotToParameter", "(I)I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid, p0 );
}

jint MethodTypeFormProxy::longPrimitiveParameterCount()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "longPrimitiveParameterCount", "()I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid );
}

jint MethodTypeFormProxy::longPrimitiveReturnCount()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "longPrimitiveReturnCount", "()I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid );
}

jint MethodTypeFormProxy::parameterCount()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "parameterCount", "()I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid );
}

jint MethodTypeFormProxy::parameterSlotCount()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "parameterSlotCount", "()I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid );
}

jint MethodTypeFormProxy::parameterToArgSlot(jint p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "parameterToArgSlot", "(I)I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid, p0 );
}

jint MethodTypeFormProxy::primitiveParameterCount()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "primitiveParameterCount", "()I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid );
}

jint MethodTypeFormProxy::primitiveReturnCount()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "primitiveReturnCount", "()I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid );
}

jint MethodTypeFormProxy::returnCount()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "returnCount", "()I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid );
}

jint MethodTypeFormProxy::returnSlotCount()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "returnSlotCount", "()I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid );
}

::net::sourceforge::jnipp::JStringHelper MethodTypeFormProxy::toString()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "toString", "()Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::lang::invoke::LambdaFormProxy MethodTypeFormProxy::cachedLambdaForm(jint p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "cachedLambdaForm", "(I)Ljava/lang/invoke/LambdaForm;" );
	return ::java::lang::invoke::LambdaFormProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0 )  );
}

::java::lang::invoke::MethodHandleProxy MethodTypeFormProxy::cachedMethodHandle(jint p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "cachedMethodHandle", "(I)Ljava/lang/invoke/MethodHandle;" );
	return ::java::lang::invoke::MethodHandleProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0 )  );
}

::java::lang::invoke::MethodTypeProxy MethodTypeFormProxy::basicType()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "basicType", "()Ljava/lang/invoke/MethodType;" );
	return ::java::lang::invoke::MethodTypeProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::lang::invoke::MethodTypeProxy MethodTypeFormProxy::erasedType()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "erasedType", "()Ljava/lang/invoke/MethodType;" );
	return ::java::lang::invoke::MethodTypeProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::lang::invoke::MethodTypeProxy MethodTypeFormProxy::canonicalize(::java::lang::invoke::MethodTypeProxy p0, jint p1, jint p2)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "canonicalize", "(Ljava/lang/invoke/MethodType;II)Ljava/lang/invoke/MethodType;" );
	return ::java::lang::invoke::MethodTypeProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, static_cast<jobject>( p0 ), p1, p2 )  );
}

::java::lang::invoke::LambdaFormProxy MethodTypeFormProxy::setCachedLambdaForm(jint p0, ::java::lang::invoke::LambdaFormProxy p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "setCachedLambdaForm", "(ILjava/lang/invoke/LambdaForm;)Ljava/lang/invoke/LambdaForm;" );
	return ::java::lang::invoke::LambdaFormProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0, static_cast<jobject>( p1 ) )  );
}

::java::lang::invoke::MethodHandleProxy MethodTypeFormProxy::setCachedMethodHandle(jint p0, ::java::lang::invoke::MethodHandleProxy p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "setCachedMethodHandle", "(ILjava/lang/invoke/MethodHandle;)Ljava/lang/invoke/MethodHandle;" );
	return ::java::lang::invoke::MethodHandleProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0, static_cast<jobject>( p1 ) )  );
}

