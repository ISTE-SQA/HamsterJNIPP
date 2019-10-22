#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "ClockProxy.h"

// includes for parameter and return type proxy classes
#include "java\time\ZoneIdProxy.h"
#include "java\time\InstantProxy.h"
#include "java\lang\ObjectProxy.h"
#include "java\time\DurationProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::time;


std::string ClockProxy::className = "java/time/Clock";
jclass ClockProxy::objectClass = NULL;

jclass ClockProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

ClockProxy::ClockProxy(void* unused)
{
}

jobject ClockProxy::_getPeerObject() const
{
	return peerObject;
}

jclass ClockProxy::getObjectClass()
{
	return _getObjectClass();
}

ClockProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
ClockProxy::ClockProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

ClockProxy::~ClockProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

ClockProxy& ClockProxy::operator=(const ClockProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
::java::time::ClockProxy ClockProxy::withZone(::java::time::ZoneIdProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "withZone", "(Ljava/time/ZoneId;)Ljava/time/Clock;" );
	return ::java::time::ClockProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::java::time::InstantProxy ClockProxy::instant()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "instant", "()Ljava/time/Instant;" );
	return ::java::time::InstantProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::time::ZoneIdProxy ClockProxy::getZone()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getZone", "()Ljava/time/ZoneId;" );
	return ::java::time::ZoneIdProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

jboolean ClockProxy::equals(::java::lang::ObjectProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "equals", "(Ljava/lang/Object;)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

jint ClockProxy::hashCode()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "hashCode", "()I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid );
}

jlong ClockProxy::millis()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "millis", "()J" );
	return JNIEnvHelper::CallLongMethod( _getPeerObject(), mid );
}

::java::time::ClockProxy ClockProxy::fixed(::java::time::InstantProxy p0, ::java::time::ZoneIdProxy p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "fixed", "(Ljava/time/Instant;Ljava/time/ZoneId;)Ljava/time/Clock;" );
	return ::java::time::ClockProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, static_cast<jobject>( p0 ), static_cast<jobject>( p1 ) )  );
}

::java::time::ClockProxy ClockProxy::offset(::java::time::ClockProxy p0, ::java::time::DurationProxy p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "offset", "(Ljava/time/Clock;Ljava/time/Duration;)Ljava/time/Clock;" );
	return ::java::time::ClockProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, static_cast<jobject>( p0 ), static_cast<jobject>( p1 ) )  );
}

::java::time::ClockProxy ClockProxy::system(::java::time::ZoneIdProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "system", "(Ljava/time/ZoneId;)Ljava/time/Clock;" );
	return ::java::time::ClockProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, static_cast<jobject>( p0 ) )  );
}

::java::time::ClockProxy ClockProxy::systemDefaultZone()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "systemDefaultZone", "()Ljava/time/Clock;" );
	return ::java::time::ClockProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid )  );
}

::java::time::ClockProxy ClockProxy::systemUTC()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "systemUTC", "()Ljava/time/Clock;" );
	return ::java::time::ClockProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid )  );
}

::java::time::ClockProxy ClockProxy::tick(::java::time::ClockProxy p0, ::java::time::DurationProxy p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "tick", "(Ljava/time/Clock;Ljava/time/Duration;)Ljava/time/Clock;" );
	return ::java::time::ClockProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, static_cast<jobject>( p0 ), static_cast<jobject>( p1 ) )  );
}

::java::time::ClockProxy ClockProxy::tickMinutes(::java::time::ZoneIdProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "tickMinutes", "(Ljava/time/ZoneId;)Ljava/time/Clock;" );
	return ::java::time::ClockProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, static_cast<jobject>( p0 ) )  );
}

::java::time::ClockProxy ClockProxy::tickSeconds(::java::time::ZoneIdProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "tickSeconds", "(Ljava/time/ZoneId;)Ljava/time/Clock;" );
	return ::java::time::ClockProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, static_cast<jobject>( p0 ) )  );
}

