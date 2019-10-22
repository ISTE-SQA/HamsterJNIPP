#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "IOExceptionProxy.h"

// includes for parameter and return type proxy classes
#include "java\lang\ThrowableProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::io;


std::string IOExceptionProxy::className = "java/io/IOException";
jclass IOExceptionProxy::objectClass = NULL;

jclass IOExceptionProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

IOExceptionProxy::IOExceptionProxy(void* unused)
{
}

jobject IOExceptionProxy::_getPeerObject() const
{
	return peerObject;
}

jclass IOExceptionProxy::getObjectClass()
{
	return _getObjectClass();
}

IOExceptionProxy::operator jobject()
{
	return _getPeerObject();
}

IOExceptionProxy::operator jthrowable()
{
	return reinterpret_cast<jthrowable>(_getPeerObject());
}

// constructors
IOExceptionProxy::IOExceptionProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

IOExceptionProxy::IOExceptionProxy()
{
	jmethodID mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "<init>", "()V" );
	peerObject = JNIEnvHelper::NewGlobalRef( JNIEnvHelper::NewObject( _getObjectClass(), mid ) );
}

IOExceptionProxy::IOExceptionProxy(::net::sourceforge::jnipp::JStringHelper p0)
{
	jmethodID mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "<init>", "(Ljava/lang/String;)V" );
	peerObject = JNIEnvHelper::NewGlobalRef( JNIEnvHelper::NewObject( _getObjectClass(), mid, static_cast<jstring>( p0 ) ) );
}

IOExceptionProxy::IOExceptionProxy(::net::sourceforge::jnipp::JStringHelper p0, ::java::lang::ThrowableProxy p1)
{
	jmethodID mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V" );
	peerObject = JNIEnvHelper::NewGlobalRef( JNIEnvHelper::NewObject( _getObjectClass(), mid, static_cast<jstring>( p0 ), static_cast<jobject>( p1 ) ) );
}

IOExceptionProxy::IOExceptionProxy(::java::lang::ThrowableProxy p0)
{
	jmethodID mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "<init>", "(Ljava/lang/Throwable;)V" );
	peerObject = JNIEnvHelper::NewGlobalRef( JNIEnvHelper::NewObject( _getObjectClass(), mid, static_cast<jobject>( p0 ) ) );
}

IOExceptionProxy::~IOExceptionProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

IOExceptionProxy& IOExceptionProxy::operator=(const IOExceptionProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
