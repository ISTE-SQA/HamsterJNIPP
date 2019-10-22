#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "ZonedDateTimeProxy.h"

// includes for parameter and return type proxy classes
#include "java\lang\ObjectProxy.h"
#include "java\time\temporal\TemporalFieldProxy.h"
#include "java\time\temporal\TemporalUnitProxy.h"
#include "java\time\temporal\TemporalQueryProxy.h"
#include "java\time\format\DateTimeFormatterProxy.h"
#include "java\time\DayOfWeekProxy.h"
#include "java\time\LocalDateProxy.h"
#include "java\time\LocalDateTimeProxy.h"
#include "java\time\LocalTimeProxy.h"
#include "java\time\MonthProxy.h"
#include "java\time\OffsetDateTimeProxy.h"
#include "java\time\ZoneIdProxy.h"
#include "java\time\ZoneOffsetProxy.h"
#include "java\time\temporal\TemporalAmountProxy.h"
#include "java\time\temporal\TemporalAdjusterProxy.h"
#include "java\time\temporal\ValueRangeProxy.h"
#include "java\time\temporal\TemporalProxy.h"
#include "java\time\temporal\TemporalAccessorProxy.h"
#include "java\time\ClockProxy.h"
#include "java\time\InstantProxy.h"
#include "java\lang\CharSequenceProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::time;


std::string ZonedDateTimeProxy::className = "java/time/ZonedDateTime";
jclass ZonedDateTimeProxy::objectClass = NULL;

jclass ZonedDateTimeProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

ZonedDateTimeProxy::ZonedDateTimeProxy(void* unused)
{
}

jobject ZonedDateTimeProxy::_getPeerObject() const
{
	return peerObject;
}

jclass ZonedDateTimeProxy::getObjectClass()
{
	return _getObjectClass();
}

ZonedDateTimeProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
ZonedDateTimeProxy::ZonedDateTimeProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

ZonedDateTimeProxy::~ZonedDateTimeProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

ZonedDateTimeProxy& ZonedDateTimeProxy::operator=(const ZonedDateTimeProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
jboolean ZonedDateTimeProxy::equals(::java::lang::ObjectProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "equals", "(Ljava/lang/Object;)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

jboolean ZonedDateTimeProxy::isSupported(::java::time::temporal::TemporalFieldProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "isSupported", "(Ljava/time/temporal/TemporalField;)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

jboolean ZonedDateTimeProxy::isSupported(::java::time::temporal::TemporalUnitProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "isSupported", "(Ljava/time/temporal/TemporalUnit;)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

jint ZonedDateTimeProxy::get(::java::time::temporal::TemporalFieldProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "get", "(Ljava/time/temporal/TemporalField;)I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

jint ZonedDateTimeProxy::getDayOfMonth()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getDayOfMonth", "()I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid );
}

jint ZonedDateTimeProxy::getDayOfYear()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getDayOfYear", "()I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid );
}

jint ZonedDateTimeProxy::getHour()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getHour", "()I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid );
}

jint ZonedDateTimeProxy::getMinute()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getMinute", "()I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid );
}

jint ZonedDateTimeProxy::getMonthValue()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getMonthValue", "()I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid );
}

jint ZonedDateTimeProxy::getNano()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getNano", "()I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid );
}

jint ZonedDateTimeProxy::getSecond()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getSecond", "()I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid );
}

jint ZonedDateTimeProxy::getYear()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getYear", "()I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid );
}

jint ZonedDateTimeProxy::hashCode()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "hashCode", "()I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid );
}

