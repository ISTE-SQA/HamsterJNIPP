#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "CalendarDateProxy.h"

// includes for parameter and return type proxy classes
#include "java\lang\ObjectProxy.h"
#include "java\util\TimeZoneProxy.h"
#include "sun\util\calendar\EraProxy.h"
#include "java\util\LocaleProxy.h"

using namespace net::sourceforge::jnipp;
using namespace sun::util::calendar;


std::string CalendarDateProxy::className = "sun/util/calendar/CalendarDate";
jclass CalendarDateProxy::objectClass = NULL;

jclass CalendarDateProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

CalendarDateProxy::CalendarDateProxy(void* unused)
{
}

jobject CalendarDateProxy::_getPeerObject() const
{
	return peerObject;
}

jclass CalendarDateProxy::getObjectClass()
{
	return _getObjectClass();
}

CalendarDateProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
CalendarDateProxy::CalendarDateProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

CalendarDateProxy::~CalendarDateProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

CalendarDateProxy& CalendarDateProxy::operator=(const CalendarDateProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
jboolean CalendarDateProxy::equals(::java::lang::ObjectProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "equals", "(Ljava/lang/Object;)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

jboolean CalendarDateProxy::isDaylightTime()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "isDaylightTime", "()Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid );
}

jboolean CalendarDateProxy::isLeapYear()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "isLeapYear", "()Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid );
}

jboolean CalendarDateProxy::isNormalized()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "isNormalized", "()Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid );
}

jboolean CalendarDateProxy::isSameDate(::sun::util::calendar::CalendarDateProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "isSameDate", "(Lsun/util/calendar/CalendarDate;)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

jboolean CalendarDateProxy::isStandardTime()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "isStandardTime", "()Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid );
}

jint CalendarDateProxy::getDayOfMonth()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getDayOfMonth", "()I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid );
}

jint CalendarDateProxy::getDayOfWeek()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getDayOfWeek", "()I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid );
}

jint CalendarDateProxy::getDaylightSaving()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getDaylightSaving", "()I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid );
}

jint CalendarDateProxy::getHours()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getHours", "()I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid );
}

jint CalendarDateProxy::getMillis()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getMillis", "()I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid );
}

jint CalendarDateProxy::getMinutes()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getMinutes", "()I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid );
}

jint CalendarDateProxy::getMonth()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getMonth", "()I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid );
}

jint CalendarDateProxy::getSeconds()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getSeconds", "()I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid );
}

jint CalendarDateProxy::getYear()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getYear", "()I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid );
}

jint CalendarDateProxy::getZoneOffset()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getZoneOffset", "()I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid );
}

jint CalendarDateProxy::hashCode()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "hashCode", "()I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid );
}

::java::lang::ObjectProxy CalendarDateProxy::clone()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "clone", "()Ljava/lang/Object;" );
	return ::java::lang::ObjectProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::net::sourceforge::jnipp::JStringHelper CalendarDateProxy::toString()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "toString", "()Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::util::TimeZoneProxy CalendarDateProxy::getZone()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getZone", "()Ljava/util/TimeZone;" );
	return ::java::util::TimeZoneProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

jlong CalendarDateProxy::getTimeOfDay()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getTimeOfDay", "()J" );
	return JNIEnvHelper::CallLongMethod( _getPeerObject(), mid );
}

::sun::util::calendar::CalendarDateProxy CalendarDateProxy::addDate(jint p0, jint p1, jint p2)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "addDate", "(III)Lsun/util/calendar/CalendarDate;" );
	return ::sun::util::calendar::CalendarDateProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0, p1, p2 )  );
}

::sun::util::calendar::CalendarDateProxy CalendarDateProxy::addDayOfMonth(jint p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "addDayOfMonth", "(I)Lsun/util/calendar/CalendarDate;" );
	return ::sun::util::calendar::CalendarDateProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0 )  );
}

::sun::util::calendar::CalendarDateProxy CalendarDateProxy::addHours(jint p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "addHours", "(I)Lsun/util/calendar/CalendarDate;" );
	return ::sun::util::calendar::CalendarDateProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0 )  );
}

::sun::util::calendar::CalendarDateProxy CalendarDateProxy::addMillis(jint p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "addMillis", "(I)Lsun/util/calendar/CalendarDate;" );
	return ::sun::util::calendar::CalendarDateProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0 )  );
}

