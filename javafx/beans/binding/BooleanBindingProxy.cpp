#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "BooleanBindingProxy.h"

// includes for parameter and return type proxy classes
#include "java\lang\ObjectProxy.h"
#include "javafx\collections\ObservableListProxy.h"
#include "javafx\beans\InvalidationListenerProxy.h"
#include "javafx\beans\value\ChangeListenerProxy.h"
#include "com\sun\javafx\binding\BindingHelperObserverProxy.h"
#include "com\sun\javafx\binding\ExpressionHelperProxy.h"

using namespace net::sourceforge::jnipp;
using namespace javafx::beans::binding;


std::string BooleanBindingProxy::className = "javafx/beans/binding/BooleanBinding";
jclass BooleanBindingProxy::objectClass = NULL;

jclass BooleanBindingProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

BooleanBindingProxy::BooleanBindingProxy(void* unused)
{
}

jobject BooleanBindingProxy::_getPeerObject() const
{
	return peerObject;
}

jclass BooleanBindingProxy::getObjectClass()
{
	return _getObjectClass();
}

BooleanBindingProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
BooleanBindingProxy::BooleanBindingProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

BooleanBindingProxy::BooleanBindingProxy()
{
	jmethodID mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "<init>", "()V" );
	peerObject = JNIEnvHelper::NewGlobalRef( JNIEnvHelper::NewObject( _getObjectClass(), mid ) );
}

BooleanBindingProxy::~BooleanBindingProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

BooleanBindingProxy& BooleanBindingProxy::operator=(const BooleanBindingProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
jboolean BooleanBindingProxy::get()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "get", "()Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid );
}

jboolean BooleanBindingProxy::isValid()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "isValid", "()Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid );
}

void BooleanBindingProxy::invalidate()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "invalidate", "()V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid );
}

::java::lang::ObjectProxy BooleanBindingProxy::getValue()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getValue", "()Ljava/lang/Object;" );
	return ::java::lang::ObjectProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::net::sourceforge::jnipp::JStringHelper BooleanBindingProxy::toString()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "toString", "()Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::javafx::collections::ObservableListProxy BooleanBindingProxy::getDependencies()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getDependencies", "()Ljavafx/collections/ObservableList;" );
	return ::javafx::collections::ObservableListProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

void BooleanBindingProxy::addListener(::javafx::beans::InvalidationListenerProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "addListener", "(Ljavafx/beans/InvalidationListener;)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

void BooleanBindingProxy::addListener(::javafx::beans::value::ChangeListenerProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "addListener", "(Ljavafx/beans/value/ChangeListener;)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

void BooleanBindingProxy::dispose()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "dispose", "()V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid );
}

void BooleanBindingProxy::removeListener(::javafx::beans::InvalidationListenerProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "removeListener", "(Ljavafx/beans/InvalidationListener;)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

void BooleanBindingProxy::removeListener(::javafx::beans::value::ChangeListenerProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "removeListener", "(Ljavafx/beans/value/ChangeListener;)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

