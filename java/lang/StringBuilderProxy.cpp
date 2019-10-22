#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "StringBuilderProxy.h"

// includes for parameter and return type proxy classes
#include "java\lang\CharSequenceProxy.h"
#include "java\lang\ObjectProxy.h"
#include "java\lang\StringBufferProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::lang;


std::string StringBuilderProxy::className = "java/lang/StringBuilder";
jclass StringBuilderProxy::objectClass = NULL;

jclass StringBuilderProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

StringBuilderProxy::StringBuilderProxy(void* unused)
{
}

jobject StringBuilderProxy::_getPeerObject() const
{
	return peerObject;
}

jclass StringBuilderProxy::getObjectClass()
{
	return _getObjectClass();
}

StringBuilderProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
StringBuilderProxy::StringBuilderProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

StringBuilderProxy::StringBuilderProxy()
{
	jmethodID mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "<init>", "()V" );
	peerObject = JNIEnvHelper::NewGlobalRef( JNIEnvHelper::NewObject( _getObjectClass(), mid ) );
}

StringBuilderProxy::StringBuilderProxy(jint p0)
{
	jmethodID mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "<init>", "(I)V" );
	peerObject = JNIEnvHelper::NewGlobalRef( JNIEnvHelper::NewObject( _getObjectClass(), mid, p0 ) );
}

StringBuilderProxy::StringBuilderProxy(::java::lang::CharSequenceProxy p0)
{
	jmethodID mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "<init>", "(Ljava/lang/CharSequence;)V" );
	peerObject = JNIEnvHelper::NewGlobalRef( JNIEnvHelper::NewObject( _getObjectClass(), mid, static_cast<jobject>( p0 ) ) );
}

StringBuilderProxy::StringBuilderProxy(::net::sourceforge::jnipp::JStringHelper p0)
{
	jmethodID mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "<init>", "(Ljava/lang/String;)V" );
	peerObject = JNIEnvHelper::NewGlobalRef( JNIEnvHelper::NewObject( _getObjectClass(), mid, static_cast<jstring>( p0 ) ) );
}

StringBuilderProxy::~StringBuilderProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

StringBuilderProxy& StringBuilderProxy::operator=(const StringBuilderProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
jint StringBuilderProxy::indexOf(::net::sourceforge::jnipp::JStringHelper p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "indexOf", "(Ljava/lang/String;)I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid, static_cast<jstring>( p0 ) );
}

jint StringBuilderProxy::indexOf(::net::sourceforge::jnipp::JStringHelper p0, jint p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "indexOf", "(Ljava/lang/String;I)I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid, static_cast<jstring>( p0 ), p1 );
}

jint StringBuilderProxy::lastIndexOf(::net::sourceforge::jnipp::JStringHelper p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "lastIndexOf", "(Ljava/lang/String;)I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid, static_cast<jstring>( p0 ) );
}

jint StringBuilderProxy::lastIndexOf(::net::sourceforge::jnipp::JStringHelper p0, jint p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "lastIndexOf", "(Ljava/lang/String;I)I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid, static_cast<jstring>( p0 ), p1 );
}

::net::sourceforge::jnipp::JStringHelper StringBuilderProxy::toString()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "toString", "()Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::lang::StringBuilderProxy StringBuilderProxy::append(jboolean p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "append", "(Z)Ljava/lang/StringBuilder;" );
	return ::java::lang::StringBuilderProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0 )  );
}

::java::lang::StringBuilderProxy StringBuilderProxy::append(jchar p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "append", "(C)Ljava/lang/StringBuilder;" );
	return ::java::lang::StringBuilderProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0 )  );
}

::java::lang::StringBuilderProxy StringBuilderProxy::append(::net::sourceforge::jnipp::JCharArrayHelper<1> p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "append", "([C)Ljava/lang/StringBuilder;" );
	return ::java::lang::StringBuilderProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jcharArray>( p0 ) )  );
}

::java::lang::StringBuilderProxy StringBuilderProxy::append(::net::sourceforge::jnipp::JCharArrayHelper<1> p0, jint p1, jint p2)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "append", "([CII)Ljava/lang/StringBuilder;" );
	return ::java::lang::StringBuilderProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jcharArray>( p0 ), p1, p2 )  );
}

::java::lang::StringBuilderProxy StringBuilderProxy::append(jdouble p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "append", "(D)Ljava/lang/StringBuilder;" );
	return ::java::lang::StringBuilderProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0 )  );
}

::java::lang::StringBuilderProxy StringBuilderProxy::append(jfloat p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "append", "(F)Ljava/lang/StringBuilder;" );
	return ::java::lang::StringBuilderProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0 )  );
}

::java::lang::StringBuilderProxy StringBuilderProxy::append(jint p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "append", "(I)Ljava/lang/StringBuilder;" );
	return ::java::lang::StringBuilderProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0 )  );
}

::java::lang::StringBuilderProxy StringBuilderProxy::append(::java::lang::CharSequenceProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "append", "(Ljava/lang/CharSequence;)Ljava/lang/StringBuilder;" );
	return ::java::lang::StringBuilderProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::java::lang::StringBuilderProxy StringBuilderProxy::append(::java::lang::CharSequenceProxy p0, jint p1, jint p2)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "append", "(Ljava/lang/CharSequence;II)Ljava/lang/StringBuilder;" );
	return ::java::lang::StringBuilderProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), p1, p2 )  );
}

