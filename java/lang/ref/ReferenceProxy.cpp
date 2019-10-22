#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "ReferenceProxy.h"

// includes for parameter and return type proxy classes
#include "java\lang\ObjectProxy.h"
#include "java\lang\ref\Reference_LockProxy.h"
#include "java\lang\ref\ReferenceQueueProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::lang::ref;


std::string ReferenceProxy::className = "java/lang/ref/Reference";
jclass ReferenceProxy::objectClass = NULL;

jclass ReferenceProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

ReferenceProxy::ReferenceProxy(void* unused)
{
}

jobject ReferenceProxy::_getPeerObject() const
{
	return peerObject;
}

jclass ReferenceProxy::getObjectClass()
{
	return _getObjectClass();
}

ReferenceProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
ReferenceProxy::ReferenceProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

ReferenceProxy::~ReferenceProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

ReferenceProxy& ReferenceProxy::operator=(const ReferenceProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
jboolean ReferenceProxy::enqueue()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "enqueue", "()Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid );
}

jboolean ReferenceProxy::isEnqueued()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "isEnqueued", "()Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid );
}

::java::lang::ObjectProxy ReferenceProxy::get()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "get", "()Ljava/lang/Object;" );
	return ::java::lang::ObjectProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

void ReferenceProxy::clear()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "clear", "()V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid );
}

