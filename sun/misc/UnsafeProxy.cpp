#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "UnsafeProxy.h"

// includes for parameter and return type proxy classes
#include "java\lang\ObjectProxy.h"
#include "java\lang\reflect\FieldProxy.h"
#include "java\lang\ClassProxy.h"
#include "java\lang\ClassLoaderProxy.h"
#include "java\security\ProtectionDomainProxy.h"
#include "java\lang\ThrowableProxy.h"

using namespace net::sourceforge::jnipp;
using namespace sun::misc;


std::string UnsafeProxy::className = "sun/misc/Unsafe";
jclass UnsafeProxy::objectClass = NULL;

jclass UnsafeProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

UnsafeProxy::UnsafeProxy(void* unused)
{
}

jobject UnsafeProxy::_getPeerObject() const
{
	return peerObject;
}

jclass UnsafeProxy::getObjectClass()
{
	return _getObjectClass();
}

UnsafeProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
UnsafeProxy::UnsafeProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

UnsafeProxy::~UnsafeProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

UnsafeProxy& UnsafeProxy::operator=(const UnsafeProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
jboolean UnsafeProxy::getBoolean(::java::lang::ObjectProxy p0, jint p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getBoolean", "(Ljava/lang/Object;I)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), p1 );
}

jbyte UnsafeProxy::getByte(::java::lang::ObjectProxy p0, jint p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getByte", "(Ljava/lang/Object;I)B" );
	return JNIEnvHelper::CallByteMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), p1 );
}

jchar UnsafeProxy::getChar(::java::lang::ObjectProxy p0, jint p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getChar", "(Ljava/lang/Object;I)C" );
	return JNIEnvHelper::CallCharMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), p1 );
}

jdouble UnsafeProxy::getDouble(::java::lang::ObjectProxy p0, jint p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getDouble", "(Ljava/lang/Object;I)D" );
	return JNIEnvHelper::CallDoubleMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), p1 );
}

jint UnsafeProxy::getAndAddInt(::java::lang::ObjectProxy p0, jlong p1, jint p2)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getAndAddInt", "(Ljava/lang/Object;JI)I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), p1, p2 );
}

jint UnsafeProxy::getAndSetInt(::java::lang::ObjectProxy p0, jlong p1, jint p2)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getAndSetInt", "(Ljava/lang/Object;JI)I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), p1, p2 );
}

::java::lang::ObjectProxy UnsafeProxy::getAndSetObject(::java::lang::ObjectProxy p0, jlong p1, ::java::lang::ObjectProxy p2)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getAndSetObject", "(Ljava/lang/Object;JLjava/lang/Object;)Ljava/lang/Object;" );
	return ::java::lang::ObjectProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), p1, static_cast<jobject>( p2 ) )  );
}

jlong UnsafeProxy::getAndAddLong(::java::lang::ObjectProxy p0, jlong p1, jlong p2)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getAndAddLong", "(Ljava/lang/Object;JJ)J" );
	return JNIEnvHelper::CallLongMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), p1, p2 );
}

jlong UnsafeProxy::getAndSetLong(::java::lang::ObjectProxy p0, jlong p1, jlong p2)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getAndSetLong", "(Ljava/lang/Object;JJ)J" );
	return JNIEnvHelper::CallLongMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), p1, p2 );
}

jboolean UnsafeProxy::compareAndSwapInt(::java::lang::ObjectProxy p0, jlong p1, jint p2, jint p3)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "compareAndSwapInt", "(Ljava/lang/Object;JII)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), p1, p2, p3 );
}

jboolean UnsafeProxy::compareAndSwapLong(::java::lang::ObjectProxy p0, jlong p1, jlong p2, jlong p3)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "compareAndSwapLong", "(Ljava/lang/Object;JJJ)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), p1, p2, p3 );
}

jboolean UnsafeProxy::compareAndSwapObject(::java::lang::ObjectProxy p0, jlong p1, ::java::lang::ObjectProxy p2, ::java::lang::ObjectProxy p3)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "compareAndSwapObject", "(Ljava/lang/Object;JLjava/lang/Object;Ljava/lang/Object;)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), p1, static_cast<jobject>( p2 ), static_cast<jobject>( p3 ) );
}

