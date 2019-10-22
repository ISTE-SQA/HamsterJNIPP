#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "DoubleBufferProxy.h"

// includes for parameter and return type proxy classes
#include "java\nio\ByteOrderProxy.h"
#include "java\lang\ObjectProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::nio;


std::string DoubleBufferProxy::className = "java/nio/DoubleBuffer";
jclass DoubleBufferProxy::objectClass = NULL;

jclass DoubleBufferProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

DoubleBufferProxy::DoubleBufferProxy(void* unused)
{
}

jobject DoubleBufferProxy::_getPeerObject() const
{
	return peerObject;
}

jclass DoubleBufferProxy::getObjectClass()
{
	return _getObjectClass();
}

DoubleBufferProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
DoubleBufferProxy::DoubleBufferProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

DoubleBufferProxy::~DoubleBufferProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

DoubleBufferProxy& DoubleBufferProxy::operator=(const DoubleBufferProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
jboolean DoubleBufferProxy::isDirect()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "isDirect", "()Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid );
}

jdouble DoubleBufferProxy::get()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "get", "()D" );
	return JNIEnvHelper::CallDoubleMethod( _getPeerObject(), mid );
}

jdouble DoubleBufferProxy::get(jint p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "get", "(I)D" );
	return JNIEnvHelper::CallDoubleMethod( _getPeerObject(), mid, p0 );
}

::java::nio::ByteOrderProxy DoubleBufferProxy::order()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "order", "()Ljava/nio/ByteOrder;" );
	return ::java::nio::ByteOrderProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::nio::DoubleBufferProxy DoubleBufferProxy::asReadOnlyBuffer()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "asReadOnlyBuffer", "()Ljava/nio/DoubleBuffer;" );
	return ::java::nio::DoubleBufferProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::nio::DoubleBufferProxy DoubleBufferProxy::compact()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "compact", "()Ljava/nio/DoubleBuffer;" );
	return ::java::nio::DoubleBufferProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::nio::DoubleBufferProxy DoubleBufferProxy::duplicate()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "duplicate", "()Ljava/nio/DoubleBuffer;" );
	return ::java::nio::DoubleBufferProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::nio::DoubleBufferProxy DoubleBufferProxy::put(jdouble p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "put", "(D)Ljava/nio/DoubleBuffer;" );
	return ::java::nio::DoubleBufferProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0 )  );
}

::java::nio::DoubleBufferProxy DoubleBufferProxy::put(jint p0, jdouble p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "put", "(ID)Ljava/nio/DoubleBuffer;" );
	return ::java::nio::DoubleBufferProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0, p1 )  );
}

::java::nio::DoubleBufferProxy DoubleBufferProxy::slice()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "slice", "()Ljava/nio/DoubleBuffer;" );
	return ::java::nio::DoubleBufferProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

jboolean DoubleBufferProxy::equals(::java::lang::ObjectProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "equals", "(Ljava/lang/Object;)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

jboolean DoubleBufferProxy::hasArray()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "hasArray", "()Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid );
}

::net::sourceforge::jnipp::JDoubleArrayHelper<1> DoubleBufferProxy::array()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "array", "()[D" );
	return ::net::sourceforge::jnipp::JDoubleArrayHelper<1>( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

jint DoubleBufferProxy::arrayOffset()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "arrayOffset", "()I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid );
}

::java::nio::DoubleBufferProxy DoubleBufferProxy::put(::net::sourceforge::jnipp::JDoubleArrayHelper<1> p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "put", "([D)Ljava/nio/DoubleBuffer;" );
	return ::java::nio::DoubleBufferProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jdoubleArray>( p0 ) )  );
}

jint DoubleBufferProxy::compareTo(::java::nio::DoubleBufferProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "compareTo", "(Ljava/nio/DoubleBuffer;)I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

jint DoubleBufferProxy::hashCode()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "hashCode", "()I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid );
}

::net::sourceforge::jnipp::JStringHelper DoubleBufferProxy::toString()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "toString", "()Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::nio::DoubleBufferProxy DoubleBufferProxy::get(::net::sourceforge::jnipp::JDoubleArrayHelper<1> p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "get", "([D)Ljava/nio/DoubleBuffer;" );
	return ::java::nio::DoubleBufferProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jdoubleArray>( p0 ) )  );
}

::java::nio::DoubleBufferProxy DoubleBufferProxy::get(::net::sourceforge::jnipp::JDoubleArrayHelper<1> p0, jint p1, jint p2)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "get", "([DII)Ljava/nio/DoubleBuffer;" );
	return ::java::nio::DoubleBufferProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jdoubleArray>( p0 ), p1, p2 )  );
}

::java::nio::DoubleBufferProxy DoubleBufferProxy::put(::net::sourceforge::jnipp::JDoubleArrayHelper<1> p0, jint p1, jint p2)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "put", "([DII)Ljava/nio/DoubleBuffer;" );
	return ::java::nio::DoubleBufferProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jdoubleArray>( p0 ), p1, p2 )  );
}

::java::nio::DoubleBufferProxy DoubleBufferProxy::put(::java::nio::DoubleBufferProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "put", "(Ljava/nio/DoubleBuffer;)Ljava/nio/DoubleBuffer;" );
	return ::java::nio::DoubleBufferProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::java::nio::DoubleBufferProxy DoubleBufferProxy::allocate(jint p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "allocate", "(I)Ljava/nio/DoubleBuffer;" );
	return ::java::nio::DoubleBufferProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, p0 )  );
}

::java::nio::DoubleBufferProxy DoubleBufferProxy::wrap(::net::sourceforge::jnipp::JDoubleArrayHelper<1> p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "wrap", "([D)Ljava/nio/DoubleBuffer;" );
	return ::java::nio::DoubleBufferProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, static_cast<jdoubleArray>( p0 ) )  );
}

::java::nio::DoubleBufferProxy DoubleBufferProxy::wrap(::net::sourceforge::jnipp::JDoubleArrayHelper<1> p0, jint p1, jint p2)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "wrap", "([DII)Ljava/nio/DoubleBuffer;" );
	return ::java::nio::DoubleBufferProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, static_cast<jdoubleArray>( p0 ), p1, p2 )  );
}

