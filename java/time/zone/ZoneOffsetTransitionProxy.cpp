#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "ZoneOffsetTransitionProxy.h"

// includes for parameter and return type proxy classes
#include "java\lang\ObjectProxy.h"
#include "java\time\ZoneOffsetProxy.h"
#include "java\time\DurationProxy.h"
#include "java\time\InstantProxy.h"
#include "java\time\LocalDateTimeProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::time::zone;


std::string ZoneOffsetTransitionProxy::className = "java/time/zone/ZoneOffsetTransition";
jclass ZoneOffsetTransitionProxy::objectClass = NULL;

jclass ZoneOffsetTransitionProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

ZoneOffsetTransitionProxy::ZoneOffsetTransitionProxy(void* unused)
{
}

jobject ZoneOffsetTransitionProxy::_getPeerObject() const
{
	return peerObject;
}

jclass ZoneOffsetTransitionProxy::getObjectClass()
{
	return _getObjectClass();
}

ZoneOffsetTransitionProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
ZoneOffsetTransitionProxy::ZoneOffsetTransitionProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

ZoneOffsetTransitionProxy::~ZoneOffsetTransitionProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

ZoneOffsetTransitionProxy& ZoneOffsetTransitionProxy::operator=(const ZoneOffsetTransitionProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
jboolean ZoneOffsetTransitionProxy::equals(::java::lang::ObjectProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "equals", "(Ljava/lang/Object;)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

jboolean ZoneOffsetTransitionProxy::isGap()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "isGap", "()Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid );
}

jboolean ZoneOffsetTransitionProxy::isOverlap()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "isOverlap", "()Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid );
}

jboolean ZoneOffsetTransitionProxy::isValidOffset(::java::time::ZoneOffsetProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "isValidOffset", "(Ljava/time/ZoneOffset;)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

jint ZoneOffsetTransitionProxy::compareTo(::java::time::zone::ZoneOffsetTransitionProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "compareTo", "(Ljava/time/zone/ZoneOffsetTransition;)I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

jint ZoneOffsetTransitionProxy::hashCode()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "hashCode", "()I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid );
}

::net::sourceforge::jnipp::JStringHelper ZoneOffsetTransitionProxy::toString()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "toString", "()Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::time::DurationProxy ZoneOffsetTransitionProxy::getDuration()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getDuration", "()Ljava/time/Duration;" );
	return ::java::time::DurationProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::time::InstantProxy ZoneOffsetTransitionProxy::getInstant()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getInstant", "()Ljava/time/Instant;" );
	return ::java::time::InstantProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::time::LocalDateTimeProxy ZoneOffsetTransitionProxy::getDateTimeAfter()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getDateTimeAfter", "()Ljava/time/LocalDateTime;" );
	return ::java::time::LocalDateTimeProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::time::LocalDateTimeProxy ZoneOffsetTransitionProxy::getDateTimeBefore()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getDateTimeBefore", "()Ljava/time/LocalDateTime;" );
	return ::java::time::LocalDateTimeProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::time::ZoneOffsetProxy ZoneOffsetTransitionProxy::getOffsetAfter()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getOffsetAfter", "()Ljava/time/ZoneOffset;" );
	return ::java::time::ZoneOffsetProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::time::ZoneOffsetProxy ZoneOffsetTransitionProxy::getOffsetBefore()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getOffsetBefore", "()Ljava/time/ZoneOffset;" );
	return ::java::time::ZoneOffsetProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

jlong ZoneOffsetTransitionProxy::toEpochSecond()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "toEpochSecond", "()J" );
	return JNIEnvHelper::CallLongMethod( _getPeerObject(), mid );
}

::java::time::zone::ZoneOffsetTransitionProxy ZoneOffsetTransitionProxy::of(::java::time::LocalDateTimeProxy p0, ::java::time::ZoneOffsetProxy p1, ::java::time::ZoneOffsetProxy p2)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "of", "(Ljava/time/LocalDateTime;Ljava/time/ZoneOffset;Ljava/time/ZoneOffset;)Ljava/time/zone/ZoneOffsetTransition;" );
	return ::java::time::zone::ZoneOffsetTransitionProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, static_cast<jobject>( p0 ), static_cast<jobject>( p1 ), static_cast<jobject>( p2 ) )  );
}

