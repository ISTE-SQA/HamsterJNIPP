#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "ChronoLocalDateTimeProxy.h"

// includes for parameter and return type proxy classes
#include "java\lang\ObjectProxy.h"
#include "java\time\temporal\TemporalFieldProxy.h"
#include "java\time\LocalTimeProxy.h"
#include "java\time\chrono\ChronoLocalDateProxy.h"
#include "java\time\temporal\TemporalUnitProxy.h"
#include "java\time\ZoneIdProxy.h"
#include "java\time\chrono\ChronoZonedDateTimeProxy.h"
#include "java\time\temporal\TemporalQueryProxy.h"
#include "java\time\format\DateTimeFormatterProxy.h"
#include "java\time\ZoneOffsetProxy.h"
#include "java\time\InstantProxy.h"
#include "java\time\temporal\TemporalAmountProxy.h"
#include "java\time\temporal\TemporalAdjusterProxy.h"
#include "java\time\chrono\ChronologyProxy.h"
#include "java\time\temporal\TemporalProxy.h"
#include "java\time\temporal\TemporalAccessorProxy.h"
#include "java\util\ComparatorProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::time::chrono;


std::string ChronoLocalDateTimeProxy::className = "java/time/chrono/ChronoLocalDateTime";
jclass ChronoLocalDateTimeProxy::objectClass = NULL;

jclass ChronoLocalDateTimeProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

ChronoLocalDateTimeProxy::ChronoLocalDateTimeProxy(void* unused)
{
}

jobject ChronoLocalDateTimeProxy::_getPeerObject() const
{
	return peerObject;
}

jclass ChronoLocalDateTimeProxy::getObjectClass()
{
	return _getObjectClass();
}

ChronoLocalDateTimeProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
ChronoLocalDateTimeProxy::ChronoLocalDateTimeProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

ChronoLocalDateTimeProxy::~ChronoLocalDateTimeProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

ChronoLocalDateTimeProxy& ChronoLocalDateTimeProxy::operator=(const ChronoLocalDateTimeProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
jboolean ChronoLocalDateTimeProxy::equals(::java::lang::ObjectProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "equals", "(Ljava/lang/Object;)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

jboolean ChronoLocalDateTimeProxy::isSupported(::java::time::temporal::TemporalFieldProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "isSupported", "(Ljava/time/temporal/TemporalField;)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

jint ChronoLocalDateTimeProxy::hashCode()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "hashCode", "()I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid );
}

::net::sourceforge::jnipp::JStringHelper ChronoLocalDateTimeProxy::toString()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "toString", "()Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::time::LocalTimeProxy ChronoLocalDateTimeProxy::toLocalTime()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "toLocalTime", "()Ljava/time/LocalTime;" );
	return ::java::time::LocalTimeProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::time::chrono::ChronoLocalDateProxy ChronoLocalDateTimeProxy::toLocalDate()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "toLocalDate", "()Ljava/time/chrono/ChronoLocalDate;" );
	return ::java::time::chrono::ChronoLocalDateProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::time::chrono::ChronoLocalDateTimeProxy ChronoLocalDateTimeProxy::plus(jlong p0, ::java::time::temporal::TemporalUnitProxy p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "plus", "(JLjava/time/temporal/TemporalUnit;)Ljava/time/chrono/ChronoLocalDateTime;" );
	return ::java::time::chrono::ChronoLocalDateTimeProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0, static_cast<jobject>( p1 ) )  );
}

::java::time::chrono::ChronoLocalDateTimeProxy ChronoLocalDateTimeProxy::with(::java::time::temporal::TemporalFieldProxy p0, jlong p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "with", "(Ljava/time/temporal/TemporalField;J)Ljava/time/chrono/ChronoLocalDateTime;" );
	return ::java::time::chrono::ChronoLocalDateTimeProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), p1 )  );
}

::java::time::chrono::ChronoZonedDateTimeProxy ChronoLocalDateTimeProxy::atZone(::java::time::ZoneIdProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "atZone", "(Ljava/time/ZoneId;)Ljava/time/chrono/ChronoZonedDateTime;" );
	return ::java::time::chrono::ChronoZonedDateTimeProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

