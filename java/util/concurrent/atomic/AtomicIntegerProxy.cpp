#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "AtomicIntegerProxy.h"

// includes for parameter and return type proxy classes
#include "java\util\function\IntBinaryOperatorProxy.h"
#include "java\util\function\IntUnaryOperatorProxy.h"
#include "sun\misc\UnsafeProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::util::concurrent::atomic;


std::string AtomicIntegerProxy::className = "java/util/concurrent/atomic/AtomicInteger";
jclass AtomicIntegerProxy::objectClass = NULL;

jclass AtomicIntegerProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

AtomicIntegerProxy::AtomicIntegerProxy(void* unused)
{
}

jobject AtomicIntegerProxy::_getPeerObject() const
{
	return peerObject;
}

jclass AtomicIntegerProxy::getObjectClass()
{
	return _getObjectClass();
}

AtomicIntegerProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
AtomicIntegerProxy::AtomicIntegerProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

AtomicIntegerProxy::AtomicIntegerProxy()
{
	jmethodID mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "<init>", "()V" );
	peerObject = JNIEnvHelper::NewGlobalRef( JNIEnvHelper::NewObject( _getObjectClass(), mid ) );
}

AtomicIntegerProxy::AtomicIntegerProxy(jint p0)
{
	jmethodID mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "<init>", "(I)V" );
	peerObject = JNIEnvHelper::NewGlobalRef( JNIEnvHelper::NewObject( _getObjectClass(), mid, p0 ) );
}

AtomicIntegerProxy::~AtomicIntegerProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

AtomicIntegerProxy& AtomicIntegerProxy::operator=(const AtomicIntegerProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
jdouble AtomicIntegerProxy::doubleValue()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "doubleValue", "()D" );
	return JNIEnvHelper::CallDoubleMethod( _getPeerObject(), mid );
}

jboolean AtomicIntegerProxy::compareAndSet(jint p0, jint p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "compareAndSet", "(II)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, p0, p1 );
}

jboolean AtomicIntegerProxy::weakCompareAndSet(jint p0, jint p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "weakCompareAndSet", "(II)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, p0, p1 );
}

jint AtomicIntegerProxy::accumulateAndGet(jint p0, ::java::util::function::IntBinaryOperatorProxy p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "accumulateAndGet", "(ILjava/util/function/IntBinaryOperator;)I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid, p0, static_cast<jobject>( p1 ) );
}

jint AtomicIntegerProxy::addAndGet(jint p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "addAndGet", "(I)I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid, p0 );
}

jint AtomicIntegerProxy::decrementAndGet()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "decrementAndGet", "()I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid );
}

jint AtomicIntegerProxy::get()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "get", "()I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid );
}

jint AtomicIntegerProxy::getAndAccumulate(jint p0, ::java::util::function::IntBinaryOperatorProxy p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getAndAccumulate", "(ILjava/util/function/IntBinaryOperator;)I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid, p0, static_cast<jobject>( p1 ) );
}

jint AtomicIntegerProxy::getAndAdd(jint p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getAndAdd", "(I)I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid, p0 );
}

jint AtomicIntegerProxy::getAndDecrement()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getAndDecrement", "()I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid );
}

jint AtomicIntegerProxy::getAndIncrement()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getAndIncrement", "()I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid );
}

jint AtomicIntegerProxy::getAndSet(jint p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getAndSet", "(I)I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid, p0 );
}

jint AtomicIntegerProxy::getAndUpdate(::java::util::function::IntUnaryOperatorProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getAndUpdate", "(Ljava/util/function/IntUnaryOperator;)I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

jint AtomicIntegerProxy::incrementAndGet()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "incrementAndGet", "()I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid );
}

jint AtomicIntegerProxy::updateAndGet(::java::util::function::IntUnaryOperatorProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "updateAndGet", "(Ljava/util/function/IntUnaryOperator;)I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

void AtomicIntegerProxy::lazySet(jint p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "lazySet", "(I)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, p0 );
}

void AtomicIntegerProxy::set(jint p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "set", "(I)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, p0 );
}

jfloat AtomicIntegerProxy::floatValue()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "floatValue", "()F" );
	return JNIEnvHelper::CallFloatMethod( _getPeerObject(), mid );
}

jint AtomicIntegerProxy::intValue()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "intValue", "()I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid );
}

::net::sourceforge::jnipp::JStringHelper AtomicIntegerProxy::toString()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "toString", "()Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

jlong AtomicIntegerProxy::longValue()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "longValue", "()J" );
	return JNIEnvHelper::CallLongMethod( _getPeerObject(), mid );
}

