#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "LocalDateProxy.h"

// includes for parameter and return type proxy classes
#include "java\lang\ObjectProxy.h"
#include "java\time\chrono\ChronoLocalDateProxy.h"
#include "java\time\temporal\TemporalFieldProxy.h"
#include "java\time\temporal\TemporalUnitProxy.h"
#include "java\time\temporal\TemporalQueryProxy.h"
#include "java\time\format\DateTimeFormatterProxy.h"
#include "java\time\DayOfWeekProxy.h"
#include "java\time\temporal\TemporalAmountProxy.h"
#include "java\time\temporal\TemporalAdjusterProxy.h"
#include "java\time\LocalDateTimeProxy.h"
#include "java\time\LocalTimeProxy.h"
#include "java\time\MonthProxy.h"
#include "java\time\OffsetTimeProxy.h"
#include "java\time\OffsetDateTimeProxy.h"
#include "java\time\PeriodProxy.h"
#include "java\time\ZoneIdProxy.h"
#include "java\time\ZonedDateTimeProxy.h"
#include "java\time\chrono\EraProxy.h"
#include "java\time\chrono\IsoChronologyProxy.h"
#include "java\time\temporal\TemporalProxy.h"
#include "java\time\temporal\ValueRangeProxy.h"
#include "java\time\temporal\TemporalAccessorProxy.h"
#include "java\time\ClockProxy.h"
#include "java\lang\CharSequenceProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::time;


std::string LocalDateProxy::className = "java/time/LocalDate";
jclass LocalDateProxy::objectClass = NULL;

jclass LocalDateProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

LocalDateProxy::LocalDateProxy(void* unused)
{
}

jobject LocalDateProxy::_getPeerObject() const
{
	return peerObject;
}

jclass LocalDateProxy::getObjectClass()
{
	return _getObjectClass();
}

LocalDateProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
LocalDateProxy::LocalDateProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

LocalDateProxy::~LocalDateProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

LocalDateProxy& LocalDateProxy::operator=(const LocalDateProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
jboolean LocalDateProxy::equals(::java::lang::ObjectProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "equals", "(Ljava/lang/Object;)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

jboolean LocalDateProxy::isAfter(::java::time::chrono::ChronoLocalDateProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "isAfter", "(Ljava/time/chrono/ChronoLocalDate;)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

jboolean LocalDateProxy::isBefore(::java::time::chrono::ChronoLocalDateProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "isBefore", "(Ljava/time/chrono/ChronoLocalDate;)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

jboolean LocalDateProxy::isEqual(::java::time::chrono::ChronoLocalDateProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "isEqual", "(Ljava/time/chrono/ChronoLocalDate;)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

jboolean LocalDateProxy::isLeapYear()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "isLeapYear", "()Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid );
}

jboolean LocalDateProxy::isSupported(::java::time::temporal::TemporalFieldProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "isSupported", "(Ljava/time/temporal/TemporalField;)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

jboolean LocalDateProxy::isSupported(::java::time::temporal::TemporalUnitProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "isSupported", "(Ljava/time/temporal/TemporalUnit;)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

jint LocalDateProxy::compareTo(::java::time::chrono::ChronoLocalDateProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "compareTo", "(Ljava/time/chrono/ChronoLocalDate;)I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

jint LocalDateProxy::get(::java::time::temporal::TemporalFieldProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "get", "(Ljava/time/temporal/TemporalField;)I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

jint LocalDateProxy::getDayOfMonth()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getDayOfMonth", "()I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid );
}

jint LocalDateProxy::getDayOfYear()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getDayOfYear", "()I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid );
}

jint LocalDateProxy::getMonthValue()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getMonthValue", "()I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid );
}

jint LocalDateProxy::getYear()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getYear", "()I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid );
}

jint LocalDateProxy::hashCode()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "hashCode", "()I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid );
}

jint LocalDateProxy::lengthOfMonth()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "lengthOfMonth", "()I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid );
}

