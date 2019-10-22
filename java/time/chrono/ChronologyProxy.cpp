#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "ChronologyProxy.h"

// includes for parameter and return type proxy classes
#include "java\lang\ObjectProxy.h"
#include "java\time\chrono\EraProxy.h"
#include "java\time\chrono\ChronoLocalDateProxy.h"
#include "java\time\temporal\TemporalAccessorProxy.h"
#include "java\util\MapProxy.h"
#include "java\time\format\ResolverStyleProxy.h"
#include "java\time\temporal\ChronoFieldProxy.h"
#include "java\time\temporal\ValueRangeProxy.h"
#include "java\util\ListProxy.h"
#include "java\time\format\TextStyleProxy.h"
#include "java\util\LocaleProxy.h"
#include "java\time\ClockProxy.h"
#include "java\time\ZoneIdProxy.h"
#include "java\time\chrono\ChronoLocalDateTimeProxy.h"
#include "java\time\chrono\ChronoPeriodProxy.h"
#include "java\time\InstantProxy.h"
#include "java\time\chrono\ChronoZonedDateTimeProxy.h"
#include "java\util\SetProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::time::chrono;


std::string ChronologyProxy::className = "java/time/chrono/Chronology";
jclass ChronologyProxy::objectClass = NULL;

jclass ChronologyProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

ChronologyProxy::ChronologyProxy(void* unused)
{
}

jobject ChronologyProxy::_getPeerObject() const
{
	return peerObject;
}

jclass ChronologyProxy::getObjectClass()
{
	return _getObjectClass();
}

ChronologyProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
ChronologyProxy::ChronologyProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

ChronologyProxy::~ChronologyProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

ChronologyProxy& ChronologyProxy::operator=(const ChronologyProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
jboolean ChronologyProxy::equals(::java::lang::ObjectProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "equals", "(Ljava/lang/Object;)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

jboolean ChronologyProxy::isLeapYear(jlong p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "isLeapYear", "(J)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, p0 );
}

jint ChronologyProxy::compareTo(::java::time::chrono::ChronologyProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "compareTo", "(Ljava/time/chrono/Chronology;)I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

jint ChronologyProxy::hashCode()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "hashCode", "()I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid );
}

jint ChronologyProxy::prolepticYear(::java::time::chrono::EraProxy p0, jint p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "prolepticYear", "(Ljava/time/chrono/Era;I)I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), p1 );
}

::net::sourceforge::jnipp::JStringHelper ChronologyProxy::getCalendarType()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getCalendarType", "()Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::net::sourceforge::jnipp::JStringHelper ChronologyProxy::getId()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getId", "()Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::net::sourceforge::jnipp::JStringHelper ChronologyProxy::toString()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "toString", "()Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::time::chrono::ChronoLocalDateProxy ChronologyProxy::date(jint p0, jint p1, jint p2)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "date", "(III)Ljava/time/chrono/ChronoLocalDate;" );
	return ::java::time::chrono::ChronoLocalDateProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0, p1, p2 )  );
}

::java::time::chrono::ChronoLocalDateProxy ChronologyProxy::date(::java::time::temporal::TemporalAccessorProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "date", "(Ljava/time/temporal/TemporalAccessor;)Ljava/time/chrono/ChronoLocalDate;" );
	return ::java::time::chrono::ChronoLocalDateProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::java::time::chrono::ChronoLocalDateProxy ChronologyProxy::dateEpochDay(jlong p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "dateEpochDay", "(J)Ljava/time/chrono/ChronoLocalDate;" );
	return ::java::time::chrono::ChronoLocalDateProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0 )  );
}

::java::time::chrono::ChronoLocalDateProxy ChronologyProxy::dateYearDay(jint p0, jint p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "dateYearDay", "(II)Ljava/time/chrono/ChronoLocalDate;" );
	return ::java::time::chrono::ChronoLocalDateProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0, p1 )  );
}

::java::time::chrono::ChronoLocalDateProxy ChronologyProxy::resolveDate(::java::util::MapProxy p0, ::java::time::format::ResolverStyleProxy p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "resolveDate", "(Ljava/util/Map;Ljava/time/format/ResolverStyle;)Ljava/time/chrono/ChronoLocalDate;" );
	return ::java::time::chrono::ChronoLocalDateProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), static_cast<jobject>( p1 ) )  );
}

::java::time::chrono::EraProxy ChronologyProxy::eraOf(jint p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "eraOf", "(I)Ljava/time/chrono/Era;" );
	return ::java::time::chrono::EraProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0 )  );
}

