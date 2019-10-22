#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "AtomicLongProxy.h"

// includes for parameter and return type proxy classes
#include "java\util\function\LongBinaryOperatorProxy.h"
#include "java\util\function\LongUnaryOperatorProxy.h"
#include "sun\misc\UnsafeProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::util::concurrent::atomic;


std::string AtomicLongProxy::className = "java/util/concurrent/atomic/AtomicLong";
jclass AtomicLongProxy::objectClass = NULL;

jclass AtomicLongProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

AtomicLongProxy::AtomicLongProxy(void* unused)
{
}

jobject AtomicLongProxy::_getPeerObject() const
{
	return peerObject;
}

jclass AtomicLongProxy::getObjectClass()
{
	return _getObjectClass();
}

AtomicLongProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
AtomicLongProxy::AtomicLongProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

AtomicLongProxy::AtomicLongProxy()
{
	jmethodID mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "<init>", "()V" );
	peerObject = JNIEnvHelper::NewGlobalRef( JNIEnvHelper::NewObject( _getObjectClass(), mid ) );
}

AtomicLongProxy::AtomicLongProxy(jlong p0)
{
	jmethodID mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "<init>", "(J)V" );
	peerObject = JNIEnvHelper::NewGlobalRef( JNIEnvHelper::NewObject( _getObjectClass(), mid, p0 ) );
}

AtomicLongProxy::~AtomicLongProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

AtomicLongProxy& AtomicLongProxy::operator=(const AtomicLongProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
jdouble AtomicLongProxy::doubleValue()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "doubleValue", "()D" );
	return JNIEnvHelper::CallDoubleMethod( _getPeerObject(), mid );
}

jboolean AtomicLongProxy::compareAndSet(jlong p0, jlong p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "compareAndSet", "(JJ)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, p0, p1 );
}

jboolean AtomicLongProxy::weakCompareAndSet(jlong p0, jlong p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "weakCompareAndSet", "(JJ)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, p0, p1 );
}

jlong AtomicLongProxy::accumulateAndGet(jlong p0, ::java::util::function::LongBinaryOperatorProxy p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "accumulateAndGet", "(JLjava/util/function/LongBinaryOperator;)J" );
	return JNIEnvHelper::CallLongMethod( _getPeerObject(), mid, p0, static_cast<jobject>( p1 ) );
}

jlong AtomicLongProxy::addAndGet(jlong p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "addAndGet", "(J)J" );
	return JNIEnvHelper::CallLongMethod( _getPeerObject(), mid, p0 );
}

jlong AtomicLongProxy::decrementAndGet()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "decrementAndGet", "()J" );
	return JNIEnvHelper::CallLongMethod( _getPeerObject(), mid );
}

jlong AtomicLongProxy::get()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "get", "()J" );
	return JNIEnvHelper::CallLongMethod( _getPeerObject(), mid );
}

jlong AtomicLongProxy::getAndAccumulate(jlong p0, ::java::util::function::LongBinaryOperatorProxy p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getAndAccumulate", "(JLjava/util/function/LongBinaryOperator;)J" );
	return JNIEnvHelper::CallLongMethod( _getPeerObject(), mid, p0, static_cast<jobject>( p1 ) );
}

jlong AtomicLongProxy::getAndAdd(jlong p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getAndAdd", "(J)J" );
	return JNIEnvHelper::CallLongMethod( _getPeerObject(), mid, p0 );
}

jlong AtomicLongProxy::getAndDecrement()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getAndDecrement", "()J" );
	return JNIEnvHelper::CallLongMethod( _getPeerObject(), mid );
}

jlong AtomicLongProxy::getAndIncrement()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getAndIncrement", "()J" );
	return JNIEnvHelper::CallLongMethod( _getPeerObject(), mid );
}

jlong AtomicLongProxy::getAndSet(jlong p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getAndSet", "(J)J" );
	return JNIEnvHelper::CallLongMethod( _getPeerObject(), mid, p0 );
}

jlong AtomicLongProxy::getAndUpdate(::java::util::function::LongUnaryOperatorProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getAndUpdate", "(Ljava/util/function/LongUnaryOperator;)J" );
	return JNIEnvHelper::CallLongMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

jlong AtomicLongProxy::incrementAndGet()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "incrementAndGet", "()J" );
	return JNIEnvHelper::CallLongMethod( _getPeerObject(), mid );
}

jlong AtomicLongProxy::updateAndGet(::java::util::function::LongUnaryOperatorProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "updateAndGet", "(Ljava/util/function/LongUnaryOperator;)J" );
	return JNIEnvHelper::CallLongMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

void AtomicLongProxy::lazySet(jlong p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "lazySet", "(J)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, p0 );
}

void AtomicLongProxy::set(jlong p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "set", "(J)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, p0 );
}

jfloat AtomicLongProxy::floatValue()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "floatValue", "()F" );
	return JNIEnvHelper::CallFloatMethod( _getPeerObject(), mid );
}

jint AtomicLongProxy::intValue()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "intValue", "()I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid );
}

::net::sourceforge::jnipp::JStringHelper AtomicLongProxy::toString()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "toString", "()Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

jlong AtomicLongProxy::longValue()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "longValue", "()J" );
	return JNIEnvHelper::CallLongMethod( _getPeerObject(), mid );
}

