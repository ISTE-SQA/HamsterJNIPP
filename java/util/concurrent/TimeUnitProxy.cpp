#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "TimeUnitProxy.h"

// includes for parameter and return type proxy classes
#include "java\util\concurrent\TimeUnitProxy.h"
#include "java\lang\ThreadProxy.h"
#include "java\lang\ObjectProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::util::concurrent;


std::string TimeUnitProxy::className = "java/util/concurrent/TimeUnit";
jclass TimeUnitProxy::objectClass = NULL;

jclass TimeUnitProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

TimeUnitProxy::TimeUnitProxy(void* unused)
{
}

jobject TimeUnitProxy::_getPeerObject() const
{
	return peerObject;
}

jclass TimeUnitProxy::getObjectClass()
{
	return _getObjectClass();
}

TimeUnitProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
TimeUnitProxy::TimeUnitProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

TimeUnitProxy::~TimeUnitProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

TimeUnitProxy& TimeUnitProxy::operator=(const TimeUnitProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
jlong TimeUnitProxy::convert(jlong p0, ::java::util::concurrent::TimeUnitProxy p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "convert", "(JLjava/util/concurrent/TimeUnit;)J" );
	return JNIEnvHelper::CallLongMethod( _getPeerObject(), mid, p0, static_cast<jobject>( p1 ) );
}

jlong TimeUnitProxy::toDays(jlong p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "toDays", "(J)J" );
	return JNIEnvHelper::CallLongMethod( _getPeerObject(), mid, p0 );
}

jlong TimeUnitProxy::toHours(jlong p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "toHours", "(J)J" );
	return JNIEnvHelper::CallLongMethod( _getPeerObject(), mid, p0 );
}

jlong TimeUnitProxy::toMicros(jlong p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "toMicros", "(J)J" );
	return JNIEnvHelper::CallLongMethod( _getPeerObject(), mid, p0 );
}

jlong TimeUnitProxy::toMillis(jlong p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "toMillis", "(J)J" );
	return JNIEnvHelper::CallLongMethod( _getPeerObject(), mid, p0 );
}

jlong TimeUnitProxy::toMinutes(jlong p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "toMinutes", "(J)J" );
	return JNIEnvHelper::CallLongMethod( _getPeerObject(), mid, p0 );
}

jlong TimeUnitProxy::toNanos(jlong p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "toNanos", "(J)J" );
	return JNIEnvHelper::CallLongMethod( _getPeerObject(), mid, p0 );
}

jlong TimeUnitProxy::toSeconds(jlong p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "toSeconds", "(J)J" );
	return JNIEnvHelper::CallLongMethod( _getPeerObject(), mid, p0 );
}

::java::util::concurrent::TimeUnitProxy TimeUnitProxy::valueOf(::net::sourceforge::jnipp::JStringHelper p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "valueOf", "(Ljava/lang/String;)Ljava/util/concurrent/TimeUnit;" );
	return ::java::util::concurrent::TimeUnitProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, static_cast<jstring>( p0 ) )  );
}

::net::sourceforge::jnipp::PA<::java::util::concurrent::TimeUnitProxy>::ProxyArray<1> TimeUnitProxy::values()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "values", "()[Ljava/util/concurrent/TimeUnit;" );
	return ::net::sourceforge::jnipp::PA<::java::util::concurrent::TimeUnitProxy>::ProxyArray<1>( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid )  );
}

void TimeUnitProxy::sleep(jlong p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "sleep", "(J)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, p0 );
}

void TimeUnitProxy::timedJoin(::java::lang::ThreadProxy p0, jlong p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "timedJoin", "(Ljava/lang/Thread;J)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), p1 );
}

void TimeUnitProxy::timedWait(::java::lang::ObjectProxy p0, jlong p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "timedWait", "(Ljava/lang/Object;J)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), p1 );
}

