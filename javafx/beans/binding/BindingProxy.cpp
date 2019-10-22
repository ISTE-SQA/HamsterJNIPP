#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "BindingProxy.h"

// includes for parameter and return type proxy classes
#include "javafx\collections\ObservableListProxy.h"

using namespace net::sourceforge::jnipp;
using namespace javafx::beans::binding;


std::string BindingProxy::className = "javafx/beans/binding/Binding";
jclass BindingProxy::objectClass = NULL;

jclass BindingProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

BindingProxy::BindingProxy(void* unused)
{
}

jobject BindingProxy::_getPeerObject() const
{
	return peerObject;
}

jclass BindingProxy::getObjectClass()
{
	return _getObjectClass();
}

BindingProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
BindingProxy::BindingProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

BindingProxy::~BindingProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

BindingProxy& BindingProxy::operator=(const BindingProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
jboolean BindingProxy::isValid()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "isValid", "()Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid );
}

::javafx::collections::ObservableListProxy BindingProxy::getDependencies()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getDependencies", "()Ljavafx/collections/ObservableList;" );
	return ::javafx::collections::ObservableListProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

void BindingProxy::dispose()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "dispose", "()V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid );
}

void BindingProxy::invalidate()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "invalidate", "()V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid );
}

