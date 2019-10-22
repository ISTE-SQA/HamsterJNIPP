#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "Spliterator_OfLongProxy.h"

// includes for parameter and return type proxy classes
#include "java\util\function\LongConsumerProxy.h"
#include "java\util\function\ConsumerProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::util;


std::string Spliterator_OfLongProxy::className = "java/util/Spliterator$OfLong";
jclass Spliterator_OfLongProxy::objectClass = NULL;

jclass Spliterator_OfLongProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

Spliterator_OfLongProxy::Spliterator_OfLongProxy(void* unused)
{
}

jobject Spliterator_OfLongProxy::_getPeerObject() const
{
	return peerObject;
}

jclass Spliterator_OfLongProxy::getObjectClass()
{
	return _getObjectClass();
}

Spliterator_OfLongProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
Spliterator_OfLongProxy::Spliterator_OfLongProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

Spliterator_OfLongProxy::~Spliterator_OfLongProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

Spliterator_OfLongProxy& Spliterator_OfLongProxy::operator=(const Spliterator_OfLongProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
jboolean Spliterator_OfLongProxy::tryAdvance(::java::util::function::LongConsumerProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "tryAdvance", "(Ljava/util/function/LongConsumer;)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

::java::util::Spliterator_OfLongProxy Spliterator_OfLongProxy::trySplit()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "trySplit", "()Ljava/util/Spliterator$OfLong;" );
	return ::java::util::Spliterator_OfLongProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

jboolean Spliterator_OfLongProxy::tryAdvance(::java::util::function::ConsumerProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "tryAdvance", "(Ljava/util/function/Consumer;)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

void Spliterator_OfLongProxy::forEachRemaining(::java::util::function::ConsumerProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "forEachRemaining", "(Ljava/util/function/Consumer;)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

void Spliterator_OfLongProxy::forEachRemaining(::java::util::function::LongConsumerProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "forEachRemaining", "(Ljava/util/function/LongConsumer;)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

