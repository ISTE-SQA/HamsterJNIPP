#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "ByteBufferProxy.h"

// includes for parameter and return type proxy classes
#include "java\nio\CharBufferProxy.h"
#include "java\nio\DoubleBufferProxy.h"
#include "java\nio\FloatBufferProxy.h"
#include "java\nio\IntBufferProxy.h"
#include "java\nio\LongBufferProxy.h"
#include "java\nio\ShortBufferProxy.h"
#include "java\lang\ObjectProxy.h"
#include "java\nio\ByteOrderProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::nio;


std::string ByteBufferProxy::className = "java/nio/ByteBuffer";
jclass ByteBufferProxy::objectClass = NULL;

jclass ByteBufferProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

ByteBufferProxy::ByteBufferProxy(void* unused)
{
}

jobject ByteBufferProxy::_getPeerObject() const
{
	return peerObject;
}

jclass ByteBufferProxy::getObjectClass()
{
	return _getObjectClass();
}

ByteBufferProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
ByteBufferProxy::ByteBufferProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

ByteBufferProxy::~ByteBufferProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

ByteBufferProxy& ByteBufferProxy::operator=(const ByteBufferProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
jboolean ByteBufferProxy::isDirect()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "isDirect", "()Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid );
}

jbyte ByteBufferProxy::get()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "get", "()B" );
	return JNIEnvHelper::CallByteMethod( _getPeerObject(), mid );
}

jbyte ByteBufferProxy::get(jint p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "get", "(I)B" );
	return JNIEnvHelper::CallByteMethod( _getPeerObject(), mid, p0 );
}

jchar ByteBufferProxy::getChar()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getChar", "()C" );
	return JNIEnvHelper::CallCharMethod( _getPeerObject(), mid );
}

jchar ByteBufferProxy::getChar(jint p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getChar", "(I)C" );
	return JNIEnvHelper::CallCharMethod( _getPeerObject(), mid, p0 );
}

jdouble ByteBufferProxy::getDouble()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getDouble", "()D" );
	return JNIEnvHelper::CallDoubleMethod( _getPeerObject(), mid );
}

jdouble ByteBufferProxy::getDouble(jint p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getDouble", "(I)D" );
	return JNIEnvHelper::CallDoubleMethod( _getPeerObject(), mid, p0 );
}

jfloat ByteBufferProxy::getFloat()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getFloat", "()F" );
	return JNIEnvHelper::CallFloatMethod( _getPeerObject(), mid );
}

jfloat ByteBufferProxy::getFloat(jint p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getFloat", "(I)F" );
	return JNIEnvHelper::CallFloatMethod( _getPeerObject(), mid, p0 );
}

jint ByteBufferProxy::getInt()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getInt", "()I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid );
}

jint ByteBufferProxy::getInt(jint p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getInt", "(I)I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid, p0 );
}

::java::nio::ByteBufferProxy ByteBufferProxy::asReadOnlyBuffer()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "asReadOnlyBuffer", "()Ljava/nio/ByteBuffer;" );
	return ::java::nio::ByteBufferProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::nio::ByteBufferProxy ByteBufferProxy::compact()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "compact", "()Ljava/nio/ByteBuffer;" );
	return ::java::nio::ByteBufferProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::nio::ByteBufferProxy ByteBufferProxy::duplicate()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "duplicate", "()Ljava/nio/ByteBuffer;" );
	return ::java::nio::ByteBufferProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::nio::ByteBufferProxy ByteBufferProxy::put(jbyte p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "put", "(B)Ljava/nio/ByteBuffer;" );
	return ::java::nio::ByteBufferProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0 )  );
}

::java::nio::ByteBufferProxy ByteBufferProxy::put(jint p0, jbyte p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "put", "(IB)Ljava/nio/ByteBuffer;" );
	return ::java::nio::ByteBufferProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0, p1 )  );
}

::java::nio::ByteBufferProxy ByteBufferProxy::putChar(jchar p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "putChar", "(C)Ljava/nio/ByteBuffer;" );
	return ::java::nio::ByteBufferProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0 )  );
}

::java::nio::ByteBufferProxy ByteBufferProxy::putChar(jint p0, jchar p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "putChar", "(IC)Ljava/nio/ByteBuffer;" );
	return ::java::nio::ByteBufferProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0, p1 )  );
}

