#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "ConcurrentHashMap_CounterCellProxy.h"

// includes for parameter and return type proxy classes

using namespace net::sourceforge::jnipp;
using namespace java::util::concurrent;


std::string ConcurrentHashMap_CounterCellProxy::className = "java/util/concurrent/ConcurrentHashMap$CounterCell";
jclass ConcurrentHashMap_CounterCellProxy::objectClass = NULL;

jclass ConcurrentHashMap_CounterCellProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

ConcurrentHashMap_CounterCellProxy::ConcurrentHashMap_CounterCellProxy(void* unused)
{
}

jobject ConcurrentHashMap_CounterCellProxy::_getPeerObject() const
{
	return peerObject;
}

jclass ConcurrentHashMap_CounterCellProxy::getObjectClass()
{
	return _getObjectClass();
}

ConcurrentHashMap_CounterCellProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
ConcurrentHashMap_CounterCellProxy::ConcurrentHashMap_CounterCellProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

ConcurrentHashMap_CounterCellProxy::~ConcurrentHashMap_CounterCellProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

ConcurrentHashMap_CounterCellProxy& ConcurrentHashMap_CounterCellProxy::operator=(const ConcurrentHashMap_CounterCellProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
