#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "ReadOnlyBooleanWrapper_ReadOnlyPropertyImplProxy.h"

// includes for parameter and return type proxy classes
#include "java\lang\ObjectProxy.h"
#include "javafx\beans\property\ReadOnlyBooleanWrapperProxy.h"

using namespace net::sourceforge::jnipp;
using namespace javafx::beans::property;


std::string ReadOnlyBooleanWrapper_ReadOnlyPropertyImplProxy::className = "javafx/beans/property/ReadOnlyBooleanWrapper$ReadOnlyPropertyImpl";
jclass ReadOnlyBooleanWrapper_ReadOnlyPropertyImplProxy::objectClass = NULL;

jclass ReadOnlyBooleanWrapper_ReadOnlyPropertyImplProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

ReadOnlyBooleanWrapper_ReadOnlyPropertyImplProxy::ReadOnlyBooleanWrapper_ReadOnlyPropertyImplProxy(void* unused)
{
}

jobject ReadOnlyBooleanWrapper_ReadOnlyPropertyImplProxy::_getPeerObject() const
{
	return peerObject;
}

jclass ReadOnlyBooleanWrapper_ReadOnlyPropertyImplProxy::getObjectClass()
{
	return _getObjectClass();
}

ReadOnlyBooleanWrapper_ReadOnlyPropertyImplProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
ReadOnlyBooleanWrapper_ReadOnlyPropertyImplProxy::ReadOnlyBooleanWrapper_ReadOnlyPropertyImplProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

ReadOnlyBooleanWrapper_ReadOnlyPropertyImplProxy::~ReadOnlyBooleanWrapper_ReadOnlyPropertyImplProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

ReadOnlyBooleanWrapper_ReadOnlyPropertyImplProxy& ReadOnlyBooleanWrapper_ReadOnlyPropertyImplProxy::operator=(const ReadOnlyBooleanWrapper_ReadOnlyPropertyImplProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
jboolean ReadOnlyBooleanWrapper_ReadOnlyPropertyImplProxy::get()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "get", "()Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid );
}

::java::lang::ObjectProxy ReadOnlyBooleanWrapper_ReadOnlyPropertyImplProxy::getBean()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getBean", "()Ljava/lang/Object;" );
	return ::java::lang::ObjectProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::net::sourceforge::jnipp::JStringHelper ReadOnlyBooleanWrapper_ReadOnlyPropertyImplProxy::getName()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getName", "()Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