jfloat UnsafeProxy::getFloat(::java::lang::ObjectProxy p0, jint p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getFloat", "(Ljava/lang/Object;I)F" );
	return JNIEnvHelper::CallFloatMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), p1 );
}

jint UnsafeProxy::fieldOffset(::java::lang::reflect::FieldProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "fieldOffset", "(Ljava/lang/reflect/Field;)I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

jint UnsafeProxy::getInt(::java::lang::ObjectProxy p0, jint p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getInt", "(Ljava/lang/Object;I)I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), p1 );
}

::java::lang::ObjectProxy UnsafeProxy::getObject(::java::lang::ObjectProxy p0, jint p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getObject", "(Ljava/lang/Object;I)Ljava/lang/Object;" );
	return ::java::lang::ObjectProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), p1 )  );
}

::java::lang::ObjectProxy UnsafeProxy::staticFieldBase(::java::lang::ClassProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "staticFieldBase", "(Ljava/lang/Class;)Ljava/lang/Object;" );
	return ::java::lang::ObjectProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jclass>( p0 ) )  );
}

jlong UnsafeProxy::getLong(::java::lang::ObjectProxy p0, jint p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getLong", "(Ljava/lang/Object;I)J" );
	return JNIEnvHelper::CallLongMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), p1 );
}

jboolean UnsafeProxy::getBoolean(::java::lang::ObjectProxy p0, jlong p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getBoolean", "(Ljava/lang/Object;J)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), p1 );
}

jboolean UnsafeProxy::getBooleanVolatile(::java::lang::ObjectProxy p0, jlong p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getBooleanVolatile", "(Ljava/lang/Object;J)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), p1 );
}

jboolean UnsafeProxy::shouldBeInitialized(::java::lang::ClassProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "shouldBeInitialized", "(Ljava/lang/Class;)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, static_cast<jclass>( p0 ) );
}

jboolean UnsafeProxy::tryMonitorEnter(::java::lang::ObjectProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "tryMonitorEnter", "(Ljava/lang/Object;)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

jbyte UnsafeProxy::getByte(::java::lang::ObjectProxy p0, jlong p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getByte", "(Ljava/lang/Object;J)B" );
	return JNIEnvHelper::CallByteMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), p1 );
}

jbyte UnsafeProxy::getByte(jlong p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getByte", "(J)B" );
	return JNIEnvHelper::CallByteMethod( _getPeerObject(), mid, p0 );
}

jbyte UnsafeProxy::getByteVolatile(::java::lang::ObjectProxy p0, jlong p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getByteVolatile", "(Ljava/lang/Object;J)B" );
	return JNIEnvHelper::CallByteMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), p1 );
}

jchar UnsafeProxy::getChar(::java::lang::ObjectProxy p0, jlong p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getChar", "(Ljava/lang/Object;J)C" );
	return JNIEnvHelper::CallCharMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), p1 );
}

jchar UnsafeProxy::getChar(jlong p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getChar", "(J)C" );
	return JNIEnvHelper::CallCharMethod( _getPeerObject(), mid, p0 );
}

jchar UnsafeProxy::getCharVolatile(::java::lang::ObjectProxy p0, jlong p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getCharVolatile", "(Ljava/lang/Object;J)C" );
	return JNIEnvHelper::CallCharMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), p1 );
}

jdouble UnsafeProxy::getDouble(::java::lang::ObjectProxy p0, jlong p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getDouble", "(Ljava/lang/Object;J)D" );
	return JNIEnvHelper::CallDoubleMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), p1 );
}

jdouble UnsafeProxy::getDouble(jlong p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getDouble", "(J)D" );
	return JNIEnvHelper::CallDoubleMethod( _getPeerObject(), mid, p0 );
}

jdouble UnsafeProxy::getDoubleVolatile(::java::lang::ObjectProxy p0, jlong p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getDoubleVolatile", "(Ljava/lang/Object;J)D" );
	return JNIEnvHelper::CallDoubleMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), p1 );
}

