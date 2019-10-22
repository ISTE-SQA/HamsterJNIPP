#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "ReadOnlyIntegerPropertyProxy.h"

// includes for parameter and return type proxy classes
#include "javafx\beans\property\ReadOnlyObjectPropertyProxy.h"
#include "javafx\beans\property\ReadOnlyPropertyProxy.h"

using namespace net::sourceforge::jnipp;
using namespace javafx::beans::property;


std::string ReadOnlyIntegerPropertyProxy::className = "javafx/beans/property/ReadOnlyIntegerProperty";
jclass ReadOnlyIntegerPropertyProxy::objectClass = NULL;

jclass ReadOnlyIntegerPropertyProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

ReadOnlyIntegerPropertyProxy::ReadOnlyIntegerPropertyProxy(void* unused)
{
}

jobject ReadOnlyIntegerPropertyProxy::_getPeerObject() const
{
	return peerObject;
}

jclass ReadOnlyIntegerPropertyProxy::getObjectClass()
{
	return _getObjectClass();
}

ReadOnlyIntegerPropertyProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
ReadOnlyIntegerPropertyProxy::ReadOnlyIntegerPropertyProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

ReadOnlyIntegerPropertyProxy::ReadOnlyIntegerPropertyProxy()
{
	jmethodID mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "<init>", "()V" );
	peerObject = JNIEnvHelper::NewGlobalRef( JNIEnvHelper::NewObject( _getObjectClass(), mid ) );
}

ReadOnlyIntegerPropertyProxy::~ReadOnlyIntegerPropertyProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

ReadOnlyIntegerPropertyProxy& ReadOnlyIntegerPropertyProxy::operator=(const ReadOnlyIntegerPropertyProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
::net::sourceforge::jnipp::JStringHelper ReadOnlyIntegerPropertyProxy::toString()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "toString", "()Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::javafx::beans::property::ReadOnlyObjectPropertyProxy ReadOnlyIntegerPropertyProxy::asObject()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "asObject", "()Ljavafx/beans/property/ReadOnlyObjectProperty;" );
	return ::javafx::beans::property::ReadOnlyObjectPropertyProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::javafx::beans::property::ReadOnlyIntegerPropertyProxy ReadOnlyIntegerPropertyProxy::readOnlyIntegerProperty(::javafx::beans::property::ReadOnlyPropertyProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "readOnlyIntegerProperty", "(Ljavafx/beans/property/ReadOnlyProperty;)Ljavafx/beans/property/ReadOnlyIntegerProperty;" );
	return ::javafx::beans::property::ReadOnlyIntegerPropertyProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, static_cast<jobject>( p0 ) )  );
}

