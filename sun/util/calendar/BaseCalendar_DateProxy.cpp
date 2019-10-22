#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "BaseCalendar_DateProxy.h"

// includes for parameter and return type proxy classes

using namespace net::sourceforge::jnipp;
using namespace sun::util::calendar;


std::string BaseCalendar_DateProxy::className = "sun/util/calendar/BaseCalendar$Date";
jclass BaseCalendar_DateProxy::objectClass = NULL;

jclass BaseCalendar_DateProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

BaseCalendar_DateProxy::BaseCalendar_DateProxy(void* unused)
{
}

jobject BaseCalendar_DateProxy::_getPeerObject() const
{
	return peerObject;
}

jclass BaseCalendar_DateProxy::getObjectClass()
{
	return _getObjectClass();
}

BaseCalendar_DateProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
BaseCalendar_DateProxy::BaseCalendar_DateProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

BaseCalendar_DateProxy::~BaseCalendar_DateProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

BaseCalendar_DateProxy& BaseCalendar_DateProxy::operator=(const BaseCalendar_DateProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
jint BaseCalendar_DateProxy::getNormalizedYear()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getNormalizedYear", "()I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid );
}

void BaseCalendar_DateProxy::setNormalizedYear(jint p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "setNormalizedYear", "(I)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, p0 );
}

::sun::util::calendar::BaseCalendar_DateProxy BaseCalendar_DateProxy::setNormalizedDate(jint p0, jint p1, jint p2)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "setNormalizedDate", "(III)Lsun/util/calendar/BaseCalendar$Date;" );
	return ::sun::util::calendar::BaseCalendar_DateProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0, p1, p2 )  );
}

