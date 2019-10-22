#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "SoftReferenceProxy.h"

// includes for parameter and return type proxy classes
#include "java\lang\ObjectProxy.h"
#include "java\lang\ref\ReferenceQueueProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::lang::ref;


std::string SoftReferenceProxy::className = "java/lang/ref/SoftReference";
jclass SoftReferenceProxy::objectClass = NULL;

jclass SoftReferenceProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

SoftReferenceProxy::SoftReferenceProxy(void* unused)
{
}

jobject SoftReferenceProxy::_getPeerObject() const
{
	return peerObject;
}

jclass SoftReferenceProxy::getObjectClass()
{
	return _getObjectClass();
}

SoftReferenceProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
SoftReferenceProxy::SoftReferenceProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

SoftReferenceProxy::SoftReferenceProxy(::java::lang::ObjectProxy p0)
{
	jmethodID mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "<init>", "(Ljava/lang/Object;)V" );
	peerObject = JNIEnvHelper::NewGlobalRef( JNIEnvHelper::NewObject( _getObjectClass(), mid, static_cast<jobject>( p0 ) ) );
}

SoftReferenceProxy::SoftReferenceProxy(::java::lang::ObjectProxy p0, ::java::lang::ref::ReferenceQueueProxy p1)
{
	jmethodID mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "<init>", "(Ljava/lang/Object;Ljava/lang/ref/ReferenceQueue;)V" );
	peerObject = JNIEnvHelper::NewGlobalRef( JNIEnvHelper::NewObject( _getObjectClass(), mid, static_cast<jobject>( p0 ), static_cast<jobject>( p1 ) ) );
}

SoftReferenceProxy::~SoftReferenceProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

SoftReferenceProxy& SoftReferenceProxy::operator=(const SoftReferenceProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
::java::lang::ObjectProxy SoftReferenceProxy::get()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "get", "()Ljava/lang/Object;" );
	return ::java::lang::ObjectProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

