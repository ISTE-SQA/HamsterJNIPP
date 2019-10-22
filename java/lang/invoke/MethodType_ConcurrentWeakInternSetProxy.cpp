#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "MethodType_ConcurrentWeakInternSetProxy.h"

// includes for parameter and return type proxy classes
#include "java\lang\ObjectProxy.h"
#include "java\lang\ref\ReferenceQueueProxy.h"
#include "java\util\concurrent\ConcurrentMapProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::lang::invoke;


std::string MethodType_ConcurrentWeakInternSetProxy::className = "java/lang/invoke/MethodType$ConcurrentWeakInternSet";
jclass MethodType_ConcurrentWeakInternSetProxy::objectClass = NULL;

jclass MethodType_ConcurrentWeakInternSetProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

MethodType_ConcurrentWeakInternSetProxy::MethodType_ConcurrentWeakInternSetProxy(void* unused)
{
}

jobject MethodType_ConcurrentWeakInternSetProxy::_getPeerObject() const
{
	return peerObject;
}

jclass MethodType_ConcurrentWeakInternSetProxy::getObjectClass()
{
	return _getObjectClass();
}

MethodType_ConcurrentWeakInternSetProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
MethodType_ConcurrentWeakInternSetProxy::MethodType_ConcurrentWeakInternSetProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

MethodType_ConcurrentWeakInternSetProxy::MethodType_ConcurrentWeakInternSetProxy()
{
	jmethodID mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "<init>", "()V" );
	peerObject = JNIEnvHelper::NewGlobalRef( JNIEnvHelper::NewObject( _getObjectClass(), mid ) );
}

MethodType_ConcurrentWeakInternSetProxy::~MethodType_ConcurrentWeakInternSetProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

MethodType_ConcurrentWeakInternSetProxy& MethodType_ConcurrentWeakInternSetProxy::operator=(const MethodType_ConcurrentWeakInternSetProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
::java::lang::ObjectProxy MethodType_ConcurrentWeakInternSetProxy::add(::java::lang::ObjectProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "add", "(Ljava/lang/Object;)Ljava/lang/Object;" );
	return ::java::lang::ObjectProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::java::lang::ObjectProxy MethodType_ConcurrentWeakInternSetProxy::get(::java::lang::ObjectProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "get", "(Ljava/lang/Object;)Ljava/lang/Object;" );
	return ::java::lang::ObjectProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