::java::lang::ObjectProxy ZonedDateTimeProxy::query(::java::time::temporal::TemporalQueryProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "query", "(Ljava/time/temporal/TemporalQuery;)Ljava/lang/Object;" );
	return ::java::lang::ObjectProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::net::sourceforge::jnipp::JStringHelper ZonedDateTimeProxy::format(::java::time::format::DateTimeFormatterProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "format", "(Ljava/time/format/DateTimeFormatter;)Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::net::sourceforge::jnipp::JStringHelper ZonedDateTimeProxy::toString()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "toString", "()Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::time::DayOfWeekProxy ZonedDateTimeProxy::getDayOfWeek()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getDayOfWeek", "()Ljava/time/DayOfWeek;" );
	return ::java::time::DayOfWeekProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::time::LocalDateProxy ZonedDateTimeProxy::toLocalDate()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "toLocalDate", "()Ljava/time/LocalDate;" );
	return ::java::time::LocalDateProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::time::LocalDateTimeProxy ZonedDateTimeProxy::toLocalDateTime()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "toLocalDateTime", "()Ljava/time/LocalDateTime;" );
	return ::java::time::LocalDateTimeProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::time::LocalTimeProxy ZonedDateTimeProxy::toLocalTime()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "toLocalTime", "()Ljava/time/LocalTime;" );
	return ::java::time::LocalTimeProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::time::MonthProxy ZonedDateTimeProxy::getMonth()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getMonth", "()Ljava/time/Month;" );
	return ::java::time::MonthProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::time::OffsetDateTimeProxy ZonedDateTimeProxy::toOffsetDateTime()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "toOffsetDateTime", "()Ljava/time/OffsetDateTime;" );
	return ::java::time::OffsetDateTimeProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::time::ZoneIdProxy ZonedDateTimeProxy::getZone()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getZone", "()Ljava/time/ZoneId;" );
	return ::java::time::ZoneIdProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::time::ZoneOffsetProxy ZonedDateTimeProxy::getOffset()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getOffset", "()Ljava/time/ZoneOffset;" );
	return ::java::time::ZoneOffsetProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::time::ZonedDateTimeProxy ZonedDateTimeProxy::minus(::java::time::temporal::TemporalAmountProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "minus", "(Ljava/time/temporal/TemporalAmount;)Ljava/time/ZonedDateTime;" );
	return ::java::time::ZonedDateTimeProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::java::time::ZonedDateTimeProxy ZonedDateTimeProxy::minus(jlong p0, ::java::time::temporal::TemporalUnitProxy p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "minus", "(JLjava/time/temporal/TemporalUnit;)Ljava/time/ZonedDateTime;" );
	return ::java::time::ZonedDateTimeProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0, static_cast<jobject>( p1 ) )  );
}

::java::time::ZonedDateTimeProxy ZonedDateTimeProxy::minusDays(jlong p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "minusDays", "(J)Ljava/time/ZonedDateTime;" );
	return ::java::time::ZonedDateTimeProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0 )  );
}

::java::time::ZonedDateTimeProxy ZonedDateTimeProxy::minusHours(jlong p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "minusHours", "(J)Ljava/time/ZonedDateTime;" );
	return ::java::time::ZonedDateTimeProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0 )  );
}

::java::time::ZonedDateTimeProxy ZonedDateTimeProxy::minusMinutes(jlong p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "minusMinutes", "(J)Ljava/time/ZonedDateTime;" );
	return ::java::time::ZonedDateTimeProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0 )  );
}

::java::time::ZonedDateTimeProxy ZonedDateTimeProxy::minusMonths(jlong p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "minusMonths", "(J)Ljava/time/ZonedDateTime;" );
	return ::java::time::ZonedDateTimeProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0 )  );
}

::java::time::ZonedDateTimeProxy ZonedDateTimeProxy::minusNanos(jlong p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "minusNanos", "(J)Ljava/time/ZonedDateTime;" );
	return ::java::time::ZonedDateTimeProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0 )  );
}

::java::time::ZonedDateTimeProxy ZonedDateTimeProxy::minusSeconds(jlong p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "minusSeconds", "(J)Ljava/time/ZonedDateTime;" );
	return ::java::time::ZonedDateTimeProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0 )  );
}

::java::time::ZonedDateTimeProxy ZonedDateTimeProxy::minusWeeks(jlong p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "minusWeeks", "(J)Ljava/time/ZonedDateTime;" );
	return ::java::time::ZonedDateTimeProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0 )  );
}

::java::time::ZonedDateTimeProxy ZonedDateTimeProxy::minusYears(jlong p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "minusYears", "(J)Ljava/time/ZonedDateTime;" );
	return ::java::time::ZonedDateTimeProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0 )  );
}

::java::time::ZonedDateTimeProxy ZonedDateTimeProxy::plus(::java::time::temporal::TemporalAmountProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "plus", "(Ljava/time/temporal/TemporalAmount;)Ljava/time/ZonedDateTime;" );
	return ::java::time::ZonedDateTimeProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::java::time::ZonedDateTimeProxy ZonedDateTimeProxy::plus(jlong p0, ::java::time::temporal::TemporalUnitProxy p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "plus", "(JLjava/time/temporal/TemporalUnit;)Ljava/time/ZonedDateTime;" );
	return ::java::time::ZonedDateTimeProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0, static_cast<jobject>( p1 ) )  );
}