jint LocalDateProxy::lengthOfYear()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "lengthOfYear", "()I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid );
}

::java::lang::ObjectProxy LocalDateProxy::query(::java::time::temporal::TemporalQueryProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "query", "(Ljava/time/temporal/TemporalQuery;)Ljava/lang/Object;" );
	return ::java::lang::ObjectProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::net::sourceforge::jnipp::JStringHelper LocalDateProxy::format(::java::time::format::DateTimeFormatterProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "format", "(Ljava/time/format/DateTimeFormatter;)Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::net::sourceforge::jnipp::JStringHelper LocalDateProxy::toString()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "toString", "()Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::time::DayOfWeekProxy LocalDateProxy::getDayOfWeek()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getDayOfWeek", "()Ljava/time/DayOfWeek;" );
	return ::java::time::DayOfWeekProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::time::LocalDateProxy LocalDateProxy::minus(::java::time::temporal::TemporalAmountProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "minus", "(Ljava/time/temporal/TemporalAmount;)Ljava/time/LocalDate;" );
	return ::java::time::LocalDateProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::java::time::LocalDateProxy LocalDateProxy::minus(jlong p0, ::java::time::temporal::TemporalUnitProxy p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "minus", "(JLjava/time/temporal/TemporalUnit;)Ljava/time/LocalDate;" );
	return ::java::time::LocalDateProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0, static_cast<jobject>( p1 ) )  );
}

::java::time::LocalDateProxy LocalDateProxy::minusDays(jlong p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "minusDays", "(J)Ljava/time/LocalDate;" );
	return ::java::time::LocalDateProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0 )  );
}

::java::time::LocalDateProxy LocalDateProxy::minusMonths(jlong p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "minusMonths", "(J)Ljava/time/LocalDate;" );
	return ::java::time::LocalDateProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0 )  );
}

::java::time::LocalDateProxy LocalDateProxy::minusWeeks(jlong p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "minusWeeks", "(J)Ljava/time/LocalDate;" );
	return ::java::time::LocalDateProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0 )  );
}

::java::time::LocalDateProxy LocalDateProxy::minusYears(jlong p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "minusYears", "(J)Ljava/time/LocalDate;" );
	return ::java::time::LocalDateProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0 )  );
}

::java::time::LocalDateProxy LocalDateProxy::plus(::java::time::temporal::TemporalAmountProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "plus", "(Ljava/time/temporal/TemporalAmount;)Ljava/time/LocalDate;" );
	return ::java::time::LocalDateProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::java::time::LocalDateProxy LocalDateProxy::plus(jlong p0, ::java::time::temporal::TemporalUnitProxy p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "plus", "(JLjava/time/temporal/TemporalUnit;)Ljava/time/LocalDate;" );
	return ::java::time::LocalDateProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0, static_cast<jobject>( p1 ) )  );
}

::java::time::LocalDateProxy LocalDateProxy::plusDays(jlong p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "plusDays", "(J)Ljava/time/LocalDate;" );
	return ::java::time::LocalDateProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0 )  );
}

::java::time::LocalDateProxy LocalDateProxy::plusMonths(jlong p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "plusMonths", "(J)Ljava/time/LocalDate;" );
	return ::java::time::LocalDateProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0 )  );
}

::java::time::LocalDateProxy LocalDateProxy::plusWeeks(jlong p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "plusWeeks", "(J)Ljava/time/LocalDate;" );
	return ::java::time::LocalDateProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0 )  );
}

::java::time::LocalDateProxy LocalDateProxy::plusYears(jlong p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "plusYears", "(J)Ljava/time/LocalDate;" );
	return ::java::time::LocalDateProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0 )  );
}

