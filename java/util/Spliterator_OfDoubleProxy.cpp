#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "Spliterator_OfDoubleProxy.h"

// includes for parameter and return type proxy classes
#include "java\util\function\DoubleConsumerProxy.h"
#include "java\util\function\ConsumerProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::util;


std::string Spliterator_OfDoubleProxy::className = "java/util/Spliterator$OfDouble";
jclass Spliterator_OfDoubleProxy::objectClass = NULL;

jclass Spliterator_OfDoubleProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

Spliterator_OfDoubleProxy::Spliterator_OfDoubleProxy(void* unused)
{
}

jobject Spliterator_OfDoubleProxy::_getPeerObject() const
{
	return peerObject;
}

jclass Spliterator_OfDoubleProxy::getObjectClass()
{
	return _getObjectClass();
}

Spliterator_OfDoubleProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
Spliterator_OfDoubleProxy::Spliterator_OfDoubleProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

Spliterator_OfDoubleProxy::~Spliterator_OfDoubleProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

Spliterator_OfDoubleProxy& Spliterator_OfDoubleProxy::operator=(const Spliterator_OfDoubleProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
jboolean Spliterator_OfDoubleProxy::tryAdvance(::java::util::function::DoubleConsumerProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "tryAdvance", "(Ljava/util/function/DoubleConsumer;)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

::java::util::Spliterator_OfDoubleProxy Spliterator_OfDoubleProxy::trySplit()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "trySplit", "()Ljava/util/Spliterator$OfDouble;" );
	return ::java::util::Spliterator_OfDoubleProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

jboolean Spliterator_OfDoubleProxy::tryAdvance(::java::util::function::ConsumerProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "tryAdvance", "(Ljava/util/function/Consumer;)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

void Spliterator_OfDoubleProxy::forEachRemaining(::java::util::function::ConsumerProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "forEachRemaining", "(Ljava/util/function/Consumer;)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

void Spliterator_OfDoubleProxy::forEachRemaining(::java::util::function::DoubleConsumerProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "forEachRemaining", "(Ljava/util/function/DoubleConsumer;)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

