#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "CharBufferProxy.h"

// includes for parameter and return type proxy classes
#include "java\nio\ByteOrderProxy.h"
#include "java\lang\ObjectProxy.h"
#include "java\lang\CharSequenceProxy.h"
#include "java\util\stream\IntStreamProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::nio;


std::string CharBufferProxy::className = "java/nio/CharBuffer";
jclass CharBufferProxy::objectClass = NULL;

jclass CharBufferProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

CharBufferProxy::CharBufferProxy(void* unused)
{
}

jobject CharBufferProxy::_getPeerObject() const
{
	return peerObject;
}

jclass CharBufferProxy::getObjectClass()
{
	return _getObjectClass();
}

CharBufferProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
CharBufferProxy::CharBufferProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

CharBufferProxy::~CharBufferProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

CharBufferProxy& CharBufferProxy::operator=(const CharBufferProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
jboolean CharBufferProxy::isDirect()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "isDirect", "()Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid );
}

jchar CharBufferProxy::get()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "get", "()C" );
	return JNIEnvHelper::CallCharMethod( _getPeerObject(), mid );
}

jchar CharBufferProxy::get(jint p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "get", "(I)C" );
	return JNIEnvHelper::CallCharMethod( _getPeerObject(), mid, p0 );
}

::java::nio::ByteOrderProxy CharBufferProxy::order()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "order", "()Ljava/nio/ByteOrder;" );
	return ::java::nio::ByteOrderProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::nio::CharBufferProxy CharBufferProxy::asReadOnlyBuffer()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "asReadOnlyBuffer", "()Ljava/nio/CharBuffer;" );
	return ::java::nio::CharBufferProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::nio::CharBufferProxy CharBufferProxy::compact()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "compact", "()Ljava/nio/CharBuffer;" );
	return ::java::nio::CharBufferProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::nio::CharBufferProxy CharBufferProxy::duplicate()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "duplicate", "()Ljava/nio/CharBuffer;" );
	return ::java::nio::CharBufferProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::nio::CharBufferProxy CharBufferProxy::put(jchar p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "put", "(C)Ljava/nio/CharBuffer;" );
	return ::java::nio::CharBufferProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0 )  );
}

::java::nio::CharBufferProxy CharBufferProxy::put(jint p0, jchar p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "put", "(IC)Ljava/nio/CharBuffer;" );
	return ::java::nio::CharBufferProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0, p1 )  );
}

::java::nio::CharBufferProxy CharBufferProxy::slice()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "slice", "()Ljava/nio/CharBuffer;" );
	return ::java::nio::CharBufferProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::nio::CharBufferProxy CharBufferProxy::subSequence(jint p0, jint p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "subSequence", "(II)Ljava/nio/CharBuffer;" );
	return ::java::nio::CharBufferProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0, p1 )  );
}

jboolean CharBufferProxy::equals(::java::lang::ObjectProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "equals", "(Ljava/lang/Object;)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

jboolean CharBufferProxy::hasArray()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "hasArray", "()Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid );
}

jchar CharBufferProxy::charAt(jint p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "charAt", "(I)C" );
	return JNIEnvHelper::CallCharMethod( _getPeerObject(), mid, p0 );
}

::net::sourceforge::jnipp::JCharArrayHelper<1> CharBufferProxy::array()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "array", "()[C" );
	return ::net::sourceforge::jnipp::JCharArrayHelper<1>( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

jint CharBufferProxy::arrayOffset()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "arrayOffset", "()I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid );
}

jint CharBufferProxy::length()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "length", "()I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid );
}

::java::nio::CharBufferProxy CharBufferProxy::put(::net::sourceforge::jnipp::JCharArrayHelper<1> p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "put", "([C)Ljava/nio/CharBuffer;" );
	return ::java::nio::CharBufferProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jcharArray>( p0 ) )  );
}

::java::nio::CharBufferProxy CharBufferProxy::put(::net::sourceforge::jnipp::JStringHelper p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "put", "(Ljava/lang/String;)Ljava/nio/CharBuffer;" );
	return ::java::nio::CharBufferProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jstring>( p0 ) )  );
}

jint CharBufferProxy::compareTo(::java::nio::CharBufferProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "compareTo", "(Ljava/nio/CharBuffer;)I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

jint CharBufferProxy::hashCode()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "hashCode", "()I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid );
}

