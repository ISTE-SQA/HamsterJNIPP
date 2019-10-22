#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "ThreadLocal_ThreadLocalMapProxy.h"

// includes for parameter and return type proxy classes
#include "java\lang\ThreadLocal_ThreadLocalMap_EntryProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::lang;


std::string ThreadLocal_ThreadLocalMapProxy::className = "java/lang/ThreadLocal$ThreadLocalMap";
jclass ThreadLocal_ThreadLocalMapProxy::objectClass = NULL;

jclass ThreadLocal_ThreadLocalMapProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

ThreadLocal_ThreadLocalMapProxy::ThreadLocal_ThreadLocalMapProxy(void* unused)
{
}

jobject ThreadLocal_ThreadLocalMapProxy::_getPeerObject() const
{
	return peerObject;
}

jclass ThreadLocal_ThreadLocalMapProxy::getObjectClass()
{
	return _getObjectClass();
}

ThreadLocal_ThreadLocalMapProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
ThreadLocal_ThreadLocalMapProxy::ThreadLocal_ThreadLocalMapProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

ThreadLocal_ThreadLocalMapProxy::~ThreadLocal_ThreadLocalMapProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

ThreadLocal_ThreadLocalMapProxy& ThreadLocal_ThreadLocalMapProxy::operator=(const ThreadLocal_ThreadLocalMapProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
