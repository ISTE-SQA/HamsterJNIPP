#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "TemporalUnitProxy.h"

// includes for parameter and return type proxy classes
#include "java\time\DurationProxy.h"
#include "java\time\temporal\TemporalProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::time::temporal;


std::string TemporalUnitProxy::className = "java/time/temporal/TemporalUnit";
jclass TemporalUnitProxy::objectClass = NULL;

jclass TemporalUnitProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

TemporalUnitProxy::TemporalUnitProxy(void* unused)
{
}

jobject TemporalUnitProxy::_getPeerObject() const
{
	return peerObject;
}

jclass TemporalUnitProxy::getObjectClass()
{
	return _getObjectClass();
}

TemporalUnitProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
TemporalUnitProxy::TemporalUnitProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

TemporalUnitProxy::~TemporalUnitProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

TemporalUnitProxy& TemporalUnitProxy::operator=(const TemporalUnitProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
jboolean TemporalUnitProxy::isDateBased()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "isDateBased", "()Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid );
}

jboolean TemporalUnitProxy::isDurationEstimated()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "isDurationEstimated", "()Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid );
}

jboolean TemporalUnitProxy::isTimeBased()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "isTimeBased", "()Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid );
}

::net::sourceforge::jnipp::JStringHelper TemporalUnitProxy::toString()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "toString", "()Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::time::DurationProxy TemporalUnitProxy::getDuration()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getDuration", "()Ljava/time/Duration;" );
	return ::java::time::DurationProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::time::temporal::TemporalProxy TemporalUnitProxy::addTo(::java::time::temporal::TemporalProxy p0, jlong p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "addTo", "(Ljava/time/temporal/Temporal;J)Ljava/time/temporal/Temporal;" );
	return ::java::time::temporal::TemporalProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), p1 )  );
}

jlong TemporalUnitProxy::between(::java::time::temporal::TemporalProxy p0, ::java::time::temporal::TemporalProxy p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "between", "(Ljava/time/temporal/Temporal;Ljava/time/temporal/Temporal;)J" );
	return JNIEnvHelper::CallLongMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), static_cast<jobject>( p1 ) );
}

jboolean TemporalUnitProxy::isSupportedBy(::java::time::temporal::TemporalProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "isSupportedBy", "(Ljava/time/temporal/Temporal;)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