jfloat UnsafeProxy::getFloat(::java::lang::ObjectProxy p0, jlong p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getFloat", "(Ljava/lang/Object;J)F" );
	return JNIEnvHelper::CallFloatMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), p1 );
}

jfloat UnsafeProxy::getFloat(jlong p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getFloat", "(J)F" );
	return JNIEnvHelper::CallFloatMethod( _getPeerObject(), mid, p0 );
}

jfloat UnsafeProxy::getFloatVolatile(::java::lang::ObjectProxy p0, jlong p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getFloatVolatile", "(Ljava/lang/Object;J)F" );
	return JNIEnvHelper::CallFloatMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), p1 );
}

jint UnsafeProxy::addressSize()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "addressSize", "()I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid );
}

jint UnsafeProxy::arrayBaseOffset(::java::lang::ClassProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "arrayBaseOffset", "(Ljava/lang/Class;)I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid, static_cast<jclass>( p0 ) );
}

jint UnsafeProxy::arrayIndexScale(::java::lang::ClassProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "arrayIndexScale", "(Ljava/lang/Class;)I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid, static_cast<jclass>( p0 ) );
}

jint UnsafeProxy::getInt(::java::lang::ObjectProxy p0, jlong p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getInt", "(Ljava/lang/Object;J)I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), p1 );
}

jint UnsafeProxy::getInt(jlong p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getInt", "(J)I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid, p0 );
}

jint UnsafeProxy::getIntVolatile(::java::lang::ObjectProxy p0, jlong p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getIntVolatile", "(Ljava/lang/Object;J)I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), p1 );
}

jint UnsafeProxy::getLoadAverage(::net::sourceforge::jnipp::JDoubleArrayHelper<1> p0, jint p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getLoadAverage", "([DI)I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid, static_cast<jdoubleArray>( p0 ), p1 );
}

jint UnsafeProxy::pageSize()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "pageSize", "()I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid );
}

::java::lang::ClassProxy UnsafeProxy::defineAnonymousClass(::java::lang::ClassProxy p0, ::net::sourceforge::jnipp::JByteArrayHelper<1> p1, ::net::sourceforge::jnipp::PA<::java::lang::ObjectProxy>::ProxyArray<1> p2)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "defineAnonymousClass", "(Ljava/lang/Class;[B[Ljava/lang/Object;)Ljava/lang/Class;" );
	return ::java::lang::ClassProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jclass>( p0 ), static_cast<jbyteArray>( p1 ), static_cast<jobjectArray>( p2 ) )  );
}

::java::lang::ClassProxy UnsafeProxy::defineClass(::net::sourceforge::jnipp::JStringHelper p0, ::net::sourceforge::jnipp::JByteArrayHelper<1> p1, jint p2, jint p3, ::java::lang::ClassLoaderProxy p4, ::java::security::ProtectionDomainProxy p5)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "defineClass", "(Ljava/lang/String;[BIILjava/lang/ClassLoader;Ljava/security/ProtectionDomain;)Ljava/lang/Class;" );
	return ::java::lang::ClassProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jstring>( p0 ), static_cast<jbyteArray>( p1 ), p2, p3, static_cast<jobject>( p4 ), static_cast<jobject>( p5 ) )  );
}

::java::lang::ObjectProxy UnsafeProxy::allocateInstance(::java::lang::ClassProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "allocateInstance", "(Ljava/lang/Class;)Ljava/lang/Object;" );
	return ::java::lang::ObjectProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jclass>( p0 ) )  );
}

::java::lang::ObjectProxy UnsafeProxy::getObject(::java::lang::ObjectProxy p0, jlong p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getObject", "(Ljava/lang/Object;J)Ljava/lang/Object;" );
	return ::java::lang::ObjectProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), p1 )  );
}

::java::lang::ObjectProxy UnsafeProxy::getObjectVolatile(::java::lang::ObjectProxy p0, jlong p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getObjectVolatile", "(Ljava/lang/Object;J)Ljava/lang/Object;" );
	return ::java::lang::ObjectProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), p1 )  );
}

