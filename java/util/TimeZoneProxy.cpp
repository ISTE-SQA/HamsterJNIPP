#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "TimeZoneProxy.h"

// includes for parameter and return type proxy classes
#include "java\util\DateProxy.h"
#include "java\util\LocaleProxy.h"
#include "java\lang\ObjectProxy.h"
#include "java\time\ZoneIdProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::util;


std::string TimeZoneProxy::className = "java/util/TimeZone";
jclass TimeZoneProxy::objectClass = NULL;

jclass TimeZoneProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

TimeZoneProxy::TimeZoneProxy(void* unused)
{
}

jobject TimeZoneProxy::_getPeerObject() const
{
	return peerObject;
}

jclass TimeZoneProxy::getObjectClass()
{
	return _getObjectClass();
}

TimeZoneProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
TimeZoneProxy::TimeZoneProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

TimeZoneProxy::TimeZoneProxy()
{
	jmethodID mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "<init>", "()V" );
	peerObject = JNIEnvHelper::NewGlobalRef( JNIEnvHelper::NewObject( _getObjectClass(), mid ) );
}

TimeZoneProxy::~TimeZoneProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

TimeZoneProxy& TimeZoneProxy::operator=(const TimeZoneProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
jboolean TimeZoneProxy::inDaylightTime(::java::util::DateProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "inDaylightTime", "(Ljava/util/Date;)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

jboolean TimeZoneProxy::useDaylightTime()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "useDaylightTime", "()Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid );
}

jint TimeZoneProxy::getOffset(jint p0, jint p1, jint p2, jint p3, jint p4, jint p5)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getOffset", "(IIIIII)I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid, p0, p1, p2, p3, p4, p5 );
}

jint TimeZoneProxy::getRawOffset()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getRawOffset", "()I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid );
}

void TimeZoneProxy::setRawOffset(jint p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "setRawOffset", "(I)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, p0 );
}

jboolean TimeZoneProxy::hasSameRules(::java::util::TimeZoneProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "hasSameRules", "(Ljava/util/TimeZone;)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

jboolean TimeZoneProxy::observesDaylightTime()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "observesDaylightTime", "()Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid );
}

::net::sourceforge::jnipp::JStringHelper TimeZoneProxy::getDisplayName()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getDisplayName", "()Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::net::sourceforge::jnipp::JStringHelper TimeZoneProxy::getDisplayName(jboolean p0, jint p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getDisplayName", "(ZI)Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0, p1 )  );
}

::net::sourceforge::jnipp::JStringHelper TimeZoneProxy::getDisplayName(::java::util::LocaleProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getDisplayName", "(Ljava/util/Locale;)Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

jint TimeZoneProxy::getDSTSavings()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getDSTSavings", "()I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid );
}

jint TimeZoneProxy::getOffset(jlong p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getOffset", "(J)I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid, p0 );
}

::java::lang::ObjectProxy TimeZoneProxy::clone()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "clone", "()Ljava/lang/Object;" );
	return ::java::lang::ObjectProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::net::sourceforge::jnipp::JStringHelper TimeZoneProxy::getDisplayName(jboolean p0, jint p1, ::java::util::LocaleProxy p2)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getDisplayName", "(ZILjava/util/Locale;)Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0, p1, static_cast<jobject>( p2 ) )  );
}

::net::sourceforge::jnipp::JStringHelper TimeZoneProxy::getID()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getID", "()Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::time::ZoneIdProxy TimeZoneProxy::toZoneId()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "toZoneId", "()Ljava/time/ZoneId;" );
	return ::java::time::ZoneIdProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::util::TimeZoneProxy TimeZoneProxy::getDefault()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "getDefault", "()Ljava/util/TimeZone;" );
	return ::java::util::TimeZoneProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid )  );
}

::java::util::TimeZoneProxy TimeZoneProxy::getTimeZone(::java::time::ZoneIdProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "getTimeZone", "(Ljava/time/ZoneId;)Ljava/util/TimeZone;" );
	return ::java::util::TimeZoneProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, static_cast<jobject>( p0 ) )  );
}

::net::sourceforge::jnipp::JStringHelperArray<1> TimeZoneProxy::getAvailableIDs()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "getAvailableIDs", "()[Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelperArray<1>( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid )  );
}

::net::sourceforge::jnipp::JStringHelperArray<1> TimeZoneProxy::getAvailableIDs(jint p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "getAvailableIDs", "(I)[Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelperArray<1>( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, p0 )  );
}

::java::util::TimeZoneProxy TimeZoneProxy::getTimeZone(::net::sourceforge::jnipp::JStringHelper p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "getTimeZone", "(Ljava/lang/String;)Ljava/util/TimeZone;" );
	return ::java::util::TimeZoneProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, static_cast<jstring>( p0 ) )  );
}

void TimeZoneProxy::setDefault(::java::util::TimeZoneProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "setDefault", "(Ljava/util/TimeZone;)V" );
	JNIEnvHelper::CallStaticVoidMethod( _getObjectClass(), mid, static_cast<jobject>( p0 ) );
}

void TimeZoneProxy::setID(::net::sourceforge::jnipp::JStringHelper p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "setID", "(Ljava/lang/String;)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, static_cast<jstring>( p0 ) );
}

