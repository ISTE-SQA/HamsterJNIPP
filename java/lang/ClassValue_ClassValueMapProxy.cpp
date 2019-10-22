#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "ClassValue_ClassValueMapProxy.h"

// includes for parameter and return type proxy classes
#include "java\lang\ClassProxy.h"
#include "java\lang\ClassValue_EntryProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::lang;


std::string ClassValue_ClassValueMapProxy::className = "java/lang/ClassValue$ClassValueMap";
jclass ClassValue_ClassValueMapProxy::objectClass = NULL;

jclass ClassValue_ClassValueMapProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

ClassValue_ClassValueMapProxy::ClassValue_ClassValueMapProxy(void* unused)
{
}

jobject ClassValue_ClassValueMapProxy::_getPeerObject() const
{
	return peerObject;
}

jclass ClassValue_ClassValueMapProxy::getObjectClass()
{
	return _getObjectClass();
}

ClassValue_ClassValueMapProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
ClassValue_ClassValueMapProxy::ClassValue_ClassValueMapProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

ClassValue_ClassValueMapProxy::~ClassValue_ClassValueMapProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

ClassValue_ClassValueMapProxy& ClassValue_ClassValueMapProxy::operator=(const ClassValue_ClassValueMapProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
