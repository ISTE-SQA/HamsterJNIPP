#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "StringBufferProxy.h"

// includes for parameter and return type proxy classes
#include "java\lang\CharSequenceProxy.h"
#include "java\lang\ObjectProxy.h"
#include "java\io\ObjectStreamFieldProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::lang;


std::string StringBufferProxy::className = "java/lang/StringBuffer";
jclass StringBufferProxy::objectClass = NULL;

jclass StringBufferProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

StringBufferProxy::StringBufferProxy(void* unused)
{
}

jobject StringBufferProxy::_getPeerObject() const
{
	return peerObject;
}

jclass StringBufferProxy::getObjectClass()
{
	return _getObjectClass();
}

StringBufferProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
StringBufferProxy::StringBufferProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

StringBufferProxy::StringBufferProxy()
{
	jmethodID mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "<init>", "()V" );
	peerObject = JNIEnvHelper::NewGlobalRef( JNIEnvHelper::NewObject( _getObjectClass(), mid ) );
}

StringBufferProxy::StringBufferProxy(jint p0)
{
	jmethodID mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "<init>", "(I)V" );
	peerObject = JNIEnvHelper::NewGlobalRef( JNIEnvHelper::NewObject( _getObjectClass(), mid, p0 ) );
}

StringBufferProxy::StringBufferProxy(::java::lang::CharSequenceProxy p0)
{
	jmethodID mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "<init>", "(Ljava/lang/CharSequence;)V" );
	peerObject = JNIEnvHelper::NewGlobalRef( JNIEnvHelper::NewObject( _getObjectClass(), mid, static_cast<jobject>( p0 ) ) );
}

StringBufferProxy::StringBufferProxy(::net::sourceforge::jnipp::JStringHelper p0)
{
	jmethodID mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "<init>", "(Ljava/lang/String;)V" );
	peerObject = JNIEnvHelper::NewGlobalRef( JNIEnvHelper::NewObject( _getObjectClass(), mid, static_cast<jstring>( p0 ) ) );
}

StringBufferProxy::~StringBufferProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

StringBufferProxy& StringBufferProxy::operator=(const StringBufferProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
jint StringBufferProxy::indexOf(::net::sourceforge::jnipp::JStringHelper p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "indexOf", "(Ljava/lang/String;)I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid, static_cast<jstring>( p0 ) );
}

jint StringBufferProxy::lastIndexOf(::net::sourceforge::jnipp::JStringHelper p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "lastIndexOf", "(Ljava/lang/String;)I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid, static_cast<jstring>( p0 ) );
}

::java::lang::StringBufferProxy StringBufferProxy::insert(jint p0, jboolean p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "insert", "(IZ)Ljava/lang/StringBuffer;" );
	return ::java::lang::StringBufferProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0, p1 )  );
}

::java::lang::StringBufferProxy StringBufferProxy::insert(jint p0, jdouble p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "insert", "(ID)Ljava/lang/StringBuffer;" );
	return ::java::lang::StringBufferProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0, p1 )  );
}

::java::lang::StringBufferProxy StringBufferProxy::insert(jint p0, jfloat p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "insert", "(IF)Ljava/lang/StringBuffer;" );
	return ::java::lang::StringBufferProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0, p1 )  );
}

::java::lang::StringBufferProxy StringBufferProxy::insert(jint p0, jint p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "insert", "(II)Ljava/lang/StringBuffer;" );
	return ::java::lang::StringBufferProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0, p1 )  );
}

::java::lang::StringBufferProxy StringBufferProxy::insert(jint p0, ::java::lang::CharSequenceProxy p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "insert", "(ILjava/lang/CharSequence;)Ljava/lang/StringBuffer;" );
	return ::java::lang::StringBufferProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0, static_cast<jobject>( p1 ) )  );
}

::java::lang::StringBufferProxy StringBufferProxy::insert(jint p0, jlong p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "insert", "(IJ)Ljava/lang/StringBuffer;" );
	return ::java::lang::StringBufferProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0, p1 )  );
}

jchar StringBufferProxy::charAt(jint p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "charAt", "(I)C" );
	return JNIEnvHelper::CallCharMethod( _getPeerObject(), mid, p0 );
}

jint StringBufferProxy::capacity()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "capacity", "()I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid );
}

