#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "PrimitiveIterator_OfLongProxy.h"

// includes for parameter and return type proxy classes
#include "java\lang\LongProxy.h"
#include "java\util\function\ConsumerProxy.h"
#include "java\util\function\LongConsumerProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::util;


std::string PrimitiveIterator_OfLongProxy::className = "java/util/PrimitiveIterator$OfLong";
jclass PrimitiveIterator_OfLongProxy::objectClass = NULL;

jclass PrimitiveIterator_OfLongProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

PrimitiveIterator_OfLongProxy::PrimitiveIterator_OfLongProxy(void* unused)
{
}

jobject PrimitiveIterator_OfLongProxy::_getPeerObject() const
{
	return peerObject;
}

jclass PrimitiveIterator_OfLongProxy::getObjectClass()
{
	return _getObjectClass();
}

PrimitiveIterator_OfLongProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
PrimitiveIterator_OfLongProxy::PrimitiveIterator_OfLongProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

PrimitiveIterator_OfLongProxy::~PrimitiveIterator_OfLongProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

PrimitiveIterator_OfLongProxy& PrimitiveIterator_OfLongProxy::operator=(const PrimitiveIterator_OfLongProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
jlong PrimitiveIterator_OfLongProxy::nextLong()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "nextLong", "()J" );
	return JNIEnvHelper::CallLongMethod( _getPeerObject(), mid );
}

::java::lang::LongProxy PrimitiveIterator_OfLongProxy::next()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "next", "()Ljava/lang/Long;" );
	return ::java::lang::LongProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

void PrimitiveIterator_OfLongProxy::forEachRemaining(::java::util::function::ConsumerProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "forEachRemaining", "(Ljava/util/function/Consumer;)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

void PrimitiveIterator_OfLongProxy::forEachRemaining(::java::util::function::LongConsumerProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "forEachRemaining", "(Ljava/util/function/LongConsumer;)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

