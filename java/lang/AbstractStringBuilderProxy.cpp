#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "AbstractStringBuilderProxy.h"

// includes for parameter and return type proxy classes
#include "java\lang\CharSequenceProxy.h"
#include "java\lang\ObjectProxy.h"
#include "java\lang\StringBufferProxy.h"
#include "java\lang\AppendableProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::lang;


std::string AbstractStringBuilderProxy::className = "java/lang/AbstractStringBuilder";
jclass AbstractStringBuilderProxy::objectClass = NULL;

jclass AbstractStringBuilderProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

AbstractStringBuilderProxy::AbstractStringBuilderProxy(void* unused)
{
}

jobject AbstractStringBuilderProxy::_getPeerObject() const
{
	return peerObject;
}

jclass AbstractStringBuilderProxy::getObjectClass()
{
	return _getObjectClass();
}

AbstractStringBuilderProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
AbstractStringBuilderProxy::AbstractStringBuilderProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

AbstractStringBuilderProxy::~AbstractStringBuilderProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

AbstractStringBuilderProxy& AbstractStringBuilderProxy::operator=(const AbstractStringBuilderProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
::net::sourceforge::jnipp::JStringHelper AbstractStringBuilderProxy::toString()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "toString", "()Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

jchar AbstractStringBuilderProxy::charAt(jint p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "charAt", "(I)C" );
	return JNIEnvHelper::CallCharMethod( _getPeerObject(), mid, p0 );
}

jint AbstractStringBuilderProxy::capacity()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "capacity", "()I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid );
}

jint AbstractStringBuilderProxy::codePointAt(jint p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "codePointAt", "(I)I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid, p0 );
}

jint AbstractStringBuilderProxy::codePointBefore(jint p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "codePointBefore", "(I)I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid, p0 );
}

jint AbstractStringBuilderProxy::codePointCount(jint p0, jint p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "codePointCount", "(II)I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid, p0, p1 );
}

jint AbstractStringBuilderProxy::indexOf(::net::sourceforge::jnipp::JStringHelper p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "indexOf", "(Ljava/lang/String;)I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid, static_cast<jstring>( p0 ) );
}

jint AbstractStringBuilderProxy::indexOf(::net::sourceforge::jnipp::JStringHelper p0, jint p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "indexOf", "(Ljava/lang/String;I)I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid, static_cast<jstring>( p0 ), p1 );
}

jint AbstractStringBuilderProxy::lastIndexOf(::net::sourceforge::jnipp::JStringHelper p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "lastIndexOf", "(Ljava/lang/String;)I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid, static_cast<jstring>( p0 ) );
}

jint AbstractStringBuilderProxy::lastIndexOf(::net::sourceforge::jnipp::JStringHelper p0, jint p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "lastIndexOf", "(Ljava/lang/String;I)I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid, static_cast<jstring>( p0 ), p1 );
}

jint AbstractStringBuilderProxy::length()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "length", "()I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid );
}

jint AbstractStringBuilderProxy::offsetByCodePoints(jint p0, jint p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "offsetByCodePoints", "(II)I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid, p0, p1 );
}

::java::lang::AbstractStringBuilderProxy AbstractStringBuilderProxy::append(jboolean p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "append", "(Z)Ljava/lang/AbstractStringBuilder;" );
	return ::java::lang::AbstractStringBuilderProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0 )  );
}

::java::lang::AbstractStringBuilderProxy AbstractStringBuilderProxy::append(jchar p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "append", "(C)Ljava/lang/AbstractStringBuilder;" );
	return ::java::lang::AbstractStringBuilderProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0 )  );
}

::java::lang::AbstractStringBuilderProxy AbstractStringBuilderProxy::append(::net::sourceforge::jnipp::JCharArrayHelper<1> p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "append", "([C)Ljava/lang/AbstractStringBuilder;" );
	return ::java::lang::AbstractStringBuilderProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jcharArray>( p0 ) )  );
}

::java::lang::AbstractStringBuilderProxy AbstractStringBuilderProxy::append(::net::sourceforge::jnipp::JCharArrayHelper<1> p0, jint p1, jint p2)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "append", "([CII)Ljava/lang/AbstractStringBuilder;" );
	return ::java::lang::AbstractStringBuilderProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jcharArray>( p0 ), p1, p2 )  );
}

::java::lang::AbstractStringBuilderProxy AbstractStringBuilderProxy::append(jdouble p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "append", "(D)Ljava/lang/AbstractStringBuilder;" );
	return ::java::lang::AbstractStringBuilderProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0 )  );
}

::java::lang::AbstractStringBuilderProxy AbstractStringBuilderProxy::append(jfloat p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "append", "(F)Ljava/lang/AbstractStringBuilder;" );
	return ::java::lang::AbstractStringBuilderProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0 )  );
}

