#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "ReferenceQueueProxy.h"

// includes for parameter and return type proxy classes
#include "java\lang\ref\ReferenceProxy.h"
#include "java\lang\ref\ReferenceQueue_LockProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::lang::ref;


std::string ReferenceQueueProxy::className = "java/lang/ref/ReferenceQueue";
jclass ReferenceQueueProxy::objectClass = NULL;

jclass ReferenceQueueProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

ReferenceQueueProxy::ReferenceQueueProxy(void* unused)
{
}

jobject ReferenceQueueProxy::_getPeerObject() const
{
	return peerObject;
}

jclass ReferenceQueueProxy::getObjectClass()
{
	return _getObjectClass();
}

ReferenceQueueProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
ReferenceQueueProxy::ReferenceQueueProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

ReferenceQueueProxy::ReferenceQueueProxy()
{
	jmethodID mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "<init>", "()V" );
	peerObject = JNIEnvHelper::NewGlobalRef( JNIEnvHelper::NewObject( _getObjectClass(), mid ) );
}

ReferenceQueueProxy::~ReferenceQueueProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

ReferenceQueueProxy& ReferenceQueueProxy::operator=(const ReferenceQueueProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
::java::lang::ref::ReferenceProxy ReferenceQueueProxy::poll()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "poll", "()Ljava/lang/ref/Reference;" );
	return ::java::lang::ref::ReferenceProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::lang::ref::ReferenceProxy ReferenceQueueProxy::remove()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "remove", "()Ljava/lang/ref/Reference;" );
	return ::java::lang::ref::ReferenceProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::lang::ref::ReferenceProxy ReferenceQueueProxy::remove(jlong p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "remove", "(J)Ljava/lang/ref/Reference;" );
	return ::java::lang::ref::ReferenceProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0 )  );
}

