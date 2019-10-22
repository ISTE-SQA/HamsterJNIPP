#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "ReadOnlyIntegerWrapperProxy.h"

// includes for parameter and return type proxy classes
#include "java\lang\ObjectProxy.h"
#include "javafx\beans\property\ReadOnlyIntegerPropertyProxy.h"
#include "javafx\beans\property\ReadOnlyIntegerWrapper_ReadOnlyPropertyImplProxy.h"

using namespace net::sourceforge::jnipp;
using namespace javafx::beans::property;


std::string ReadOnlyIntegerWrapperProxy::className = "javafx/beans/property/ReadOnlyIntegerWrapper";
jclass ReadOnlyIntegerWrapperProxy::objectClass = NULL;

jclass ReadOnlyIntegerWrapperProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

ReadOnlyIntegerWrapperProxy::ReadOnlyIntegerWrapperProxy(void* unused)
{
}

jobject ReadOnlyIntegerWrapperProxy::_getPeerObject() const
{
	return peerObject;
}

jclass ReadOnlyIntegerWrapperProxy::getObjectClass()
{
	return _getObjectClass();
}

ReadOnlyIntegerWrapperProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
ReadOnlyIntegerWrapperProxy::ReadOnlyIntegerWrapperProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

ReadOnlyIntegerWrapperProxy::ReadOnlyIntegerWrapperProxy()
{
	jmethodID mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "<init>", "()V" );
	peerObject = JNIEnvHelper::NewGlobalRef( JNIEnvHelper::NewObject( _getObjectClass(), mid ) );
}

ReadOnlyIntegerWrapperProxy::ReadOnlyIntegerWrapperProxy(jint p0)
{
	jmethodID mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "<init>", "(I)V" );
	peerObject = JNIEnvHelper::NewGlobalRef( JNIEnvHelper::NewObject( _getObjectClass(), mid, p0 ) );
}

ReadOnlyIntegerWrapperProxy::ReadOnlyIntegerWrapperProxy(::java::lang::ObjectProxy p0, ::net::sourceforge::jnipp::JStringHelper p1)
{
	jmethodID mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "<init>", "(Ljava/lang/Object;Ljava/lang/String;)V" );
	peerObject = JNIEnvHelper::NewGlobalRef( JNIEnvHelper::NewObject( _getObjectClass(), mid, static_cast<jobject>( p0 ), static_cast<jstring>( p1 ) ) );
}

ReadOnlyIntegerWrapperProxy::ReadOnlyIntegerWrapperProxy(::java::lang::ObjectProxy p0, ::net::sourceforge::jnipp::JStringHelper p1, jint p2)
{
	jmethodID mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "<init>", "(Ljava/lang/Object;Ljava/lang/String;I)V" );
	peerObject = JNIEnvHelper::NewGlobalRef( JNIEnvHelper::NewObject( _getObjectClass(), mid, static_cast<jobject>( p0 ), static_cast<jstring>( p1 ), p2 ) );
}

ReadOnlyIntegerWrapperProxy::~ReadOnlyIntegerWrapperProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

ReadOnlyIntegerWrapperProxy& ReadOnlyIntegerWrapperProxy::operator=(const ReadOnlyIntegerWrapperProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
::javafx::beans::property::ReadOnlyIntegerPropertyProxy ReadOnlyIntegerWrapperProxy::getReadOnlyProperty()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getReadOnlyProperty", "()Ljavafx/beans/property/ReadOnlyIntegerProperty;" );
	return ::javafx::beans::property::ReadOnlyIntegerPropertyProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

