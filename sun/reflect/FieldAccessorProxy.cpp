#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "FieldAccessorProxy.h"

// includes for parameter and return type proxy classes
#include "java\lang\ObjectProxy.h"

using namespace net::sourceforge::jnipp;
using namespace sun::reflect;


std::string FieldAccessorProxy::className = "sun/reflect/FieldAccessor";
jclass FieldAccessorProxy::objectClass = NULL;

jclass FieldAccessorProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

FieldAccessorProxy::FieldAccessorProxy(void* unused)
{
}

jobject FieldAccessorProxy::_getPeerObject() const
{
	return peerObject;
}

jclass FieldAccessorProxy::getObjectClass()
{
	return _getObjectClass();
}

FieldAccessorProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
FieldAccessorProxy::FieldAccessorProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

FieldAccessorProxy::~FieldAccessorProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

FieldAccessorProxy& FieldAccessorProxy::operator=(const FieldAccessorProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
jboolean FieldAccessorProxy::getBoolean(::java::lang::ObjectProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getBoolean", "(Ljava/lang/Object;)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

jbyte FieldAccessorProxy::getByte(::java::lang::ObjectProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getByte", "(Ljava/lang/Object;)B" );
	return JNIEnvHelper::CallByteMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

jchar FieldAccessorProxy::getChar(::java::lang::ObjectProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getChar", "(Ljava/lang/Object;)C" );
	return JNIEnvHelper::CallCharMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

jdouble FieldAccessorProxy::getDouble(::java::lang::ObjectProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getDouble", "(Ljava/lang/Object;)D" );
	return JNIEnvHelper::CallDoubleMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

jfloat FieldAccessorProxy::getFloat(::java::lang::ObjectProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getFloat", "(Ljava/lang/Object;)F" );
	return JNIEnvHelper::CallFloatMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

jint FieldAccessorProxy::getInt(::java::lang::ObjectProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getInt", "(Ljava/lang/Object;)I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

::java::lang::ObjectProxy FieldAccessorProxy::get(::java::lang::ObjectProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "get", "(Ljava/lang/Object;)Ljava/lang/Object;" );
	return ::java::lang::ObjectProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

jlong FieldAccessorProxy::getLong(::java::lang::ObjectProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getLong", "(Ljava/lang/Object;)J" );
	return JNIEnvHelper::CallLongMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

jshort FieldAccessorProxy::getShort(::java::lang::ObjectProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getShort", "(Ljava/lang/Object;)S" );
	return JNIEnvHelper::CallShortMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

void FieldAccessorProxy::set(::java::lang::ObjectProxy p0, ::java::lang::ObjectProxy p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "set", "(Ljava/lang/Object;Ljava/lang/Object;)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), static_cast<jobject>( p1 ) );
}

void FieldAccessorProxy::setBoolean(::java::lang::ObjectProxy p0, jboolean p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "setBoolean", "(Ljava/lang/Object;Z)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), p1 );
}

void FieldAccessorProxy::setByte(::java::lang::ObjectProxy p0, jbyte p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "setByte", "(Ljava/lang/Object;B)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), p1 );
}

void FieldAccessorProxy::setChar(::java::lang::ObjectProxy p0, jchar p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "setChar", "(Ljava/lang/Object;C)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), p1 );
}

void FieldAccessorProxy::setDouble(::java::lang::ObjectProxy p0, jdouble p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "setDouble", "(Ljava/lang/Object;D)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), p1 );
}

void FieldAccessorProxy::setFloat(::java::lang::ObjectProxy p0, jfloat p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "setFloat", "(Ljava/lang/Object;F)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), p1 );
}

void FieldAccessorProxy::setInt(::java::lang::ObjectProxy p0, jint p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "setInt", "(Ljava/lang/Object;I)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), p1 );
}

void FieldAccessorProxy::setLong(::java::lang::ObjectProxy p0, jlong p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "setLong", "(Ljava/lang/Object;J)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), p1 );
}

void FieldAccessorProxy::setShort(::java::lang::ObjectProxy p0, jshort p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "setShort", "(Ljava/lang/Object;S)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), p1 );
}