::java::nio::ByteBufferProxy ByteBufferProxy::putDouble(jdouble p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "putDouble", "(D)Ljava/nio/ByteBuffer;" );
	return ::java::nio::ByteBufferProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0 )  );
}

::java::nio::ByteBufferProxy ByteBufferProxy::putDouble(jint p0, jdouble p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "putDouble", "(ID)Ljava/nio/ByteBuffer;" );
	return ::java::nio::ByteBufferProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0, p1 )  );
}

::java::nio::ByteBufferProxy ByteBufferProxy::putFloat(jfloat p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "putFloat", "(F)Ljava/nio/ByteBuffer;" );
	return ::java::nio::ByteBufferProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0 )  );
}

::java::nio::ByteBufferProxy ByteBufferProxy::putFloat(jint p0, jfloat p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "putFloat", "(IF)Ljava/nio/ByteBuffer;" );
	return ::java::nio::ByteBufferProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0, p1 )  );
}

::java::nio::ByteBufferProxy ByteBufferProxy::putInt(jint p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "putInt", "(I)Ljava/nio/ByteBuffer;" );
	return ::java::nio::ByteBufferProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0 )  );
}

::java::nio::ByteBufferProxy ByteBufferProxy::putInt(jint p0, jint p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "putInt", "(II)Ljava/nio/ByteBuffer;" );
	return ::java::nio::ByteBufferProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0, p1 )  );
}

::java::nio::ByteBufferProxy ByteBufferProxy::putLong(jint p0, jlong p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "putLong", "(IJ)Ljava/nio/ByteBuffer;" );
	return ::java::nio::ByteBufferProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0, p1 )  );
}

::java::nio::ByteBufferProxy ByteBufferProxy::putLong(jlong p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "putLong", "(J)Ljava/nio/ByteBuffer;" );
	return ::java::nio::ByteBufferProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0 )  );
}

::java::nio::ByteBufferProxy ByteBufferProxy::putShort(jint p0, jshort p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "putShort", "(IS)Ljava/nio/ByteBuffer;" );
	return ::java::nio::ByteBufferProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0, p1 )  );
}

::java::nio::ByteBufferProxy ByteBufferProxy::putShort(jshort p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "putShort", "(S)Ljava/nio/ByteBuffer;" );
	return ::java::nio::ByteBufferProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0 )  );
}

::java::nio::ByteBufferProxy ByteBufferProxy::slice()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "slice", "()Ljava/nio/ByteBuffer;" );
	return ::java::nio::ByteBufferProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::nio::CharBufferProxy ByteBufferProxy::asCharBuffer()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "asCharBuffer", "()Ljava/nio/CharBuffer;" );
	return ::java::nio::CharBufferProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::nio::DoubleBufferProxy ByteBufferProxy::asDoubleBuffer()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "asDoubleBuffer", "()Ljava/nio/DoubleBuffer;" );
	return ::java::nio::DoubleBufferProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::nio::FloatBufferProxy ByteBufferProxy::asFloatBuffer()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "asFloatBuffer", "()Ljava/nio/FloatBuffer;" );
	return ::java::nio::FloatBufferProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::nio::IntBufferProxy ByteBufferProxy::asIntBuffer()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "asIntBuffer", "()Ljava/nio/IntBuffer;" );
	return ::java::nio::IntBufferProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::nio::LongBufferProxy ByteBufferProxy::asLongBuffer()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "asLongBuffer", "()Ljava/nio/LongBuffer;" );
	return ::java::nio::LongBufferProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::nio::ShortBufferProxy ByteBufferProxy::asShortBuffer()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "asShortBuffer", "()Ljava/nio/ShortBuffer;" );
	return ::java::nio::ShortBufferProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

jlong ByteBufferProxy::getLong()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getLong", "()J" );
	return JNIEnvHelper::CallLongMethod( _getPeerObject(), mid );
}

jlong ByteBufferProxy::getLong(jint p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getLong", "(I)J" );
	return JNIEnvHelper::CallLongMethod( _getPeerObject(), mid, p0 );
}

