#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "ThreadLocal_ThreadLocalMap_EntryProxy.h"

// includes for parameter and return type proxy classes
#include "java\lang\ObjectProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::lang;


std::string ThreadLocal_ThreadLocalMap_EntryProxy::className = "java/lang/ThreadLocal$ThreadLocalMap$Entry";
jclass ThreadLocal_ThreadLocalMap_EntryProxy::objectClass = NULL;

jclass ThreadLocal_ThreadLocalMap_EntryProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

ThreadLocal_ThreadLocalMap_EntryProxy::ThreadLocal_ThreadLocalMap_EntryProxy(void* unused)
{
}

jobject ThreadLocal_ThreadLocalMap_EntryProxy::_getPeerObject() const
{
	return peerObject;
}

jclass ThreadLocal_ThreadLocalMap_EntryProxy::getObjectClass()
{
	return _getObjectClass();
}

ThreadLocal_ThreadLocalMap_EntryProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
ThreadLocal_ThreadLocalMap_EntryProxy::ThreadLocal_ThreadLocalMap_EntryProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

ThreadLocal_ThreadLocalMap_EntryProxy::~ThreadLocal_ThreadLocalMap_EntryProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

ThreadLocal_ThreadLocalMap_EntryProxy& ThreadLocal_ThreadLocalMap_EntryProxy::operator=(const ThreadLocal_ThreadLocalMap_EntryProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