jint StringBufferProxy::codePointAt(jint p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "codePointAt", "(I)I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid, p0 );
}

jint StringBufferProxy::codePointBefore(jint p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "codePointBefore", "(I)I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid, p0 );
}

jint StringBufferProxy::codePointCount(jint p0, jint p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "codePointCount", "(II)I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid, p0, p1 );
}

jint StringBufferProxy::indexOf(::net::sourceforge::jnipp::JStringHelper p0, jint p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "indexOf", "(Ljava/lang/String;I)I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid, static_cast<jstring>( p0 ), p1 );
}

jint StringBufferProxy::lastIndexOf(::net::sourceforge::jnipp::JStringHelper p0, jint p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "lastIndexOf", "(Ljava/lang/String;I)I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid, static_cast<jstring>( p0 ), p1 );
}

jint StringBufferProxy::length()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "length", "()I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid );
}

jint StringBufferProxy::offsetByCodePoints(jint p0, jint p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "offsetByCodePoints", "(II)I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid, p0, p1 );
}

::java::lang::CharSequenceProxy StringBufferProxy::subSequence(jint p0, jint p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "subSequence", "(II)Ljava/lang/CharSequence;" );
	return ::java::lang::CharSequenceProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0, p1 )  );
}

::net::sourceforge::jnipp::JStringHelper StringBufferProxy::substring(jint p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "substring", "(I)Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0 )  );
}

::net::sourceforge::jnipp::JStringHelper StringBufferProxy::substring(jint p0, jint p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "substring", "(II)Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0, p1 )  );
}

::net::sourceforge::jnipp::JStringHelper StringBufferProxy::toString()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "toString", "()Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::lang::StringBufferProxy StringBufferProxy::append(jboolean p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "append", "(Z)Ljava/lang/StringBuffer;" );
	return ::java::lang::StringBufferProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0 )  );
}

::java::lang::StringBufferProxy StringBufferProxy::append(jchar p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "append", "(C)Ljava/lang/StringBuffer;" );
	return ::java::lang::StringBufferProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0 )  );
}

::java::lang::StringBufferProxy StringBufferProxy::append(::net::sourceforge::jnipp::JCharArrayHelper<1> p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "append", "([C)Ljava/lang/StringBuffer;" );
	return ::java::lang::StringBufferProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jcharArray>( p0 ) )  );
}

::java::lang::StringBufferProxy StringBufferProxy::append(::net::sourceforge::jnipp::JCharArrayHelper<1> p0, jint p1, jint p2)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "append", "([CII)Ljava/lang/StringBuffer;" );
	return ::java::lang::StringBufferProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jcharArray>( p0 ), p1, p2 )  );
}

::java::lang::StringBufferProxy StringBufferProxy::append(jdouble p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "append", "(D)Ljava/lang/StringBuffer;" );
	return ::java::lang::StringBufferProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0 )  );
}

::java::lang::StringBufferProxy StringBufferProxy::append(jfloat p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "append", "(F)Ljava/lang/StringBuffer;" );
	return ::java::lang::StringBufferProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0 )  );
}

::java::lang::StringBufferProxy StringBufferProxy::append(jint p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "append", "(I)Ljava/lang/StringBuffer;" );
	return ::java::lang::StringBufferProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0 )  );
}

::java::lang::StringBufferProxy StringBufferProxy::append(::java::lang::CharSequenceProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "append", "(Ljava/lang/CharSequence;)Ljava/lang/StringBuffer;" );
	return ::java::lang::StringBufferProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::java::lang::StringBufferProxy StringBufferProxy::append(::java::lang::CharSequenceProxy p0, jint p1, jint p2)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "append", "(Ljava/lang/CharSequence;II)Ljava/lang/StringBuffer;" );
	return ::java::lang::StringBufferProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), p1, p2 )  );
}

::java::lang::StringBufferProxy StringBufferProxy::append(::java::lang::ObjectProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "append", "(Ljava/lang/Object;)Ljava/lang/StringBuffer;" );
	return ::java::lang::StringBufferProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::java::lang::StringBufferProxy StringBufferProxy::append(::net::sourceforge::jnipp::JStringHelper p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "append", "(Ljava/lang/String;)Ljava/lang/StringBuffer;" );
	return ::java::lang::StringBufferProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jstring>( p0 ) )  );
}

