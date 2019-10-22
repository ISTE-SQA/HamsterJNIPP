#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "ReadOnlyObjectWrapper_ReadOnlyPropertyImplProxy.h"

// includes for parameter and return type proxy classes
#include "java\lang\ObjectProxy.h"
#include "javafx\beans\property\ReadOnlyObjectWrapperProxy.h"

using namespace net::sourceforge::jnipp;
using namespace javafx::beans::property;


std::string ReadOnlyObjectWrapper_ReadOnlyPropertyImplProxy::className = "javafx/beans/property/ReadOnlyObjectWrapper$ReadOnlyPropertyImpl";
jclass ReadOnlyObjectWrapper_ReadOnlyPropertyImplProxy::objectClass = NULL;

jclass ReadOnlyObjectWrapper_ReadOnlyPropertyImplProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

ReadOnlyObjectWrapper_ReadOnlyPropertyImplProxy::ReadOnlyObjectWrapper_ReadOnlyPropertyImplProxy(void* unused)
{
}

jobject ReadOnlyObjectWrapper_ReadOnlyPropertyImplProxy::_getPeerObject() const
{
	return peerObject;
}

jclass ReadOnlyObjectWrapper_ReadOnlyPropertyImplProxy::getObjectClass()
{
	return _getObjectClass();
}

ReadOnlyObjectWrapper_ReadOnlyPropertyImplProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
ReadOnlyObjectWrapper_ReadOnlyPropertyImplProxy::ReadOnlyObjectWrapper_ReadOnlyPropertyImplProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

ReadOnlyObjectWrapper_ReadOnlyPropertyImplProxy::~ReadOnlyObjectWrapper_ReadOnlyPropertyImplProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

ReadOnlyObjectWrapper_ReadOnlyPropertyImplProxy& ReadOnlyObjectWrapper_ReadOnlyPropertyImplProxy::operator=(const ReadOnlyObjectWrapper_ReadOnlyPropertyImplProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
::java::lang::ObjectProxy ReadOnlyObjectWrapper_ReadOnlyPropertyImplProxy::get()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "get", "()Ljava/lang/Object;" );
	return ::java::lang::ObjectProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::lang::ObjectProxy ReadOnlyObjectWrapper_ReadOnlyPropertyImplProxy::getBean()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getBean", "()Ljava/lang/Object;" );
	return ::java::lang::ObjectProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::net::sourceforge::jnipp::JStringHelper ReadOnlyObjectWrapper_ReadOnlyPropertyImplProxy::getName()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getName", "()Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

