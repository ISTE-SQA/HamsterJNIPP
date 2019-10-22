#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "LinkedHashMap_EntryProxy.h"

// includes for parameter and return type proxy classes

using namespace net::sourceforge::jnipp;
using namespace java::util;


std::string LinkedHashMap_EntryProxy::className = "java/util/LinkedHashMap$Entry";
jclass LinkedHashMap_EntryProxy::objectClass = NULL;

jclass LinkedHashMap_EntryProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

LinkedHashMap_EntryProxy::LinkedHashMap_EntryProxy(void* unused)
{
}

jobject LinkedHashMap_EntryProxy::_getPeerObject() const
{
	return peerObject;
}

jclass LinkedHashMap_EntryProxy::getObjectClass()
{
	return _getObjectClass();
}

LinkedHashMap_EntryProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
LinkedHashMap_EntryProxy::LinkedHashMap_EntryProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

LinkedHashMap_EntryProxy::~LinkedHashMap_EntryProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

LinkedHashMap_EntryProxy& LinkedHashMap_EntryProxy::operator=(const LinkedHashMap_EntryProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
