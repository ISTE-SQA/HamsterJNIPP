#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "ReadOnlyBooleanPropertyProxy.h"

// includes for parameter and return type proxy classes
#include "javafx\beans\property\ReadOnlyObjectPropertyProxy.h"
#include "javafx\beans\property\ReadOnlyPropertyProxy.h"

using namespace net::sourceforge::jnipp;
using namespace javafx::beans::property;


std::string ReadOnlyBooleanPropertyProxy::className = "javafx/beans/property/ReadOnlyBooleanProperty";
jclass ReadOnlyBooleanPropertyProxy::objectClass = NULL;

jclass ReadOnlyBooleanPropertyProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

ReadOnlyBooleanPropertyProxy::ReadOnlyBooleanPropertyProxy(void* unused)
{
}

jobject ReadOnlyBooleanPropertyProxy::_getPeerObject() const
{
	return peerObject;
}

jclass ReadOnlyBooleanPropertyProxy::getObjectClass()
{
	return _getObjectClass();
}

ReadOnlyBooleanPropertyProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
ReadOnlyBooleanPropertyProxy::ReadOnlyBooleanPropertyProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

ReadOnlyBooleanPropertyProxy::ReadOnlyBooleanPropertyProxy()
{
	jmethodID mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "<init>", "()V" );
	peerObject = JNIEnvHelper::NewGlobalRef( JNIEnvHelper::NewObject( _getObjectClass(), mid ) );
}

ReadOnlyBooleanPropertyProxy::~ReadOnlyBooleanPropertyProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

ReadOnlyBooleanPropertyProxy& ReadOnlyBooleanPropertyProxy::operator=(const ReadOnlyBooleanPropertyProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
::net::sourceforge::jnipp::JStringHelper ReadOnlyBooleanPropertyProxy::toString()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "toString", "()Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::javafx::beans::property::ReadOnlyObjectPropertyProxy ReadOnlyBooleanPropertyProxy::asObject()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "asObject", "()Ljavafx/beans/property/ReadOnlyObjectProperty;" );
	return ::javafx::beans::property::ReadOnlyObjectPropertyProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::javafx::beans::property::ReadOnlyBooleanPropertyProxy ReadOnlyBooleanPropertyProxy::readOnlyBooleanProperty(::javafx::beans::property::ReadOnlyPropertyProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "readOnlyBooleanProperty", "(Ljavafx/beans/property/ReadOnlyProperty;)Ljavafx/beans/property/ReadOnlyBooleanProperty;" );
	return ::javafx::beans::property::ReadOnlyBooleanPropertyProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, static_cast<jobject>( p0 ) )  );
}

