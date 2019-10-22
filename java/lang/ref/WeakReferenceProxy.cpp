#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "WeakReferenceProxy.h"

// includes for parameter and return type proxy classes
#include "java\lang\ObjectProxy.h"
#include "java\lang\ref\ReferenceQueueProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::lang::ref;


std::string WeakReferenceProxy::className = "java/lang/ref/WeakReference";
jclass WeakReferenceProxy::objectClass = NULL;

jclass WeakReferenceProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

WeakReferenceProxy::WeakReferenceProxy(void* unused)
{
}

jobject WeakReferenceProxy::_getPeerObject() const
{
	return peerObject;
}

jclass WeakReferenceProxy::getObjectClass()
{
	return _getObjectClass();
}

WeakReferenceProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
WeakReferenceProxy::WeakReferenceProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

WeakReferenceProxy::WeakReferenceProxy(::java::lang::ObjectProxy p0)
{
	jmethodID mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "<init>", "(Ljava/lang/Object;)V" );
	peerObject = JNIEnvHelper::NewGlobalRef( JNIEnvHelper::NewObject( _getObjectClass(), mid, static_cast<jobject>( p0 ) ) );
}

WeakReferenceProxy::WeakReferenceProxy(::java::lang::ObjectProxy p0, ::java::lang::ref::ReferenceQueueProxy p1)
{
	jmethodID mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "<init>", "(Ljava/lang/Object;Ljava/lang/ref/ReferenceQueue;)V" );
	peerObject = JNIEnvHelper::NewGlobalRef( JNIEnvHelper::NewObject( _getObjectClass(), mid, static_cast<jobject>( p0 ), static_cast<jobject>( p1 ) ) );
}

WeakReferenceProxy::~WeakReferenceProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

WeakReferenceProxy& WeakReferenceProxy::operator=(const WeakReferenceProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