::java::lang::AbstractStringBuilderProxy AbstractStringBuilderProxy::append(jint p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "append", "(I)Ljava/lang/AbstractStringBuilder;" );
	return ::java::lang::AbstractStringBuilderProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0 )  );
}

::java::lang::AbstractStringBuilderProxy AbstractStringBuilderProxy::append(::java::lang::CharSequenceProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "append", "(Ljava/lang/CharSequence;)Ljava/lang/AbstractStringBuilder;" );
	return ::java::lang::AbstractStringBuilderProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::java::lang::AbstractStringBuilderProxy AbstractStringBuilderProxy::append(::java::lang::CharSequenceProxy p0, jint p1, jint p2)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "append", "(Ljava/lang/CharSequence;II)Ljava/lang/AbstractStringBuilder;" );
	return ::java::lang::AbstractStringBuilderProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), p1, p2 )  );
}

::java::lang::AbstractStringBuilderProxy AbstractStringBuilderProxy::append(::java::lang::ObjectProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "append", "(Ljava/lang/Object;)Ljava/lang/AbstractStringBuilder;" );
	return ::java::lang::AbstractStringBuilderProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::java::lang::AbstractStringBuilderProxy AbstractStringBuilderProxy::append(::net::sourceforge::jnipp::JStringHelper p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "append", "(Ljava/lang/String;)Ljava/lang/AbstractStringBuilder;" );
	return ::java::lang::AbstractStringBuilderProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jstring>( p0 ) )  );
}

::java::lang::AbstractStringBuilderProxy AbstractStringBuilderProxy::append(::java::lang::StringBufferProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "append", "(Ljava/lang/StringBuffer;)Ljava/lang/AbstractStringBuilder;" );
	return ::java::lang::AbstractStringBuilderProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::java::lang::AbstractStringBuilderProxy AbstractStringBuilderProxy::append(jlong p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "append", "(J)Ljava/lang/AbstractStringBuilder;" );
	return ::java::lang::AbstractStringBuilderProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0 )  );
}

::java::lang::AbstractStringBuilderProxy AbstractStringBuilderProxy::appendCodePoint(jint p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "appendCodePoint", "(I)Ljava/lang/AbstractStringBuilder;" );
	return ::java::lang::AbstractStringBuilderProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0 )  );
}

::java::lang::AbstractStringBuilderProxy AbstractStringBuilderProxy::_delete(jint p0, jint p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "delete", "(II)Ljava/lang/AbstractStringBuilder;" );
	return ::java::lang::AbstractStringBuilderProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0, p1 )  );
}

::java::lang::AbstractStringBuilderProxy AbstractStringBuilderProxy::deleteCharAt(jint p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "deleteCharAt", "(I)Ljava/lang/AbstractStringBuilder;" );
	return ::java::lang::AbstractStringBuilderProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0 )  );
}

::java::lang::AbstractStringBuilderProxy AbstractStringBuilderProxy::insert(jint p0, jboolean p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "insert", "(IZ)Ljava/lang/AbstractStringBuilder;" );
	return ::java::lang::AbstractStringBuilderProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0, p1 )  );
}

::java::lang::AbstractStringBuilderProxy AbstractStringBuilderProxy::insert(jint p0, jchar p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "insert", "(IC)Ljava/lang/AbstractStringBuilder;" );
	return ::java::lang::AbstractStringBuilderProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0, p1 )  );
}

::java::lang::AbstractStringBuilderProxy AbstractStringBuilderProxy::insert(jint p0, ::net::sourceforge::jnipp::JCharArrayHelper<1> p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "insert", "(I[C)Ljava/lang/AbstractStringBuilder;" );
	return ::java::lang::AbstractStringBuilderProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0, static_cast<jcharArray>( p1 ) )  );
}

::java::lang::AbstractStringBuilderProxy AbstractStringBuilderProxy::insert(jint p0, ::net::sourceforge::jnipp::JCharArrayHelper<1> p1, jint p2, jint p3)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "insert", "(I[CII)Ljava/lang/AbstractStringBuilder;" );
	return ::java::lang::AbstractStringBuilderProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0, static_cast<jcharArray>( p1 ), p2, p3 )  );
}

::java::lang::AbstractStringBuilderProxy AbstractStringBuilderProxy::insert(jint p0, jdouble p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "insert", "(ID)Ljava/lang/AbstractStringBuilder;" );
	return ::java::lang::AbstractStringBuilderProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0, p1 )  );
}

::java::lang::AbstractStringBuilderProxy AbstractStringBuilderProxy::insert(jint p0, jfloat p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "insert", "(IF)Ljava/lang/AbstractStringBuilder;" );
	return ::java::lang::AbstractStringBuilderProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0, p1 )  );
}

