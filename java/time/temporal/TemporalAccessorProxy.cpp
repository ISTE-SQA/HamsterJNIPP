#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "TemporalAccessorProxy.h"

// includes for parameter and return type proxy classes
#include "java\time\temporal\TemporalFieldProxy.h"
#include "java\time\temporal\TemporalQueryProxy.h"
#include "java\lang\ObjectProxy.h"
#include "java\time\temporal\ValueRangeProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::time::temporal;


std::string TemporalAccessorProxy::className = "java/time/temporal/TemporalAccessor";
jclass TemporalAccessorProxy::objectClass = NULL;

jclass TemporalAccessorProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

TemporalAccessorProxy::TemporalAccessorProxy(void* unused)
{
}

jobject TemporalAccessorProxy::_getPeerObject() const
{
	return peerObject;
}

jclass TemporalAccessorProxy::getObjectClass()
{
	return _getObjectClass();
}

TemporalAccessorProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
TemporalAccessorProxy::TemporalAccessorProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

TemporalAccessorProxy::~TemporalAccessorProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

TemporalAccessorProxy& TemporalAccessorProxy::operator=(const TemporalAccessorProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
jboolean TemporalAccessorProxy::isSupported(::java::time::temporal::TemporalFieldProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "isSupported", "(Ljava/time/temporal/TemporalField;)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

jlong TemporalAccessorProxy::getLong(::java::time::temporal::TemporalFieldProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getLong", "(Ljava/time/temporal/TemporalField;)J" );
	return JNIEnvHelper::CallLongMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

jint TemporalAccessorProxy::get(::java::time::temporal::TemporalFieldProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "get", "(Ljava/time/temporal/TemporalField;)I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

::java::lang::ObjectProxy TemporalAccessorProxy::query(::java::time::temporal::TemporalQueryProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "query", "(Ljava/time/temporal/TemporalQuery;)Ljava/lang/Object;" );
	return ::java::lang::ObjectProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::java::time::temporal::ValueRangeProxy TemporalAccessorProxy::range(::java::time::temporal::TemporalFieldProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "range", "(Ljava/time/temporal/TemporalField;)Ljava/time/temporal/ValueRange;" );
	return ::java::time::temporal::ValueRangeProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

