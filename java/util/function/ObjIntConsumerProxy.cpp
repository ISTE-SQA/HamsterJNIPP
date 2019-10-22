#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "ObjIntConsumerProxy.h"

// includes for parameter and return type proxy classes
#include "java\lang\ObjectProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::util::function;


std::string ObjIntConsumerProxy::className = "java/util/function/ObjIntConsumer";
jclass ObjIntConsumerProxy::objectClass = NULL;

jclass ObjIntConsumerProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

ObjIntConsumerProxy::ObjIntConsumerProxy(void* unused)
{
}

jobject ObjIntConsumerProxy::_getPeerObject() const
{
	return peerObject;
}

jclass ObjIntConsumerProxy::getObjectClass()
{
	return _getObjectClass();
}

ObjIntConsumerProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
ObjIntConsumerProxy::ObjIntConsumerProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

ObjIntConsumerProxy::~ObjIntConsumerProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

ObjIntConsumerProxy& ObjIntConsumerProxy::operator=(const ObjIntConsumerProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
void ObjIntConsumerProxy::accept(::java::lang::ObjectProxy p0, jint p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "accept", "(Ljava/lang/Object;I)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), p1 );
}

