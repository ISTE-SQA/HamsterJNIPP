#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "TemporalProxy.h"

// includes for parameter and return type proxy classes
#include "java\time\temporal\TemporalUnitProxy.h"
#include "java\time\temporal\TemporalFieldProxy.h"
#include "java\time\temporal\TemporalAmountProxy.h"
#include "java\time\temporal\TemporalAdjusterProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::time::temporal;


std::string TemporalProxy::className = "java/time/temporal/Temporal";
jclass TemporalProxy::objectClass = NULL;

jclass TemporalProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

TemporalProxy::TemporalProxy(void* unused)
{
}

jobject TemporalProxy::_getPeerObject() const
{
	return peerObject;
}

jclass TemporalProxy::getObjectClass()
{
	return _getObjectClass();
}

TemporalProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
TemporalProxy::TemporalProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

TemporalProxy::~TemporalProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

TemporalProxy& TemporalProxy::operator=(const TemporalProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
jboolean TemporalProxy::isSupported(::java::time::temporal::TemporalUnitProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "isSupported", "(Ljava/time/temporal/TemporalUnit;)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

::java::time::temporal::TemporalProxy TemporalProxy::plus(jlong p0, ::java::time::temporal::TemporalUnitProxy p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "plus", "(JLjava/time/temporal/TemporalUnit;)Ljava/time/temporal/Temporal;" );
	return ::java::time::temporal::TemporalProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0, static_cast<jobject>( p1 ) )  );
}

::java::time::temporal::TemporalProxy TemporalProxy::with(::java::time::temporal::TemporalFieldProxy p0, jlong p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "with", "(Ljava/time/temporal/TemporalField;J)Ljava/time/temporal/Temporal;" );
	return ::java::time::temporal::TemporalProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), p1 )  );
}

jlong TemporalProxy::until(::java::time::temporal::TemporalProxy p0, ::java::time::temporal::TemporalUnitProxy p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "until", "(Ljava/time/temporal/Temporal;Ljava/time/temporal/TemporalUnit;)J" );
	return JNIEnvHelper::CallLongMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), static_cast<jobject>( p1 ) );
}

::java::time::temporal::TemporalProxy TemporalProxy::minus(::java::time::temporal::TemporalAmountProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "minus", "(Ljava/time/temporal/TemporalAmount;)Ljava/time/temporal/Temporal;" );
	return ::java::time::temporal::TemporalProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::java::time::temporal::TemporalProxy TemporalProxy::minus(jlong p0, ::java::time::temporal::TemporalUnitProxy p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "minus", "(JLjava/time/temporal/TemporalUnit;)Ljava/time/temporal/Temporal;" );
	return ::java::time::temporal::TemporalProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0, static_cast<jobject>( p1 ) )  );
}

::java::time::temporal::TemporalProxy TemporalProxy::plus(::java::time::temporal::TemporalAmountProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "plus", "(Ljava/time/temporal/TemporalAmount;)Ljava/time/temporal/Temporal;" );
	return ::java::time::temporal::TemporalProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::java::time::temporal::TemporalProxy TemporalProxy::with(::java::time::temporal::TemporalAdjusterProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "with", "(Ljava/time/temporal/TemporalAdjuster;)Ljava/time/temporal/Temporal;" );
	return ::java::time::temporal::TemporalProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