::java::lang::ObjectProxy UnsafeProxy::staticFieldBase(::java::lang::reflect::FieldProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "staticFieldBase", "(Ljava/lang/reflect/Field;)Ljava/lang/Object;" );
	return ::java::lang::ObjectProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

jlong UnsafeProxy::allocateMemory(jlong p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "allocateMemory", "(J)J" );
	return JNIEnvHelper::CallLongMethod( _getPeerObject(), mid, p0 );
}

jlong UnsafeProxy::getAddress(jlong p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getAddress", "(J)J" );
	return JNIEnvHelper::CallLongMethod( _getPeerObject(), mid, p0 );
}

jlong UnsafeProxy::getLong(::java::lang::ObjectProxy p0, jlong p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getLong", "(Ljava/lang/Object;J)J" );
	return JNIEnvHelper::CallLongMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), p1 );
}

jlong UnsafeProxy::getLong(jlong p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getLong", "(J)J" );
	return JNIEnvHelper::CallLongMethod( _getPeerObject(), mid, p0 );
}

jlong UnsafeProxy::getLongVolatile(::java::lang::ObjectProxy p0, jlong p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getLongVolatile", "(Ljava/lang/Object;J)J" );
	return JNIEnvHelper::CallLongMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), p1 );
}

jlong UnsafeProxy::objectFieldOffset(::java::lang::reflect::FieldProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "objectFieldOffset", "(Ljava/lang/reflect/Field;)J" );
	return JNIEnvHelper::CallLongMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

jlong UnsafeProxy::reallocateMemory(jlong p0, jlong p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "reallocateMemory", "(JJ)J" );
	return JNIEnvHelper::CallLongMethod( _getPeerObject(), mid, p0, p1 );
}

jlong UnsafeProxy::staticFieldOffset(::java::lang::reflect::FieldProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "staticFieldOffset", "(Ljava/lang/reflect/Field;)J" );
	return JNIEnvHelper::CallLongMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

jshort UnsafeProxy::getShort(::java::lang::ObjectProxy p0, jlong p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getShort", "(Ljava/lang/Object;J)S" );
	return JNIEnvHelper::CallShortMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), p1 );
}

jshort UnsafeProxy::getShort(jlong p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getShort", "(J)S" );
	return JNIEnvHelper::CallShortMethod( _getPeerObject(), mid, p0 );
}

jshort UnsafeProxy::getShortVolatile(::java::lang::ObjectProxy p0, jlong p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getShortVolatile", "(Ljava/lang/Object;J)S" );
	return JNIEnvHelper::CallShortMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), p1 );
}

void UnsafeProxy::copyMemory(::java::lang::ObjectProxy p0, jlong p1, ::java::lang::ObjectProxy p2, jlong p3, jlong p4)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "copyMemory", "(Ljava/lang/Object;JLjava/lang/Object;JJ)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), p1, static_cast<jobject>( p2 ), p3, p4 );
}

void UnsafeProxy::ensureClassInitialized(::java::lang::ClassProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "ensureClassInitialized", "(Ljava/lang/Class;)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, static_cast<jclass>( p0 ) );
}

void UnsafeProxy::freeMemory(jlong p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "freeMemory", "(J)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, p0 );
}

void UnsafeProxy::fullFence()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "fullFence", "()V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid );
}

void UnsafeProxy::loadFence()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "loadFence", "()V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid );
}

void UnsafeProxy::monitorEnter(::java::lang::ObjectProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "monitorEnter", "(Ljava/lang/Object;)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

void UnsafeProxy::monitorExit(::java::lang::ObjectProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "monitorExit", "(Ljava/lang/Object;)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

void UnsafeProxy::park(jboolean p0, jlong p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "park", "(ZJ)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, p0, p1 );
}

void UnsafeProxy::putAddress(jlong p0, jlong p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "putAddress", "(JJ)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, p0, p1 );
}

void UnsafeProxy::putBoolean(::java::lang::ObjectProxy p0, jlong p1, jboolean p2)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "putBoolean", "(Ljava/lang/Object;JZ)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), p1, p2 );
}

void UnsafeProxy::putBooleanVolatile(::java::lang::ObjectProxy p0, jlong p1, jboolean p2)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "putBooleanVolatile", "(Ljava/lang/Object;JZ)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), p1, p2 );
}

