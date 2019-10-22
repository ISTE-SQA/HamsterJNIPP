#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "ChronoFieldProxy.h"

// includes for parameter and return type proxy classes
#include "java\time\temporal\TemporalAccessorProxy.h"
#include "java\util\LocaleProxy.h"
#include "java\time\temporal\TemporalProxy.h"
#include "java\time\temporal\TemporalUnitProxy.h"
#include "java\time\temporal\ValueRangeProxy.h"
#include "java\time\temporal\ChronoFieldProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::time::temporal;


std::string ChronoFieldProxy::className = "java/time/temporal/ChronoField";
jclass ChronoFieldProxy::objectClass = NULL;

jclass ChronoFieldProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

ChronoFieldProxy::ChronoFieldProxy(void* unused)
{
}

jobject ChronoFieldProxy::_getPeerObject() const
{
	return peerObject;
}

jclass ChronoFieldProxy::getObjectClass()
{
	return _getObjectClass();
}

ChronoFieldProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
ChronoFieldProxy::ChronoFieldProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

ChronoFieldProxy::~ChronoFieldProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

ChronoFieldProxy& ChronoFieldProxy::operator=(const ChronoFieldProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
jboolean ChronoFieldProxy::isDateBased()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "isDateBased", "()Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid );
}

jboolean ChronoFieldProxy::isSupportedBy(::java::time::temporal::TemporalAccessorProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "isSupportedBy", "(Ljava/time/temporal/TemporalAccessor;)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

jboolean ChronoFieldProxy::isTimeBased()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "isTimeBased", "()Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid );
}

jint ChronoFieldProxy::checkValidIntValue(jlong p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "checkValidIntValue", "(J)I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid, p0 );
}

::net::sourceforge::jnipp::JStringHelper ChronoFieldProxy::getDisplayName(::java::util::LocaleProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getDisplayName", "(Ljava/util/Locale;)Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::net::sourceforge::jnipp::JStringHelper ChronoFieldProxy::toString()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "toString", "()Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::time::temporal::TemporalProxy ChronoFieldProxy::adjustInto(::java::time::temporal::TemporalProxy p0, jlong p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "adjustInto", "(Ljava/time/temporal/Temporal;J)Ljava/time/temporal/Temporal;" );
	return ::java::time::temporal::TemporalProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), p1 )  );
}

::java::time::temporal::TemporalUnitProxy ChronoFieldProxy::getBaseUnit()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getBaseUnit", "()Ljava/time/temporal/TemporalUnit;" );
	return ::java::time::temporal::TemporalUnitProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::time::temporal::TemporalUnitProxy ChronoFieldProxy::getRangeUnit()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getRangeUnit", "()Ljava/time/temporal/TemporalUnit;" );
	return ::java::time::temporal::TemporalUnitProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::time::temporal::ValueRangeProxy ChronoFieldProxy::range()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "range", "()Ljava/time/temporal/ValueRange;" );
	return ::java::time::temporal::ValueRangeProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::time::temporal::ValueRangeProxy ChronoFieldProxy::rangeRefinedBy(::java::time::temporal::TemporalAccessorProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "rangeRefinedBy", "(Ljava/time/temporal/TemporalAccessor;)Ljava/time/temporal/ValueRange;" );
	return ::java::time::temporal::ValueRangeProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

jlong ChronoFieldProxy::checkValidValue(jlong p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "checkValidValue", "(J)J" );
	return JNIEnvHelper::CallLongMethod( _getPeerObject(), mid, p0 );
}

jlong ChronoFieldProxy::getFrom(::java::time::temporal::TemporalAccessorProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getFrom", "(Ljava/time/temporal/TemporalAccessor;)J" );
	return JNIEnvHelper::CallLongMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

::java::time::temporal::ChronoFieldProxy ChronoFieldProxy::valueOf(::net::sourceforge::jnipp::JStringHelper p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "valueOf", "(Ljava/lang/String;)Ljava/time/temporal/ChronoField;" );
	return ::java::time::temporal::ChronoFieldProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, static_cast<jstring>( p0 ) )  );
}

::net::sourceforge::jnipp::PA<::java::time::temporal::ChronoFieldProxy>::ProxyArray<1> ChronoFieldProxy::values()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "values", "()[Ljava/time/temporal/ChronoField;" );
	return ::net::sourceforge::jnipp::PA<::java::time::temporal::ChronoFieldProxy>::ProxyArray<1>( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid )  );
}

