#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "IntConsumerProxy.h"

// includes for parameter and return type proxy classes

using namespace net::sourceforge::jnipp;
using namespace java::util::function;


std::string IntConsumerProxy::className = "java/util/function/IntConsumer";
jclass IntConsumerProxy::objectClass = NULL;

jclass IntConsumerProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

IntConsumerProxy::IntConsumerProxy(void* unused)
{
}

jobject IntConsumerProxy::_getPeerObject() const
{
	return peerObject;
}

jclass IntConsumerProxy::getObjectClass()
{
	return _getObjectClass();
}

IntConsumerProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
IntConsumerProxy::IntConsumerProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

IntConsumerProxy::~IntConsumerProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

IntConsumerProxy& IntConsumerProxy::operator=(const IntConsumerProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
void IntConsumerProxy::accept(jint p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "accept", "(I)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, p0 );
}

::java::util::function::IntConsumerProxy IntConsumerProxy::andThen(::java::util::function::IntConsumerProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "andThen", "(Ljava/util/function/IntConsumer;)Ljava/util/function/IntConsumer;" );
	return ::java::util::function::IntConsumerProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

