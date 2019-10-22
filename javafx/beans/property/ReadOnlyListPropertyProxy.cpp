#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "ReadOnlyListPropertyProxy.h"

// includes for parameter and return type proxy classes
#include "java\lang\ObjectProxy.h"
#include "javafx\collections\ObservableListProxy.h"

using namespace net::sourceforge::jnipp;
using namespace javafx::beans::property;


std::string ReadOnlyListPropertyProxy::className = "javafx/beans/property/ReadOnlyListProperty";
jclass ReadOnlyListPropertyProxy::objectClass = NULL;

jclass ReadOnlyListPropertyProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

ReadOnlyListPropertyProxy::ReadOnlyListPropertyProxy(void* unused)
{
}

jobject ReadOnlyListPropertyProxy::_getPeerObject() const
{
	return peerObject;
}

jclass ReadOnlyListPropertyProxy::getObjectClass()
{
	return _getObjectClass();
}

ReadOnlyListPropertyProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
ReadOnlyListPropertyProxy::ReadOnlyListPropertyProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

ReadOnlyListPropertyProxy::ReadOnlyListPropertyProxy()
{
	jmethodID mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "<init>", "()V" );
	peerObject = JNIEnvHelper::NewGlobalRef( JNIEnvHelper::NewObject( _getObjectClass(), mid ) );
}

ReadOnlyListPropertyProxy::~ReadOnlyListPropertyProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

ReadOnlyListPropertyProxy& ReadOnlyListPropertyProxy::operator=(const ReadOnlyListPropertyProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
jboolean ReadOnlyListPropertyProxy::equals(::java::lang::ObjectProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "equals", "(Ljava/lang/Object;)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

jint ReadOnlyListPropertyProxy::hashCode()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "hashCode", "()I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid );
}

::net::sourceforge::jnipp::JStringHelper ReadOnlyListPropertyProxy::toString()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "toString", "()Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

void ReadOnlyListPropertyProxy::bindContent(::javafx::collections::ObservableListProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "bindContent", "(Ljavafx/collections/ObservableList;)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

void ReadOnlyListPropertyProxy::bindContentBidirectional(::javafx::collections::ObservableListProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "bindContentBidirectional", "(Ljavafx/collections/ObservableList;)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

void ReadOnlyListPropertyProxy::unbindContent(::java::lang::ObjectProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "unbindContent", "(Ljava/lang/Object;)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

void ReadOnlyListPropertyProxy::unbindContentBidirectional(::java::lang::ObjectProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "unbindContentBidirectional", "(Ljava/lang/Object;)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

