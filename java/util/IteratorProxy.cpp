#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "IteratorProxy.h"

// includes for parameter and return type proxy classes
#include "java\lang\ObjectProxy.h"
#include "java\util\function\ConsumerProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::util;


std::string IteratorProxy::className = "java/util/Iterator";
jclass IteratorProxy::objectClass = NULL;

jclass IteratorProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

IteratorProxy::IteratorProxy(void* unused)
{
}

jobject IteratorProxy::_getPeerObject() const
{
	return peerObject;
}

jclass IteratorProxy::getObjectClass()
{
	return _getObjectClass();
}

IteratorProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
IteratorProxy::IteratorProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

IteratorProxy::~IteratorProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

IteratorProxy& IteratorProxy::operator=(const IteratorProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
jboolean IteratorProxy::hasNext()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "hasNext", "()Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid );
}

::java::lang::ObjectProxy IteratorProxy::next()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "next", "()Ljava/lang/Object;" );
	return ::java::lang::ObjectProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

void IteratorProxy::forEachRemaining(::java::util::function::ConsumerProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "forEachRemaining", "(Ljava/util/function/Consumer;)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

void IteratorProxy::remove()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "remove", "()V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid );
}