::java::time::ZonedDateTimeProxy ZonedDateTimeProxy::plusDays(jlong p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "plusDays", "(J)Ljava/time/ZonedDateTime;" );
	return ::java::time::ZonedDateTimeProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0 )  );
}

::java::time::ZonedDateTimeProxy ZonedDateTimeProxy::plusHours(jlong p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "plusHours", "(J)Ljava/time/ZonedDateTime;" );
	return ::java::time::ZonedDateTimeProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0 )  );
}

::java::time::ZonedDateTimeProxy ZonedDateTimeProxy::plusMinutes(jlong p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "plusMinutes", "(J)Ljava/time/ZonedDateTime;" );
	return ::java::time::ZonedDateTimeProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0 )  );
}

::java::time::ZonedDateTimeProxy ZonedDateTimeProxy::plusMonths(jlong p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "plusMonths", "(J)Ljava/time/ZonedDateTime;" );
	return ::java::time::ZonedDateTimeProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0 )  );
}

::java::time::ZonedDateTimeProxy ZonedDateTimeProxy::plusNanos(jlong p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "plusNanos", "(J)Ljava/time/ZonedDateTime;" );
	return ::java::time::ZonedDateTimeProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0 )  );
}

::java::time::ZonedDateTimeProxy ZonedDateTimeProxy::plusSeconds(jlong p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "plusSeconds", "(J)Ljava/time/ZonedDateTime;" );
	return ::java::time::ZonedDateTimeProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0 )  );
}

::java::time::ZonedDateTimeProxy ZonedDateTimeProxy::plusWeeks(jlong p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "plusWeeks", "(J)Ljava/time/ZonedDateTime;" );
	return ::java::time::ZonedDateTimeProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0 )  );
}

::java::time::ZonedDateTimeProxy ZonedDateTimeProxy::plusYears(jlong p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "plusYears", "(J)Ljava/time/ZonedDateTime;" );
	return ::java::time::ZonedDateTimeProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0 )  );
}

::java::time::ZonedDateTimeProxy ZonedDateTimeProxy::truncatedTo(::java::time::temporal::TemporalUnitProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "truncatedTo", "(Ljava/time/temporal/TemporalUnit;)Ljava/time/ZonedDateTime;" );
	return ::java::time::ZonedDateTimeProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::java::time::ZonedDateTimeProxy ZonedDateTimeProxy::with(::java::time::temporal::TemporalAdjusterProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "with", "(Ljava/time/temporal/TemporalAdjuster;)Ljava/time/ZonedDateTime;" );
	return ::java::time::ZonedDateTimeProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::java::time::ZonedDateTimeProxy ZonedDateTimeProxy::with(::java::time::temporal::TemporalFieldProxy p0, jlong p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "with", "(Ljava/time/temporal/TemporalField;J)Ljava/time/ZonedDateTime;" );
	return ::java::time::ZonedDateTimeProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), p1 )  );
}

::java::time::ZonedDateTimeProxy ZonedDateTimeProxy::withDayOfMonth(jint p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "withDayOfMonth", "(I)Ljava/time/ZonedDateTime;" );
	return ::java::time::ZonedDateTimeProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0 )  );
}

::java::time::ZonedDateTimeProxy ZonedDateTimeProxy::withDayOfYear(jint p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "withDayOfYear", "(I)Ljava/time/ZonedDateTime;" );
	return ::java::time::ZonedDateTimeProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0 )  );
}

::java::time::ZonedDateTimeProxy ZonedDateTimeProxy::withEarlierOffsetAtOverlap()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "withEarlierOffsetAtOverlap", "()Ljava/time/ZonedDateTime;" );
	return ::java::time::ZonedDateTimeProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::time::ZonedDateTimeProxy ZonedDateTimeProxy::withFixedOffsetZone()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "withFixedOffsetZone", "()Ljava/time/ZonedDateTime;" );
	return ::java::time::ZonedDateTimeProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::time::ZonedDateTimeProxy ZonedDateTimeProxy::withHour(jint p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "withHour", "(I)Ljava/time/ZonedDateTime;" );
	return ::java::time::ZonedDateTimeProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0 )  );
}

