#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "ReadOnlyPropertyProxy.h"

// includes for parameter and return type proxy classes
#include "java\lang\ObjectProxy.h"

using namespace net::sourceforge::jnipp;
using namespace javafx::beans::property;


std::string ReadOnlyPropertyProxy::className = "javafx/beans/property/ReadOnlyProperty";
jclass ReadOnlyPropertyProxy::objectClass = NULL;

jclass ReadOnlyPropertyProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

ReadOnlyPropertyProxy::ReadOnlyPropertyProxy(void* unused)
{
}

jobject ReadOnlyPropertyProxy::_getPeerObject() const
{
	return peerObject;
}

jclass ReadOnlyPropertyProxy::getObjectClass()
{
	return _getObjectClass();
}

ReadOnlyPropertyProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
ReadOnlyPropertyProxy::ReadOnlyPropertyProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

ReadOnlyPropertyProxy::~ReadOnlyPropertyProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

ReadOnlyPropertyProxy& ReadOnlyPropertyProxy::operator=(const ReadOnlyPropertyProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
::java::lang::ObjectProxy ReadOnlyPropertyProxy::getBean()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getBean", "()Ljava/lang/Object;" );
	return ::java::lang::ObjectProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::net::sourceforge::jnipp::JStringHelper ReadOnlyPropertyProxy::getName()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getName", "()Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

