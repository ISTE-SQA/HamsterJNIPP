#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "BooleanProxy.h"

// includes for parameter and return type proxy classes
#include "java\lang\ObjectProxy.h"
#include "java\lang\ClassProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::lang;


std::string BooleanProxy::className = "java/lang/Boolean";
jclass BooleanProxy::objectClass = NULL;

jclass BooleanProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

BooleanProxy::BooleanProxy(void* unused)
{
}

jobject BooleanProxy::_getPeerObject() const
{
	return peerObject;
}

jclass BooleanProxy::getObjectClass()
{
	return _getObjectClass();
}

BooleanProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
BooleanProxy::BooleanProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

BooleanProxy::BooleanProxy(jboolean p0)
{
	jmethodID mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "<init>", "(Z)V" );
	peerObject = JNIEnvHelper::NewGlobalRef( JNIEnvHelper::NewObject( _getObjectClass(), mid, p0 ) );
}

BooleanProxy::BooleanProxy(::net::sourceforge::jnipp::JStringHelper p0)
{
	jmethodID mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "<init>", "(Ljava/lang/String;)V" );
	peerObject = JNIEnvHelper::NewGlobalRef( JNIEnvHelper::NewObject( _getObjectClass(), mid, static_cast<jstring>( p0 ) ) );
}

BooleanProxy::~BooleanProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

BooleanProxy& BooleanProxy::operator=(const BooleanProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
jboolean BooleanProxy::booleanValue()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "booleanValue", "()Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid );
}

jboolean BooleanProxy::equals(::java::lang::ObjectProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "equals", "(Ljava/lang/Object;)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

jint BooleanProxy::compareTo(::java::lang::BooleanProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "compareTo", "(Ljava/lang/Boolean;)I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

jint BooleanProxy::hashCode()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "hashCode", "()I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid );
}

::net::sourceforge::jnipp::JStringHelper BooleanProxy::toString()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "toString", "()Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

jboolean BooleanProxy::getBoolean(::net::sourceforge::jnipp::JStringHelper p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "getBoolean", "(Ljava/lang/String;)Z" );
	return JNIEnvHelper::CallStaticBooleanMethod( _getObjectClass(), mid, static_cast<jstring>( p0 ) );
}

jboolean BooleanProxy::logicalAnd(jboolean p0, jboolean p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "logicalAnd", "(ZZ)Z" );
	return JNIEnvHelper::CallStaticBooleanMethod( _getObjectClass(), mid, p0, p1 );
}

jboolean BooleanProxy::logicalOr(jboolean p0, jboolean p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "logicalOr", "(ZZ)Z" );
	return JNIEnvHelper::CallStaticBooleanMethod( _getObjectClass(), mid, p0, p1 );
}

jboolean BooleanProxy::logicalXor(jboolean p0, jboolean p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "logicalXor", "(ZZ)Z" );
	return JNIEnvHelper::CallStaticBooleanMethod( _getObjectClass(), mid, p0, p1 );
}

jboolean BooleanProxy::parseBoolean(::net::sourceforge::jnipp::JStringHelper p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "parseBoolean", "(Ljava/lang/String;)Z" );
	return JNIEnvHelper::CallStaticBooleanMethod( _getObjectClass(), mid, static_cast<jstring>( p0 ) );
}

jint BooleanProxy::compare(jboolean p0, jboolean p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "compare", "(ZZ)I" );
	return JNIEnvHelper::CallStaticIntMethod( _getObjectClass(), mid, p0, p1 );
}

jint BooleanProxy::hashCode(jboolean p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "hashCode", "(Z)I" );
	return JNIEnvHelper::CallStaticIntMethod( _getObjectClass(), mid, p0 );
}

::java::lang::BooleanProxy BooleanProxy::valueOf(jboolean p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "valueOf", "(Z)Ljava/lang/Boolean;" );
	return ::java::lang::BooleanProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, p0 )  );
}

::java::lang::BooleanProxy BooleanProxy::valueOf(::net::sourceforge::jnipp::JStringHelper p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "valueOf", "(Ljava/lang/String;)Ljava/lang/Boolean;" );
	return ::java::lang::BooleanProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, static_cast<jstring>( p0 ) )  );
}

::net::sourceforge::jnipp::JStringHelper BooleanProxy::toString(jboolean p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "toString", "(Z)Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, p0 )  );
}

