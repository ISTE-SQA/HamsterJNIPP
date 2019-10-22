#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "IntBufferProxy.h"

// includes for parameter and return type proxy classes
#include "java\nio\ByteOrderProxy.h"
#include "java\lang\ObjectProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::nio;


std::string IntBufferProxy::className = "java/nio/IntBuffer";
jclass IntBufferProxy::objectClass = NULL;

jclass IntBufferProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

IntBufferProxy::IntBufferProxy(void* unused)
{
}

jobject IntBufferProxy::_getPeerObject() const
{
	return peerObject;
}

jclass IntBufferProxy::getObjectClass()
{
	return _getObjectClass();
}

IntBufferProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
IntBufferProxy::IntBufferProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

IntBufferProxy::~IntBufferProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

IntBufferProxy& IntBufferProxy::operator=(const IntBufferProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
jboolean IntBufferProxy::isDirect()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "isDirect", "()Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid );
}

jint IntBufferProxy::get()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "get", "()I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid );
}

jint IntBufferProxy::get(jint p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "get", "(I)I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid, p0 );
}

::java::nio::ByteOrderProxy IntBufferProxy::order()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "order", "()Ljava/nio/ByteOrder;" );
	return ::java::nio::ByteOrderProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::nio::IntBufferProxy IntBufferProxy::asReadOnlyBuffer()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "asReadOnlyBuffer", "()Ljava/nio/IntBuffer;" );
	return ::java::nio::IntBufferProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::nio::IntBufferProxy IntBufferProxy::compact()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "compact", "()Ljava/nio/IntBuffer;" );
	return ::java::nio::IntBufferProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::nio::IntBufferProxy IntBufferProxy::duplicate()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "duplicate", "()Ljava/nio/IntBuffer;" );
	return ::java::nio::IntBufferProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::nio::IntBufferProxy IntBufferProxy::put(jint p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "put", "(I)Ljava/nio/IntBuffer;" );
	return ::java::nio::IntBufferProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0 )  );
}

::java::nio::IntBufferProxy IntBufferProxy::put(jint p0, jint p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "put", "(II)Ljava/nio/IntBuffer;" );
	return ::java::nio::IntBufferProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0, p1 )  );
}

::java::nio::IntBufferProxy IntBufferProxy::slice()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "slice", "()Ljava/nio/IntBuffer;" );
	return ::java::nio::IntBufferProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

jboolean IntBufferProxy::equals(::java::lang::ObjectProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "equals", "(Ljava/lang/Object;)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

jboolean IntBufferProxy::hasArray()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "hasArray", "()Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid );
}

jint IntBufferProxy::arrayOffset()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "arrayOffset", "()I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid );
}

::net::sourceforge::jnipp::JIntArrayHelper<1> IntBufferProxy::array()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "array", "()[I" );
	return ::net::sourceforge::jnipp::JIntArrayHelper<1>( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::nio::IntBufferProxy IntBufferProxy::put(::net::sourceforge::jnipp::JIntArrayHelper<1> p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "put", "([I)Ljava/nio/IntBuffer;" );
	return ::java::nio::IntBufferProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jintArray>( p0 ) )  );
}

jint IntBufferProxy::compareTo(::java::nio::IntBufferProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "compareTo", "(Ljava/nio/IntBuffer;)I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

jint IntBufferProxy::hashCode()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "hashCode", "()I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid );
}

::net::sourceforge::jnipp::JStringHelper IntBufferProxy::toString()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "toString", "()Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::nio::IntBufferProxy IntBufferProxy::get(::net::sourceforge::jnipp::JIntArrayHelper<1> p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "get", "([I)Ljava/nio/IntBuffer;" );
	return ::java::nio::IntBufferProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jintArray>( p0 ) )  );
}

::java::nio::IntBufferProxy IntBufferProxy::get(::net::sourceforge::jnipp::JIntArrayHelper<1> p0, jint p1, jint p2)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "get", "([III)Ljava/nio/IntBuffer;" );
	return ::java::nio::IntBufferProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jintArray>( p0 ), p1, p2 )  );
}

::java::nio::IntBufferProxy IntBufferProxy::put(::net::sourceforge::jnipp::JIntArrayHelper<1> p0, jint p1, jint p2)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "put", "([III)Ljava/nio/IntBuffer;" );
	return ::java::nio::IntBufferProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jintArray>( p0 ), p1, p2 )  );
}

::java::nio::IntBufferProxy IntBufferProxy::put(::java::nio::IntBufferProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "put", "(Ljava/nio/IntBuffer;)Ljava/nio/IntBuffer;" );
	return ::java::nio::IntBufferProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::java::nio::IntBufferProxy IntBufferProxy::allocate(jint p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "allocate", "(I)Ljava/nio/IntBuffer;" );
	return ::java::nio::IntBufferProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, p0 )  );
}

::java::nio::IntBufferProxy IntBufferProxy::wrap(::net::sourceforge::jnipp::JIntArrayHelper<1> p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "wrap", "([I)Ljava/nio/IntBuffer;" );
	return ::java::nio::IntBufferProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, static_cast<jintArray>( p0 ) )  );
}

::java::nio::IntBufferProxy IntBufferProxy::wrap(::net::sourceforge::jnipp::JIntArrayHelper<1> p0, jint p1, jint p2)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "wrap", "([III)Ljava/nio/IntBuffer;" );
	return ::java::nio::IntBufferProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, static_cast<jintArray>( p0 ), p1, p2 )  );
}

