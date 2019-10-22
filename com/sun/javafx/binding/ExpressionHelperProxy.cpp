#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "ExpressionHelperProxy.h"

// includes for parameter and return type proxy classes
#include "javafx\beans\value\ObservableValueProxy.h"
#include "javafx\beans\InvalidationListenerProxy.h"
#include "javafx\beans\value\ChangeListenerProxy.h"

using namespace net::sourceforge::jnipp;
using namespace com::sun::javafx::binding;


std::string ExpressionHelperProxy::className = "com/sun/javafx/binding/ExpressionHelper";
jclass ExpressionHelperProxy::objectClass = NULL;

jclass ExpressionHelperProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

ExpressionHelperProxy::ExpressionHelperProxy(void* unused)
{
}

jobject ExpressionHelperProxy::_getPeerObject() const
{
	return peerObject;
}

jclass ExpressionHelperProxy::getObjectClass()
{
	return _getObjectClass();
}

ExpressionHelperProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
ExpressionHelperProxy::ExpressionHelperProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

ExpressionHelperProxy::~ExpressionHelperProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

ExpressionHelperProxy& ExpressionHelperProxy::operator=(const ExpressionHelperProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
::com::sun::javafx::binding::ExpressionHelperProxy ExpressionHelperProxy::addListener(::com::sun::javafx::binding::ExpressionHelperProxy p0, ::javafx::beans::value::ObservableValueProxy p1, ::javafx::beans::InvalidationListenerProxy p2)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "addListener", "(Lcom/sun/javafx/binding/ExpressionHelper;Ljavafx/beans/value/ObservableValue;Ljavafx/beans/InvalidationListener;)Lcom/sun/javafx/binding/ExpressionHelper;" );
	return ::com::sun::javafx::binding::ExpressionHelperProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, static_cast<jobject>( p0 ), static_cast<jobject>( p1 ), static_cast<jobject>( p2 ) )  );
}

::com::sun::javafx::binding::ExpressionHelperProxy ExpressionHelperProxy::addListener(::com::sun::javafx::binding::ExpressionHelperProxy p0, ::javafx::beans::value::ObservableValueProxy p1, ::javafx::beans::value::ChangeListenerProxy p2)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "addListener", "(Lcom/sun/javafx/binding/ExpressionHelper;Ljavafx/beans/value/ObservableValue;Ljavafx/beans/value/ChangeListener;)Lcom/sun/javafx/binding/ExpressionHelper;" );
	return ::com::sun::javafx::binding::ExpressionHelperProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, static_cast<jobject>( p0 ), static_cast<jobject>( p1 ), static_cast<jobject>( p2 ) )  );
}

::com::sun::javafx::binding::ExpressionHelperProxy ExpressionHelperProxy::removeListener(::com::sun::javafx::binding::ExpressionHelperProxy p0, ::javafx::beans::InvalidationListenerProxy p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "removeListener", "(Lcom/sun/javafx/binding/ExpressionHelper;Ljavafx/beans/InvalidationListener;)Lcom/sun/javafx/binding/ExpressionHelper;" );
	return ::com::sun::javafx::binding::ExpressionHelperProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, static_cast<jobject>( p0 ), static_cast<jobject>( p1 ) )  );
}

::com::sun::javafx::binding::ExpressionHelperProxy ExpressionHelperProxy::removeListener(::com::sun::javafx::binding::ExpressionHelperProxy p0, ::javafx::beans::value::ChangeListenerProxy p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "removeListener", "(Lcom/sun/javafx/binding/ExpressionHelper;Ljavafx/beans/value/ChangeListener;)Lcom/sun/javafx/binding/ExpressionHelper;" );
	return ::com::sun::javafx::binding::ExpressionHelperProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, static_cast<jobject>( p0 ), static_cast<jobject>( p1 ) )  );
}

void ExpressionHelperProxy::fireValueChangedEvent(::com::sun::javafx::binding::ExpressionHelperProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "fireValueChangedEvent", "(Lcom/sun/javafx/binding/ExpressionHelper;)V" );
	JNIEnvHelper::CallStaticVoidMethod( _getObjectClass(), mid, static_cast<jobject>( p0 ) );
}

