#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "ChronoLocalDateProxy.h"

// includes for parameter and return type proxy classes
#include "java\lang\ObjectProxy.h"
#include "java\time\chrono\ChronoPeriodProxy.h"
#include "java\time\chrono\ChronologyProxy.h"
#include "java\time\temporal\TemporalProxy.h"
#include "java\time\temporal\TemporalUnitProxy.h"
#include "java\time\temporal\TemporalFieldProxy.h"
#include "java\time\temporal\TemporalQueryProxy.h"
#include "java\time\format\DateTimeFormatterProxy.h"
#include "java\time\temporal\TemporalAmountProxy.h"
#include "java\time\temporal\TemporalAdjusterProxy.h"
#include "java\time\LocalTimeProxy.h"
#include "java\time\chrono\ChronoLocalDateTimeProxy.h"
#include "java\time\chrono\EraProxy.h"
#include "java\time\temporal\TemporalAccessorProxy.h"
#include "java\util\ComparatorProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::time::chrono;


std::string ChronoLocalDateProxy::className = "java/time/chrono/ChronoLocalDate";
jclass ChronoLocalDateProxy::objectClass = NULL;

jclass ChronoLocalDateProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

ChronoLocalDateProxy::ChronoLocalDateProxy(void* unused)
{
}

jobject ChronoLocalDateProxy::_getPeerObject() const
{
	return peerObject;
}

jclass ChronoLocalDateProxy::getObjectClass()
{
	return _getObjectClass();
}

ChronoLocalDateProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
ChronoLocalDateProxy::ChronoLocalDateProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

ChronoLocalDateProxy::~ChronoLocalDateProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

ChronoLocalDateProxy& ChronoLocalDateProxy::operator=(const ChronoLocalDateProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
jboolean ChronoLocalDateProxy::equals(::java::lang::ObjectProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "equals", "(Ljava/lang/Object;)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

jint ChronoLocalDateProxy::hashCode()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "hashCode", "()I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid );
}

jint ChronoLocalDateProxy::lengthOfMonth()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "lengthOfMonth", "()I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid );
}

::net::sourceforge::jnipp::JStringHelper ChronoLocalDateProxy::toString()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "toString", "()Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::time::chrono::ChronoPeriodProxy ChronoLocalDateProxy::until(::java::time::chrono::ChronoLocalDateProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "until", "(Ljava/time/chrono/ChronoLocalDate;)Ljava/time/chrono/ChronoPeriod;" );
	return ::java::time::chrono::ChronoPeriodProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::java::time::chrono::ChronologyProxy ChronoLocalDateProxy::getChronology()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getChronology", "()Ljava/time/chrono/Chronology;" );
	return ::java::time::chrono::ChronologyProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

jlong ChronoLocalDateProxy::until(::java::time::temporal::TemporalProxy p0, ::java::time::temporal::TemporalUnitProxy p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "until", "(Ljava/time/temporal/Temporal;Ljava/time/temporal/TemporalUnit;)J" );
	return JNIEnvHelper::CallLongMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), static_cast<jobject>( p1 ) );
}