::java::time::temporal::ValueRangeProxy ChronologyProxy::range(::java::time::temporal::ChronoFieldProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "range", "(Ljava/time/temporal/ChronoField;)Ljava/time/temporal/ValueRange;" );
	return ::java::time::temporal::ValueRangeProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::java::util::ListProxy ChronologyProxy::eras()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "eras", "()Ljava/util/List;" );
	return ::java::util::ListProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::net::sourceforge::jnipp::JStringHelper ChronologyProxy::getDisplayName(::java::time::format::TextStyleProxy p0, ::java::util::LocaleProxy p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getDisplayName", "(Ljava/time/format/TextStyle;Ljava/util/Locale;)Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), static_cast<jobject>( p1 ) )  );
}

::java::time::chrono::ChronoLocalDateProxy ChronologyProxy::date(::java::time::chrono::EraProxy p0, jint p1, jint p2, jint p3)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "date", "(Ljava/time/chrono/Era;III)Ljava/time/chrono/ChronoLocalDate;" );
	return ::java::time::chrono::ChronoLocalDateProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), p1, p2, p3 )  );
}

::java::time::chrono::ChronoLocalDateProxy ChronologyProxy::dateNow()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "dateNow", "()Ljava/time/chrono/ChronoLocalDate;" );
	return ::java::time::chrono::ChronoLocalDateProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::time::chrono::ChronoLocalDateProxy ChronologyProxy::dateNow(::java::time::ClockProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "dateNow", "(Ljava/time/Clock;)Ljava/time/chrono/ChronoLocalDate;" );
	return ::java::time::chrono::ChronoLocalDateProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::java::time::chrono::ChronoLocalDateProxy ChronologyProxy::dateNow(::java::time::ZoneIdProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "dateNow", "(Ljava/time/ZoneId;)Ljava/time/chrono/ChronoLocalDate;" );
	return ::java::time::chrono::ChronoLocalDateProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::java::time::chrono::ChronoLocalDateProxy ChronologyProxy::dateYearDay(::java::time::chrono::EraProxy p0, jint p1, jint p2)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "dateYearDay", "(Ljava/time/chrono/Era;II)Ljava/time/chrono/ChronoLocalDate;" );
	return ::java::time::chrono::ChronoLocalDateProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), p1, p2 )  );
}

::java::time::chrono::ChronoLocalDateTimeProxy ChronologyProxy::localDateTime(::java::time::temporal::TemporalAccessorProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "localDateTime", "(Ljava/time/temporal/TemporalAccessor;)Ljava/time/chrono/ChronoLocalDateTime;" );
	return ::java::time::chrono::ChronoLocalDateTimeProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::java::time::chrono::ChronoPeriodProxy ChronologyProxy::period(jint p0, jint p1, jint p2)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "period", "(III)Ljava/time/chrono/ChronoPeriod;" );
	return ::java::time::chrono::ChronoPeriodProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0, p1, p2 )  );
}

::java::time::chrono::ChronoZonedDateTimeProxy ChronologyProxy::zonedDateTime(::java::time::InstantProxy p0, ::java::time::ZoneIdProxy p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "zonedDateTime", "(Ljava/time/Instant;Ljava/time/ZoneId;)Ljava/time/chrono/ChronoZonedDateTime;" );
	return ::java::time::chrono::ChronoZonedDateTimeProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), static_cast<jobject>( p1 ) )  );
}

::java::time::chrono::ChronoZonedDateTimeProxy ChronologyProxy::zonedDateTime(::java::time::temporal::TemporalAccessorProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "zonedDateTime", "(Ljava/time/temporal/TemporalAccessor;)Ljava/time/chrono/ChronoZonedDateTime;" );
	return ::java::time::chrono::ChronoZonedDateTimeProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::java::time::chrono::ChronologyProxy ChronologyProxy::from(::java::time::temporal::TemporalAccessorProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "from", "(Ljava/time/temporal/TemporalAccessor;)Ljava/time/chrono/Chronology;" );
	return ::java::time::chrono::ChronologyProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, static_cast<jobject>( p0 ) )  );
}

::java::time::chrono::ChronologyProxy ChronologyProxy::of(::net::sourceforge::jnipp::JStringHelper p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "of", "(Ljava/lang/String;)Ljava/time/chrono/Chronology;" );
	return ::java::time::chrono::ChronologyProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, static_cast<jstring>( p0 ) )  );
}

::java::time::chrono::ChronologyProxy ChronologyProxy::ofLocale(::java::util::LocaleProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "ofLocale", "(Ljava/util/Locale;)Ljava/time/chrono/Chronology;" );
	return ::java::time::chrono::ChronologyProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, static_cast<jobject>( p0 ) )  );
}

::java::util::SetProxy ChronologyProxy::getAvailableChronologies()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "getAvailableChronologies", "()Ljava/util/Set;" );
	return ::java::util::SetProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid )  );
}

