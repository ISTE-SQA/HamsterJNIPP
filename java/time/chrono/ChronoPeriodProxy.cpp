#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "ChronoPeriodProxy.h"

// includes for parameter and return type proxy classes
#include "java\lang\ObjectProxy.h"
#include "java\time\temporal\TemporalAmountProxy.h"
#include "java\time\chrono\ChronologyProxy.h"
#include "java\time\temporal\TemporalProxy.h"
#include "java\util\ListProxy.h"
#include "java\time\temporal\TemporalUnitProxy.h"
#include "java\time\chrono\ChronoLocalDateProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::time::chrono;


std::string ChronoPeriodProxy::className = "java/time/chrono/ChronoPeriod";
jclass ChronoPeriodProxy::objectClass = NULL;

jclass ChronoPeriodProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

ChronoPeriodProxy::ChronoPeriodProxy(void* unused)
{
}

jobject ChronoPeriodProxy::_getPeerObject() const
{
	return peerObject;
}

jclass ChronoPeriodProxy::getObjectClass()
{
	return _getObjectClass();
}

ChronoPeriodProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
ChronoPeriodProxy::ChronoPeriodProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

ChronoPeriodProxy::~ChronoPeriodProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

ChronoPeriodProxy& ChronoPeriodProxy::operator=(const ChronoPeriodProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
jboolean ChronoPeriodProxy::equals(::java::lang::ObjectProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "equals", "(Ljava/lang/Object;)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

jint ChronoPeriodProxy::hashCode()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "hashCode", "()I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid );
}

::net::sourceforge::jnipp::JStringHelper ChronoPeriodProxy::toString()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "toString", "()Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::time::chrono::ChronoPeriodProxy ChronoPeriodProxy::minus(::java::time::temporal::TemporalAmountProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "minus", "(Ljava/time/temporal/TemporalAmount;)Ljava/time/chrono/ChronoPeriod;" );
	return ::java::time::chrono::ChronoPeriodProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::java::time::chrono::ChronoPeriodProxy ChronoPeriodProxy::multipliedBy(jint p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "multipliedBy", "(I)Ljava/time/chrono/ChronoPeriod;" );
	return ::java::time::chrono::ChronoPeriodProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0 )  );
}

::java::time::chrono::ChronoPeriodProxy ChronoPeriodProxy::normalized()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "normalized", "()Ljava/time/chrono/ChronoPeriod;" );
	return ::java::time::chrono::ChronoPeriodProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::time::chrono::ChronoPeriodProxy ChronoPeriodProxy::plus(::java::time::temporal::TemporalAmountProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "plus", "(Ljava/time/temporal/TemporalAmount;)Ljava/time/chrono/ChronoPeriod;" );
	return ::java::time::chrono::ChronoPeriodProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::java::time::chrono::ChronologyProxy ChronoPeriodProxy::getChronology()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getChronology", "()Ljava/time/chrono/Chronology;" );
	return ::java::time::chrono::ChronologyProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::time::temporal::TemporalProxy ChronoPeriodProxy::addTo(::java::time::temporal::TemporalProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "addTo", "(Ljava/time/temporal/Temporal;)Ljava/time/temporal/Temporal;" );
	return ::java::time::temporal::TemporalProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::java::time::temporal::TemporalProxy ChronoPeriodProxy::subtractFrom(::java::time::temporal::TemporalProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "subtractFrom", "(Ljava/time/temporal/Temporal;)Ljava/time/temporal/Temporal;" );
	return ::java::time::temporal::TemporalProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::java::util::ListProxy ChronoPeriodProxy::getUnits()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getUnits", "()Ljava/util/List;" );
	return ::java::util::ListProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

jlong ChronoPeriodProxy::get(::java::time::temporal::TemporalUnitProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "get", "(Ljava/time/temporal/TemporalUnit;)J" );
	return JNIEnvHelper::CallLongMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

jboolean ChronoPeriodProxy::isNegative()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "isNegative", "()Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid );
}

jboolean ChronoPeriodProxy::isZero()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "isZero", "()Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid );
}

::java::time::chrono::ChronoPeriodProxy ChronoPeriodProxy::negated()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "negated", "()Ljava/time/chrono/ChronoPeriod;" );
	return ::java::time::chrono::ChronoPeriodProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::time::chrono::ChronoPeriodProxy ChronoPeriodProxy::between(::java::time::chrono::ChronoLocalDateProxy p0, ::java::time::chrono::ChronoLocalDateProxy p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "between", "(Ljava/time/chrono/ChronoLocalDate;Ljava/time/chrono/ChronoLocalDate;)Ljava/time/chrono/ChronoPeriod;" );
	return ::java::time::chrono::ChronoPeriodProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, static_cast<jobject>( p0 ), static_cast<jobject>( p1 ) )  );
}

