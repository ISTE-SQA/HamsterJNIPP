#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "LocalTimeProxy.h"

// includes for parameter and return type proxy classes
#include "java\lang\ObjectProxy.h"
#include "java\time\temporal\TemporalFieldProxy.h"
#include "java\time\temporal\TemporalUnitProxy.h"
#include "java\time\temporal\TemporalQueryProxy.h"
#include "java\time\format\DateTimeFormatterProxy.h"
#include "java\time\LocalDateProxy.h"
#include "java\time\LocalDateTimeProxy.h"
#include "java\time\temporal\TemporalAmountProxy.h"
#include "java\time\temporal\TemporalAdjusterProxy.h"
#include "java\time\ZoneOffsetProxy.h"
#include "java\time\OffsetTimeProxy.h"
#include "java\time\temporal\TemporalProxy.h"
#include "java\time\temporal\ValueRangeProxy.h"
#include "java\time\temporal\TemporalAccessorProxy.h"
#include "java\time\ClockProxy.h"
#include "java\time\ZoneIdProxy.h"
#include "java\lang\CharSequenceProxy.h"
#include "java\time\LocalTimeProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::time;


std::string LocalTimeProxy::className = "java/time/LocalTime";
jclass LocalTimeProxy::objectClass = NULL;

jclass LocalTimeProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

LocalTimeProxy::LocalTimeProxy(void* unused)
{
}

jobject LocalTimeProxy::_getPeerObject() const
{
	return peerObject;
}

jclass LocalTimeProxy::getObjectClass()
{
	return _getObjectClass();
}

LocalTimeProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
LocalTimeProxy::LocalTimeProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

LocalTimeProxy::~LocalTimeProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

LocalTimeProxy& LocalTimeProxy::operator=(const LocalTimeProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
jboolean LocalTimeProxy::equals(::java::lang::ObjectProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "equals", "(Ljava/lang/Object;)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

jboolean LocalTimeProxy::isAfter(::java::time::LocalTimeProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "isAfter", "(Ljava/time/LocalTime;)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

jboolean LocalTimeProxy::isBefore(::java::time::LocalTimeProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "isBefore", "(Ljava/time/LocalTime;)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

jboolean LocalTimeProxy::isSupported(::java::time::temporal::TemporalFieldProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "isSupported", "(Ljava/time/temporal/TemporalField;)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

jboolean LocalTimeProxy::isSupported(::java::time::temporal::TemporalUnitProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "isSupported", "(Ljava/time/temporal/TemporalUnit;)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

jint LocalTimeProxy::compareTo(::java::time::LocalTimeProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "compareTo", "(Ljava/time/LocalTime;)I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

jint LocalTimeProxy::get(::java::time::temporal::TemporalFieldProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "get", "(Ljava/time/temporal/TemporalField;)I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

jint LocalTimeProxy::getHour()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getHour", "()I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid );
}

jint LocalTimeProxy::getMinute()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getMinute", "()I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid );
}

jint LocalTimeProxy::getNano()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getNano", "()I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid );
}

jint LocalTimeProxy::getSecond()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getSecond", "()I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid );
}

jint LocalTimeProxy::hashCode()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "hashCode", "()I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid );
}

jint LocalTimeProxy::toSecondOfDay()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "toSecondOfDay", "()I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid );
}

::java::lang::ObjectProxy LocalTimeProxy::query(::java::time::temporal::TemporalQueryProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "query", "(Ljava/time/temporal/TemporalQuery;)Ljava/lang/Object;" );
	return ::java::lang::ObjectProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::net::sourceforge::jnipp::JStringHelper LocalTimeProxy::format(::java::time::format::DateTimeFormatterProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "format", "(Ljava/time/format/DateTimeFormatter;)Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::net::sourceforge::jnipp::JStringHelper LocalTimeProxy::toString()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "toString", "()Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::time::LocalDateTimeProxy LocalTimeProxy::atDate(::java::time::LocalDateProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "atDate", "(Ljava/time/LocalDate;)Ljava/time/LocalDateTime;" );
	return ::java::time::LocalDateTimeProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::java::time::LocalTimeProxy LocalTimeProxy::minus(::java::time::temporal::TemporalAmountProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "minus", "(Ljava/time/temporal/TemporalAmount;)Ljava/time/LocalTime;" );
	return ::java::time::LocalTimeProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::java::time::LocalTimeProxy LocalTimeProxy::minus(jlong p0, ::java::time::temporal::TemporalUnitProxy p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "minus", "(JLjava/time/temporal/TemporalUnit;)Ljava/time/LocalTime;" );
	return ::java::time::LocalTimeProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0, static_cast<jobject>( p1 ) )  );
}