void UnsafeProxy::putByte(::java::lang::ObjectProxy p0, jlong p1, jbyte p2)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "putByte", "(Ljava/lang/Object;JB)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), p1, p2 );
}

void UnsafeProxy::putByte(jlong p0, jbyte p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "putByte", "(JB)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, p0, p1 );
}

void UnsafeProxy::putByteVolatile(::java::lang::ObjectProxy p0, jlong p1, jbyte p2)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "putByteVolatile", "(Ljava/lang/Object;JB)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), p1, p2 );
}

void UnsafeProxy::putChar(::java::lang::ObjectProxy p0, jlong p1, jchar p2)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "putChar", "(Ljava/lang/Object;JC)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), p1, p2 );
}

void UnsafeProxy::putChar(jlong p0, jchar p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "putChar", "(JC)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, p0, p1 );
}

void UnsafeProxy::putCharVolatile(::java::lang::ObjectProxy p0, jlong p1, jchar p2)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "putCharVolatile", "(Ljava/lang/Object;JC)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), p1, p2 );
}

void UnsafeProxy::putDouble(::java::lang::ObjectProxy p0, jlong p1, jdouble p2)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "putDouble", "(Ljava/lang/Object;JD)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), p1, p2 );
}

void UnsafeProxy::putDouble(jlong p0, jdouble p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "putDouble", "(JD)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, p0, p1 );
}

void UnsafeProxy::putDoubleVolatile(::java::lang::ObjectProxy p0, jlong p1, jdouble p2)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "putDoubleVolatile", "(Ljava/lang/Object;JD)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), p1, p2 );
}

void UnsafeProxy::putFloat(::java::lang::ObjectProxy p0, jlong p1, jfloat p2)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "putFloat", "(Ljava/lang/Object;JF)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), p1, p2 );
}

void UnsafeProxy::putFloat(jlong p0, jfloat p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "putFloat", "(JF)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, p0, p1 );
}

void UnsafeProxy::putFloatVolatile(::java::lang::ObjectProxy p0, jlong p1, jfloat p2)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "putFloatVolatile", "(Ljava/lang/Object;JF)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), p1, p2 );
}

void UnsafeProxy::putInt(::java::lang::ObjectProxy p0, jlong p1, jint p2)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "putInt", "(Ljava/lang/Object;JI)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), p1, p2 );
}

void UnsafeProxy::putInt(jlong p0, jint p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "putInt", "(JI)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, p0, p1 );
}

void UnsafeProxy::putIntVolatile(::java::lang::ObjectProxy p0, jlong p1, jint p2)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "putIntVolatile", "(Ljava/lang/Object;JI)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), p1, p2 );
}

void UnsafeProxy::putLong(::java::lang::ObjectProxy p0, jlong p1, jlong p2)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "putLong", "(Ljava/lang/Object;JJ)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), p1, p2 );
}

void UnsafeProxy::putLong(jlong p0, jlong p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "putLong", "(JJ)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, p0, p1 );
}

void UnsafeProxy::putLongVolatile(::java::lang::ObjectProxy p0, jlong p1, jlong p2)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "putLongVolatile", "(Ljava/lang/Object;JJ)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), p1, p2 );
}

void UnsafeProxy::putObject(::java::lang::ObjectProxy p0, jlong p1, ::java::lang::ObjectProxy p2)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "putObject", "(Ljava/lang/Object;JLjava/lang/Object;)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), p1, static_cast<jobject>( p2 ) );
}

void UnsafeProxy::putObjectVolatile(::java::lang::ObjectProxy p0, jlong p1, ::java::lang::ObjectProxy p2)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "putObjectVolatile", "(Ljava/lang/Object;JLjava/lang/Object;)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), p1, static_cast<jobject>( p2 ) );
}

