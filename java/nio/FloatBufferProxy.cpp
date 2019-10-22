#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "FloatBufferProxy.h"

// includes for parameter and return type proxy classes
#include "java\nio\ByteOrderProxy.h"
#include "java\lang\ObjectProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::nio;


std::string FloatBufferProxy::className = "java/nio/FloatBuffer";
jclass FloatBufferProxy::objectClass = NULL;

jclass FloatBufferProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

FloatBufferProxy::FloatBufferProxy(void* unused)
{
}

jobject FloatBufferProxy::_getPeerObject() const
{
	return peerObject;
}

jclass FloatBufferProxy::getObjectClass()
{
	return _getObjectClass();
}

FloatBufferProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
FloatBufferProxy::FloatBufferProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

FloatBufferProxy::~FloatBufferProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

FloatBufferProxy& FloatBufferProxy::operator=(const FloatBufferProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
jboolean FloatBufferProxy::isDirect()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "isDirect", "()Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid );
}

jfloat FloatBufferProxy::get()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "get", "()F" );
	return JNIEnvHelper::CallFloatMethod( _getPeerObject(), mid );
}

jfloat FloatBufferProxy::get(jint p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "get", "(I)F" );
	return JNIEnvHelper::CallFloatMethod( _getPeerObject(), mid, p0 );
}

::java::nio::ByteOrderProxy FloatBufferProxy::order()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "order", "()Ljava/nio/ByteOrder;" );
	return ::java::nio::ByteOrderProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::nio::FloatBufferProxy FloatBufferProxy::asReadOnlyBuffer()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "asReadOnlyBuffer", "()Ljava/nio/FloatBuffer;" );
	return ::java::nio::FloatBufferProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::nio::FloatBufferProxy FloatBufferProxy::compact()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "compact", "()Ljava/nio/FloatBuffer;" );
	return ::java::nio::FloatBufferProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::nio::FloatBufferProxy FloatBufferProxy::duplicate()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "duplicate", "()Ljava/nio/FloatBuffer;" );
	return ::java::nio::FloatBufferProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::nio::FloatBufferProxy FloatBufferProxy::put(jfloat p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "put", "(F)Ljava/nio/FloatBuffer;" );
	return ::java::nio::FloatBufferProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0 )  );
}

::java::nio::FloatBufferProxy FloatBufferProxy::put(jint p0, jfloat p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "put", "(IF)Ljava/nio/FloatBuffer;" );
	return ::java::nio::FloatBufferProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0, p1 )  );
}

::java::nio::FloatBufferProxy FloatBufferProxy::slice()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "slice", "()Ljava/nio/FloatBuffer;" );
	return ::java::nio::FloatBufferProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

jboolean FloatBufferProxy::equals(::java::lang::ObjectProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "equals", "(Ljava/lang/Object;)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

jboolean FloatBufferProxy::hasArray()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "hasArray", "()Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid );
}

::net::sourceforge::jnipp::JFloatArrayHelper<1> FloatBufferProxy::array()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "array", "()[F" );
	return ::net::sourceforge::jnipp::JFloatArrayHelper<1>( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

jint FloatBufferProxy::arrayOffset()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "arrayOffset", "()I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid );
}

::java::nio::FloatBufferProxy FloatBufferProxy::put(::net::sourceforge::jnipp::JFloatArrayHelper<1> p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "put", "([F)Ljava/nio/FloatBuffer;" );
	return ::java::nio::FloatBufferProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jfloatArray>( p0 ) )  );
}

jint FloatBufferProxy::compareTo(::java::nio::FloatBufferProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "compareTo", "(Ljava/nio/FloatBuffer;)I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

jint FloatBufferProxy::hashCode()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "hashCode", "()I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid );
}

::net::sourceforge::jnipp::JStringHelper FloatBufferProxy::toString()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "toString", "()Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::nio::FloatBufferProxy FloatBufferProxy::get(::net::sourceforge::jnipp::JFloatArrayHelper<1> p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "get", "([F)Ljava/nio/FloatBuffer;" );
	return ::java::nio::FloatBufferProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jfloatArray>( p0 ) )  );
}

::java::nio::FloatBufferProxy FloatBufferProxy::get(::net::sourceforge::jnipp::JFloatArrayHelper<1> p0, jint p1, jint p2)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "get", "([FII)Ljava/nio/FloatBuffer;" );
	return ::java::nio::FloatBufferProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jfloatArray>( p0 ), p1, p2 )  );
}

::java::nio::FloatBufferProxy FloatBufferProxy::put(::net::sourceforge::jnipp::JFloatArrayHelper<1> p0, jint p1, jint p2)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "put", "([FII)Ljava/nio/FloatBuffer;" );
	return ::java::nio::FloatBufferProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jfloatArray>( p0 ), p1, p2 )  );
}

::java::nio::FloatBufferProxy FloatBufferProxy::put(::java::nio::FloatBufferProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "put", "(Ljava/nio/FloatBuffer;)Ljava/nio/FloatBuffer;" );
	return ::java::nio::FloatBufferProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::java::nio::FloatBufferProxy FloatBufferProxy::allocate(jint p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "allocate", "(I)Ljava/nio/FloatBuffer;" );
	return ::java::nio::FloatBufferProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, p0 )  );
}

::java::nio::FloatBufferProxy FloatBufferProxy::wrap(::net::sourceforge::jnipp::JFloatArrayHelper<1> p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "wrap", "([F)Ljava/nio/FloatBuffer;" );
	return ::java::nio::FloatBufferProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, static_cast<jfloatArray>( p0 ) )  );
}

::java::nio::FloatBufferProxy FloatBufferProxy::wrap(::net::sourceforge::jnipp::JFloatArrayHelper<1> p0, jint p1, jint p2)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "wrap", "([FII)Ljava/nio/FloatBuffer;" );
	return ::java::nio::FloatBufferProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, static_cast<jfloatArray>( p0 ), p1, p2 )  );
}

