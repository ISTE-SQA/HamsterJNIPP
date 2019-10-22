#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "TemporalAdjusterProxy.h"

// includes for parameter and return type proxy classes
#include "java\time\temporal\TemporalProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::time::temporal;


std::string TemporalAdjusterProxy::className = "java/time/temporal/TemporalAdjuster";
jclass TemporalAdjusterProxy::objectClass = NULL;

jclass TemporalAdjusterProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

TemporalAdjusterProxy::TemporalAdjusterProxy(void* unused)
{
}

jobject TemporalAdjusterProxy::_getPeerObject() const
{
	return peerObject;
}

jclass TemporalAdjusterProxy::getObjectClass()
{
	return _getObjectClass();
}

TemporalAdjusterProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
TemporalAdjusterProxy::TemporalAdjusterProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

TemporalAdjusterProxy::~TemporalAdjusterProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

TemporalAdjusterProxy& TemporalAdjusterProxy::operator=(const TemporalAdjusterProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
::java::time::temporal::TemporalProxy TemporalAdjusterProxy::adjustInto(::java::time::temporal::TemporalProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "adjustInto", "(Ljava/time/temporal/Temporal;)Ljava/time/temporal/Temporal;" );
	return ::java::time::temporal::TemporalProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

