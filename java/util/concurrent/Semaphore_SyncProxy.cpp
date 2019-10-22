#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "Semaphore_SyncProxy.h"

// includes for parameter and return type proxy classes

using namespace net::sourceforge::jnipp;
using namespace java::util::concurrent;


std::string Semaphore_SyncProxy::className = "java/util/concurrent/Semaphore$Sync";
jclass Semaphore_SyncProxy::objectClass = NULL;

jclass Semaphore_SyncProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

Semaphore_SyncProxy::Semaphore_SyncProxy(void* unused)
{
}

jobject Semaphore_SyncProxy::_getPeerObject() const
{
	return peerObject;
}

jclass Semaphore_SyncProxy::getObjectClass()
{
	return _getObjectClass();
}

Semaphore_SyncProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
Semaphore_SyncProxy::Semaphore_SyncProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

Semaphore_SyncProxy::~Semaphore_SyncProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

Semaphore_SyncProxy& Semaphore_SyncProxy::operator=(const Semaphore_SyncProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
