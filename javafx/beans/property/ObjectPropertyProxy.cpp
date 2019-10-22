#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "ObjectPropertyProxy.h"

// includes for parameter and return type proxy classes
#include "javafx\beans\property\PropertyProxy.h"
#include "java\lang\ObjectProxy.h"

using namespace net::sourceforge::jnipp;
using namespace javafx::beans::property;


std::string ObjectPropertyProxy::className = "javafx/beans/property/ObjectProperty";
jclass ObjectPropertyProxy::objectClass = NULL;

jclass ObjectPropertyProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

ObjectPropertyProxy::ObjectPropertyProxy(void* unused)
{
}

jobject ObjectPropertyProxy::_getPeerObject() const
{
	return peerObject;
}

jclass ObjectPropertyProxy::getObjectClass()
{
	return _getObjectClass();
}

ObjectPropertyProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
ObjectPropertyProxy::ObjectPropertyProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

ObjectPropertyProxy::ObjectPropertyProxy()
{
	jmethodID mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "<init>", "()V" );
	peerObject = JNIEnvHelper::NewGlobalRef( JNIEnvHelper::NewObject( _getObjectClass(), mid ) );
}

ObjectPropertyProxy::~ObjectPropertyProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

ObjectPropertyProxy& ObjectPropertyProxy::operator=(const ObjectPropertyProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
::net::sourceforge::jnipp::JStringHelper ObjectPropertyProxy::toString()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "toString", "()Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

void ObjectPropertyProxy::bindBidirectional(::javafx::beans::property::PropertyProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "bindBidirectional", "(Ljavafx/beans/property/Property;)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

void ObjectPropertyProxy::setValue(::java::lang::ObjectProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "setValue", "(Ljava/lang/Object;)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

void ObjectPropertyProxy::unbindBidirectional(::javafx::beans::property::PropertyProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "unbindBidirectional", "(Ljavafx/beans/property/Property;)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

