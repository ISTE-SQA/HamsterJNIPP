#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "InstantProxy.h"

// includes for parameter and return type proxy classes
#include "java\lang\ObjectProxy.h"
#include "java\time\temporal\TemporalFieldProxy.h"
#include "java\time\temporal\TemporalUnitProxy.h"
#include "java\time\temporal\TemporalQueryProxy.h"
#include "java\time\temporal\TemporalAmountProxy.h"
#include "java\time\temporal\TemporalAdjusterProxy.h"
#include "java\time\ZoneOffsetProxy.h"
#include "java\time\OffsetDateTimeProxy.h"
#include "java\time\ZoneIdProxy.h"
#include "java\time\ZonedDateTimeProxy.h"
#include "java\time\temporal\TemporalProxy.h"
#include "java\time\temporal\ValueRangeProxy.h"
#include "java\time\temporal\TemporalAccessorProxy.h"
#include "java\time\ClockProxy.h"
#include "java\lang\CharSequenceProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::time;


std::string InstantProxy::className = "java/time/Instant";
jclass InstantProxy::objectClass = NULL;

jclass InstantProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

InstantProxy::InstantProxy(void* unused)
{
}

jobject InstantProxy::_getPeerObject() const
{
	return peerObject;
}

jclass InstantProxy::getObjectClass()
{
	return _getObjectClass();
}

InstantProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
InstantProxy::InstantProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

InstantProxy::~InstantProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

InstantProxy& InstantProxy::operator=(const InstantProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
jboolean InstantProxy::equals(::java::lang::ObjectProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "equals", "(Ljava/lang/Object;)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

jboolean InstantProxy::isAfter(::java::time::InstantProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "isAfter", "(Ljava/time/Instant;)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

jboolean InstantProxy::isBefore(::java::time::InstantProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "isBefore", "(Ljava/time/Instant;)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

jboolean InstantProxy::isSupported(::java::time::temporal::TemporalFieldProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "isSupported", "(Ljava/time/temporal/TemporalField;)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

jboolean InstantProxy::isSupported(::java::time::temporal::TemporalUnitProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "isSupported", "(Ljava/time/temporal/TemporalUnit;)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

jint InstantProxy::compareTo(::java::time::InstantProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "compareTo", "(Ljava/time/Instant;)I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

jint InstantProxy::get(::java::time::temporal::TemporalFieldProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "get", "(Ljava/time/temporal/TemporalField;)I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

jint InstantProxy::getNano()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getNano", "()I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid );
}

jint InstantProxy::hashCode()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "hashCode", "()I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid );
}

::java::lang::ObjectProxy InstantProxy::query(::java::time::temporal::TemporalQueryProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "query", "(Ljava/time/temporal/TemporalQuery;)Ljava/lang/Object;" );
	return ::java::lang::ObjectProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::net::sourceforge::jnipp::JStringHelper InstantProxy::toString()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "toString", "()Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::time::InstantProxy InstantProxy::minus(::java::time::temporal::TemporalAmountProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "minus", "(Ljava/time/temporal/TemporalAmount;)Ljava/time/Instant;" );
	return ::java::time::InstantProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::java::time::InstantProxy InstantProxy::minus(jlong p0, ::java::time::temporal::TemporalUnitProxy p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "minus", "(JLjava/time/temporal/TemporalUnit;)Ljava/time/Instant;" );
	return ::java::time::InstantProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0, static_cast<jobject>( p1 ) )  );
}

::java::time::InstantProxy InstantProxy::minusMillis(jlong p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "minusMillis", "(J)Ljava/time/Instant;" );
	return ::java::time::InstantProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0 )  );
}

::java::time::InstantProxy InstantProxy::minusNanos(jlong p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "minusNanos", "(J)Ljava/time/Instant;" );
	return ::java::time::InstantProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0 )  );
}

::java::time::InstantProxy InstantProxy::minusSeconds(jlong p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "minusSeconds", "(J)Ljava/time/Instant;" );
	return ::java::time::InstantProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0 )  );
}

::java::time::InstantProxy InstantProxy::plus(::java::time::temporal::TemporalAmountProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "plus", "(Ljava/time/temporal/TemporalAmount;)Ljava/time/Instant;" );
	return ::java::time::InstantProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::java::time::InstantProxy InstantProxy::plus(jlong p0, ::java::time::temporal::TemporalUnitProxy p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "plus", "(JLjava/time/temporal/TemporalUnit;)Ljava/time/Instant;" );
	return ::java::time::InstantProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0, static_cast<jobject>( p1 ) )  );
}

::java::time::InstantProxy InstantProxy::plusMillis(jlong p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "plusMillis", "(J)Ljava/time/Instant;" );
	return ::java::time::InstantProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0 )  );
}

