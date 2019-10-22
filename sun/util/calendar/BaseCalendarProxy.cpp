#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "BaseCalendarProxy.h"

// includes for parameter and return type proxy classes
#include "sun\util\calendar\CalendarDateProxy.h"
#include "sun\util\calendar\BaseCalendar_DateProxy.h"

using namespace net::sourceforge::jnipp;
using namespace sun::util::calendar;


std::string BaseCalendarProxy::className = "sun/util/calendar/BaseCalendar";
jclass BaseCalendarProxy::objectClass = NULL;

jclass BaseCalendarProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

BaseCalendarProxy::BaseCalendarProxy(void* unused)
{
}

jobject BaseCalendarProxy::_getPeerObject() const
{
	return peerObject;
}

jclass BaseCalendarProxy::getObjectClass()
{
	return _getObjectClass();
}

BaseCalendarProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
BaseCalendarProxy::BaseCalendarProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

BaseCalendarProxy::BaseCalendarProxy()
{
	jmethodID mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "<init>", "()V" );
	peerObject = JNIEnvHelper::NewGlobalRef( JNIEnvHelper::NewObject( _getObjectClass(), mid ) );
}

BaseCalendarProxy::~BaseCalendarProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

BaseCalendarProxy& BaseCalendarProxy::operator=(const BaseCalendarProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
jboolean BaseCalendarProxy::normalize(::sun::util::calendar::CalendarDateProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "normalize", "(Lsun/util/calendar/CalendarDate;)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

jboolean BaseCalendarProxy::validate(::sun::util::calendar::CalendarDateProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "validate", "(Lsun/util/calendar/CalendarDate;)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

jint BaseCalendarProxy::getDayOfWeek(::sun::util::calendar::CalendarDateProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getDayOfWeek", "(Lsun/util/calendar/CalendarDate;)I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

jint BaseCalendarProxy::getMonthLength(::sun::util::calendar::CalendarDateProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getMonthLength", "(Lsun/util/calendar/CalendarDate;)I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

jint BaseCalendarProxy::getYearFromFixedDate(jlong p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getYearFromFixedDate", "(J)I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid, p0 );
}

jint BaseCalendarProxy::getYearLength(::sun::util::calendar::CalendarDateProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getYearLength", "(Lsun/util/calendar/CalendarDate;)I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

jint BaseCalendarProxy::getYearLengthInMonths(::sun::util::calendar::CalendarDateProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getYearLengthInMonths", "(Lsun/util/calendar/CalendarDate;)I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

jlong BaseCalendarProxy::getDayOfYear(::sun::util::calendar::CalendarDateProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getDayOfYear", "(Lsun/util/calendar/CalendarDate;)J" );
	return JNIEnvHelper::CallLongMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

jlong BaseCalendarProxy::getFixedDate(jint p0, jint p1, jint p2, ::sun::util::calendar::BaseCalendar_DateProxy p3)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getFixedDate", "(IIILsun/util/calendar/BaseCalendar$Date;)J" );
	return JNIEnvHelper::CallLongMethod( _getPeerObject(), mid, p0, p1, p2, static_cast<jobject>( p3 ) );
}

jlong BaseCalendarProxy::getFixedDate(::sun::util::calendar::CalendarDateProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getFixedDate", "(Lsun/util/calendar/CalendarDate;)J" );
	return JNIEnvHelper::CallLongMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

jint BaseCalendarProxy::getDayOfWeekFromFixedDate(jlong p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "getDayOfWeekFromFixedDate", "(J)I" );
	return JNIEnvHelper::CallStaticIntMethod( _getObjectClass(), mid, p0 );
}

void BaseCalendarProxy::getCalendarDateFromFixedDate(::sun::util::calendar::CalendarDateProxy p0, jlong p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getCalendarDateFromFixedDate", "(Lsun/util/calendar/CalendarDate;J)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), p1 );
}

