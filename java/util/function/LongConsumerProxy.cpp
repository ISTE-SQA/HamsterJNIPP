#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "LongConsumerProxy.h"

// includes for parameter and return type proxy classes

using namespace net::sourceforge::jnipp;
using namespace java::util::function;


std::string LongConsumerProxy::className = "java/util/function/LongConsumer";
jclass LongConsumerProxy::objectClass = NULL;

jclass LongConsumerProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

LongConsumerProxy::LongConsumerProxy(void* unused)
{
}

jobject LongConsumerProxy::_getPeerObject() const
{
	return peerObject;
}

jclass LongConsumerProxy::getObjectClass()
{
	return _getObjectClass();
}

LongConsumerProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
LongConsumerProxy::LongConsumerProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

LongConsumerProxy::~LongConsumerProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

LongConsumerProxy& LongConsumerProxy::operator=(const LongConsumerProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
void LongConsumerProxy::accept(jlong p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "accept", "(J)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, p0 );
}

::java::util::function::LongConsumerProxy LongConsumerProxy::andThen(::java::util::function::LongConsumerProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "andThen", "(Ljava/util/function/LongConsumer;)Ljava/util/function/LongConsumer;" );
	return ::java::util::function::LongConsumerProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

