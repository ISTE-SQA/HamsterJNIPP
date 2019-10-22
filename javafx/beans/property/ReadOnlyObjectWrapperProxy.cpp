#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "ReadOnlyObjectWrapperProxy.h"

// includes for parameter and return type proxy classes
#include "java\lang\ObjectProxy.h"
#include "javafx\beans\property\ReadOnlyObjectPropertyProxy.h"
#include "javafx\beans\property\ReadOnlyObjectWrapper_ReadOnlyPropertyImplProxy.h"

using namespace net::sourceforge::jnipp;
using namespace javafx::beans::property;


std::string ReadOnlyObjectWrapperProxy::className = "javafx/beans/property/ReadOnlyObjectWrapper";
jclass ReadOnlyObjectWrapperProxy::objectClass = NULL;

jclass ReadOnlyObjectWrapperProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

ReadOnlyObjectWrapperProxy::ReadOnlyObjectWrapperProxy(void* unused)
{
}

jobject ReadOnlyObjectWrapperProxy::_getPeerObject() const
{
	return peerObject;
}

jclass ReadOnlyObjectWrapperProxy::getObjectClass()
{
	return _getObjectClass();
}

ReadOnlyObjectWrapperProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
ReadOnlyObjectWrapperProxy::ReadOnlyObjectWrapperProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

ReadOnlyObjectWrapperProxy::ReadOnlyObjectWrapperProxy()
{
	jmethodID mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "<init>", "()V" );
	peerObject = JNIEnvHelper::NewGlobalRef( JNIEnvHelper::NewObject( _getObjectClass(), mid ) );
}

ReadOnlyObjectWrapperProxy::ReadOnlyObjectWrapperProxy(::java::lang::ObjectProxy p0)
{
	jmethodID mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "<init>", "(Ljava/lang/Object;)V" );
	peerObject = JNIEnvHelper::NewGlobalRef( JNIEnvHelper::NewObject( _getObjectClass(), mid, static_cast<jobject>( p0 ) ) );
}

ReadOnlyObjectWrapperProxy::ReadOnlyObjectWrapperProxy(::java::lang::ObjectProxy p0, ::net::sourceforge::jnipp::JStringHelper p1)
{
	jmethodID mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "<init>", "(Ljava/lang/Object;Ljava/lang/String;)V" );
	peerObject = JNIEnvHelper::NewGlobalRef( JNIEnvHelper::NewObject( _getObjectClass(), mid, static_cast<jobject>( p0 ), static_cast<jstring>( p1 ) ) );
}

ReadOnlyObjectWrapperProxy::ReadOnlyObjectWrapperProxy(::java::lang::ObjectProxy p0, ::net::sourceforge::jnipp::JStringHelper p1, ::java::lang::ObjectProxy p2)
{
	jmethodID mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "<init>", "(Ljava/lang/Object;Ljava/lang/String;Ljava/lang/Object;)V" );
	peerObject = JNIEnvHelper::NewGlobalRef( JNIEnvHelper::NewObject( _getObjectClass(), mid, static_cast<jobject>( p0 ), static_cast<jstring>( p1 ), static_cast<jobject>( p2 ) ) );
}

ReadOnlyObjectWrapperProxy::~ReadOnlyObjectWrapperProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

ReadOnlyObjectWrapperProxy& ReadOnlyObjectWrapperProxy::operator=(const ReadOnlyObjectWrapperProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
::javafx::beans::property::ReadOnlyObjectPropertyProxy ReadOnlyObjectWrapperProxy::getReadOnlyProperty()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getReadOnlyProperty", "()Ljavafx/beans/property/ReadOnlyObjectProperty;" );
	return ::javafx::beans::property::ReadOnlyObjectPropertyProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

