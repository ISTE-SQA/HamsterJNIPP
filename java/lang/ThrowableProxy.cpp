#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "ThrowableProxy.h"

// includes for parameter and return type proxy classes
#include "java\lang\ThrowableProxy.h"
#include "java\lang\StackTraceElementProxy.h"
#include "java\io\PrintStreamProxy.h"
#include "java\io\PrintWriterProxy.h"
#include "java\util\ListProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::lang;


std::string ThrowableProxy::className = "java/lang/Throwable";
jclass ThrowableProxy::objectClass = NULL;

jclass ThrowableProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

ThrowableProxy::ThrowableProxy(void* unused)
{
}

jobject ThrowableProxy::_getPeerObject() const
{
	return peerObject;
}

jclass ThrowableProxy::getObjectClass()
{
	return _getObjectClass();
}

ThrowableProxy::operator jobject()
{
	return _getPeerObject();
}

ThrowableProxy::operator jthrowable()
{
	return reinterpret_cast<jthrowable>(_getPeerObject());
}

// constructors
ThrowableProxy::ThrowableProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

ThrowableProxy::ThrowableProxy()
{
	jmethodID mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "<init>", "()V" );
	peerObject = JNIEnvHelper::NewGlobalRef( JNIEnvHelper::NewObject( _getObjectClass(), mid ) );
}

ThrowableProxy::ThrowableProxy(::net::sourceforge::jnipp::JStringHelper p0)
{
	jmethodID mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "<init>", "(Ljava/lang/String;)V" );
	peerObject = JNIEnvHelper::NewGlobalRef( JNIEnvHelper::NewObject( _getObjectClass(), mid, static_cast<jstring>( p0 ) ) );
}

ThrowableProxy::ThrowableProxy(::net::sourceforge::jnipp::JStringHelper p0, ::java::lang::ThrowableProxy p1)
{
	jmethodID mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V" );
	peerObject = JNIEnvHelper::NewGlobalRef( JNIEnvHelper::NewObject( _getObjectClass(), mid, static_cast<jstring>( p0 ), static_cast<jobject>( p1 ) ) );
}

ThrowableProxy::ThrowableProxy(::java::lang::ThrowableProxy& p0)
{
	jmethodID mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "<init>", "(Ljava/lang/Throwable;)V" );
	peerObject = JNIEnvHelper::NewGlobalRef( JNIEnvHelper::NewObject( _getObjectClass(), mid, static_cast<jobject>( p0 ) ) );
}

ThrowableProxy::~ThrowableProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

ThrowableProxy& ThrowableProxy::operator=(const ThrowableProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
::net::sourceforge::jnipp::PA<::java::lang::ThrowableProxy>::ProxyArray<1> ThrowableProxy::getSuppressed()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getSuppressed", "()[Ljava/lang/Throwable;" );
	return ::net::sourceforge::jnipp::PA<::java::lang::ThrowableProxy>::ProxyArray<1>( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

void ThrowableProxy::addSuppressed(::java::lang::ThrowableProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "addSuppressed", "(Ljava/lang/Throwable;)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

::net::sourceforge::jnipp::PA<::java::lang::StackTraceElementProxy>::ProxyArray<1> ThrowableProxy::getStackTrace()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getStackTrace", "()[Ljava/lang/StackTraceElement;" );
	return ::net::sourceforge::jnipp::PA<::java::lang::StackTraceElementProxy>::ProxyArray<1>( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::net::sourceforge::jnipp::JStringHelper ThrowableProxy::getLocalizedMessage()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getLocalizedMessage", "()Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::net::sourceforge::jnipp::JStringHelper ThrowableProxy::getMessage()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getMessage", "()Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::net::sourceforge::jnipp::JStringHelper ThrowableProxy::toString()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "toString", "()Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::lang::ThrowableProxy ThrowableProxy::fillInStackTrace()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "fillInStackTrace", "()Ljava/lang/Throwable;" );
	return ::java::lang::ThrowableProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::lang::ThrowableProxy ThrowableProxy::getCause()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getCause", "()Ljava/lang/Throwable;" );
	return ::java::lang::ThrowableProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::lang::ThrowableProxy ThrowableProxy::initCause(::java::lang::ThrowableProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "initCause", "(Ljava/lang/Throwable;)Ljava/lang/Throwable;" );
	return ::java::lang::ThrowableProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

void ThrowableProxy::printStackTrace()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "printStackTrace", "()V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid );
}

void ThrowableProxy::printStackTrace(::java::io::PrintStreamProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "printStackTrace", "(Ljava/io/PrintStream;)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

void ThrowableProxy::printStackTrace(::java::io::PrintWriterProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "printStackTrace", "(Ljava/io/PrintWriter;)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

void ThrowableProxy::setStackTrace(::net::sourceforge::jnipp::PA<::java::lang::StackTraceElementProxy>::ProxyArray<1> p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "setStackTrace", "([Ljava/lang/StackTraceElement;)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, static_cast<jobjectArray>( p0 ) );
}

