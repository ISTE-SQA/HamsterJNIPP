#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "TemporalAmountProxy.h"

// includes for parameter and return type proxy classes
#include "java\time\temporal\TemporalProxy.h"
#include "java\util\ListProxy.h"
#include "java\time\temporal\TemporalUnitProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::time::temporal;


std::string TemporalAmountProxy::className = "java/time/temporal/TemporalAmount";
jclass TemporalAmountProxy::objectClass = NULL;

jclass TemporalAmountProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

TemporalAmountProxy::TemporalAmountProxy(void* unused)
{
}

jobject TemporalAmountProxy::_getPeerObject() const
{
	return peerObject;
}

jclass TemporalAmountProxy::getObjectClass()
{
	return _getObjectClass();
}

TemporalAmountProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
TemporalAmountProxy::TemporalAmountProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

TemporalAmountProxy::~TemporalAmountProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

TemporalAmountProxy& TemporalAmountProxy::operator=(const TemporalAmountProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
::java::time::temporal::TemporalProxy TemporalAmountProxy::addTo(::java::time::temporal::TemporalProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "addTo", "(Ljava/time/temporal/Temporal;)Ljava/time/temporal/Temporal;" );
	return ::java::time::temporal::TemporalProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::java::time::temporal::TemporalProxy TemporalAmountProxy::subtractFrom(::java::time::temporal::TemporalProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "subtractFrom", "(Ljava/time/temporal/Temporal;)Ljava/time/temporal/Temporal;" );
	return ::java::time::temporal::TemporalProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::java::util::ListProxy TemporalAmountProxy::getUnits()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getUnits", "()Ljava/util/List;" );
	return ::java::util::ListProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

jlong TemporalAmountProxy::get(::java::time::temporal::TemporalUnitProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "get", "(Ljava/time/temporal/TemporalUnit;)J" );
	return JNIEnvHelper::CallLongMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

