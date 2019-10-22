#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "IsoChronologyProxy.h"

// includes for parameter and return type proxy classes
#include "java\time\chrono\EraProxy.h"
#include "java\time\LocalDateProxy.h"
#include "java\time\temporal\TemporalAccessorProxy.h"
#include "java\time\ClockProxy.h"
#include "java\time\ZoneIdProxy.h"
#include "java\util\MapProxy.h"
#include "java\time\format\ResolverStyleProxy.h"
#include "java\time\LocalDateTimeProxy.h"
#include "java\time\PeriodProxy.h"
#include "java\time\InstantProxy.h"
#include "java\time\ZonedDateTimeProxy.h"
#include "java\time\chrono\IsoEraProxy.h"
#include "java\time\temporal\ChronoFieldProxy.h"
#include "java\time\temporal\ValueRangeProxy.h"
#include "java\util\ListProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::time::chrono;


std::string IsoChronologyProxy::className = "java/time/chrono/IsoChronology";
jclass IsoChronologyProxy::objectClass = NULL;

jclass IsoChronologyProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

IsoChronologyProxy::IsoChronologyProxy(void* unused)
{
}

jobject IsoChronologyProxy::_getPeerObject() const
{
	return peerObject;
}

jclass IsoChronologyProxy::getObjectClass()
{
	return _getObjectClass();
}

IsoChronologyProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
IsoChronologyProxy::IsoChronologyProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

IsoChronologyProxy::~IsoChronologyProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

IsoChronologyProxy& IsoChronologyProxy::operator=(const IsoChronologyProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
jboolean IsoChronologyProxy::isLeapYear(jlong p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "isLeapYear", "(J)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, p0 );
}

jint IsoChronologyProxy::prolepticYear(::java::time::chrono::EraProxy p0, jint p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "prolepticYear", "(Ljava/time/chrono/Era;I)I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), p1 );
}

::net::sourceforge::jnipp::JStringHelper IsoChronologyProxy::getCalendarType()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getCalendarType", "()Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::net::sourceforge::jnipp::JStringHelper IsoChronologyProxy::getId()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getId", "()Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::time::LocalDateProxy IsoChronologyProxy::date(jint p0, jint p1, jint p2)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "date", "(III)Ljava/time/LocalDate;" );
	return ::java::time::LocalDateProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0, p1, p2 )  );
}

::java::time::LocalDateProxy IsoChronologyProxy::date(::java::time::chrono::EraProxy p0, jint p1, jint p2, jint p3)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "date", "(Ljava/time/chrono/Era;III)Ljava/time/LocalDate;" );
	return ::java::time::LocalDateProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), p1, p2, p3 )  );
}

::java::time::LocalDateProxy IsoChronologyProxy::date(::java::time::temporal::TemporalAccessorProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "date", "(Ljava/time/temporal/TemporalAccessor;)Ljava/time/LocalDate;" );
	return ::java::time::LocalDateProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::java::time::LocalDateProxy IsoChronologyProxy::dateEpochDay(jlong p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "dateEpochDay", "(J)Ljava/time/LocalDate;" );
	return ::java::time::LocalDateProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0 )  );
}

::java::time::LocalDateProxy IsoChronologyProxy::dateNow()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "dateNow", "()Ljava/time/LocalDate;" );
	return ::java::time::LocalDateProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::time::LocalDateProxy IsoChronologyProxy::dateNow(::java::time::ClockProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "dateNow", "(Ljava/time/Clock;)Ljava/time/LocalDate;" );
	return ::java::time::LocalDateProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::java::time::LocalDateProxy IsoChronologyProxy::dateNow(::java::time::ZoneIdProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "dateNow", "(Ljava/time/ZoneId;)Ljava/time/LocalDate;" );
	return ::java::time::LocalDateProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::java::time::LocalDateProxy IsoChronologyProxy::dateYearDay(jint p0, jint p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "dateYearDay", "(II)Ljava/time/LocalDate;" );
	return ::java::time::LocalDateProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0, p1 )  );
}

::java::time::LocalDateProxy IsoChronologyProxy::dateYearDay(::java::time::chrono::EraProxy p0, jint p1, jint p2)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "dateYearDay", "(Ljava/time/chrono/Era;II)Ljava/time/LocalDate;" );
	return ::java::time::LocalDateProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), p1, p2 )  );
}

::java::time::LocalDateProxy IsoChronologyProxy::resolveDate(::java::util::MapProxy p0, ::java::time::format::ResolverStyleProxy p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "resolveDate", "(Ljava/util/Map;Ljava/time/format/ResolverStyle;)Ljava/time/LocalDate;" );
	return ::java::time::LocalDateProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), static_cast<jobject>( p1 ) )  );
}

::java::time::LocalDateTimeProxy IsoChronologyProxy::localDateTime(::java::time::temporal::TemporalAccessorProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "localDateTime", "(Ljava/time/temporal/TemporalAccessor;)Ljava/time/LocalDateTime;" );
	return ::java::time::LocalDateTimeProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::java::time::PeriodProxy IsoChronologyProxy::period(jint p0, jint p1, jint p2)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "period", "(III)Ljava/time/Period;" );
	return ::java::time::PeriodProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0, p1, p2 )  );
}

::java::time::ZonedDateTimeProxy IsoChronologyProxy::zonedDateTime(::java::time::InstantProxy p0, ::java::time::ZoneIdProxy p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "zonedDateTime", "(Ljava/time/Instant;Ljava/time/ZoneId;)Ljava/time/ZonedDateTime;" );
	return ::java::time::ZonedDateTimeProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), static_cast<jobject>( p1 ) )  );
}

::java::time::ZonedDateTimeProxy IsoChronologyProxy::zonedDateTime(::java::time::temporal::TemporalAccessorProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "zonedDateTime", "(Ljava/time/temporal/TemporalAccessor;)Ljava/time/ZonedDateTime;" );
	return ::java::time::ZonedDateTimeProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::java::time::chrono::IsoEraProxy IsoChronologyProxy::eraOf(jint p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "eraOf", "(I)Ljava/time/chrono/IsoEra;" );
	return ::java::time::chrono::IsoEraProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0 )  );
}

::java::time::temporal::ValueRangeProxy IsoChronologyProxy::range(::java::time::temporal::ChronoFieldProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "range", "(Ljava/time/temporal/ChronoField;)Ljava/time/temporal/ValueRange;" );
	return ::java::time::temporal::ValueRangeProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::java::util::ListProxy IsoChronologyProxy::eras()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "eras", "()Ljava/util/List;" );
	return ::java::util::ListProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

