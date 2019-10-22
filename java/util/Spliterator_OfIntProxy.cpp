#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "Spliterator_OfIntProxy.h"

// includes for parameter and return type proxy classes
#include "java\util\function\IntConsumerProxy.h"
#include "java\util\function\ConsumerProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::util;


std::string Spliterator_OfIntProxy::className = "java/util/Spliterator$OfInt";
jclass Spliterator_OfIntProxy::objectClass = NULL;

jclass Spliterator_OfIntProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

Spliterator_OfIntProxy::Spliterator_OfIntProxy(void* unused)
{
}

jobject Spliterator_OfIntProxy::_getPeerObject() const
{
	return peerObject;
}

jclass Spliterator_OfIntProxy::getObjectClass()
{
	return _getObjectClass();
}

Spliterator_OfIntProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
Spliterator_OfIntProxy::Spliterator_OfIntProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

Spliterator_OfIntProxy::~Spliterator_OfIntProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

Spliterator_OfIntProxy& Spliterator_OfIntProxy::operator=(const Spliterator_OfIntProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
jboolean Spliterator_OfIntProxy::tryAdvance(::java::util::function::IntConsumerProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "tryAdvance", "(Ljava/util/function/IntConsumer;)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

::java::util::Spliterator_OfIntProxy Spliterator_OfIntProxy::trySplit()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "trySplit", "()Ljava/util/Spliterator$OfInt;" );
	return ::java::util::Spliterator_OfIntProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

jboolean Spliterator_OfIntProxy::tryAdvance(::java::util::function::ConsumerProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "tryAdvance", "(Ljava/util/function/Consumer;)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

void Spliterator_OfIntProxy::forEachRemaining(::java::util::function::ConsumerProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "forEachRemaining", "(Ljava/util/function/Consumer;)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

void Spliterator_OfIntProxy::forEachRemaining(::java::util::function::IntConsumerProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "forEachRemaining", "(Ljava/util/function/IntConsumer;)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

