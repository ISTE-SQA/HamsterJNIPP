#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "DayOfWeekProxy.h"

// includes for parameter and return type proxy classes
#include "java\time\temporal\TemporalFieldProxy.h"
#include "java\time\temporal\TemporalQueryProxy.h"
#include "java\lang\ObjectProxy.h"
#include "java\time\format\TextStyleProxy.h"
#include "java\util\LocaleProxy.h"
#include "java\time\temporal\TemporalProxy.h"
#include "java\time\temporal\ValueRangeProxy.h"
#include "java\time\temporal\TemporalAccessorProxy.h"
#include "java\time\DayOfWeekProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::time;


std::string DayOfWeekProxy::className = "java/time/DayOfWeek";
jclass DayOfWeekProxy::objectClass = NULL;

jclass DayOfWeekProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

DayOfWeekProxy::DayOfWeekProxy(void* unused)
{
}

jobject DayOfWeekProxy::_getPeerObject() const
{
	return peerObject;
}

jclass DayOfWeekProxy::getObjectClass()
{
	return _getObjectClass();
}

DayOfWeekProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
DayOfWeekProxy::DayOfWeekProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

DayOfWeekProxy::~DayOfWeekProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

DayOfWeekProxy& DayOfWeekProxy::operator=(const DayOfWeekProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
jboolean DayOfWeekProxy::isSupported(::java::time::temporal::TemporalFieldProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "isSupported", "(Ljava/time/temporal/TemporalField;)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

jint DayOfWeekProxy::get(::java::time::temporal::TemporalFieldProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "get", "(Ljava/time/temporal/TemporalField;)I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

jint DayOfWeekProxy::getValue()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getValue", "()I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid );
}

::java::lang::ObjectProxy DayOfWeekProxy::query(::java::time::temporal::TemporalQueryProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "query", "(Ljava/time/temporal/TemporalQuery;)Ljava/lang/Object;" );
	return ::java::lang::ObjectProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::net::sourceforge::jnipp::JStringHelper DayOfWeekProxy::getDisplayName(::java::time::format::TextStyleProxy p0, ::java::util::LocaleProxy p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getDisplayName", "(Ljava/time/format/TextStyle;Ljava/util/Locale;)Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), static_cast<jobject>( p1 ) )  );
}

::java::time::DayOfWeekProxy DayOfWeekProxy::minus(jlong p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "minus", "(J)Ljava/time/DayOfWeek;" );
	return ::java::time::DayOfWeekProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0 )  );
}

::java::time::DayOfWeekProxy DayOfWeekProxy::plus(jlong p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "plus", "(J)Ljava/time/DayOfWeek;" );
	return ::java::time::DayOfWeekProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0 )  );
}

::java::time::temporal::TemporalProxy DayOfWeekProxy::adjustInto(::java::time::temporal::TemporalProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "adjustInto", "(Ljava/time/temporal/Temporal;)Ljava/time/temporal/Temporal;" );
	return ::java::time::temporal::TemporalProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::java::time::temporal::ValueRangeProxy DayOfWeekProxy::range(::java::time::temporal::TemporalFieldProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "range", "(Ljava/time/temporal/TemporalField;)Ljava/time/temporal/ValueRange;" );
	return ::java::time::temporal::ValueRangeProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

jlong DayOfWeekProxy::getLong(::java::time::temporal::TemporalFieldProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getLong", "(Ljava/time/temporal/TemporalField;)J" );
	return JNIEnvHelper::CallLongMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

::java::time::DayOfWeekProxy DayOfWeekProxy::from(::java::time::temporal::TemporalAccessorProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "from", "(Ljava/time/temporal/TemporalAccessor;)Ljava/time/DayOfWeek;" );
	return ::java::time::DayOfWeekProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, static_cast<jobject>( p0 ) )  );
}

::java::time::DayOfWeekProxy DayOfWeekProxy::of(jint p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "of", "(I)Ljava/time/DayOfWeek;" );
	return ::java::time::DayOfWeekProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, p0 )  );
}

::java::time::DayOfWeekProxy DayOfWeekProxy::valueOf(::net::sourceforge::jnipp::JStringHelper p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "valueOf", "(Ljava/lang/String;)Ljava/time/DayOfWeek;" );
	return ::java::time::DayOfWeekProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, static_cast<jstring>( p0 ) )  );
}

::net::sourceforge::jnipp::PA<::java::time::DayOfWeekProxy>::ProxyArray<1> DayOfWeekProxy::values()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "values", "()[Ljava/time/DayOfWeek;" );
	return ::net::sourceforge::jnipp::PA<::java::time::DayOfWeekProxy>::ProxyArray<1>( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid )  );
}

