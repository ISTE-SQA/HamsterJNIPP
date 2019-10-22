#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "DoubleConsumerProxy.h"

// includes for parameter and return type proxy classes

using namespace net::sourceforge::jnipp;
using namespace java::util::function;


std::string DoubleConsumerProxy::className = "java/util/function/DoubleConsumer";
jclass DoubleConsumerProxy::objectClass = NULL;

jclass DoubleConsumerProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

DoubleConsumerProxy::DoubleConsumerProxy(void* unused)
{
}

jobject DoubleConsumerProxy::_getPeerObject() const
{
	return peerObject;
}

jclass DoubleConsumerProxy::getObjectClass()
{
	return _getObjectClass();
}

DoubleConsumerProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
DoubleConsumerProxy::DoubleConsumerProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

DoubleConsumerProxy::~DoubleConsumerProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

DoubleConsumerProxy& DoubleConsumerProxy::operator=(const DoubleConsumerProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
void DoubleConsumerProxy::accept(jdouble p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "accept", "(D)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, p0 );
}

::java::util::function::DoubleConsumerProxy DoubleConsumerProxy::andThen(::java::util::function::DoubleConsumerProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "andThen", "(Ljava/util/function/DoubleConsumer;)Ljava/util/function/DoubleConsumer;" );
	return ::java::util::function::DoubleConsumerProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

