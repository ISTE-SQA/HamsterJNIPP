#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "PrimitiveIterator_OfDoubleProxy.h"

// includes for parameter and return type proxy classes
#include "java\lang\DoubleProxy.h"
#include "java\util\function\ConsumerProxy.h"
#include "java\util\function\DoubleConsumerProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::util;


std::string PrimitiveIterator_OfDoubleProxy::className = "java/util/PrimitiveIterator$OfDouble";
jclass PrimitiveIterator_OfDoubleProxy::objectClass = NULL;

jclass PrimitiveIterator_OfDoubleProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

PrimitiveIterator_OfDoubleProxy::PrimitiveIterator_OfDoubleProxy(void* unused)
{
}

jobject PrimitiveIterator_OfDoubleProxy::_getPeerObject() const
{
	return peerObject;
}

jclass PrimitiveIterator_OfDoubleProxy::getObjectClass()
{
	return _getObjectClass();
}

PrimitiveIterator_OfDoubleProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
PrimitiveIterator_OfDoubleProxy::PrimitiveIterator_OfDoubleProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

PrimitiveIterator_OfDoubleProxy::~PrimitiveIterator_OfDoubleProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

PrimitiveIterator_OfDoubleProxy& PrimitiveIterator_OfDoubleProxy::operator=(const PrimitiveIterator_OfDoubleProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
jdouble PrimitiveIterator_OfDoubleProxy::nextDouble()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "nextDouble", "()D" );
	return JNIEnvHelper::CallDoubleMethod( _getPeerObject(), mid );
}

::java::lang::DoubleProxy PrimitiveIterator_OfDoubleProxy::next()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "next", "()Ljava/lang/Double;" );
	return ::java::lang::DoubleProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

void PrimitiveIterator_OfDoubleProxy::forEachRemaining(::java::util::function::ConsumerProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "forEachRemaining", "(Ljava/util/function/Consumer;)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

void PrimitiveIterator_OfDoubleProxy::forEachRemaining(::java::util::function::DoubleConsumerProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "forEachRemaining", "(Ljava/util/function/DoubleConsumer;)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