::java::time::LocalTimeProxy LocalTimeProxy::minusHours(jlong p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "minusHours", "(J)Ljava/time/LocalTime;" );
	return ::java::time::LocalTimeProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0 )  );
}

::java::time::LocalTimeProxy LocalTimeProxy::minusMinutes(jlong p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "minusMinutes", "(J)Ljava/time/LocalTime;" );
	return ::java::time::LocalTimeProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0 )  );
}

::java::time::LocalTimeProxy LocalTimeProxy::minusNanos(jlong p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "minusNanos", "(J)Ljava/time/LocalTime;" );
	return ::java::time::LocalTimeProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0 )  );
}

::java::time::LocalTimeProxy LocalTimeProxy::minusSeconds(jlong p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "minusSeconds", "(J)Ljava/time/LocalTime;" );
	return ::java::time::LocalTimeProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0 )  );
}

::java::time::LocalTimeProxy LocalTimeProxy::plus(::java::time::temporal::TemporalAmountProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "plus", "(Ljava/time/temporal/TemporalAmount;)Ljava/time/LocalTime;" );
	return ::java::time::LocalTimeProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::java::time::LocalTimeProxy LocalTimeProxy::plus(jlong p0, ::java::time::temporal::TemporalUnitProxy p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "plus", "(JLjava/time/temporal/TemporalUnit;)Ljava/time/LocalTime;" );
	return ::java::time::LocalTimeProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0, static_cast<jobject>( p1 ) )  );
}

::java::time::LocalTimeProxy LocalTimeProxy::plusHours(jlong p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "plusHours", "(J)Ljava/time/LocalTime;" );
	return ::java::time::LocalTimeProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0 )  );
}

::java::time::LocalTimeProxy LocalTimeProxy::plusMinutes(jlong p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "plusMinutes", "(J)Ljava/time/LocalTime;" );
	return ::java::time::LocalTimeProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0 )  );
}

::java::time::LocalTimeProxy LocalTimeProxy::plusNanos(jlong p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "plusNanos", "(J)Ljava/time/LocalTime;" );
	return ::java::time::LocalTimeProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0 )  );
}

::java::time::LocalTimeProxy LocalTimeProxy::plusSeconds(jlong p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "plusSeconds", "(J)Ljava/time/LocalTime;" );
	return ::java::time::LocalTimeProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0 )  );
}

::java::time::LocalTimeProxy LocalTimeProxy::truncatedTo(::java::time::temporal::TemporalUnitProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "truncatedTo", "(Ljava/time/temporal/TemporalUnit;)Ljava/time/LocalTime;" );
	return ::java::time::LocalTimeProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::java::time::LocalTimeProxy LocalTimeProxy::with(::java::time::temporal::TemporalAdjusterProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "with", "(Ljava/time/temporal/TemporalAdjuster;)Ljava/time/LocalTime;" );
	return ::java::time::LocalTimeProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::java::time::LocalTimeProxy LocalTimeProxy::with(::java::time::temporal::TemporalFieldProxy p0, jlong p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "with", "(Ljava/time/temporal/TemporalField;J)Ljava/time/LocalTime;" );
	return ::java::time::LocalTimeProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), p1 )  );
}

::java::time::LocalTimeProxy LocalTimeProxy::withHour(jint p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "withHour", "(I)Ljava/time/LocalTime;" );
	return ::java::time::LocalTimeProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0 )  );
}

::java::time::LocalTimeProxy LocalTimeProxy::withMinute(jint p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "withMinute", "(I)Ljava/time/LocalTime;" );
	return ::java::time::LocalTimeProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0 )  );
}

::java::time::LocalTimeProxy LocalTimeProxy::withNano(jint p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "withNano", "(I)Ljava/time/LocalTime;" );
	return ::java::time::LocalTimeProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0 )  );
}

::java::time::LocalTimeProxy LocalTimeProxy::withSecond(jint p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "withSecond", "(I)Ljava/time/LocalTime;" );
	return ::java::time::LocalTimeProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0 )  );
}

