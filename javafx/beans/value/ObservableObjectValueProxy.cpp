#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "ObservableObjectValueProxy.h"

// includes for parameter and return type proxy classes
#include "java\lang\ObjectProxy.h"

using namespace net::sourceforge::jnipp;
using namespace javafx::beans::value;


std::string ObservableObjectValueProxy::className = "javafx/beans/value/ObservableObjectValue";
jclass ObservableObjectValueProxy::objectClass = NULL;

jclass ObservableObjectValueProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

ObservableObjectValueProxy::ObservableObjectValueProxy(void* unused)
{
}

jobject ObservableObjectValueProxy::_getPeerObject() const
{
	return peerObject;
}

jclass ObservableObjectValueProxy::getObjectClass()
{
	return _getObjectClass();
}

ObservableObjectValueProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
ObservableObjectValueProxy::ObservableObjectValueProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

ObservableObjectValueProxy::~ObservableObjectValueProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

ObservableObjectValueProxy& ObservableObjectValueProxy::operator=(const ObservableObjectValueProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
::java::lang::ObjectProxy ObservableObjectValueProxy::get()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "get", "()Ljava/lang/Object;" );
	return ::java::lang::ObjectProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

