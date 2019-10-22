#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "ObservableProxy.h"

// includes for parameter and return type proxy classes
#include "javafx\beans\InvalidationListenerProxy.h"

using namespace net::sourceforge::jnipp;
using namespace javafx::beans;


std::string ObservableProxy::className = "javafx/beans/Observable";
jclass ObservableProxy::objectClass = NULL;

jclass ObservableProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

ObservableProxy::ObservableProxy(void* unused)
{
}

jobject ObservableProxy::_getPeerObject() const
{
	return peerObject;
}

jclass ObservableProxy::getObjectClass()
{
	return _getObjectClass();
}

ObservableProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
ObservableProxy::ObservableProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

ObservableProxy::~ObservableProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

ObservableProxy& ObservableProxy::operator=(const ObservableProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
void ObservableProxy::addListener(::javafx::beans::InvalidationListenerProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "addListener", "(Ljavafx/beans/InvalidationListener;)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

void ObservableProxy::removeListener(::javafx::beans::InvalidationListenerProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "removeListener", "(Ljavafx/beans/InvalidationListener;)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