void UnsafeProxy::putOrderedInt(::java::lang::ObjectProxy p0, jlong p1, jint p2)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "putOrderedInt", "(Ljava/lang/Object;JI)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), p1, p2 );
}

void UnsafeProxy::putOrderedLong(::java::lang::ObjectProxy p0, jlong p1, jlong p2)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "putOrderedLong", "(Ljava/lang/Object;JJ)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), p1, p2 );
}

void UnsafeProxy::putOrderedObject(::java::lang::ObjectProxy p0, jlong p1, ::java::lang::ObjectProxy p2)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "putOrderedObject", "(Ljava/lang/Object;JLjava/lang/Object;)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), p1, static_cast<jobject>( p2 ) );
}

void UnsafeProxy::putShort(::java::lang::ObjectProxy p0, jlong p1, jshort p2)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "putShort", "(Ljava/lang/Object;JS)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), p1, p2 );
}

void UnsafeProxy::putShort(jlong p0, jshort p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "putShort", "(JS)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, p0, p1 );
}

void UnsafeProxy::putShortVolatile(::java::lang::ObjectProxy p0, jlong p1, jshort p2)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "putShortVolatile", "(Ljava/lang/Object;JS)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), p1, p2 );
}

void UnsafeProxy::setMemory(::java::lang::ObjectProxy p0, jlong p1, jlong p2, jbyte p3)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "setMemory", "(Ljava/lang/Object;JJB)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), p1, p2, p3 );
}

void UnsafeProxy::storeFence()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "storeFence", "()V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid );
}

void UnsafeProxy::throwException(::java::lang::ThrowableProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "throwException", "(Ljava/lang/Throwable;)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

void UnsafeProxy::unpark(::java::lang::ObjectProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "unpark", "(Ljava/lang/Object;)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

jshort UnsafeProxy::getShort(::java::lang::ObjectProxy p0, jint p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getShort", "(Ljava/lang/Object;I)S" );
	return JNIEnvHelper::CallShortMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), p1 );
}

void UnsafeProxy::copyMemory(jlong p0, jlong p1, jlong p2)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "copyMemory", "(JJJ)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, p0, p1, p2 );
}

void UnsafeProxy::putBoolean(::java::lang::ObjectProxy p0, jint p1, jboolean p2)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "putBoolean", "(Ljava/lang/Object;IZ)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), p1, p2 );
}

void UnsafeProxy::putByte(::java::lang::ObjectProxy p0, jint p1, jbyte p2)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "putByte", "(Ljava/lang/Object;IB)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), p1, p2 );
}

void UnsafeProxy::putChar(::java::lang::ObjectProxy p0, jint p1, jchar p2)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "putChar", "(Ljava/lang/Object;IC)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), p1, p2 );
}

void UnsafeProxy::putDouble(::java::lang::ObjectProxy p0, jint p1, jdouble p2)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "putDouble", "(Ljava/lang/Object;ID)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), p1, p2 );
}

void UnsafeProxy::putFloat(::java::lang::ObjectProxy p0, jint p1, jfloat p2)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "putFloat", "(Ljava/lang/Object;IF)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), p1, p2 );
}

void UnsafeProxy::putInt(::java::lang::ObjectProxy p0, jint p1, jint p2)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "putInt", "(Ljava/lang/Object;II)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), p1, p2 );
}

void UnsafeProxy::putLong(::java::lang::ObjectProxy p0, jint p1, jlong p2)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "putLong", "(Ljava/lang/Object;IJ)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), p1, p2 );
}

void UnsafeProxy::putObject(::java::lang::ObjectProxy p0, jint p1, ::java::lang::ObjectProxy p2)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "putObject", "(Ljava/lang/Object;ILjava/lang/Object;)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), p1, static_cast<jobject>( p2 ) );
}

void UnsafeProxy::putShort(::java::lang::ObjectProxy p0, jint p1, jshort p2)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "putShort", "(Ljava/lang/Object;IS)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), p1, p2 );
}

void UnsafeProxy::setMemory(jlong p0, jlong p1, jbyte p2)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "setMemory", "(JJB)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, p0, p1, p2 );
}

