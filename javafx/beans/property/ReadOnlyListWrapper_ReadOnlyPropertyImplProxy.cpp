#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "ReadOnlyListWrapper_ReadOnlyPropertyImplProxy.h"

// includes for parameter and return type proxy classes
#include "java\lang\ObjectProxy.h"
#include "javafx\beans\property\ReadOnlyBooleanPropertyProxy.h"
#include "javafx\beans\property\ReadOnlyIntegerPropertyProxy.h"
#include "javafx\collections\ObservableListProxy.h"
#include "javafx\beans\property\ReadOnlyListWrapperProxy.h"

using namespace net::sourceforge::jnipp;
using namespace javafx::beans::property;


std::string ReadOnlyListWrapper_ReadOnlyPropertyImplProxy::className = "javafx/beans/property/ReadOnlyListWrapper$ReadOnlyPropertyImpl";
jclass ReadOnlyListWrapper_ReadOnlyPropertyImplProxy::objectClass = NULL;

jclass ReadOnlyListWrapper_ReadOnlyPropertyImplProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

ReadOnlyListWrapper_ReadOnlyPropertyImplProxy::ReadOnlyListWrapper_ReadOnlyPropertyImplProxy(void* unused)
{
}

jobject ReadOnlyListWrapper_ReadOnlyPropertyImplProxy::_getPeerObject() const
{
	return peerObject;
}

jclass ReadOnlyListWrapper_ReadOnlyPropertyImplProxy::getObjectClass()
{
	return _getObjectClass();
}

ReadOnlyListWrapper_ReadOnlyPropertyImplProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
ReadOnlyListWrapper_ReadOnlyPropertyImplProxy::ReadOnlyListWrapper_ReadOnlyPropertyImplProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

ReadOnlyListWrapper_ReadOnlyPropertyImplProxy::~ReadOnlyListWrapper_ReadOnlyPropertyImplProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

ReadOnlyListWrapper_ReadOnlyPropertyImplProxy& ReadOnlyListWrapper_ReadOnlyPropertyImplProxy::operator=(const ReadOnlyListWrapper_ReadOnlyPropertyImplProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
::java::lang::ObjectProxy ReadOnlyListWrapper_ReadOnlyPropertyImplProxy::getBean()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getBean", "()Ljava/lang/Object;" );
	return ::java::lang::ObjectProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::net::sourceforge::jnipp::JStringHelper ReadOnlyListWrapper_ReadOnlyPropertyImplProxy::getName()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getName", "()Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::javafx::beans::property::ReadOnlyBooleanPropertyProxy ReadOnlyListWrapper_ReadOnlyPropertyImplProxy::emptyProperty()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "emptyProperty", "()Ljavafx/beans/property/ReadOnlyBooleanProperty;" );
	return ::javafx::beans::property::ReadOnlyBooleanPropertyProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::javafx::beans::property::ReadOnlyIntegerPropertyProxy ReadOnlyListWrapper_ReadOnlyPropertyImplProxy::sizeProperty()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "sizeProperty", "()Ljavafx/beans/property/ReadOnlyIntegerProperty;" );
	return ::javafx::beans::property::ReadOnlyIntegerPropertyProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::javafx::collections::ObservableListProxy ReadOnlyListWrapper_ReadOnlyPropertyImplProxy::get()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "get", "()Ljavafx/collections/ObservableList;" );
	return ::javafx::collections::ObservableListProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

