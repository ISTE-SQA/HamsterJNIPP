#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "ShortBufferProxy.h"

// includes for parameter and return type proxy classes
#include "java\nio\ByteOrderProxy.h"
#include "java\lang\ObjectProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::nio;


std::string ShortBufferProxy::className = "java/nio/ShortBuffer";
jclass ShortBufferProxy::objectClass = NULL;

jclass ShortBufferProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

ShortBufferProxy::ShortBufferProxy(void* unused)
{
}

jobject ShortBufferProxy::_getPeerObject() const
{
	return peerObject;
}

jclass ShortBufferProxy::getObjectClass()
{
	return _getObjectClass();
}

ShortBufferProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
ShortBufferProxy::ShortBufferProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

ShortBufferProxy::~ShortBufferProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

ShortBufferProxy& ShortBufferProxy::operator=(const ShortBufferProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
jboolean ShortBufferProxy::isDirect()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "isDirect", "()Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid );
}

::java::nio::ByteOrderProxy ShortBufferProxy::order()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "order", "()Ljava/nio/ByteOrder;" );
	return ::java::nio::ByteOrderProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::nio::ShortBufferProxy ShortBufferProxy::asReadOnlyBuffer()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "asReadOnlyBuffer", "()Ljava/nio/ShortBuffer;" );
	return ::java::nio::ShortBufferProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::nio::ShortBufferProxy ShortBufferProxy::compact()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "compact", "()Ljava/nio/ShortBuffer;" );
	return ::java::nio::ShortBufferProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::nio::ShortBufferProxy ShortBufferProxy::duplicate()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "duplicate", "()Ljava/nio/ShortBuffer;" );
	return ::java::nio::ShortBufferProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::nio::ShortBufferProxy ShortBufferProxy::put(jint p0, jshort p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "put", "(IS)Ljava/nio/ShortBuffer;" );
	return ::java::nio::ShortBufferProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0, p1 )  );
}

::java::nio::ShortBufferProxy ShortBufferProxy::put(jshort p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "put", "(S)Ljava/nio/ShortBuffer;" );
	return ::java::nio::ShortBufferProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0 )  );
}

::java::nio::ShortBufferProxy ShortBufferProxy::slice()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "slice", "()Ljava/nio/ShortBuffer;" );
	return ::java::nio::ShortBufferProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

jshort ShortBufferProxy::get()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "get", "()S" );
	return JNIEnvHelper::CallShortMethod( _getPeerObject(), mid );
}

jshort ShortBufferProxy::get(jint p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "get", "(I)S" );
	return JNIEnvHelper::CallShortMethod( _getPeerObject(), mid, p0 );
}

jboolean ShortBufferProxy::equals(::java::lang::ObjectProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "equals", "(Ljava/lang/Object;)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

jboolean ShortBufferProxy::hasArray()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "hasArray", "()Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid );
}

jint ShortBufferProxy::arrayOffset()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "arrayOffset", "()I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid );
}

::java::nio::ShortBufferProxy ShortBufferProxy::put(::net::sourceforge::jnipp::JShortArrayHelper<1> p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "put", "([S)Ljava/nio/ShortBuffer;" );
	return ::java::nio::ShortBufferProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jshortArray>( p0 ) )  );
}

::net::sourceforge::jnipp::JShortArrayHelper<1> ShortBufferProxy::array()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "array", "()[S" );
	return ::net::sourceforge::jnipp::JShortArrayHelper<1>( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

jint ShortBufferProxy::compareTo(::java::nio::ShortBufferProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "compareTo", "(Ljava/nio/ShortBuffer;)I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

jint ShortBufferProxy::hashCode()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "hashCode", "()I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid );
}

::net::sourceforge::jnipp::JStringHelper ShortBufferProxy::toString()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "toString", "()Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::nio::ShortBufferProxy ShortBufferProxy::get(::net::sourceforge::jnipp::JShortArrayHelper<1> p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "get", "([S)Ljava/nio/ShortBuffer;" );
	return ::java::nio::ShortBufferProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jshortArray>( p0 ) )  );
}

::java::nio::ShortBufferProxy ShortBufferProxy::get(::net::sourceforge::jnipp::JShortArrayHelper<1> p0, jint p1, jint p2)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "get", "([SII)Ljava/nio/ShortBuffer;" );
	return ::java::nio::ShortBufferProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jshortArray>( p0 ), p1, p2 )  );
}

::java::nio::ShortBufferProxy ShortBufferProxy::put(::java::nio::ShortBufferProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "put", "(Ljava/nio/ShortBuffer;)Ljava/nio/ShortBuffer;" );
	return ::java::nio::ShortBufferProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::java::nio::ShortBufferProxy ShortBufferProxy::put(::net::sourceforge::jnipp::JShortArrayHelper<1> p0, jint p1, jint p2)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "put", "([SII)Ljava/nio/ShortBuffer;" );
	return ::java::nio::ShortBufferProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jshortArray>( p0 ), p1, p2 )  );
}

::java::nio::ShortBufferProxy ShortBufferProxy::allocate(jint p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "allocate", "(I)Ljava/nio/ShortBuffer;" );
	return ::java::nio::ShortBufferProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, p0 )  );
}

::java::nio::ShortBufferProxy ShortBufferProxy::wrap(::net::sourceforge::jnipp::JShortArrayHelper<1> p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "wrap", "([S)Ljava/nio/ShortBuffer;" );
	return ::java::nio::ShortBufferProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, static_cast<jshortArray>( p0 ) )  );
}

::java::nio::ShortBufferProxy ShortBufferProxy::wrap(::net::sourceforge::jnipp::JShortArrayHelper<1> p0, jint p1, jint p2)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "wrap", "([SII)Ljava/nio/ShortBuffer;" );
	return ::java::nio::ShortBufferProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, static_cast<jshortArray>( p0 ), p1, p2 )  );
}

