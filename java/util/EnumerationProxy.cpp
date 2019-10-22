#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "EnumerationProxy.h"

// includes for parameter and return type proxy classes
#include "java\lang\ObjectProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::util;


std::string EnumerationProxy::className = "java/util/Enumeration";
jclass EnumerationProxy::objectClass = NULL;

jclass EnumerationProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

EnumerationProxy::EnumerationProxy(void* unused)
{
}

jobject EnumerationProxy::_getPeerObject() const
{
	return peerObject;
}

jclass EnumerationProxy::getObjectClass()
{
	return _getObjectClass();
}

EnumerationProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
EnumerationProxy::EnumerationProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

EnumerationProxy::~EnumerationProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

EnumerationProxy& EnumerationProxy::operator=(const EnumerationProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
jboolean EnumerationProxy::hasMoreElements()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "hasMoreElements", "()Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid );
}

::java::lang::ObjectProxy EnumerationProxy::nextElement()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "nextElement", "()Ljava/lang/Object;" );
	return ::java::lang::ObjectProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