::java::lang::AbstractStringBuilderProxy AbstractStringBuilderProxy::insert(jint p0, jint p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "insert", "(II)Ljava/lang/AbstractStringBuilder;" );
	return ::java::lang::AbstractStringBuilderProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0, p1 )  );
}

::java::lang::AbstractStringBuilderProxy AbstractStringBuilderProxy::insert(jint p0, ::java::lang::CharSequenceProxy p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "insert", "(ILjava/lang/CharSequence;)Ljava/lang/AbstractStringBuilder;" );
	return ::java::lang::AbstractStringBuilderProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0, static_cast<jobject>( p1 ) )  );
}

::java::lang::AbstractStringBuilderProxy AbstractStringBuilderProxy::insert(jint p0, ::java::lang::CharSequenceProxy p1, jint p2, jint p3)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "insert", "(ILjava/lang/CharSequence;II)Ljava/lang/AbstractStringBuilder;" );
	return ::java::lang::AbstractStringBuilderProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0, static_cast<jobject>( p1 ), p2, p3 )  );
}

::java::lang::AbstractStringBuilderProxy AbstractStringBuilderProxy::insert(jint p0, ::java::lang::ObjectProxy p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "insert", "(ILjava/lang/Object;)Ljava/lang/AbstractStringBuilder;" );
	return ::java::lang::AbstractStringBuilderProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0, static_cast<jobject>( p1 ) )  );
}

::java::lang::AbstractStringBuilderProxy AbstractStringBuilderProxy::insert(jint p0, ::net::sourceforge::jnipp::JStringHelper p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "insert", "(ILjava/lang/String;)Ljava/lang/AbstractStringBuilder;" );
	return ::java::lang::AbstractStringBuilderProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0, static_cast<jstring>( p1 ) )  );
}

::java::lang::AbstractStringBuilderProxy AbstractStringBuilderProxy::insert(jint p0, jlong p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "insert", "(IJ)Ljava/lang/AbstractStringBuilder;" );
	return ::java::lang::AbstractStringBuilderProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0, p1 )  );
}

::java::lang::AbstractStringBuilderProxy AbstractStringBuilderProxy::replace(jint p0, jint p1, ::net::sourceforge::jnipp::JStringHelper p2)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "replace", "(IILjava/lang/String;)Ljava/lang/AbstractStringBuilder;" );
	return ::java::lang::AbstractStringBuilderProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0, p1, static_cast<jstring>( p2 ) )  );
}

::java::lang::AbstractStringBuilderProxy AbstractStringBuilderProxy::reverse()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "reverse", "()Ljava/lang/AbstractStringBuilder;" );
	return ::java::lang::AbstractStringBuilderProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::lang::AppendableProxy AbstractStringBuilderProxy::append(jchar p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "append", "(C)Ljava/lang/Appendable;" );
	return ::java::lang::AppendableProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0 )  );
}

::java::lang::AppendableProxy AbstractStringBuilderProxy::append(::java::lang::CharSequenceProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "append", "(Ljava/lang/CharSequence;)Ljava/lang/Appendable;" );
	return ::java::lang::AppendableProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::java::lang::AppendableProxy AbstractStringBuilderProxy::append(::java::lang::CharSequenceProxy p0, jint p1, jint p2)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "append", "(Ljava/lang/CharSequence;II)Ljava/lang/Appendable;" );
	return ::java::lang::AppendableProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), p1, p2 )  );
}

::java::lang::CharSequenceProxy AbstractStringBuilderProxy::subSequence(jint p0, jint p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "subSequence", "(II)Ljava/lang/CharSequence;" );
	return ::java::lang::CharSequenceProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0, p1 )  );
}

::net::sourceforge::jnipp::JStringHelper AbstractStringBuilderProxy::substring(jint p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "substring", "(I)Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0 )  );
}

::net::sourceforge::jnipp::JStringHelper AbstractStringBuilderProxy::substring(jint p0, jint p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "substring", "(II)Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0, p1 )  );
}

void AbstractStringBuilderProxy::ensureCapacity(jint p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "ensureCapacity", "(I)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, p0 );
}

void AbstractStringBuilderProxy::getChars(jint p0, jint p1, ::net::sourceforge::jnipp::JCharArrayHelper<1> p2, jint p3)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getChars", "(II[CI)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, p0, p1, static_cast<jcharArray>( p2 ), p3 );
}

void AbstractStringBuilderProxy::setCharAt(jint p0, jchar p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "setCharAt", "(IC)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, p0, p1 );
}

void AbstractStringBuilderProxy::setLength(jint p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "setLength", "(I)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, p0 );
}

void AbstractStringBuilderProxy::trimToSize()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "trimToSize", "()V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid );
}

