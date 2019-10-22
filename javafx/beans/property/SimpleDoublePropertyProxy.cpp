#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "SimpleDoublePropertyProxy.h"

// includes for parameter and return type proxy classes
#include "java\lang\ObjectProxy.h"

using namespace net::sourceforge::jnipp;
using namespace javafx::beans::property;


std::string SimpleDoublePropertyProxy::className = "javafx/beans/property/SimpleDoubleProperty";
jclass SimpleDoublePropertyProxy::objectClass = NULL;

jclass SimpleDoublePropertyProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

SimpleDoublePropertyProxy::SimpleDoublePropertyProxy(void* unused)
{
}

jobject SimpleDoublePropertyProxy::_getPeerObject() const
{
	return peerObject;
}

jclass SimpleDoublePropertyProxy::getObjectClass()
{
	return _getObjectClass();
}

SimpleDoublePropertyProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
SimpleDoublePropertyProxy::SimpleDoublePropertyProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

SimpleDoublePropertyProxy::SimpleDoublePropertyProxy()
{
	jmethodID mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "<init>", "()V" );
	peerObject = JNIEnvHelper::NewGlobalRef( JNIEnvHelper::NewObject( _getObjectClass(), mid ) );
}

SimpleDoublePropertyProxy::SimpleDoublePropertyProxy(jdouble p0)
{
	jmethodID mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "<init>", "(D)V" );
	peerObject = JNIEnvHelper::NewGlobalRef( JNIEnvHelper::NewObject( _getObjectClass(), mid, p0 ) );
}

SimpleDoublePropertyProxy::SimpleDoublePropertyProxy(::java::lang::ObjectProxy p0, ::net::sourceforge::jnipp::JStringHelper p1)
{
	jmethodID mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "<init>", "(Ljava/lang/Object;Ljava/lang/String;)V" );
	peerObject = JNIEnvHelper::NewGlobalRef( JNIEnvHelper::NewObject( _getObjectClass(), mid, static_cast<jobject>( p0 ), static_cast<jstring>( p1 ) ) );
}

SimpleDoublePropertyProxy::SimpleDoublePropertyProxy(::java::lang::ObjectProxy p0, ::net::sourceforge::jnipp::JStringHelper p1, jdouble p2)
{
	jmethodID mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "<init>", "(Ljava/lang/Object;Ljava/lang/String;D)V" );
	peerObject = JNIEnvHelper::NewGlobalRef( JNIEnvHelper::NewObject( _getObjectClass(), mid, static_cast<jobject>( p0 ), static_cast<jstring>( p1 ), p2 ) );
}

SimpleDoublePropertyProxy::~SimpleDoublePropertyProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

SimpleDoublePropertyProxy& SimpleDoublePropertyProxy::operator=(const SimpleDoublePropertyProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
::java::lang::ObjectProxy SimpleDoublePropertyProxy::getBean()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getBean", "()Ljava/lang/Object;" );
	return ::java::lang::ObjectProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::net::sourceforge::jnipp::JStringHelper SimpleDoublePropertyProxy::getName()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getName", "()Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

