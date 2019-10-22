#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "ReferenceQueue_LockProxy.h"

// includes for parameter and return type proxy classes

using namespace net::sourceforge::jnipp;
using namespace java::lang::ref;


std::string ReferenceQueue_LockProxy::className = "java/lang/ref/ReferenceQueue$Lock";
jclass ReferenceQueue_LockProxy::objectClass = NULL;

jclass ReferenceQueue_LockProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

ReferenceQueue_LockProxy::ReferenceQueue_LockProxy(void* unused)
{
}

jobject ReferenceQueue_LockProxy::_getPeerObject() const
{
	return peerObject;
}

jclass ReferenceQueue_LockProxy::getObjectClass()
{
	return _getObjectClass();
}

ReferenceQueue_LockProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
ReferenceQueue_LockProxy::ReferenceQueue_LockProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

ReferenceQueue_LockProxy::~ReferenceQueue_LockProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

ReferenceQueue_LockProxy& ReferenceQueue_LockProxy::operator=(const ReferenceQueue_LockProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
