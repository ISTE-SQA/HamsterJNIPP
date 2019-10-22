#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "ClassValue_EntryProxy.h"

// includes for parameter and return type proxy classes
#include "java\lang\ObjectProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::lang;


std::string ClassValue_EntryProxy::className = "java/lang/ClassValue$Entry";
jclass ClassValue_EntryProxy::objectClass = NULL;

jclass ClassValue_EntryProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

ClassValue_EntryProxy::ClassValue_EntryProxy(void* unused)
{
}

jobject ClassValue_EntryProxy::_getPeerObject() const
{
	return peerObject;
}

jclass ClassValue_EntryProxy::getObjectClass()
{
	return _getObjectClass();
}

ClassValue_EntryProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
ClassValue_EntryProxy::ClassValue_EntryProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

ClassValue_EntryProxy::~ClassValue_EntryProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

ClassValue_EntryProxy& ClassValue_EntryProxy::operator=(const ClassValue_EntryProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
