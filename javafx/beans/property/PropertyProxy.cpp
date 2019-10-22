#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "PropertyProxy.h"

// includes for parameter and return type proxy classes
#include "javafx\beans\value\ObservableValueProxy.h"

using namespace net::sourceforge::jnipp;
using namespace javafx::beans::property;


std::string PropertyProxy::className = "javafx/beans/property/Property";
jclass PropertyProxy::objectClass = NULL;

jclass PropertyProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

PropertyProxy::PropertyProxy(void* unused)
{
}

jobject PropertyProxy::_getPeerObject() const
{
	return peerObject;
}

jclass PropertyProxy::getObjectClass()
{
	return _getObjectClass();
}

PropertyProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
PropertyProxy::PropertyProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

PropertyProxy::~PropertyProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

PropertyProxy& PropertyProxy::operator=(const PropertyProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
jboolean PropertyProxy::isBound()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "isBound", "()Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid );
}

void PropertyProxy::bind(::javafx::beans::value::ObservableValueProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "bind", "(Ljavafx/beans/value/ObservableValue;)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

void PropertyProxy::bindBidirectional(::javafx::beans::property::PropertyProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "bindBidirectional", "(Ljavafx/beans/property/Property;)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

void PropertyProxy::unbind()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "unbind", "()V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid );
}

void PropertyProxy::unbindBidirectional(::javafx::beans::property::PropertyProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "unbindBidirectional", "(Ljavafx/beans/property/Property;)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

