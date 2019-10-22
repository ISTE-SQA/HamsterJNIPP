#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "InvalidationListenerProxy.h"

// includes for parameter and return type proxy classes
#include "javafx\beans\ObservableProxy.h"

using namespace net::sourceforge::jnipp;
using namespace javafx::beans;


std::string InvalidationListenerProxy::className = "javafx/beans/InvalidationListener";
jclass InvalidationListenerProxy::objectClass = NULL;

jclass InvalidationListenerProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

InvalidationListenerProxy::InvalidationListenerProxy(void* unused)
{
}

jobject InvalidationListenerProxy::_getPeerObject() const
{
	return peerObject;
}

jclass InvalidationListenerProxy::getObjectClass()
{
	return _getObjectClass();
}

InvalidationListenerProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
InvalidationListenerProxy::InvalidationListenerProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

InvalidationListenerProxy::~InvalidationListenerProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

InvalidationListenerProxy& InvalidationListenerProxy::operator=(const InvalidationListenerProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
void InvalidationListenerProxy::invalidated(::javafx::beans::ObservableProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "invalidated", "(Ljavafx/beans/Observable;)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

