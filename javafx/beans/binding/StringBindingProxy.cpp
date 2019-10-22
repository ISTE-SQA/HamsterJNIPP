#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "StringBindingProxy.h"

// includes for parameter and return type proxy classes
#include "java\lang\ObjectProxy.h"
#include "javafx\collections\ObservableListProxy.h"
#include "javafx\beans\InvalidationListenerProxy.h"
#include "javafx\beans\value\ChangeListenerProxy.h"
#include "com\sun\javafx\binding\BindingHelperObserverProxy.h"
#include "com\sun\javafx\binding\ExpressionHelperProxy.h"

using namespace net::sourceforge::jnipp;
using namespace javafx::beans::binding;


std::string StringBindingProxy::className = "javafx/beans/binding/StringBinding";
jclass StringBindingProxy::objectClass = NULL;

jclass StringBindingProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

StringBindingProxy::StringBindingProxy(void* unused)
{
}

jobject StringBindingProxy::_getPeerObject() const
{
	return peerObject;
}

jclass StringBindingProxy::getObjectClass()
{
	return _getObjectClass();
}

StringBindingProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
StringBindingProxy::StringBindingProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

StringBindingProxy::StringBindingProxy()
{
	jmethodID mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "<init>", "()V" );
	peerObject = JNIEnvHelper::NewGlobalRef( JNIEnvHelper::NewObject( _getObjectClass(), mid ) );
}

StringBindingProxy::~StringBindingProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

StringBindingProxy& StringBindingProxy::operator=(const StringBindingProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
jboolean StringBindingProxy::isValid()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "isValid", "()Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid );
}

::net::sourceforge::jnipp::JStringHelper StringBindingProxy::get()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "get", "()Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

void StringBindingProxy::invalidate()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "invalidate", "()V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid );
}

::java::lang::ObjectProxy StringBindingProxy::get()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "get", "()Ljava/lang/Object;" );
	return ::java::lang::ObjectProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::net::sourceforge::jnipp::JStringHelper StringBindingProxy::toString()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "toString", "()Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::javafx::collections::ObservableListProxy StringBindingProxy::getDependencies()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getDependencies", "()Ljavafx/collections/ObservableList;" );
	return ::javafx::collections::ObservableListProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

void StringBindingProxy::addListener(::javafx::beans::InvalidationListenerProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "addListener", "(Ljavafx/beans/InvalidationListener;)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

void StringBindingProxy::addListener(::javafx::beans::value::ChangeListenerProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "addListener", "(Ljavafx/beans/value/ChangeListener;)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

void StringBindingProxy::dispose()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "dispose", "()V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid );
}

void StringBindingProxy::removeListener(::javafx::beans::InvalidationListenerProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "removeListener", "(Ljavafx/beans/InvalidationListener;)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

void StringBindingProxy::removeListener(::javafx::beans::value::ChangeListenerProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "removeListener", "(Ljavafx/beans/value/ChangeListener;)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

