#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "LinkedList_NodeProxy.h"

// includes for parameter and return type proxy classes
#include "java\lang\ObjectProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::util;


std::string LinkedList_NodeProxy::className = "java/util/LinkedList$Node";
jclass LinkedList_NodeProxy::objectClass = NULL;

jclass LinkedList_NodeProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

LinkedList_NodeProxy::LinkedList_NodeProxy(void* unused)
{
}

jobject LinkedList_NodeProxy::_getPeerObject() const
{
	return peerObject;
}

jclass LinkedList_NodeProxy::getObjectClass()
{
	return _getObjectClass();
}

LinkedList_NodeProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
LinkedList_NodeProxy::LinkedList_NodeProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

LinkedList_NodeProxy::~LinkedList_NodeProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

LinkedList_NodeProxy& LinkedList_NodeProxy::operator=(const LinkedList_NodeProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
