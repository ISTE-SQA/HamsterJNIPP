#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "ReadOnlyListWrapperProxy.h"

// includes for parameter and return type proxy classes
#include "java\lang\ObjectProxy.h"
#include "javafx\collections\ObservableListProxy.h"
#include "javafx\beans\property\ReadOnlyListPropertyProxy.h"
#include "javafx\beans\property\ReadOnlyListWrapper_ReadOnlyPropertyImplProxy.h"

using namespace net::sourceforge::jnipp;
using namespace javafx::beans::property;


std::string ReadOnlyListWrapperProxy::className = "javafx/beans/property/ReadOnlyListWrapper";
jclass ReadOnlyListWrapperProxy::objectClass = NULL;

jclass ReadOnlyListWrapperProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

ReadOnlyListWrapperProxy::ReadOnlyListWrapperProxy(void* unused)
{
}

jobject ReadOnlyListWrapperProxy::_getPeerObject() const
{
	return peerObject;
}

jclass ReadOnlyListWrapperProxy::getObjectClass()
{
	return _getObjectClass();
}

ReadOnlyListWrapperProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
ReadOnlyListWrapperProxy::ReadOnlyListWrapperProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

ReadOnlyListWrapperProxy::ReadOnlyListWrapperProxy()
{
	jmethodID mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "<init>", "()V" );
	peerObject = JNIEnvHelper::NewGlobalRef( JNIEnvHelper::NewObject( _getObjectClass(), mid ) );
}

ReadOnlyListWrapperProxy::ReadOnlyListWrapperProxy(::java::lang::ObjectProxy p0, ::net::sourceforge::jnipp::JStringHelper p1)
{
	jmethodID mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "<init>", "(Ljava/lang/Object;Ljava/lang/String;)V" );
	peerObject = JNIEnvHelper::NewGlobalRef( JNIEnvHelper::NewObject( _getObjectClass(), mid, static_cast<jobject>( p0 ), static_cast<jstring>( p1 ) ) );
}

ReadOnlyListWrapperProxy::ReadOnlyListWrapperProxy(::java::lang::ObjectProxy p0, ::net::sourceforge::jnipp::JStringHelper p1, ::javafx::collections::ObservableListProxy p2)
{
	jmethodID mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "<init>", "(Ljava/lang/Object;Ljava/lang/String;Ljavafx/collections/ObservableList;)V" );
	peerObject = JNIEnvHelper::NewGlobalRef( JNIEnvHelper::NewObject( _getObjectClass(), mid, static_cast<jobject>( p0 ), static_cast<jstring>( p1 ), static_cast<jobject>( p2 ) ) );
}

ReadOnlyListWrapperProxy::ReadOnlyListWrapperProxy(::javafx::collections::ObservableListProxy p0)
{
	jmethodID mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "<init>", "(Ljavafx/collections/ObservableList;)V" );
	peerObject = JNIEnvHelper::NewGlobalRef( JNIEnvHelper::NewObject( _getObjectClass(), mid, static_cast<jobject>( p0 ) ) );
}

ReadOnlyListWrapperProxy::~ReadOnlyListWrapperProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

ReadOnlyListWrapperProxy& ReadOnlyListWrapperProxy::operator=(const ReadOnlyListWrapperProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
::javafx::beans::property::ReadOnlyListPropertyProxy ReadOnlyListWrapperProxy::getReadOnlyProperty()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getReadOnlyProperty", "()Ljavafx/beans/property/ReadOnlyListProperty;" );
	return ::javafx::beans::property::ReadOnlyListPropertyProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

