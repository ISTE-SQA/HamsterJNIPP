#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "ReadOnlyIntegerWrapper_ReadOnlyPropertyImplProxy.h"

// includes for parameter and return type proxy classes
#include "java\lang\ObjectProxy.h"
#include "javafx\beans\property\ReadOnlyIntegerWrapperProxy.h"

using namespace net::sourceforge::jnipp;
using namespace javafx::beans::property;


std::string ReadOnlyIntegerWrapper_ReadOnlyPropertyImplProxy::className = "javafx/beans/property/ReadOnlyIntegerWrapper$ReadOnlyPropertyImpl";
jclass ReadOnlyIntegerWrapper_ReadOnlyPropertyImplProxy::objectClass = NULL;

jclass ReadOnlyIntegerWrapper_ReadOnlyPropertyImplProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

ReadOnlyIntegerWrapper_ReadOnlyPropertyImplProxy::ReadOnlyIntegerWrapper_ReadOnlyPropertyImplProxy(void* unused)
{
}

jobject ReadOnlyIntegerWrapper_ReadOnlyPropertyImplProxy::_getPeerObject() const
{
	return peerObject;
}

jclass ReadOnlyIntegerWrapper_ReadOnlyPropertyImplProxy::getObjectClass()
{
	return _getObjectClass();
}

ReadOnlyIntegerWrapper_ReadOnlyPropertyImplProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
ReadOnlyIntegerWrapper_ReadOnlyPropertyImplProxy::ReadOnlyIntegerWrapper_ReadOnlyPropertyImplProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

ReadOnlyIntegerWrapper_ReadOnlyPropertyImplProxy::~ReadOnlyIntegerWrapper_ReadOnlyPropertyImplProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

ReadOnlyIntegerWrapper_ReadOnlyPropertyImplProxy& ReadOnlyIntegerWrapper_ReadOnlyPropertyImplProxy::operator=(const ReadOnlyIntegerWrapper_ReadOnlyPropertyImplProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
jint ReadOnlyIntegerWrapper_ReadOnlyPropertyImplProxy::get()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "get", "()I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid );
}

::java::lang::ObjectProxy ReadOnlyIntegerWrapper_ReadOnlyPropertyImplProxy::getBean()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getBean", "()Ljava/lang/Object;" );
	return ::java::lang::ObjectProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::net::sourceforge::jnipp::JStringHelper ReadOnlyIntegerWrapper_ReadOnlyPropertyImplProxy::getName()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getName", "()Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