jboolean ChronoLocalDateProxy::isAfter(::java::time::chrono::ChronoLocalDateProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "isAfter", "(Ljava/time/chrono/ChronoLocalDate;)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

jboolean ChronoLocalDateProxy::isBefore(::java::time::chrono::ChronoLocalDateProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "isBefore", "(Ljava/time/chrono/ChronoLocalDate;)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

jboolean ChronoLocalDateProxy::isEqual(::java::time::chrono::ChronoLocalDateProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "isEqual", "(Ljava/time/chrono/ChronoLocalDate;)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

jboolean ChronoLocalDateProxy::isLeapYear()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "isLeapYear", "()Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid );
}

jboolean ChronoLocalDateProxy::isSupported(::java::time::temporal::TemporalFieldProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "isSupported", "(Ljava/time/temporal/TemporalField;)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

jboolean ChronoLocalDateProxy::isSupported(::java::time::temporal::TemporalUnitProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "isSupported", "(Ljava/time/temporal/TemporalUnit;)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

jint ChronoLocalDateProxy::compareTo(::java::time::chrono::ChronoLocalDateProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "compareTo", "(Ljava/time/chrono/ChronoLocalDate;)I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

jint ChronoLocalDateProxy::lengthOfYear()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "lengthOfYear", "()I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid );
}

::java::lang::ObjectProxy ChronoLocalDateProxy::query(::java::time::temporal::TemporalQueryProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "query", "(Ljava/time/temporal/TemporalQuery;)Ljava/lang/Object;" );
	return ::java::lang::ObjectProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::net::sourceforge::jnipp::JStringHelper ChronoLocalDateProxy::format(::java::time::format::DateTimeFormatterProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "format", "(Ljava/time/format/DateTimeFormatter;)Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::java::time::chrono::ChronoLocalDateProxy ChronoLocalDateProxy::minus(::java::time::temporal::TemporalAmountProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "minus", "(Ljava/time/temporal/TemporalAmount;)Ljava/time/chrono/ChronoLocalDate;" );
	return ::java::time::chrono::ChronoLocalDateProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::java::time::chrono::ChronoLocalDateProxy ChronoLocalDateProxy::minus(jlong p0, ::java::time::temporal::TemporalUnitProxy p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "minus", "(JLjava/time/temporal/TemporalUnit;)Ljava/time/chrono/ChronoLocalDate;" );
	return ::java::time::chrono::ChronoLocalDateProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0, static_cast<jobject>( p1 ) )  );
}

::java::time::chrono::ChronoLocalDateProxy ChronoLocalDateProxy::plus(::java::time::temporal::TemporalAmountProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "plus", "(Ljava/time/temporal/TemporalAmount;)Ljava/time/chrono/ChronoLocalDate;" );
	return ::java::time::chrono::ChronoLocalDateProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::java::time::chrono::ChronoLocalDateProxy ChronoLocalDateProxy::plus(jlong p0, ::java::time::temporal::TemporalUnitProxy p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "plus", "(JLjava/time/temporal/TemporalUnit;)Ljava/time/chrono/ChronoLocalDate;" );
	return ::java::time::chrono::ChronoLocalDateProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0, static_cast<jobject>( p1 ) )  );
}

::java::time::chrono::ChronoLocalDateProxy ChronoLocalDateProxy::with(::java::time::temporal::TemporalAdjusterProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "with", "(Ljava/time/temporal/TemporalAdjuster;)Ljava/time/chrono/ChronoLocalDate;" );
	return ::java::time::chrono::ChronoLocalDateProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::java::time::chrono::ChronoLocalDateProxy ChronoLocalDateProxy::with(::java::time::temporal::TemporalFieldProxy p0, jlong p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "with", "(Ljava/time/temporal/TemporalField;J)Ljava/time/chrono/ChronoLocalDate;" );
	return ::java::time::chrono::ChronoLocalDateProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), p1 )  );
}

::java::time::chrono::ChronoLocalDateTimeProxy ChronoLocalDateProxy::atTime(::java::time::LocalTimeProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "atTime", "(Ljava/time/LocalTime;)Ljava/time/chrono/ChronoLocalDateTime;" );
	return ::java::time::chrono::ChronoLocalDateTimeProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::java::time::chrono::EraProxy ChronoLocalDateProxy::getEra()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getEra", "()Ljava/time/chrono/Era;" );
	return ::java::time::chrono::EraProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::time::temporal::TemporalProxy ChronoLocalDateProxy::adjustInto(::java::time::temporal::TemporalProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "adjustInto", "(Ljava/time/temporal/Temporal;)Ljava/time/temporal/Temporal;" );
	return ::java::time::temporal::TemporalProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

jlong ChronoLocalDateProxy::toEpochDay()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "toEpochDay", "()J" );
	return JNIEnvHelper::CallLongMethod( _getPeerObject(), mid );
}

::java::time::chrono::ChronoLocalDateProxy ChronoLocalDateProxy::from(::java::time::temporal::TemporalAccessorProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "from", "(Ljava/time/temporal/TemporalAccessor;)Ljava/time/chrono/ChronoLocalDate;" );
	return ::java::time::chrono::ChronoLocalDateProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, static_cast<jobject>( p0 ) )  );
}

::java::util::ComparatorProxy ChronoLocalDateProxy::timeLineOrder()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "timeLineOrder", "()Ljava/util/Comparator;" );
	return ::java::util::ComparatorProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid )  );
}

