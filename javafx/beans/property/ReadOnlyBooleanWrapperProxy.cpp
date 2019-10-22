#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "ReadOnlyBooleanWrapperProxy.h"

// includes for parameter and return type proxy classes
#include "java\lang\ObjectProxy.h"
#include "javafx\beans\property\ReadOnlyBooleanPropertyProxy.h"
#include "javafx\beans\property\ReadOnlyBooleanWrapper_ReadOnlyPropertyImplProxy.h"

using namespace net::sourceforge::jnipp;
using namespace javafx::beans::property;


std::string ReadOnlyBooleanWrapperProxy::className = "javafx/beans/property/ReadOnlyBooleanWrapper";
jclass ReadOnlyBooleanWrapperProxy::objectClass = NULL;

jclass ReadOnlyBooleanWrapperProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

ReadOnlyBooleanWrapperProxy::ReadOnlyBooleanWrapperProxy(void* unused)
{
}

jobject ReadOnlyBooleanWrapperProxy::_getPeerObject() const
{
	return peerObject;
}

jclass ReadOnlyBooleanWrapperProxy::getObjectClass()
{
	return _getObjectClass();
}

ReadOnlyBooleanWrapperProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
ReadOnlyBooleanWrapperProxy::ReadOnlyBooleanWrapperProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

ReadOnlyBooleanWrapperProxy::ReadOnlyBooleanWrapperProxy()
{
	jmethodID mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "<init>", "()V" );
	peerObject = JNIEnvHelper::NewGlobalRef( JNIEnvHelper::NewObject( _getObjectClass(), mid ) );
}

ReadOnlyBooleanWrapperProxy::ReadOnlyBooleanWrapperProxy(jboolean p0)
{
	jmethodID mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "<init>", "(Z)V" );
	peerObject = JNIEnvHelper::NewGlobalRef( JNIEnvHelper::NewObject( _getObjectClass(), mid, p0 ) );
}

ReadOnlyBooleanWrapperProxy::ReadOnlyBooleanWrapperProxy(::java::lang::ObjectProxy p0, ::net::sourceforge::jnipp::JStringHelper p1)
{
	jmethodID mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "<init>", "(Ljava/lang/Object;Ljava/lang/String;)V" );
	peerObject = JNIEnvHelper::NewGlobalRef( JNIEnvHelper::NewObject( _getObjectClass(), mid, static_cast<jobject>( p0 ), static_cast<jstring>( p1 ) ) );
}

ReadOnlyBooleanWrapperProxy::ReadOnlyBooleanWrapperProxy(::java::lang::ObjectProxy p0, ::net::sourceforge::jnipp::JStringHelper p1, jboolean p2)
{
	jmethodID mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "<init>", "(Ljava/lang/Object;Ljava/lang/String;Z)V" );
	peerObject = JNIEnvHelper::NewGlobalRef( JNIEnvHelper::NewObject( _getObjectClass(), mid, static_cast<jobject>( p0 ), static_cast<jstring>( p1 ), p2 ) );
}

ReadOnlyBooleanWrapperProxy::~ReadOnlyBooleanWrapperProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

ReadOnlyBooleanWrapperProxy& ReadOnlyBooleanWrapperProxy::operator=(const ReadOnlyBooleanWrapperProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
::javafx::beans::property::ReadOnlyBooleanPropertyProxy ReadOnlyBooleanWrapperProxy::getReadOnlyProperty()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getReadOnlyProperty", "()Ljavafx/beans/property/ReadOnlyBooleanProperty;" );
	return ::javafx::beans::property::ReadOnlyBooleanPropertyProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

