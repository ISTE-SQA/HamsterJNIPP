#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "BindingHelperObserverProxy.h"

// includes for parameter and return type proxy classes
#include "javafx\beans\binding\BindingProxy.h"
#include "javafx\beans\ObservableProxy.h"
#include "java\lang\ref\WeakReferenceProxy.h"

using namespace net::sourceforge::jnipp;
using namespace com::sun::javafx::binding;


std::string BindingHelperObserverProxy::className = "com/sun/javafx/binding/BindingHelperObserver";
jclass BindingHelperObserverProxy::objectClass = NULL;

jclass BindingHelperObserverProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

BindingHelperObserverProxy::BindingHelperObserverProxy(void* unused)
{
}

jobject BindingHelperObserverProxy::_getPeerObject() const
{
	return peerObject;
}

jclass BindingHelperObserverProxy::getObjectClass()
{
	return _getObjectClass();
}

BindingHelperObserverProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
BindingHelperObserverProxy::BindingHelperObserverProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

BindingHelperObserverProxy::BindingHelperObserverProxy(::javafx::beans::binding::BindingProxy p0)
{
	jmethodID mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "<init>", "(Ljavafx/beans/binding/Binding;)V" );
	peerObject = JNIEnvHelper::NewGlobalRef( JNIEnvHelper::NewObject( _getObjectClass(), mid, static_cast<jobject>( p0 ) ) );
}

BindingHelperObserverProxy::~BindingHelperObserverProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

BindingHelperObserverProxy& BindingHelperObserverProxy::operator=(const BindingHelperObserverProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
void BindingHelperObserverProxy::invalidated(::javafx::beans::ObservableProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "invalidated", "(Ljavafx/beans/Observable;)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