::java::time::ZonedDateTimeProxy ZonedDateTimeProxy::withLaterOffsetAtOverlap()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "withLaterOffsetAtOverlap", "()Ljava/time/ZonedDateTime;" );
	return ::java::time::ZonedDateTimeProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::time::ZonedDateTimeProxy ZonedDateTimeProxy::withMinute(jint p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "withMinute", "(I)Ljava/time/ZonedDateTime;" );
	return ::java::time::ZonedDateTimeProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0 )  );
}

::java::time::ZonedDateTimeProxy ZonedDateTimeProxy::withMonth(jint p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "withMonth", "(I)Ljava/time/ZonedDateTime;" );
	return ::java::time::ZonedDateTimeProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0 )  );
}

::java::time::ZonedDateTimeProxy ZonedDateTimeProxy::withNano(jint p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "withNano", "(I)Ljava/time/ZonedDateTime;" );
	return ::java::time::ZonedDateTimeProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0 )  );
}

::java::time::ZonedDateTimeProxy ZonedDateTimeProxy::withSecond(jint p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "withSecond", "(I)Ljava/time/ZonedDateTime;" );
	return ::java::time::ZonedDateTimeProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0 )  );
}

::java::time::ZonedDateTimeProxy ZonedDateTimeProxy::withYear(jint p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "withYear", "(I)Ljava/time/ZonedDateTime;" );
	return ::java::time::ZonedDateTimeProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0 )  );
}

::java::time::ZonedDateTimeProxy ZonedDateTimeProxy::withZoneSameInstant(::java::time::ZoneIdProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "withZoneSameInstant", "(Ljava/time/ZoneId;)Ljava/time/ZonedDateTime;" );
	return ::java::time::ZonedDateTimeProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::java::time::ZonedDateTimeProxy ZonedDateTimeProxy::withZoneSameLocal(::java::time::ZoneIdProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "withZoneSameLocal", "(Ljava/time/ZoneId;)Ljava/time/ZonedDateTime;" );
	return ::java::time::ZonedDateTimeProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::java::time::temporal::ValueRangeProxy ZonedDateTimeProxy::range(::java::time::temporal::TemporalFieldProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "range", "(Ljava/time/temporal/TemporalField;)Ljava/time/temporal/ValueRange;" );
	return ::java::time::temporal::ValueRangeProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

jlong ZonedDateTimeProxy::getLong(::java::time::temporal::TemporalFieldProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getLong", "(Ljava/time/temporal/TemporalField;)J" );
	return JNIEnvHelper::CallLongMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

jlong ZonedDateTimeProxy::until(::java::time::temporal::TemporalProxy p0, ::java::time::temporal::TemporalUnitProxy p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "until", "(Ljava/time/temporal/Temporal;Ljava/time/temporal/TemporalUnit;)J" );
	return JNIEnvHelper::CallLongMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), static_cast<jobject>( p1 ) );
}

::java::time::ZonedDateTimeProxy ZonedDateTimeProxy::from(::java::time::temporal::TemporalAccessorProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "from", "(Ljava/time/temporal/TemporalAccessor;)Ljava/time/ZonedDateTime;" );
	return ::java::time::ZonedDateTimeProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, static_cast<jobject>( p0 ) )  );
}

::java::time::ZonedDateTimeProxy ZonedDateTimeProxy::now()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "now", "()Ljava/time/ZonedDateTime;" );
	return ::java::time::ZonedDateTimeProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid )  );
}

::java::time::ZonedDateTimeProxy ZonedDateTimeProxy::now(::java::time::ClockProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "now", "(Ljava/time/Clock;)Ljava/time/ZonedDateTime;" );
	return ::java::time::ZonedDateTimeProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, static_cast<jobject>( p0 ) )  );
}

::java::time::ZonedDateTimeProxy ZonedDateTimeProxy::now(::java::time::ZoneIdProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "now", "(Ljava/time/ZoneId;)Ljava/time/ZonedDateTime;" );
	return ::java::time::ZonedDateTimeProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, static_cast<jobject>( p0 ) )  );
}