jint CharBufferProxy::read(::java::nio::CharBufferProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "read", "(Ljava/nio/CharBuffer;)I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

::net::sourceforge::jnipp::JStringHelper CharBufferProxy::toString()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "toString", "()Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::nio::CharBufferProxy CharBufferProxy::append(jchar p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "append", "(C)Ljava/nio/CharBuffer;" );
	return ::java::nio::CharBufferProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0 )  );
}

::java::nio::CharBufferProxy CharBufferProxy::append(::java::lang::CharSequenceProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "append", "(Ljava/lang/CharSequence;)Ljava/nio/CharBuffer;" );
	return ::java::nio::CharBufferProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::java::nio::CharBufferProxy CharBufferProxy::append(::java::lang::CharSequenceProxy p0, jint p1, jint p2)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "append", "(Ljava/lang/CharSequence;II)Ljava/nio/CharBuffer;" );
	return ::java::nio::CharBufferProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), p1, p2 )  );
}

::java::nio::CharBufferProxy CharBufferProxy::get(::net::sourceforge::jnipp::JCharArrayHelper<1> p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "get", "([C)Ljava/nio/CharBuffer;" );
	return ::java::nio::CharBufferProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jcharArray>( p0 ) )  );
}

::java::nio::CharBufferProxy CharBufferProxy::get(::net::sourceforge::jnipp::JCharArrayHelper<1> p0, jint p1, jint p2)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "get", "([CII)Ljava/nio/CharBuffer;" );
	return ::java::nio::CharBufferProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jcharArray>( p0 ), p1, p2 )  );
}

::java::nio::CharBufferProxy CharBufferProxy::put(::net::sourceforge::jnipp::JCharArrayHelper<1> p0, jint p1, jint p2)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "put", "([CII)Ljava/nio/CharBuffer;" );
	return ::java::nio::CharBufferProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jcharArray>( p0 ), p1, p2 )  );
}

::java::nio::CharBufferProxy CharBufferProxy::put(::net::sourceforge::jnipp::JStringHelper p0, jint p1, jint p2)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "put", "(Ljava/lang/String;II)Ljava/nio/CharBuffer;" );
	return ::java::nio::CharBufferProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jstring>( p0 ), p1, p2 )  );
}

::java::nio::CharBufferProxy CharBufferProxy::put(::java::nio::CharBufferProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "put", "(Ljava/nio/CharBuffer;)Ljava/nio/CharBuffer;" );
	return ::java::nio::CharBufferProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::java::util::stream::IntStreamProxy CharBufferProxy::chars()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "chars", "()Ljava/util/stream/IntStream;" );
	return ::java::util::stream::IntStreamProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::nio::CharBufferProxy CharBufferProxy::allocate(jint p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "allocate", "(I)Ljava/nio/CharBuffer;" );
	return ::java::nio::CharBufferProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, p0 )  );
}

::java::nio::CharBufferProxy CharBufferProxy::wrap(::net::sourceforge::jnipp::JCharArrayHelper<1> p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "wrap", "([C)Ljava/nio/CharBuffer;" );
	return ::java::nio::CharBufferProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, static_cast<jcharArray>( p0 ) )  );
}

::java::nio::CharBufferProxy CharBufferProxy::wrap(::net::sourceforge::jnipp::JCharArrayHelper<1> p0, jint p1, jint p2)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "wrap", "([CII)Ljava/nio/CharBuffer;" );
	return ::java::nio::CharBufferProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, static_cast<jcharArray>( p0 ), p1, p2 )  );
}

::java::nio::CharBufferProxy CharBufferProxy::wrap(::java::lang::CharSequenceProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "wrap", "(Ljava/lang/CharSequence;)Ljava/nio/CharBuffer;" );
	return ::java::nio::CharBufferProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, static_cast<jobject>( p0 ) )  );
}

::java::nio::CharBufferProxy CharBufferProxy::wrap(::java::lang::CharSequenceProxy p0, jint p1, jint p2)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "wrap", "(Ljava/lang/CharSequence;II)Ljava/nio/CharBuffer;" );
	return ::java::nio::CharBufferProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, static_cast<jobject>( p0 ), p1, p2 )  );
}

