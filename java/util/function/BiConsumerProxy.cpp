#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "BiConsumerProxy.h"

// includes for parameter and return type proxy classes
#include "java\lang\ObjectProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::util::function;


std::string BiConsumerProxy::className = "java/util/function/BiConsumer";
jclass BiConsumerProxy::objectClass = NULL;

jclass BiConsumerProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

BiConsumerProxy::BiConsumerProxy(void* unused)
{
}

jobject BiConsumerProxy::_getPeerObject() const
{
	return peerObject;
}

jclass BiConsumerProxy::getObjectClass()
{
	return _getObjectClass();
}

BiConsumerProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
BiConsumerProxy::BiConsumerProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

BiConsumerProxy::~BiConsumerProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

BiConsumerProxy& BiConsumerProxy::operator=(const BiConsumerProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
void BiConsumerProxy::accept(::java::lang::ObjectProxy p0, ::java::lang::ObjectProxy p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "accept", "(Ljava/lang/Object;Ljava/lang/Object;)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), static_cast<jobject>( p1 ) );
}

::java::util::function::BiConsumerProxy BiConsumerProxy::andThen(::java::util::function::BiConsumerProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "andThen", "(Ljava/util/function/BiConsumer;)Ljava/util/function/BiConsumer;" );
	return ::java::util::function::BiConsumerProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