::java::time::LocalDateProxy LocalDateProxy::with(::java::time::temporal::TemporalAdjusterProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "with", "(Ljava/time/temporal/TemporalAdjuster;)Ljava/time/LocalDate;" );
	return ::java::time::LocalDateProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::java::time::LocalDateProxy LocalDateProxy::with(::java::time::temporal::TemporalFieldProxy p0, jlong p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "with", "(Ljava/time/temporal/TemporalField;J)Ljava/time/LocalDate;" );
	return ::java::time::LocalDateProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), p1 )  );
}

::java::time::LocalDateProxy LocalDateProxy::withDayOfMonth(jint p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "withDayOfMonth", "(I)Ljava/time/LocalDate;" );
	return ::java::time::LocalDateProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0 )  );
}

::java::time::LocalDateProxy LocalDateProxy::withDayOfYear(jint p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "withDayOfYear", "(I)Ljava/time/LocalDate;" );
	return ::java::time::LocalDateProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0 )  );
}

::java::time::LocalDateProxy LocalDateProxy::withMonth(jint p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "withMonth", "(I)Ljava/time/LocalDate;" );
	return ::java::time::LocalDateProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0 )  );
}

::java::time::LocalDateProxy LocalDateProxy::withYear(jint p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "withYear", "(I)Ljava/time/LocalDate;" );
	return ::java::time::LocalDateProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0 )  );
}

::java::time::LocalDateTimeProxy LocalDateProxy::atStartOfDay()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "atStartOfDay", "()Ljava/time/LocalDateTime;" );
	return ::java::time::LocalDateTimeProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::time::LocalDateTimeProxy LocalDateProxy::atTime(jint p0, jint p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "atTime", "(II)Ljava/time/LocalDateTime;" );
	return ::java::time::LocalDateTimeProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0, p1 )  );
}

::java::time::LocalDateTimeProxy LocalDateProxy::atTime(jint p0, jint p1, jint p2)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "atTime", "(III)Ljava/time/LocalDateTime;" );
	return ::java::time::LocalDateTimeProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0, p1, p2 )  );
}

::java::time::LocalDateTimeProxy LocalDateProxy::atTime(jint p0, jint p1, jint p2, jint p3)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "atTime", "(IIII)Ljava/time/LocalDateTime;" );
	return ::java::time::LocalDateTimeProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0, p1, p2, p3 )  );
}

::java::time::LocalDateTimeProxy LocalDateProxy::atTime(::java::time::LocalTimeProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "atTime", "(Ljava/time/LocalTime;)Ljava/time/LocalDateTime;" );
	return ::java::time::LocalDateTimeProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::java::time::MonthProxy LocalDateProxy::getMonth()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getMonth", "()Ljava/time/Month;" );
	return ::java::time::MonthProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::time::OffsetDateTimeProxy LocalDateProxy::atTime(::java::time::OffsetTimeProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "atTime", "(Ljava/time/OffsetTime;)Ljava/time/OffsetDateTime;" );
	return ::java::time::OffsetDateTimeProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::java::time::PeriodProxy LocalDateProxy::until(::java::time::chrono::ChronoLocalDateProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "until", "(Ljava/time/chrono/ChronoLocalDate;)Ljava/time/Period;" );
	return ::java::time::PeriodProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::java::time::ZonedDateTimeProxy LocalDateProxy::atStartOfDay(::java::time::ZoneIdProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "atStartOfDay", "(Ljava/time/ZoneId;)Ljava/time/ZonedDateTime;" );
	return ::java::time::ZonedDateTimeProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::java::time::chrono::EraProxy LocalDateProxy::getEra()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getEra", "()Ljava/time/chrono/Era;" );
	return ::java::time::chrono::EraProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::time::chrono::IsoChronologyProxy LocalDateProxy::getChronology()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getChronology", "()Ljava/time/chrono/IsoChronology;" );
	return ::java::time::chrono::IsoChronologyProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::time::temporal::TemporalProxy LocalDateProxy::adjustInto(::java::time::temporal::TemporalProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "adjustInto", "(Ljava/time/temporal/Temporal;)Ljava/time/temporal/Temporal;" );
	return ::java::time::temporal::TemporalProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::java::time::temporal::ValueRangeProxy LocalDateProxy::range(::java::time::temporal::TemporalFieldProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "range", "(Ljava/time/temporal/TemporalField;)Ljava/time/temporal/ValueRange;" );
	return ::java::time::temporal::ValueRangeProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