jshort ByteBufferProxy::getShort()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getShort", "()S" );
	return JNIEnvHelper::CallShortMethod( _getPeerObject(), mid );
}

jshort ByteBufferProxy::getShort(jint p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getShort", "(I)S" );
	return JNIEnvHelper::CallShortMethod( _getPeerObject(), mid, p0 );
}

jboolean ByteBufferProxy::equals(::java::lang::ObjectProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "equals", "(Ljava/lang/Object;)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

jboolean ByteBufferProxy::hasArray()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "hasArray", "()Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid );
}

::net::sourceforge::jnipp::JByteArrayHelper<1> ByteBufferProxy::array()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "array", "()[B" );
	return ::net::sourceforge::jnipp::JByteArrayHelper<1>( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

jint ByteBufferProxy::arrayOffset()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "arrayOffset", "()I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid );
}

::java::nio::ByteBufferProxy ByteBufferProxy::order(::java::nio::ByteOrderProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "order", "(Ljava/nio/ByteOrder;)Ljava/nio/ByteBuffer;" );
	return ::java::nio::ByteBufferProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::java::nio::ByteBufferProxy ByteBufferProxy::put(::net::sourceforge::jnipp::JByteArrayHelper<1> p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "put", "([B)Ljava/nio/ByteBuffer;" );
	return ::java::nio::ByteBufferProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jbyteArray>( p0 ) )  );
}

::java::nio::ByteOrderProxy ByteBufferProxy::order()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "order", "()Ljava/nio/ByteOrder;" );
	return ::java::nio::ByteOrderProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

jint ByteBufferProxy::compareTo(::java::nio::ByteBufferProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "compareTo", "(Ljava/nio/ByteBuffer;)I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

jint ByteBufferProxy::hashCode()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "hashCode", "()I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid );
}

::net::sourceforge::jnipp::JStringHelper ByteBufferProxy::toString()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "toString", "()Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::nio::ByteBufferProxy ByteBufferProxy::get(::net::sourceforge::jnipp::JByteArrayHelper<1> p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "get", "([B)Ljava/nio/ByteBuffer;" );
	return ::java::nio::ByteBufferProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jbyteArray>( p0 ) )  );
}

::java::nio::ByteBufferProxy ByteBufferProxy::get(::net::sourceforge::jnipp::JByteArrayHelper<1> p0, jint p1, jint p2)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "get", "([BII)Ljava/nio/ByteBuffer;" );
	return ::java::nio::ByteBufferProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jbyteArray>( p0 ), p1, p2 )  );
}

::java::nio::ByteBufferProxy ByteBufferProxy::put(::net::sourceforge::jnipp::JByteArrayHelper<1> p0, jint p1, jint p2)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "put", "([BII)Ljava/nio/ByteBuffer;" );
	return ::java::nio::ByteBufferProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jbyteArray>( p0 ), p1, p2 )  );
}

::java::nio::ByteBufferProxy ByteBufferProxy::put(::java::nio::ByteBufferProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "put", "(Ljava/nio/ByteBuffer;)Ljava/nio/ByteBuffer;" );
	return ::java::nio::ByteBufferProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::java::nio::ByteBufferProxy ByteBufferProxy::allocate(jint p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "allocate", "(I)Ljava/nio/ByteBuffer;" );
	return ::java::nio::ByteBufferProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, p0 )  );
}

::java::nio::ByteBufferProxy ByteBufferProxy::allocateDirect(jint p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "allocateDirect", "(I)Ljava/nio/ByteBuffer;" );
	return ::java::nio::ByteBufferProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, p0 )  );
}

::java::nio::ByteBufferProxy ByteBufferProxy::wrap(::net::sourceforge::jnipp::JByteArrayHelper<1> p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "wrap", "([B)Ljava/nio/ByteBuffer;" );
	return ::java::nio::ByteBufferProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, static_cast<jbyteArray>( p0 ) )  );
}

::java::nio::ByteBufferProxy ByteBufferProxy::wrap(::net::sourceforge::jnipp::JByteArrayHelper<1> p0, jint p1, jint p2)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "wrap", "([BII)Ljava/nio/ByteBuffer;" );
	return ::java::nio::ByteBufferProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, static_cast<jbyteArray>( p0 ), p1, p2 )  );
}