::java::lang::StringBuilderProxy StringBuilderProxy::append(::java::lang::ObjectProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "append", "(Ljava/lang/Object;)Ljava/lang/StringBuilder;" );
	return ::java::lang::StringBuilderProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::java::lang::StringBuilderProxy StringBuilderProxy::append(::net::sourceforge::jnipp::JStringHelper p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "append", "(Ljava/lang/String;)Ljava/lang/StringBuilder;" );
	return ::java::lang::StringBuilderProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jstring>( p0 ) )  );
}

::java::lang::StringBuilderProxy StringBuilderProxy::append(::java::lang::StringBufferProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "append", "(Ljava/lang/StringBuffer;)Ljava/lang/StringBuilder;" );
	return ::java::lang::StringBuilderProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::java::lang::StringBuilderProxy StringBuilderProxy::append(jlong p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "append", "(J)Ljava/lang/StringBuilder;" );
	return ::java::lang::StringBuilderProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0 )  );
}

::java::lang::StringBuilderProxy StringBuilderProxy::appendCodePoint(jint p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "appendCodePoint", "(I)Ljava/lang/StringBuilder;" );
	return ::java::lang::StringBuilderProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0 )  );
}

::java::lang::StringBuilderProxy StringBuilderProxy::_delete(jint p0, jint p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "delete", "(II)Ljava/lang/StringBuilder;" );
	return ::java::lang::StringBuilderProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0, p1 )  );
}

::java::lang::StringBuilderProxy StringBuilderProxy::deleteCharAt(jint p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "deleteCharAt", "(I)Ljava/lang/StringBuilder;" );
	return ::java::lang::StringBuilderProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0 )  );
}

::java::lang::StringBuilderProxy StringBuilderProxy::insert(jint p0, jboolean p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "insert", "(IZ)Ljava/lang/StringBuilder;" );
	return ::java::lang::StringBuilderProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0, p1 )  );
}

::java::lang::StringBuilderProxy StringBuilderProxy::insert(jint p0, jchar p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "insert", "(IC)Ljava/lang/StringBuilder;" );
	return ::java::lang::StringBuilderProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0, p1 )  );
}

::java::lang::StringBuilderProxy StringBuilderProxy::insert(jint p0, ::net::sourceforge::jnipp::JCharArrayHelper<1> p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "insert", "(I[C)Ljava/lang/StringBuilder;" );
	return ::java::lang::StringBuilderProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0, static_cast<jcharArray>( p1 ) )  );
}

::java::lang::StringBuilderProxy StringBuilderProxy::insert(jint p0, ::net::sourceforge::jnipp::JCharArrayHelper<1> p1, jint p2, jint p3)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "insert", "(I[CII)Ljava/lang/StringBuilder;" );
	return ::java::lang::StringBuilderProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0, static_cast<jcharArray>( p1 ), p2, p3 )  );
}

::java::lang::StringBuilderProxy StringBuilderProxy::insert(jint p0, jdouble p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "insert", "(ID)Ljava/lang/StringBuilder;" );
	return ::java::lang::StringBuilderProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0, p1 )  );
}

::java::lang::StringBuilderProxy StringBuilderProxy::insert(jint p0, jfloat p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "insert", "(IF)Ljava/lang/StringBuilder;" );
	return ::java::lang::StringBuilderProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0, p1 )  );
}

::java::lang::StringBuilderProxy StringBuilderProxy::insert(jint p0, jint p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "insert", "(II)Ljava/lang/StringBuilder;" );
	return ::java::lang::StringBuilderProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0, p1 )  );
}

::java::lang::StringBuilderProxy StringBuilderProxy::insert(jint p0, ::java::lang::CharSequenceProxy p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "insert", "(ILjava/lang/CharSequence;)Ljava/lang/StringBuilder;" );
	return ::java::lang::StringBuilderProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0, static_cast<jobject>( p1 ) )  );
}

::java::lang::StringBuilderProxy StringBuilderProxy::insert(jint p0, ::java::lang::CharSequenceProxy p1, jint p2, jint p3)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "insert", "(ILjava/lang/CharSequence;II)Ljava/lang/StringBuilder;" );
	return ::java::lang::StringBuilderProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0, static_cast<jobject>( p1 ), p2, p3 )  );
}

::java::lang::StringBuilderProxy StringBuilderProxy::insert(jint p0, ::java::lang::ObjectProxy p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "insert", "(ILjava/lang/Object;)Ljava/lang/StringBuilder;" );
	return ::java::lang::StringBuilderProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0, static_cast<jobject>( p1 ) )  );
}

::java::lang::StringBuilderProxy StringBuilderProxy::insert(jint p0, ::net::sourceforge::jnipp::JStringHelper p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "insert", "(ILjava/lang/String;)Ljava/lang/StringBuilder;" );
	return ::java::lang::StringBuilderProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0, static_cast<jstring>( p1 ) )  );
}

::java::lang::StringBuilderProxy StringBuilderProxy::insert(jint p0, jlong p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "insert", "(IJ)Ljava/lang/StringBuilder;" );
	return ::java::lang::StringBuilderProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0, p1 )  );
}

::java::lang::StringBuilderProxy StringBuilderProxy::replace(jint p0, jint p1, ::net::sourceforge::jnipp::JStringHelper p2)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "replace", "(IILjava/lang/String;)Ljava/lang/StringBuilder;" );
	return ::java::lang::StringBuilderProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0, p1, static_cast<jstring>( p2 ) )  );
}

::java::lang::StringBuilderProxy StringBuilderProxy::reverse()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "reverse", "()Ljava/lang/StringBuilder;" );
	return ::java::lang::StringBuilderProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

