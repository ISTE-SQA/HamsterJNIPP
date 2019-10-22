#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "ObjLongConsumerProxy.h"

// includes for parameter and return type proxy classes
#include "java\lang\ObjectProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::util::function;


std::string ObjLongConsumerProxy::className = "java/util/function/ObjLongConsumer";
jclass ObjLongConsumerProxy::objectClass = NULL;

jclass ObjLongConsumerProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

ObjLongConsumerProxy::ObjLongConsumerProxy(void* unused)
{
}

jobject ObjLongConsumerProxy::_getPeerObject() const
{
	return peerObject;
}

jclass ObjLongConsumerProxy::getObjectClass()
{
	return _getObjectClass();
}

ObjLongConsumerProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
ObjLongConsumerProxy::ObjLongConsumerProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

ObjLongConsumerProxy::~ObjLongConsumerProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

ObjLongConsumerProxy& ObjLongConsumerProxy::operator=(const ObjLongConsumerProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
void ObjLongConsumerProxy::accept(::java::lang::ObjectProxy p0, jlong p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "accept", "(Ljava/lang/Object;J)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), p1 );
}

