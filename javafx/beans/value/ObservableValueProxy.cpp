#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "ObservableValueProxy.h"

// includes for parameter and return type proxy classes
#include "java\lang\ObjectProxy.h"
#include "javafx\beans\value\ChangeListenerProxy.h"

using namespace net::sourceforge::jnipp;
using namespace javafx::beans::value;


std::string ObservableValueProxy::className = "javafx/beans/value/ObservableValue";
jclass ObservableValueProxy::objectClass = NULL;

jclass ObservableValueProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

ObservableValueProxy::ObservableValueProxy(void* unused)
{
}

jobject ObservableValueProxy::_getPeerObject() const
{
	return peerObject;
}

jclass ObservableValueProxy::getObjectClass()
{
	return _getObjectClass();
}

ObservableValueProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
ObservableValueProxy::ObservableValueProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

ObservableValueProxy::~ObservableValueProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

ObservableValueProxy& ObservableValueProxy::operator=(const ObservableValueProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
::java::lang::ObjectProxy ObservableValueProxy::getValue()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getValue", "()Ljava/lang/Object;" );
	return ::java::lang::ObjectProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

void ObservableValueProxy::addListener(::javafx::beans::value::ChangeListenerProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "addListener", "(Ljavafx/beans/value/ChangeListener;)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

void ObservableValueProxy::removeListener(::javafx::beans::value::ChangeListenerProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "removeListener", "(Ljavafx/beans/value/ChangeListener;)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

