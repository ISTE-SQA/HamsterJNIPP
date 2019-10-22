#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "ZoneOffsetTransitionRuleProxy.h"

// includes for parameter and return type proxy classes
#include "java\lang\ObjectProxy.h"
#include "java\time\DayOfWeekProxy.h"
#include "java\time\LocalTimeProxy.h"
#include "java\time\MonthProxy.h"
#include "java\time\ZoneOffsetProxy.h"
#include "java\time\zone\ZoneOffsetTransitionProxy.h"
#include "java\time\zone\ZoneOffsetTransitionRule_TimeDefinitionProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::time::zone;


std::string ZoneOffsetTransitionRuleProxy::className = "java/time/zone/ZoneOffsetTransitionRule";
jclass ZoneOffsetTransitionRuleProxy::objectClass = NULL;

jclass ZoneOffsetTransitionRuleProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

ZoneOffsetTransitionRuleProxy::ZoneOffsetTransitionRuleProxy(void* unused)
{
}

jobject ZoneOffsetTransitionRuleProxy::_getPeerObject() const
{
	return peerObject;
}

jclass ZoneOffsetTransitionRuleProxy::getObjectClass()
{
	return _getObjectClass();
}

ZoneOffsetTransitionRuleProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
ZoneOffsetTransitionRuleProxy::ZoneOffsetTransitionRuleProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

ZoneOffsetTransitionRuleProxy::~ZoneOffsetTransitionRuleProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

ZoneOffsetTransitionRuleProxy& ZoneOffsetTransitionRuleProxy::operator=(const ZoneOffsetTransitionRuleProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
jboolean ZoneOffsetTransitionRuleProxy::equals(::java::lang::ObjectProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "equals", "(Ljava/lang/Object;)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

jboolean ZoneOffsetTransitionRuleProxy::isMidnightEndOfDay()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "isMidnightEndOfDay", "()Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid );
}

jint ZoneOffsetTransitionRuleProxy::getDayOfMonthIndicator()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getDayOfMonthIndicator", "()I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid );
}

jint ZoneOffsetTransitionRuleProxy::hashCode()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "hashCode", "()I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid );
}

::net::sourceforge::jnipp::JStringHelper ZoneOffsetTransitionRuleProxy::toString()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "toString", "()Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::time::DayOfWeekProxy ZoneOffsetTransitionRuleProxy::getDayOfWeek()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getDayOfWeek", "()Ljava/time/DayOfWeek;" );
	return ::java::time::DayOfWeekProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::time::LocalTimeProxy ZoneOffsetTransitionRuleProxy::getLocalTime()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getLocalTime", "()Ljava/time/LocalTime;" );
	return ::java::time::LocalTimeProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::time::MonthProxy ZoneOffsetTransitionRuleProxy::getMonth()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getMonth", "()Ljava/time/Month;" );
	return ::java::time::MonthProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::time::ZoneOffsetProxy ZoneOffsetTransitionRuleProxy::getOffsetAfter()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getOffsetAfter", "()Ljava/time/ZoneOffset;" );
	return ::java::time::ZoneOffsetProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::time::ZoneOffsetProxy ZoneOffsetTransitionRuleProxy::getOffsetBefore()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getOffsetBefore", "()Ljava/time/ZoneOffset;" );
	return ::java::time::ZoneOffsetProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::time::ZoneOffsetProxy ZoneOffsetTransitionRuleProxy::getStandardOffset()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getStandardOffset", "()Ljava/time/ZoneOffset;" );
	return ::java::time::ZoneOffsetProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::time::zone::ZoneOffsetTransitionProxy ZoneOffsetTransitionRuleProxy::createTransition(jint p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "createTransition", "(I)Ljava/time/zone/ZoneOffsetTransition;" );
	return ::java::time::zone::ZoneOffsetTransitionProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0 )  );
}

::java::time::zone::ZoneOffsetTransitionRule_TimeDefinitionProxy ZoneOffsetTransitionRuleProxy::getTimeDefinition()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getTimeDefinition", "()Ljava/time/zone/ZoneOffsetTransitionRule$TimeDefinition;" );
	return ::java::time::zone::ZoneOffsetTransitionRule_TimeDefinitionProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::time::zone::ZoneOffsetTransitionRuleProxy ZoneOffsetTransitionRuleProxy::of(::java::time::MonthProxy p0, jint p1, ::java::time::DayOfWeekProxy p2, ::java::time::LocalTimeProxy p3, jboolean p4, ::java::time::zone::ZoneOffsetTransitionRule_TimeDefinitionProxy p5, ::java::time::ZoneOffsetProxy p6, ::java::time::ZoneOffsetProxy p7, ::java::time::ZoneOffsetProxy p8)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "of", "(Ljava/time/Month;ILjava/time/DayOfWeek;Ljava/time/LocalTime;ZLjava/time/zone/ZoneOffsetTransitionRule$TimeDefinition;Ljava/time/ZoneOffset;Ljava/time/ZoneOffset;Ljava/time/ZoneOffset;)Ljava/time/zone/ZoneOffsetTransitionRule;" );
	return ::java::time::zone::ZoneOffsetTransitionRuleProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, static_cast<jobject>( p0 ), p1, static_cast<jobject>( p2 ), static_cast<jobject>( p3 ), p4, static_cast<jobject>( p5 ), static_cast<jobject>( p6 ), static_cast<jobject>( p7 ), static_cast<jobject>( p8 ) )  );
}

