#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "TemporalQueryProxy.h"

// includes for parameter and return type proxy classes
#include "java\time\temporal\TemporalAccessorProxy.h"
#include "java\lang\ObjectProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::time::temporal;


std::string TemporalQueryProxy::className = "java/time/temporal/TemporalQuery";
jclass TemporalQueryProxy::objectClass = NULL;

jclass TemporalQueryProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

TemporalQueryProxy::TemporalQueryProxy(void* unused)
{
}

jobject TemporalQueryProxy::_getPeerObject() const
{
	return peerObject;
}

jclass TemporalQueryProxy::getObjectClass()
{
	return _getObjectClass();
}

TemporalQueryProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
TemporalQueryProxy::TemporalQueryProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

TemporalQueryProxy::~TemporalQueryProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

TemporalQueryProxy& TemporalQueryProxy::operator=(const TemporalQueryProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
::java::lang::ObjectProxy TemporalQueryProxy::queryFrom(::java::time::temporal::TemporalAccessorProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "queryFrom", "(Ljava/time/temporal/TemporalAccessor;)Ljava/lang/Object;" );
	return ::java::lang::ObjectProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

