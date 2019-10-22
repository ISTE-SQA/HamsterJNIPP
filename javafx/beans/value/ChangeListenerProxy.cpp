#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "ChangeListenerProxy.h"

// includes for parameter and return type proxy classes
#include "javafx\beans\value\ObservableValueProxy.h"
#include "java\lang\ObjectProxy.h"

using namespace net::sourceforge::jnipp;
using namespace javafx::beans::value;


std::string ChangeListenerProxy::className = "javafx/beans/value/ChangeListener";
jclass ChangeListenerProxy::objectClass = NULL;

jclass ChangeListenerProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

ChangeListenerProxy::ChangeListenerProxy(void* unused)
{
}

jobject ChangeListenerProxy::_getPeerObject() const
{
	return peerObject;
}

jclass ChangeListenerProxy::getObjectClass()
{
	return _getObjectClass();
}

ChangeListenerProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
ChangeListenerProxy::ChangeListenerProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

ChangeListenerProxy::~ChangeListenerProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

ChangeListenerProxy& ChangeListenerProxy::operator=(const ChangeListenerProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
void ChangeListenerProxy::changed(::javafx::beans::value::ObservableValueProxy p0, ::java::lang::ObjectProxy p1, ::java::lang::ObjectProxy p2)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "changed", "(Ljavafx/beans/value/ObservableValue;Ljava/lang/Object;Ljava/lang/Object;)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), static_cast<jobject>( p1 ), static_cast<jobject>( p2 ) );
}

