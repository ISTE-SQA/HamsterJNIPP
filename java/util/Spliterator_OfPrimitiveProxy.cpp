#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "Spliterator_OfPrimitiveProxy.h"

// includes for parameter and return type proxy classes
#include "java\lang\ObjectProxy.h"
#include "java\util\SpliteratorProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::util;


std::string Spliterator_OfPrimitiveProxy::className = "java/util/Spliterator$OfPrimitive";
jclass Spliterator_OfPrimitiveProxy::objectClass = NULL;

jclass Spliterator_OfPrimitiveProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

Spliterator_OfPrimitiveProxy::Spliterator_OfPrimitiveProxy(void* unused)
{
}

jobject Spliterator_OfPrimitiveProxy::_getPeerObject() const
{
	return peerObject;
}

jclass Spliterator_OfPrimitiveProxy::getObjectClass()
{
	return _getObjectClass();
}

Spliterator_OfPrimitiveProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
Spliterator_OfPrimitiveProxy::Spliterator_OfPrimitiveProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

Spliterator_OfPrimitiveProxy::~Spliterator_OfPrimitiveProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

Spliterator_OfPrimitiveProxy& Spliterator_OfPrimitiveProxy::operator=(const Spliterator_OfPrimitiveProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
jboolean Spliterator_OfPrimitiveProxy::tryAdvance(::java::lang::ObjectProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "tryAdvance", "(Ljava/lang/Object;)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

::java::util::Spliterator_OfPrimitiveProxy Spliterator_OfPrimitiveProxy::trySplit()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "trySplit", "()Ljava/util/Spliterator$OfPrimitive;" );
	return ::java::util::Spliterator_OfPrimitiveProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::util::SpliteratorProxy Spliterator_OfPrimitiveProxy::trySplit()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "trySplit", "()Ljava/util/Spliterator;" );
	return ::java::util::SpliteratorProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

void Spliterator_OfPrimitiveProxy::forEachRemaining(::java::lang::ObjectProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "forEachRemaining", "(Ljava/lang/Object;)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

