#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "PrimitiveIterator_OfIntProxy.h"

// includes for parameter and return type proxy classes
#include "java\lang\IntegerProxy.h"
#include "java\util\function\ConsumerProxy.h"
#include "java\util\function\IntConsumerProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::util;


std::string PrimitiveIterator_OfIntProxy::className = "java/util/PrimitiveIterator$OfInt";
jclass PrimitiveIterator_OfIntProxy::objectClass = NULL;

jclass PrimitiveIterator_OfIntProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

PrimitiveIterator_OfIntProxy::PrimitiveIterator_OfIntProxy(void* unused)
{
}

jobject PrimitiveIterator_OfIntProxy::_getPeerObject() const
{
	return peerObject;
}

jclass PrimitiveIterator_OfIntProxy::getObjectClass()
{
	return _getObjectClass();
}

PrimitiveIterator_OfIntProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
PrimitiveIterator_OfIntProxy::PrimitiveIterator_OfIntProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

PrimitiveIterator_OfIntProxy::~PrimitiveIterator_OfIntProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

PrimitiveIterator_OfIntProxy& PrimitiveIterator_OfIntProxy::operator=(const PrimitiveIterator_OfIntProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
jint PrimitiveIterator_OfIntProxy::nextInt()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "nextInt", "()I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid );
}

::java::lang::IntegerProxy PrimitiveIterator_OfIntProxy::next()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "next", "()Ljava/lang/Integer;" );
	return ::java::lang::IntegerProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

void PrimitiveIterator_OfIntProxy::forEachRemaining(::java::util::function::ConsumerProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "forEachRemaining", "(Ljava/util/function/Consumer;)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

void PrimitiveIterator_OfIntProxy::forEachRemaining(::java::util::function::IntConsumerProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "forEachRemaining", "(Ljava/util/function/IntConsumer;)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

