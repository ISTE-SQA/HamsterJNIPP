#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "DoublePropertyProxy.h"

// includes for parameter and return type proxy classes
#include "javafx\beans\property\ObjectPropertyProxy.h"
#include "javafx\beans\property\PropertyProxy.h"
#include "java\lang\NumberProxy.h"

using namespace net::sourceforge::jnipp;
using namespace javafx::beans::property;


std::string DoublePropertyProxy::className = "javafx/beans/property/DoubleProperty";
jclass DoublePropertyProxy::objectClass = NULL;

jclass DoublePropertyProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

DoublePropertyProxy::DoublePropertyProxy(void* unused)
{
}

jobject DoublePropertyProxy::_getPeerObject() const
{
	return peerObject;
}

jclass DoublePropertyProxy::getObjectClass()
{
	return _getObjectClass();
}

DoublePropertyProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
DoublePropertyProxy::DoublePropertyProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

DoublePropertyProxy::DoublePropertyProxy()
{
	jmethodID mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "<init>", "()V" );
	peerObject = JNIEnvHelper::NewGlobalRef( JNIEnvHelper::NewObject( _getObjectClass(), mid ) );
}

DoublePropertyProxy::~DoublePropertyProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

DoublePropertyProxy& DoublePropertyProxy::operator=(const DoublePropertyProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
::net::sourceforge::jnipp::JStringHelper DoublePropertyProxy::toString()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "toString", "()Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::javafx::beans::property::ObjectPropertyProxy DoublePropertyProxy::asObject()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "asObject", "()Ljavafx/beans/property/ObjectProperty;" );
	return ::javafx::beans::property::ObjectPropertyProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::javafx::beans::property::DoublePropertyProxy DoublePropertyProxy::doubleProperty(::javafx::beans::property::PropertyProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "doubleProperty", "(Ljavafx/beans/property/Property;)Ljavafx/beans/property/DoubleProperty;" );
	return ::javafx::beans::property::DoublePropertyProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, static_cast<jobject>( p0 ) )  );
}

void DoublePropertyProxy::bindBidirectional(::javafx::beans::property::PropertyProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "bindBidirectional", "(Ljavafx/beans/property/Property;)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

void DoublePropertyProxy::setValue(::java::lang::NumberProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "setValue", "(Ljava/lang/Number;)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

void DoublePropertyProxy::unbindBidirectional(::javafx::beans::property::PropertyProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "unbindBidirectional", "(Ljavafx/beans/property/Property;)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

