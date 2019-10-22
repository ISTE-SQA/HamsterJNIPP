#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "DebugProxy.h"

// includes for parameter and return type proxy classes
#include "java\math\BigIntegerProxy.h"

using namespace net::sourceforge::jnipp;
using namespace sun::security::util;


std::string DebugProxy::className = "sun/security/util/Debug";
jclass DebugProxy::objectClass = NULL;

jclass DebugProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

DebugProxy::DebugProxy(void* unused)
{
}

jobject DebugProxy::_getPeerObject() const
{
	return peerObject;
}

jclass DebugProxy::getObjectClass()
{
	return _getObjectClass();
}

DebugProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
DebugProxy::DebugProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

DebugProxy::DebugProxy()
{
	jmethodID mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "<init>", "()V" );
	peerObject = JNIEnvHelper::NewGlobalRef( JNIEnvHelper::NewObject( _getObjectClass(), mid ) );
}

DebugProxy::~DebugProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

DebugProxy& DebugProxy::operator=(const DebugProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
jboolean DebugProxy::isOn(::net::sourceforge::jnipp::JStringHelper p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "isOn", "(Ljava/lang/String;)Z" );
	return JNIEnvHelper::CallStaticBooleanMethod( _getObjectClass(), mid, static_cast<jstring>( p0 ) );
}

::net::sourceforge::jnipp::JStringHelper DebugProxy::toHexString(::java::math::BigIntegerProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "toHexString", "(Ljava/math/BigInteger;)Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, static_cast<jobject>( p0 ) )  );
}

::net::sourceforge::jnipp::JStringHelper DebugProxy::toString(::net::sourceforge::jnipp::JByteArrayHelper<1> p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "toString", "([B)Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, static_cast<jbyteArray>( p0 ) )  );
}

::sun::security::util::DebugProxy DebugProxy::getInstance(::net::sourceforge::jnipp::JStringHelper p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "getInstance", "(Ljava/lang/String;)Lsun/security/util/Debug;" );
	return ::sun::security::util::DebugProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, static_cast<jstring>( p0 ) )  );
}

::sun::security::util::DebugProxy DebugProxy::getInstance(::net::sourceforge::jnipp::JStringHelper p0, ::net::sourceforge::jnipp::JStringHelper p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "getInstance", "(Ljava/lang/String;Ljava/lang/String;)Lsun/security/util/Debug;" );
	return ::sun::security::util::DebugProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, static_cast<jstring>( p0 ), static_cast<jstring>( p1 ) )  );
}

void DebugProxy::Help()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "Help", "()V" );
	JNIEnvHelper::CallStaticVoidMethod( _getObjectClass(), mid );
}

void DebugProxy::println(::net::sourceforge::jnipp::JStringHelper p0, ::net::sourceforge::jnipp::JStringHelper p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "println", "(Ljava/lang/String;Ljava/lang/String;)V" );
	JNIEnvHelper::CallStaticVoidMethod( _getObjectClass(), mid, static_cast<jstring>( p0 ), static_cast<jstring>( p1 ) );
}

void DebugProxy::println()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "println", "()V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid );
}

void DebugProxy::println(::net::sourceforge::jnipp::JStringHelper p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "println", "(Ljava/lang/String;)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, static_cast<jstring>( p0 ) );
}

