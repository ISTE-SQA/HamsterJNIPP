#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "EraProxy.h"

// includes for parameter and return type proxy classes
#include "java\time\temporal\TemporalFieldProxy.h"
#include "java\time\temporal\TemporalQueryProxy.h"
#include "java\lang\ObjectProxy.h"
#include "java\time\format\TextStyleProxy.h"
#include "java\util\LocaleProxy.h"
#include "java\time\temporal\TemporalProxy.h"
#include "java\time\temporal\ValueRangeProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::time::chrono;


std::string EraProxy::className = "java/time/chrono/Era";
jclass EraProxy::objectClass = NULL;

jclass EraProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

EraProxy::EraProxy(void* unused)
{
}

jobject EraProxy::_getPeerObject() const
{
	return peerObject;
}

jclass EraProxy::getObjectClass()
{
	return _getObjectClass();
}

EraProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
EraProxy::EraProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

EraProxy::~EraProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

EraProxy& EraProxy::operator=(const EraProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
jint EraProxy::getValue()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getValue", "()I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid );
}

jboolean EraProxy::isSupported(::java::time::temporal::TemporalFieldProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "isSupported", "(Ljava/time/temporal/TemporalField;)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

jint EraProxy::get(::java::time::temporal::TemporalFieldProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "get", "(Ljava/time/temporal/TemporalField;)I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

::java::lang::ObjectProxy EraProxy::query(::java::time::temporal::TemporalQueryProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "query", "(Ljava/time/temporal/TemporalQuery;)Ljava/lang/Object;" );
	return ::java::lang::ObjectProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::net::sourceforge::jnipp::JStringHelper EraProxy::getDisplayName(::java::time::format::TextStyleProxy p0, ::java::util::LocaleProxy p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getDisplayName", "(Ljava/time/format/TextStyle;Ljava/util/Locale;)Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), static_cast<jobject>( p1 ) )  );
}

::java::time::temporal::TemporalProxy EraProxy::adjustInto(::java::time::temporal::TemporalProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "adjustInto", "(Ljava/time/temporal/Temporal;)Ljava/time/temporal/Temporal;" );
	return ::java::time::temporal::TemporalProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::java::time::temporal::ValueRangeProxy EraProxy::range(::java::time::temporal::TemporalFieldProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "range", "(Ljava/time/temporal/TemporalField;)Ljava/time/temporal/ValueRange;" );
	return ::java::time::temporal::ValueRangeProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

jlong EraProxy::getLong(::java::time::temporal::TemporalFieldProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getLong", "(Ljava/time/temporal/TemporalField;)J" );
	return JNIEnvHelper::CallLongMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