::java::time::OffsetTimeProxy LocalTimeProxy::atOffset(::java::time::ZoneOffsetProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "atOffset", "(Ljava/time/ZoneOffset;)Ljava/time/OffsetTime;" );
	return ::java::time::OffsetTimeProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::java::time::temporal::TemporalProxy LocalTimeProxy::adjustInto(::java::time::temporal::TemporalProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "adjustInto", "(Ljava/time/temporal/Temporal;)Ljava/time/temporal/Temporal;" );
	return ::java::time::temporal::TemporalProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::java::time::temporal::ValueRangeProxy LocalTimeProxy::range(::java::time::temporal::TemporalFieldProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "range", "(Ljava/time/temporal/TemporalField;)Ljava/time/temporal/ValueRange;" );
	return ::java::time::temporal::ValueRangeProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

jlong LocalTimeProxy::getLong(::java::time::temporal::TemporalFieldProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getLong", "(Ljava/time/temporal/TemporalField;)J" );
	return JNIEnvHelper::CallLongMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

jlong LocalTimeProxy::toNanoOfDay()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "toNanoOfDay", "()J" );
	return JNIEnvHelper::CallLongMethod( _getPeerObject(), mid );
}

jlong LocalTimeProxy::until(::java::time::temporal::TemporalProxy p0, ::java::time::temporal::TemporalUnitProxy p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "until", "(Ljava/time/temporal/Temporal;Ljava/time/temporal/TemporalUnit;)J" );
	return JNIEnvHelper::CallLongMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), static_cast<jobject>( p1 ) );
}

::java::time::LocalTimeProxy LocalTimeProxy::from(::java::time::temporal::TemporalAccessorProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "from", "(Ljava/time/temporal/TemporalAccessor;)Ljava/time/LocalTime;" );
	return ::java::time::LocalTimeProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, static_cast<jobject>( p0 ) )  );
}

::java::time::LocalTimeProxy LocalTimeProxy::now()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "now", "()Ljava/time/LocalTime;" );
	return ::java::time::LocalTimeProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid )  );
}

::java::time::LocalTimeProxy LocalTimeProxy::now(::java::time::ClockProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "now", "(Ljava/time/Clock;)Ljava/time/LocalTime;" );
	return ::java::time::LocalTimeProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, static_cast<jobject>( p0 ) )  );
}

::java::time::LocalTimeProxy LocalTimeProxy::now(::java::time::ZoneIdProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "now", "(Ljava/time/ZoneId;)Ljava/time/LocalTime;" );
	return ::java::time::LocalTimeProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, static_cast<jobject>( p0 ) )  );
}

::java::time::LocalTimeProxy LocalTimeProxy::of(jint p0, jint p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "of", "(II)Ljava/time/LocalTime;" );
	return ::java::time::LocalTimeProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, p0, p1 )  );
}

::java::time::LocalTimeProxy LocalTimeProxy::of(jint p0, jint p1, jint p2)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "of", "(III)Ljava/time/LocalTime;" );
	return ::java::time::LocalTimeProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, p0, p1, p2 )  );
}

::java::time::LocalTimeProxy LocalTimeProxy::of(jint p0, jint p1, jint p2, jint p3)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "of", "(IIII)Ljava/time/LocalTime;" );
	return ::java::time::LocalTimeProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, p0, p1, p2, p3 )  );
}

::java::time::LocalTimeProxy LocalTimeProxy::ofNanoOfDay(jlong p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "ofNanoOfDay", "(J)Ljava/time/LocalTime;" );
	return ::java::time::LocalTimeProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, p0 )  );
}

::java::time::LocalTimeProxy LocalTimeProxy::ofSecondOfDay(jlong p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "ofSecondOfDay", "(J)Ljava/time/LocalTime;" );
	return ::java::time::LocalTimeProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, p0 )  );
}

::java::time::LocalTimeProxy LocalTimeProxy::parse(::java::lang::CharSequenceProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "parse", "(Ljava/lang/CharSequence;)Ljava/time/LocalTime;" );
	return ::java::time::LocalTimeProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, static_cast<jobject>( p0 ) )  );
}

::java::time::LocalTimeProxy LocalTimeProxy::parse(::java::lang::CharSequenceProxy p0, ::java::time::format::DateTimeFormatterProxy p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "parse", "(Ljava/lang/CharSequence;Ljava/time/format/DateTimeFormatter;)Ljava/time/LocalTime;" );
	return ::java::time::LocalTimeProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, static_cast<jobject>( p0 ), static_cast<jobject>( p1 ) )  );
}

