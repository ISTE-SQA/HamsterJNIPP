#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "TemporalFieldProxy.h"

// includes for parameter and return type proxy classes
#include "java\time\temporal\TemporalAccessorProxy.h"
#include "java\time\temporal\TemporalProxy.h"
#include "java\time\temporal\TemporalUnitProxy.h"
#include "java\time\temporal\ValueRangeProxy.h"
#include "java\util\LocaleProxy.h"
#include "java\util\MapProxy.h"
#include "java\time\format\ResolverStyleProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::time::temporal;


std::string TemporalFieldProxy::className = "java/time/temporal/TemporalField";
jclass TemporalFieldProxy::objectClass = NULL;

jclass TemporalFieldProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

TemporalFieldProxy::TemporalFieldProxy(void* unused)
{
}

jobject TemporalFieldProxy::_getPeerObject() const
{
	return peerObject;
}

jclass TemporalFieldProxy::getObjectClass()
{
	return _getObjectClass();
}

TemporalFieldProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
TemporalFieldProxy::TemporalFieldProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

TemporalFieldProxy::~TemporalFieldProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

TemporalFieldProxy& TemporalFieldProxy::operator=(const TemporalFieldProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
jboolean TemporalFieldProxy::isDateBased()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "isDateBased", "()Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid );
}

jboolean TemporalFieldProxy::isSupportedBy(::java::time::temporal::TemporalAccessorProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "isSupportedBy", "(Ljava/time/temporal/TemporalAccessor;)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

jboolean TemporalFieldProxy::isTimeBased()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "isTimeBased", "()Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid );
}

::net::sourceforge::jnipp::JStringHelper TemporalFieldProxy::toString()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "toString", "()Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::time::temporal::TemporalProxy TemporalFieldProxy::adjustInto(::java::time::temporal::TemporalProxy p0, jlong p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "adjustInto", "(Ljava/time/temporal/Temporal;J)Ljava/time/temporal/Temporal;" );
	return ::java::time::temporal::TemporalProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), p1 )  );
}

::java::time::temporal::TemporalUnitProxy TemporalFieldProxy::getBaseUnit()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getBaseUnit", "()Ljava/time/temporal/TemporalUnit;" );
	return ::java::time::temporal::TemporalUnitProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::time::temporal::TemporalUnitProxy TemporalFieldProxy::getRangeUnit()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getRangeUnit", "()Ljava/time/temporal/TemporalUnit;" );
	return ::java::time::temporal::TemporalUnitProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::time::temporal::ValueRangeProxy TemporalFieldProxy::range()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "range", "()Ljava/time/temporal/ValueRange;" );
	return ::java::time::temporal::ValueRangeProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::time::temporal::ValueRangeProxy TemporalFieldProxy::rangeRefinedBy(::java::time::temporal::TemporalAccessorProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "rangeRefinedBy", "(Ljava/time/temporal/TemporalAccessor;)Ljava/time/temporal/ValueRange;" );
	return ::java::time::temporal::ValueRangeProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

jlong TemporalFieldProxy::getFrom(::java::time::temporal::TemporalAccessorProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getFrom", "(Ljava/time/temporal/TemporalAccessor;)J" );
	return JNIEnvHelper::CallLongMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

::net::sourceforge::jnipp::JStringHelper TemporalFieldProxy::getDisplayName(::java::util::LocaleProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getDisplayName", "(Ljava/util/Locale;)Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::java::time::temporal::TemporalAccessorProxy TemporalFieldProxy::resolve(::java::util::MapProxy p0, ::java::time::temporal::TemporalAccessorProxy p1, ::java::time::format::ResolverStyleProxy p2)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "resolve", "(Ljava/util/Map;Ljava/time/temporal/TemporalAccessor;Ljava/time/format/ResolverStyle;)Ljava/time/temporal/TemporalAccessor;" );
	return ::java::time::temporal::TemporalAccessorProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), static_cast<jobject>( p1 ), static_cast<jobject>( p2 ) )  );
}