::java::time::InstantProxy InstantProxy::plusNanos(jlong p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "plusNanos", "(J)Ljava/time/Instant;" );
	return ::java::time::InstantProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0 )  );
}

::java::time::InstantProxy InstantProxy::plusSeconds(jlong p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "plusSeconds", "(J)Ljava/time/Instant;" );
	return ::java::time::InstantProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0 )  );
}

::java::time::InstantProxy InstantProxy::truncatedTo(::java::time::temporal::TemporalUnitProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "truncatedTo", "(Ljava/time/temporal/TemporalUnit;)Ljava/time/Instant;" );
	return ::java::time::InstantProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::java::time::InstantProxy InstantProxy::with(::java::time::temporal::TemporalAdjusterProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "with", "(Ljava/time/temporal/TemporalAdjuster;)Ljava/time/Instant;" );
	return ::java::time::InstantProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::java::time::InstantProxy InstantProxy::with(::java::time::temporal::TemporalFieldProxy p0, jlong p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "with", "(Ljava/time/temporal/TemporalField;J)Ljava/time/Instant;" );
	return ::java::time::InstantProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), p1 )  );
}

::java::time::OffsetDateTimeProxy InstantProxy::atOffset(::java::time::ZoneOffsetProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "atOffset", "(Ljava/time/ZoneOffset;)Ljava/time/OffsetDateTime;" );
	return ::java::time::OffsetDateTimeProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::java::time::ZonedDateTimeProxy InstantProxy::atZone(::java::time::ZoneIdProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "atZone", "(Ljava/time/ZoneId;)Ljava/time/ZonedDateTime;" );
	return ::java::time::ZonedDateTimeProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::java::time::temporal::TemporalProxy InstantProxy::adjustInto(::java::time::temporal::TemporalProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "adjustInto", "(Ljava/time/temporal/Temporal;)Ljava/time/temporal/Temporal;" );
	return ::java::time::temporal::TemporalProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::java::time::temporal::ValueRangeProxy InstantProxy::range(::java::time::temporal::TemporalFieldProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "range", "(Ljava/time/temporal/TemporalField;)Ljava/time/temporal/ValueRange;" );
	return ::java::time::temporal::ValueRangeProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

jlong InstantProxy::getEpochSecond()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getEpochSecond", "()J" );
	return JNIEnvHelper::CallLongMethod( _getPeerObject(), mid );
}

jlong InstantProxy::getLong(::java::time::temporal::TemporalFieldProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getLong", "(Ljava/time/temporal/TemporalField;)J" );
	return JNIEnvHelper::CallLongMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

jlong InstantProxy::toEpochMilli()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "toEpochMilli", "()J" );
	return JNIEnvHelper::CallLongMethod( _getPeerObject(), mid );
}

jlong InstantProxy::until(::java::time::temporal::TemporalProxy p0, ::java::time::temporal::TemporalUnitProxy p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "until", "(Ljava/time/temporal/Temporal;Ljava/time/temporal/TemporalUnit;)J" );
	return JNIEnvHelper::CallLongMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), static_cast<jobject>( p1 ) );
}

::java::time::InstantProxy InstantProxy::from(::java::time::temporal::TemporalAccessorProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "from", "(Ljava/time/temporal/TemporalAccessor;)Ljava/time/Instant;" );
	return ::java::time::InstantProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, static_cast<jobject>( p0 ) )  );
}

::java::time::InstantProxy InstantProxy::now()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "now", "()Ljava/time/Instant;" );
	return ::java::time::InstantProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid )  );
}

::java::time::InstantProxy InstantProxy::now(::java::time::ClockProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "now", "(Ljava/time/Clock;)Ljava/time/Instant;" );
	return ::java::time::InstantProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, static_cast<jobject>( p0 ) )  );
}

::java::time::InstantProxy InstantProxy::ofEpochMilli(jlong p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "ofEpochMilli", "(J)Ljava/time/Instant;" );
	return ::java::time::InstantProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, p0 )  );
}

::java::time::InstantProxy InstantProxy::ofEpochSecond(jlong p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "ofEpochSecond", "(J)Ljava/time/Instant;" );
	return ::java::time::InstantProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, p0 )  );
}

::java::time::InstantProxy InstantProxy::ofEpochSecond(jlong p0, jlong p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "ofEpochSecond", "(JJ)Ljava/time/Instant;" );
	return ::java::time::InstantProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, p0, p1 )  );
}

::java::time::InstantProxy InstantProxy::parse(::java::lang::CharSequenceProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "parse", "(Ljava/lang/CharSequence;)Ljava/time/Instant;" );
	return ::java::time::InstantProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, static_cast<jobject>( p0 ) )  );
}