::java::lang::StringBufferProxy StringBufferProxy::append(::java::lang::StringBufferProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "append", "(Ljava/lang/StringBuffer;)Ljava/lang/StringBuffer;" );
	return ::java::lang::StringBufferProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::java::lang::StringBufferProxy StringBufferProxy::append(jlong p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "append", "(J)Ljava/lang/StringBuffer;" );
	return ::java::lang::StringBufferProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0 )  );
}

::java::lang::StringBufferProxy StringBufferProxy::appendCodePoint(jint p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "appendCodePoint", "(I)Ljava/lang/StringBuffer;" );
	return ::java::lang::StringBufferProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0 )  );
}

::java::lang::StringBufferProxy StringBufferProxy::_delete(jint p0, jint p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "delete", "(II)Ljava/lang/StringBuffer;" );
	return ::java::lang::StringBufferProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0, p1 )  );
}

::java::lang::StringBufferProxy StringBufferProxy::deleteCharAt(jint p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "deleteCharAt", "(I)Ljava/lang/StringBuffer;" );
	return ::java::lang::StringBufferProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0 )  );
}

::java::lang::StringBufferProxy StringBufferProxy::insert(jint p0, jchar p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "insert", "(IC)Ljava/lang/StringBuffer;" );
	return ::java::lang::StringBufferProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0, p1 )  );
}

::java::lang::StringBufferProxy StringBufferProxy::insert(jint p0, ::net::sourceforge::jnipp::JCharArrayHelper<1> p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "insert", "(I[C)Ljava/lang/StringBuffer;" );
	return ::java::lang::StringBufferProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0, static_cast<jcharArray>( p1 ) )  );
}

::java::lang::StringBufferProxy StringBufferProxy::insert(jint p0, ::net::sourceforge::jnipp::JCharArrayHelper<1> p1, jint p2, jint p3)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "insert", "(I[CII)Ljava/lang/StringBuffer;" );
	return ::java::lang::StringBufferProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0, static_cast<jcharArray>( p1 ), p2, p3 )  );
}

::java::lang::StringBufferProxy StringBufferProxy::insert(jint p0, ::java::lang::CharSequenceProxy p1, jint p2, jint p3)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "insert", "(ILjava/lang/CharSequence;II)Ljava/lang/StringBuffer;" );
	return ::java::lang::StringBufferProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0, static_cast<jobject>( p1 ), p2, p3 )  );
}

::java::lang::StringBufferProxy StringBufferProxy::insert(jint p0, ::java::lang::ObjectProxy p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "insert", "(ILjava/lang/Object;)Ljava/lang/StringBuffer;" );
	return ::java::lang::StringBufferProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0, static_cast<jobject>( p1 ) )  );
}

::java::lang::StringBufferProxy StringBufferProxy::insert(jint p0, ::net::sourceforge::jnipp::JStringHelper p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "insert", "(ILjava/lang/String;)Ljava/lang/StringBuffer;" );
	return ::java::lang::StringBufferProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0, static_cast<jstring>( p1 ) )  );
}

::java::lang::StringBufferProxy StringBufferProxy::replace(jint p0, jint p1, ::net::sourceforge::jnipp::JStringHelper p2)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "replace", "(IILjava/lang/String;)Ljava/lang/StringBuffer;" );
	return ::java::lang::StringBufferProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0, p1, static_cast<jstring>( p2 ) )  );
}

::java::lang::StringBufferProxy StringBufferProxy::reverse()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "reverse", "()Ljava/lang/StringBuffer;" );
	return ::java::lang::StringBufferProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

void StringBufferProxy::ensureCapacity(jint p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "ensureCapacity", "(I)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, p0 );
}

void StringBufferProxy::getChars(jint p0, jint p1, ::net::sourceforge::jnipp::JCharArrayHelper<1> p2, jint p3)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getChars", "(II[CI)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, p0, p1, static_cast<jcharArray>( p2 ), p3 );
}

void StringBufferProxy::setCharAt(jint p0, jchar p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "setCharAt", "(IC)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, p0, p1 );
}

void StringBufferProxy::setLength(jint p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "setLength", "(I)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, p0 );
}

void StringBufferProxy::trimToSize()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "trimToSize", "()V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid );
}