::java::time::ZonedDateTimeProxy ZonedDateTimeProxy::of(jint p0, jint p1, jint p2, jint p3, jint p4, jint p5, jint p6, ::java::time::ZoneIdProxy p7)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "of", "(IIIIIIILjava/time/ZoneId;)Ljava/time/ZonedDateTime;" );
	return ::java::time::ZonedDateTimeProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, p0, p1, p2, p3, p4, p5, p6, static_cast<jobject>( p7 ) )  );
}

::java::time::ZonedDateTimeProxy ZonedDateTimeProxy::of(::java::time::LocalDateProxy p0, ::java::time::LocalTimeProxy p1, ::java::time::ZoneIdProxy p2)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "of", "(Ljava/time/LocalDate;Ljava/time/LocalTime;Ljava/time/ZoneId;)Ljava/time/ZonedDateTime;" );
	return ::java::time::ZonedDateTimeProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, static_cast<jobject>( p0 ), static_cast<jobject>( p1 ), static_cast<jobject>( p2 ) )  );
}

::java::time::ZonedDateTimeProxy ZonedDateTimeProxy::of(::java::time::LocalDateTimeProxy p0, ::java::time::ZoneIdProxy p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "of", "(Ljava/time/LocalDateTime;Ljava/time/ZoneId;)Ljava/time/ZonedDateTime;" );
	return ::java::time::ZonedDateTimeProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, static_cast<jobject>( p0 ), static_cast<jobject>( p1 ) )  );
}

::java::time::ZonedDateTimeProxy ZonedDateTimeProxy::ofInstant(::java::time::InstantProxy p0, ::java::time::ZoneIdProxy p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "ofInstant", "(Ljava/time/Instant;Ljava/time/ZoneId;)Ljava/time/ZonedDateTime;" );
	return ::java::time::ZonedDateTimeProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, static_cast<jobject>( p0 ), static_cast<jobject>( p1 ) )  );
}

::java::time::ZonedDateTimeProxy ZonedDateTimeProxy::ofInstant(::java::time::LocalDateTimeProxy p0, ::java::time::ZoneOffsetProxy p1, ::java::time::ZoneIdProxy p2)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "ofInstant", "(Ljava/time/LocalDateTime;Ljava/time/ZoneOffset;Ljava/time/ZoneId;)Ljava/time/ZonedDateTime;" );
	return ::java::time::ZonedDateTimeProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, static_cast<jobject>( p0 ), static_cast<jobject>( p1 ), static_cast<jobject>( p2 ) )  );
}

::java::time::ZonedDateTimeProxy ZonedDateTimeProxy::ofLocal(::java::time::LocalDateTimeProxy p0, ::java::time::ZoneIdProxy p1, ::java::time::ZoneOffsetProxy p2)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "ofLocal", "(Ljava/time/LocalDateTime;Ljava/time/ZoneId;Ljava/time/ZoneOffset;)Ljava/time/ZonedDateTime;" );
	return ::java::time::ZonedDateTimeProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, static_cast<jobject>( p0 ), static_cast<jobject>( p1 ), static_cast<jobject>( p2 ) )  );
}

::java::time::ZonedDateTimeProxy ZonedDateTimeProxy::ofStrict(::java::time::LocalDateTimeProxy p0, ::java::time::ZoneOffsetProxy p1, ::java::time::ZoneIdProxy p2)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "ofStrict", "(Ljava/time/LocalDateTime;Ljava/time/ZoneOffset;Ljava/time/ZoneId;)Ljava/time/ZonedDateTime;" );
	return ::java::time::ZonedDateTimeProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, static_cast<jobject>( p0 ), static_cast<jobject>( p1 ), static_cast<jobject>( p2 ) )  );
}

::java::time::ZonedDateTimeProxy ZonedDateTimeProxy::parse(::java::lang::CharSequenceProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "parse", "(Ljava/lang/CharSequence;)Ljava/time/ZonedDateTime;" );
	return ::java::time::ZonedDateTimeProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, static_cast<jobject>( p0 ) )  );
}

::java::time::ZonedDateTimeProxy ZonedDateTimeProxy::parse(::java::lang::CharSequenceProxy p0, ::java::time::format::DateTimeFormatterProxy p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "parse", "(Ljava/lang/CharSequence;Ljava/time/format/DateTimeFormatter;)Ljava/time/ZonedDateTime;" );
	return ::java::time::ZonedDateTimeProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, static_cast<jobject>( p0 ), static_cast<jobject>( p1 ) )  );
}