jboolean ChronoLocalDateTimeProxy::isAfter(::java::time::chrono::ChronoLocalDateTimeProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "isAfter", "(Ljava/time/chrono/ChronoLocalDateTime;)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

jboolean ChronoLocalDateTimeProxy::isBefore(::java::time::chrono::ChronoLocalDateTimeProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "isBefore", "(Ljava/time/chrono/ChronoLocalDateTime;)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

jboolean ChronoLocalDateTimeProxy::isEqual(::java::time::chrono::ChronoLocalDateTimeProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "isEqual", "(Ljava/time/chrono/ChronoLocalDateTime;)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

jboolean ChronoLocalDateTimeProxy::isSupported(::java::time::temporal::TemporalUnitProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "isSupported", "(Ljava/time/temporal/TemporalUnit;)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

jint ChronoLocalDateTimeProxy::compareTo(::java::time::chrono::ChronoLocalDateTimeProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "compareTo", "(Ljava/time/chrono/ChronoLocalDateTime;)I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

::java::lang::ObjectProxy ChronoLocalDateTimeProxy::query(::java::time::temporal::TemporalQueryProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "query", "(Ljava/time/temporal/TemporalQuery;)Ljava/lang/Object;" );
	return ::java::lang::ObjectProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::net::sourceforge::jnipp::JStringHelper ChronoLocalDateTimeProxy::format(::java::time::format::DateTimeFormatterProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "format", "(Ljava/time/format/DateTimeFormatter;)Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::java::time::InstantProxy ChronoLocalDateTimeProxy::toInstant(::java::time::ZoneOffsetProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "toInstant", "(Ljava/time/ZoneOffset;)Ljava/time/Instant;" );
	return ::java::time::InstantProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::java::time::chrono::ChronoLocalDateTimeProxy ChronoLocalDateTimeProxy::minus(::java::time::temporal::TemporalAmountProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "minus", "(Ljava/time/temporal/TemporalAmount;)Ljava/time/chrono/ChronoLocalDateTime;" );
	return ::java::time::chrono::ChronoLocalDateTimeProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::java::time::chrono::ChronoLocalDateTimeProxy ChronoLocalDateTimeProxy::minus(jlong p0, ::java::time::temporal::TemporalUnitProxy p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "minus", "(JLjava/time/temporal/TemporalUnit;)Ljava/time/chrono/ChronoLocalDateTime;" );
	return ::java::time::chrono::ChronoLocalDateTimeProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0, static_cast<jobject>( p1 ) )  );
}

::java::time::chrono::ChronoLocalDateTimeProxy ChronoLocalDateTimeProxy::plus(::java::time::temporal::TemporalAmountProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "plus", "(Ljava/time/temporal/TemporalAmount;)Ljava/time/chrono/ChronoLocalDateTime;" );
	return ::java::time::chrono::ChronoLocalDateTimeProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::java::time::chrono::ChronoLocalDateTimeProxy ChronoLocalDateTimeProxy::with(::java::time::temporal::TemporalAdjusterProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "with", "(Ljava/time/temporal/TemporalAdjuster;)Ljava/time/chrono/ChronoLocalDateTime;" );
	return ::java::time::chrono::ChronoLocalDateTimeProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::java::time::chrono::ChronologyProxy ChronoLocalDateTimeProxy::getChronology()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getChronology", "()Ljava/time/chrono/Chronology;" );
	return ::java::time::chrono::ChronologyProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::time::temporal::TemporalProxy ChronoLocalDateTimeProxy::adjustInto(::java::time::temporal::TemporalProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "adjustInto", "(Ljava/time/temporal/Temporal;)Ljava/time/temporal/Temporal;" );
	return ::java::time::temporal::TemporalProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

jlong ChronoLocalDateTimeProxy::toEpochSecond(::java::time::ZoneOffsetProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "toEpochSecond", "(Ljava/time/ZoneOffset;)J" );
	return JNIEnvHelper::CallLongMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

::java::time::chrono::ChronoLocalDateTimeProxy ChronoLocalDateTimeProxy::from(::java::time::temporal::TemporalAccessorProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "from", "(Ljava/time/temporal/TemporalAccessor;)Ljava/time/chrono/ChronoLocalDateTime;" );
	return ::java::time::chrono::ChronoLocalDateTimeProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, static_cast<jobject>( p0 ) )  );
}

::java::util::ComparatorProxy ChronoLocalDateTimeProxy::timeLineOrder()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "timeLineOrder", "()Ljava/util/Comparator;" );
	return ::java::util::ComparatorProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid )  );
}

