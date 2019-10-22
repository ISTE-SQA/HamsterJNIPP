#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "ObjDoubleConsumerProxy.h"

// includes for parameter and return type proxy classes
#include "java\lang\ObjectProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::util::function;


std::string ObjDoubleConsumerProxy::className = "java/util/function/ObjDoubleConsumer";
jclass ObjDoubleConsumerProxy::objectClass = NULL;

jclass ObjDoubleConsumerProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

ObjDoubleConsumerProxy::ObjDoubleConsumerProxy(void* unused)
{
}

jobject ObjDoubleConsumerProxy::_getPeerObject() const
{
	return peerObject;
}

jclass ObjDoubleConsumerProxy::getObjectClass()
{
	return _getObjectClass();
}

ObjDoubleConsumerProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
ObjDoubleConsumerProxy::ObjDoubleConsumerProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

ObjDoubleConsumerProxy::~ObjDoubleConsumerProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

ObjDoubleConsumerProxy& ObjDoubleConsumerProxy::operator=(const ObjDoubleConsumerProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
void ObjDoubleConsumerProxy::accept(::java::lang::ObjectProxy p0, jdouble p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "accept", "(Ljava/lang/Object;D)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), p1 );
}