jlong LocalDateProxy::getLong(::java::time::temporal::TemporalFieldProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getLong", "(Ljava/time/temporal/TemporalField;)J" );
	return JNIEnvHelper::CallLongMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

jlong LocalDateProxy::toEpochDay()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "toEpochDay", "()J" );
	return JNIEnvHelper::CallLongMethod( _getPeerObject(), mid );
}

jlong LocalDateProxy::until(::java::time::temporal::TemporalProxy p0, ::java::time::temporal::TemporalUnitProxy p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "until", "(Ljava/time/temporal/Temporal;Ljava/time/temporal/TemporalUnit;)J" );
	return JNIEnvHelper::CallLongMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), static_cast<jobject>( p1 ) );
}

::java::time::LocalDateProxy LocalDateProxy::from(::java::time::temporal::TemporalAccessorProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "from", "(Ljava/time/temporal/TemporalAccessor;)Ljava/time/LocalDate;" );
	return ::java::time::LocalDateProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, static_cast<jobject>( p0 ) )  );
}

::java::time::LocalDateProxy LocalDateProxy::now()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "now", "()Ljava/time/LocalDate;" );
	return ::java::time::LocalDateProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid )  );
}

::java::time::LocalDateProxy LocalDateProxy::now(::java::time::ClockProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "now", "(Ljava/time/Clock;)Ljava/time/LocalDate;" );
	return ::java::time::LocalDateProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, static_cast<jobject>( p0 ) )  );
}

::java::time::LocalDateProxy LocalDateProxy::now(::java::time::ZoneIdProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "now", "(Ljava/time/ZoneId;)Ljava/time/LocalDate;" );
	return ::java::time::LocalDateProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, static_cast<jobject>( p0 ) )  );
}

::java::time::LocalDateProxy LocalDateProxy::of(jint p0, jint p1, jint p2)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "of", "(III)Ljava/time/LocalDate;" );
	return ::java::time::LocalDateProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, p0, p1, p2 )  );
}

::java::time::LocalDateProxy LocalDateProxy::of(jint p0, ::java::time::MonthProxy p1, jint p2)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "of", "(ILjava/time/Month;I)Ljava/time/LocalDate;" );
	return ::java::time::LocalDateProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, p0, static_cast<jobject>( p1 ), p2 )  );
}

::java::time::LocalDateProxy LocalDateProxy::ofEpochDay(jlong p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "ofEpochDay", "(J)Ljava/time/LocalDate;" );
	return ::java::time::LocalDateProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, p0 )  );
}

::java::time::LocalDateProxy LocalDateProxy::ofYearDay(jint p0, jint p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "ofYearDay", "(II)Ljava/time/LocalDate;" );
	return ::java::time::LocalDateProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, p0, p1 )  );
}

::java::time::LocalDateProxy LocalDateProxy::parse(::java::lang::CharSequenceProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "parse", "(Ljava/lang/CharSequence;)Ljava/time/LocalDate;" );
	return ::java::time::LocalDateProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, static_cast<jobject>( p0 ) )  );
}

::java::time::LocalDateProxy LocalDateProxy::parse(::java::lang::CharSequenceProxy p0, ::java::time::format::DateTimeFormatterProxy p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "parse", "(Ljava/lang/CharSequence;Ljava/time/format/DateTimeFormatter;)Ljava/time/LocalDate;" );
	return ::java::time::LocalDateProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, static_cast<jobject>( p0 ), static_cast<jobject>( p1 ) )  );
}