::sun::util::calendar::CalendarDateProxy CalendarDateProxy::addMinutes(jint p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "addMinutes", "(I)Lsun/util/calendar/CalendarDate;" );
	return ::sun::util::calendar::CalendarDateProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0 )  );
}

::sun::util::calendar::CalendarDateProxy CalendarDateProxy::addMonth(jint p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "addMonth", "(I)Lsun/util/calendar/CalendarDate;" );
	return ::sun::util::calendar::CalendarDateProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0 )  );
}

::sun::util::calendar::CalendarDateProxy CalendarDateProxy::addSeconds(jint p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "addSeconds", "(I)Lsun/util/calendar/CalendarDate;" );
	return ::sun::util::calendar::CalendarDateProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0 )  );
}

::sun::util::calendar::CalendarDateProxy CalendarDateProxy::addTimeOfDay(jint p0, jint p1, jint p2, jint p3)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "addTimeOfDay", "(IIII)Lsun/util/calendar/CalendarDate;" );
	return ::sun::util::calendar::CalendarDateProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0, p1, p2, p3 )  );
}

::sun::util::calendar::CalendarDateProxy CalendarDateProxy::addYear(jint p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "addYear", "(I)Lsun/util/calendar/CalendarDate;" );
	return ::sun::util::calendar::CalendarDateProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0 )  );
}

::sun::util::calendar::CalendarDateProxy CalendarDateProxy::setDate(jint p0, jint p1, jint p2)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "setDate", "(III)Lsun/util/calendar/CalendarDate;" );
	return ::sun::util::calendar::CalendarDateProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0, p1, p2 )  );
}

::sun::util::calendar::CalendarDateProxy CalendarDateProxy::setDayOfMonth(jint p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "setDayOfMonth", "(I)Lsun/util/calendar/CalendarDate;" );
	return ::sun::util::calendar::CalendarDateProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0 )  );
}

::sun::util::calendar::CalendarDateProxy CalendarDateProxy::setEra(::sun::util::calendar::EraProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "setEra", "(Lsun/util/calendar/Era;)Lsun/util/calendar/CalendarDate;" );
	return ::sun::util::calendar::CalendarDateProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::sun::util::calendar::CalendarDateProxy CalendarDateProxy::setHours(jint p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "setHours", "(I)Lsun/util/calendar/CalendarDate;" );
	return ::sun::util::calendar::CalendarDateProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0 )  );
}

::sun::util::calendar::CalendarDateProxy CalendarDateProxy::setMillis(jint p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "setMillis", "(I)Lsun/util/calendar/CalendarDate;" );
	return ::sun::util::calendar::CalendarDateProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0 )  );
}

::sun::util::calendar::CalendarDateProxy CalendarDateProxy::setMinutes(jint p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "setMinutes", "(I)Lsun/util/calendar/CalendarDate;" );
	return ::sun::util::calendar::CalendarDateProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0 )  );
}

::sun::util::calendar::CalendarDateProxy CalendarDateProxy::setMonth(jint p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "setMonth", "(I)Lsun/util/calendar/CalendarDate;" );
	return ::sun::util::calendar::CalendarDateProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0 )  );
}

::sun::util::calendar::CalendarDateProxy CalendarDateProxy::setSeconds(jint p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "setSeconds", "(I)Lsun/util/calendar/CalendarDate;" );
	return ::sun::util::calendar::CalendarDateProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0 )  );
}

::sun::util::calendar::CalendarDateProxy CalendarDateProxy::setTimeOfDay(jint p0, jint p1, jint p2, jint p3)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "setTimeOfDay", "(IIII)Lsun/util/calendar/CalendarDate;" );
	return ::sun::util::calendar::CalendarDateProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0, p1, p2, p3 )  );
}

::sun::util::calendar::CalendarDateProxy CalendarDateProxy::setYear(jint p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "setYear", "(I)Lsun/util/calendar/CalendarDate;" );
	return ::sun::util::calendar::CalendarDateProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0 )  );
}

::sun::util::calendar::CalendarDateProxy CalendarDateProxy::setZone(::java::util::TimeZoneProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "setZone", "(Ljava/util/TimeZone;)Lsun/util/calendar/CalendarDate;" );
	return ::sun::util::calendar::CalendarDateProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::sun::util::calendar::EraProxy CalendarDateProxy::getEra()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getEra", "()Lsun/util/calendar/Era;" );
	return ::sun::util::calendar::EraProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

void CalendarDateProxy::setStandardTime(jboolean p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "setStandardTime", "(Z)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, p0 );
}

