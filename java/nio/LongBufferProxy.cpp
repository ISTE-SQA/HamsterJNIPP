#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "LongBufferProxy.h"

// includes for parameter and return type proxy classes
#include "java\nio\ByteOrderProxy.h"
#include "java\lang\ObjectProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::nio;


std::string LongBufferProxy::className = "java/nio/LongBuffer";
jclass LongBufferProxy::objectClass = NULL;

jclass LongBufferProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

LongBufferProxy::LongBufferProxy(void* unused)
{
}

jobject LongBufferProxy::_getPeerObject() const
{
	return peerObject;
}

jclass LongBufferProxy::getObjectClass()
{
	return _getObjectClass();
}

LongBufferProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
LongBufferProxy::LongBufferProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

LongBufferProxy::~LongBufferProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

LongBufferProxy& LongBufferProxy::operator=(const LongBufferProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
jboolean LongBufferProxy::isDirect()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "isDirect", "()Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid );
}

::java::nio::ByteOrderProxy LongBufferProxy::order()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "order", "()Ljava/nio/ByteOrder;" );
	return ::java::nio::ByteOrderProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::nio::LongBufferProxy LongBufferProxy::asReadOnlyBuffer()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "asReadOnlyBuffer", "()Ljava/nio/LongBuffer;" );
	return ::java::nio::LongBufferProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::nio::LongBufferProxy LongBufferProxy::compact()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "compact", "()Ljava/nio/LongBuffer;" );
	return ::java::nio::LongBufferProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::nio::LongBufferProxy LongBufferProxy::duplicate()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "duplicate", "()Ljava/nio/LongBuffer;" );
	return ::java::nio::LongBufferProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::nio::LongBufferProxy LongBufferProxy::put(jint p0, jlong p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "put", "(IJ)Ljava/nio/LongBuffer;" );
	return ::java::nio::LongBufferProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0, p1 )  );
}

::java::nio::LongBufferProxy LongBufferProxy::put(jlong p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "put", "(J)Ljava/nio/LongBuffer;" );
	return ::java::nio::LongBufferProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0 )  );
}

::java::nio::LongBufferProxy LongBufferProxy::slice()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "slice", "()Ljava/nio/LongBuffer;" );
	return ::java::nio::LongBufferProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

jlong LongBufferProxy::get()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "get", "()J" );
	return JNIEnvHelper::CallLongMethod( _getPeerObject(), mid );
}

jlong LongBufferProxy::get(jint p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "get", "(I)J" );
	return JNIEnvHelper::CallLongMethod( _getPeerObject(), mid, p0 );
}

jboolean LongBufferProxy::equals(::java::lang::ObjectProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "equals", "(Ljava/lang/Object;)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

jboolean LongBufferProxy::hasArray()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "hasArray", "()Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid );
}

jint LongBufferProxy::arrayOffset()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "arrayOffset", "()I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid );
}

::java::nio::LongBufferProxy LongBufferProxy::put(::net::sourceforge::jnipp::JLongArrayHelper<1> p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "put", "([J)Ljava/nio/LongBuffer;" );
	return ::java::nio::LongBufferProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jlongArray>( p0 ) )  );
}

::net::sourceforge::jnipp::JLongArrayHelper<1> LongBufferProxy::array()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "array", "()[J" );
	return ::net::sourceforge::jnipp::JLongArrayHelper<1>( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

jint LongBufferProxy::compareTo(::java::nio::LongBufferProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "compareTo", "(Ljava/nio/LongBuffer;)I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

jint LongBufferProxy::hashCode()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "hashCode", "()I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid );
}

::net::sourceforge::jnipp::JStringHelper LongBufferProxy::toString()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "toString", "()Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::nio::LongBufferProxy LongBufferProxy::get(::net::sourceforge::jnipp::JLongArrayHelper<1> p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "get", "([J)Ljava/nio/LongBuffer;" );
	return ::java::nio::LongBufferProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jlongArray>( p0 ) )  );
}

::java::nio::LongBufferProxy LongBufferProxy::get(::net::sourceforge::jnipp::JLongArrayHelper<1> p0, jint p1, jint p2)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "get", "([JII)Ljava/nio/LongBuffer;" );
	return ::java::nio::LongBufferProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jlongArray>( p0 ), p1, p2 )  );
}

::java::nio::LongBufferProxy LongBufferProxy::put(::java::nio::LongBufferProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "put", "(Ljava/nio/LongBuffer;)Ljava/nio/LongBuffer;" );
	return ::java::nio::LongBufferProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::java::nio::LongBufferProxy LongBufferProxy::put(::net::sourceforge::jnipp::JLongArrayHelper<1> p0, jint p1, jint p2)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "put", "([JII)Ljava/nio/LongBuffer;" );
	return ::java::nio::LongBufferProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jlongArray>( p0 ), p1, p2 )  );
}

::java::nio::LongBufferProxy LongBufferProxy::allocate(jint p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "allocate", "(I)Ljava/nio/LongBuffer;" );
	return ::java::nio::LongBufferProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, p0 )  );
}

::java::nio::LongBufferProxy LongBufferProxy::wrap(::net::sourceforge::jnipp::JLongArrayHelper<1> p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "wrap", "([J)Ljava/nio/LongBuffer;" );
	return ::java::nio::LongBufferProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, static_cast<jlongArray>( p0 ) )  );
}

::java::nio::LongBufferProxy LongBufferProxy::wrap(::net::sourceforge::jnipp::JLongArrayHelper<1> p0, jint p1, jint p2)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "wrap", "([JII)Ljava/nio/LongBuffer;" );
	return ::java::nio::LongBufferProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, static_cast<jlongArray>( p0 ), p1, p2 )  );
}

