#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "InputInterfaceProxy.h"

// includes for parameter and return type proxy classes
#include "java\lang\ThrowableProxy.h"

using namespace net::sourceforge::jnipp;
using namespace de::unistuttgart::iste::rss::oo::hamstersimulator::internal::model;


std::string InputInterfaceProxy::className = "de/unistuttgart/iste/rss/oo/hamstersimulator/internal/model/InputInterface";
jclass InputInterfaceProxy::objectClass = NULL;

jclass InputInterfaceProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

InputInterfaceProxy::InputInterfaceProxy(void* unused)
{
}

jobject InputInterfaceProxy::_getPeerObject() const
{
	return peerObject;
}

jclass InputInterfaceProxy::getObjectClass()
{
	return _getObjectClass();
}

InputInterfaceProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
InputInterfaceProxy::InputInterfaceProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

InputInterfaceProxy::~InputInterfaceProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

InputInterfaceProxy& InputInterfaceProxy::operator=(const InputInterfaceProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
jint InputInterfaceProxy::readInteger(::net::sourceforge::jnipp::JStringHelper p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "readInteger", "(Ljava/lang/String;)I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid, static_cast<jstring>( p0 ) );
}

::net::sourceforge::jnipp::JStringHelper InputInterfaceProxy::readString(::net::sourceforge::jnipp::JStringHelper p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "readString", "(Ljava/lang/String;)Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jstring>( p0 ) )  );
}

void InputInterfaceProxy::showAlert(::java::lang::ThrowableProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "showAlert", "(Ljava/lang/Throwable;)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

