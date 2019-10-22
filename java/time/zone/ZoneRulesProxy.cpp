#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "ZoneRulesProxy.h"

// includes for parameter and return type proxy classes
#include "java\lang\ObjectProxy.h"
#include "java\time\InstantProxy.h"
#include "java\time\LocalDateTimeProxy.h"
#include "java\time\ZoneOffsetProxy.h"
#include "java\time\DurationProxy.h"
#include "java\time\zone\ZoneOffsetTransitionProxy.h"
#include "java\util\ListProxy.h"
#include "java\time\zone\ZoneOffsetTransitionRuleProxy.h"
#include "java\util\concurrent\ConcurrentMapProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::time::zone;


std::string ZoneRulesProxy::className = "java/time/zone/ZoneRules";
jclass ZoneRulesProxy::objectClass = NULL;

jclass ZoneRulesProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

ZoneRulesProxy::ZoneRulesProxy(void* unused)
{
}

jobject ZoneRulesProxy::_getPeerObject() const
{
	return peerObject;
}

jclass ZoneRulesProxy::getObjectClass()
{
	return _getObjectClass();
}

ZoneRulesProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
ZoneRulesProxy::ZoneRulesProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

ZoneRulesProxy::~ZoneRulesProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

ZoneRulesProxy& ZoneRulesProxy::operator=(const ZoneRulesProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
jboolean ZoneRulesProxy::equals(::java::lang::ObjectProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "equals", "(Ljava/lang/Object;)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

jboolean ZoneRulesProxy::isDaylightSavings(::java::time::InstantProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "isDaylightSavings", "(Ljava/time/Instant;)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

jboolean ZoneRulesProxy::isFixedOffset()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "isFixedOffset", "()Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid );
}

jboolean ZoneRulesProxy::isValidOffset(::java::time::LocalDateTimeProxy p0, ::java::time::ZoneOffsetProxy p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "isValidOffset", "(Ljava/time/LocalDateTime;Ljava/time/ZoneOffset;)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), static_cast<jobject>( p1 ) );
}

jint ZoneRulesProxy::hashCode()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "hashCode", "()I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid );
}

::net::sourceforge::jnipp::JStringHelper ZoneRulesProxy::toString()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "toString", "()Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::time::DurationProxy ZoneRulesProxy::getDaylightSavings(::java::time::InstantProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getDaylightSavings", "(Ljava/time/Instant;)Ljava/time/Duration;" );
	return ::java::time::DurationProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::java::time::ZoneOffsetProxy ZoneRulesProxy::getOffset(::java::time::InstantProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getOffset", "(Ljava/time/Instant;)Ljava/time/ZoneOffset;" );
	return ::java::time::ZoneOffsetProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::java::time::ZoneOffsetProxy ZoneRulesProxy::getOffset(::java::time::LocalDateTimeProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getOffset", "(Ljava/time/LocalDateTime;)Ljava/time/ZoneOffset;" );
	return ::java::time::ZoneOffsetProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::java::time::ZoneOffsetProxy ZoneRulesProxy::getStandardOffset(::java::time::InstantProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getStandardOffset", "(Ljava/time/Instant;)Ljava/time/ZoneOffset;" );
	return ::java::time::ZoneOffsetProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::java::time::zone::ZoneOffsetTransitionProxy ZoneRulesProxy::getTransition(::java::time::LocalDateTimeProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getTransition", "(Ljava/time/LocalDateTime;)Ljava/time/zone/ZoneOffsetTransition;" );
	return ::java::time::zone::ZoneOffsetTransitionProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::java::time::zone::ZoneOffsetTransitionProxy ZoneRulesProxy::nextTransition(::java::time::InstantProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "nextTransition", "(Ljava/time/Instant;)Ljava/time/zone/ZoneOffsetTransition;" );
	return ::java::time::zone::ZoneOffsetTransitionProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::java::time::zone::ZoneOffsetTransitionProxy ZoneRulesProxy::previousTransition(::java::time::InstantProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "previousTransition", "(Ljava/time/Instant;)Ljava/time/zone/ZoneOffsetTransition;" );
	return ::java::time::zone::ZoneOffsetTransitionProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::java::util::ListProxy ZoneRulesProxy::getTransitionRules()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getTransitionRules", "()Ljava/util/List;" );
	return ::java::util::ListProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::util::ListProxy ZoneRulesProxy::getTransitions()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getTransitions", "()Ljava/util/List;" );
	return ::java::util::ListProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::util::ListProxy ZoneRulesProxy::getValidOffsets(::java::time::LocalDateTimeProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getValidOffsets", "(Ljava/time/LocalDateTime;)Ljava/util/List;" );
	return ::java::util::ListProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::java::time::zone::ZoneRulesProxy ZoneRulesProxy::of(::java::time::ZoneOffsetProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "of", "(Ljava/time/ZoneOffset;)Ljava/time/zone/ZoneRules;" );
	return ::java::time::zone::ZoneRulesProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, static_cast<jobject>( p0 ) )  );
}

::java::time::zone::ZoneRulesProxy ZoneRulesProxy::of(::java::time::ZoneOffsetProxy p0, ::java::time::ZoneOffsetProxy p1, ::java::util::ListProxy p2, ::java::util::ListProxy p3, ::java::util::ListProxy p4)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "of", "(Ljava/time/ZoneOffset;Ljava/time/ZoneOffset;Ljava/util/List;Ljava/util/List;Ljava/util/List;)Ljava/time/zone/ZoneRules;" );
	return ::java::time::zone::ZoneRulesProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, static_cast<jobject>( p0 ), static_cast<jobject>( p1 ), static_cast<jobject>( p2 ), static_cast<jobject>( p3 ), static_cast<jobject>( p4 ) )  );
}

