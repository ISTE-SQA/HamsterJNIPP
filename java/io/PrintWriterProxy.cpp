#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "PrintWriterProxy.h"

// includes for parameter and return type proxy classes
#include "java\io\FileProxy.h"
#include "java\io\OutputStreamProxy.h"
#include "java\io\WriterProxy.h"
#include "java\lang\CharSequenceProxy.h"
#include "java\lang\ObjectProxy.h"
#include "java\util\LocaleProxy.h"
#include "java\io\PrintStreamProxy.h"
#include "java\util\FormatterProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::io;


std::string PrintWriterProxy::className = "java/io/PrintWriter";
jclass PrintWriterProxy::objectClass = NULL;

jclass PrintWriterProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

PrintWriterProxy::PrintWriterProxy(void* unused)
{
}

jobject PrintWriterProxy::_getPeerObject() const
{
	return peerObject;
}

jclass PrintWriterProxy::getObjectClass()
{
	return _getObjectClass();
}

PrintWriterProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
PrintWriterProxy::PrintWriterProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

PrintWriterProxy::PrintWriterProxy(::java::io::FileProxy p0)
{
	jmethodID mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "<init>", "(Ljava/io/File;)V" );
	peerObject = JNIEnvHelper::NewGlobalRef( JNIEnvHelper::NewObject( _getObjectClass(), mid, static_cast<jobject>( p0 ) ) );
}

PrintWriterProxy::PrintWriterProxy(::java::io::FileProxy p0, ::net::sourceforge::jnipp::JStringHelper p1)
{
	jmethodID mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "<init>", "(Ljava/io/File;Ljava/lang/String;)V" );
	peerObject = JNIEnvHelper::NewGlobalRef( JNIEnvHelper::NewObject( _getObjectClass(), mid, static_cast<jobject>( p0 ), static_cast<jstring>( p1 ) ) );
}

PrintWriterProxy::PrintWriterProxy(::java::io::OutputStreamProxy p0)
{
	jmethodID mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "<init>", "(Ljava/io/OutputStream;)V" );
	peerObject = JNIEnvHelper::NewGlobalRef( JNIEnvHelper::NewObject( _getObjectClass(), mid, static_cast<jobject>( p0 ) ) );
}

PrintWriterProxy::PrintWriterProxy(::java::io::OutputStreamProxy p0, jboolean p1)
{
	jmethodID mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "<init>", "(Ljava/io/OutputStream;Z)V" );
	peerObject = JNIEnvHelper::NewGlobalRef( JNIEnvHelper::NewObject( _getObjectClass(), mid, static_cast<jobject>( p0 ), p1 ) );
}

PrintWriterProxy::PrintWriterProxy(::java::io::WriterProxy p0)
{
	jmethodID mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "<init>", "(Ljava/io/Writer;)V" );
	peerObject = JNIEnvHelper::NewGlobalRef( JNIEnvHelper::NewObject( _getObjectClass(), mid, static_cast<jobject>( p0 ) ) );
}

PrintWriterProxy::PrintWriterProxy(::java::io::WriterProxy p0, jboolean p1)
{
	jmethodID mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "<init>", "(Ljava/io/Writer;Z)V" );
	peerObject = JNIEnvHelper::NewGlobalRef( JNIEnvHelper::NewObject( _getObjectClass(), mid, static_cast<jobject>( p0 ), p1 ) );
}

PrintWriterProxy::PrintWriterProxy(::net::sourceforge::jnipp::JStringHelper p0)
{
	jmethodID mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "<init>", "(Ljava/lang/String;)V" );
	peerObject = JNIEnvHelper::NewGlobalRef( JNIEnvHelper::NewObject( _getObjectClass(), mid, static_cast<jstring>( p0 ) ) );
}

PrintWriterProxy::PrintWriterProxy(::net::sourceforge::jnipp::JStringHelper p0, ::net::sourceforge::jnipp::JStringHelper p1)
{
	jmethodID mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "<init>", "(Ljava/lang/String;Ljava/lang/String;)V" );
	peerObject = JNIEnvHelper::NewGlobalRef( JNIEnvHelper::NewObject( _getObjectClass(), mid, static_cast<jstring>( p0 ), static_cast<jstring>( p1 ) ) );
}

PrintWriterProxy::~PrintWriterProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

PrintWriterProxy& PrintWriterProxy::operator=(const PrintWriterProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
jboolean PrintWriterProxy::checkError()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "checkError", "()Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid );
}

::java::io::PrintWriterProxy PrintWriterProxy::append(jchar p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "append", "(C)Ljava/io/PrintWriter;" );
	return ::java::io::PrintWriterProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0 )  );
}

::java::io::PrintWriterProxy PrintWriterProxy::append(::java::lang::CharSequenceProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "append", "(Ljava/lang/CharSequence;)Ljava/io/PrintWriter;" );
	return ::java::io::PrintWriterProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::java::io::PrintWriterProxy PrintWriterProxy::append(::java::lang::CharSequenceProxy p0, jint p1, jint p2)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "append", "(Ljava/lang/CharSequence;II)Ljava/io/PrintWriter;" );
	return ::java::io::PrintWriterProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), p1, p2 )  );
}

::java::io::PrintWriterProxy PrintWriterProxy::format(::net::sourceforge::jnipp::JStringHelper p0, ::net::sourceforge::jnipp::PA<::java::lang::ObjectProxy>::ProxyArray<1> p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "format", "(Ljava/lang/String;[Ljava/lang/Object;)Ljava/io/PrintWriter;" );
	return ::java::io::PrintWriterProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jstring>( p0 ), static_cast<jobjectArray>( p1 ) )  );
}

::java::io::PrintWriterProxy PrintWriterProxy::format(::java::util::LocaleProxy p0, ::net::sourceforge::jnipp::JStringHelper p1, ::net::sourceforge::jnipp::PA<::java::lang::ObjectProxy>::ProxyArray<1> p2)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "format", "(Ljava/util/Locale;Ljava/lang/String;[Ljava/lang/Object;)Ljava/io/PrintWriter;" );
	return ::java::io::PrintWriterProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), static_cast<jstring>( p1 ), static_cast<jobjectArray>( p2 ) )  );
}

::java::io::PrintWriterProxy PrintWriterProxy::printf(::net::sourceforge::jnipp::JStringHelper p0, ::net::sourceforge::jnipp::PA<::java::lang::ObjectProxy>::ProxyArray<1> p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "printf", "(Ljava/lang/String;[Ljava/lang/Object;)Ljava/io/PrintWriter;" );
	return ::java::io::PrintWriterProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jstring>( p0 ), static_cast<jobjectArray>( p1 ) )  );
}

::java::io::PrintWriterProxy PrintWriterProxy::printf(::java::util::LocaleProxy p0, ::net::sourceforge::jnipp::JStringHelper p1, ::net::sourceforge::jnipp::PA<::java::lang::ObjectProxy>::ProxyArray<1> p2)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "printf", "(Ljava/util/Locale;Ljava/lang/String;[Ljava/lang/Object;)Ljava/io/PrintWriter;" );
	return ::java::io::PrintWriterProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), static_cast<jstring>( p1 ), static_cast<jobjectArray>( p2 ) )  );
}

void PrintWriterProxy::close()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "close", "()V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid );
}

void PrintWriterProxy::flush()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "flush", "()V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid );
}

void PrintWriterProxy::print(jboolean p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "print", "(Z)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, p0 );
}

void PrintWriterProxy::print(jchar p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "print", "(C)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, p0 );
}

void PrintWriterProxy::print(::net::sourceforge::jnipp::JCharArrayHelper<1> p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "print", "([C)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, static_cast<jcharArray>( p0 ) );
}

void PrintWriterProxy::print(jdouble p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "print", "(D)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, p0 );
}

void PrintWriterProxy::print(jfloat p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "print", "(F)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, p0 );
}

void PrintWriterProxy::print(jint p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "print", "(I)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, p0 );
}

void PrintWriterProxy::print(::java::lang::ObjectProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "print", "(Ljava/lang/Object;)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

void PrintWriterProxy::print(::net::sourceforge::jnipp::JStringHelper p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "print", "(Ljava/lang/String;)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, static_cast<jstring>( p0 ) );
}

void PrintWriterProxy::print(jlong p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "print", "(J)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, p0 );
}

void PrintWriterProxy::println()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "println", "()V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid );
}

void PrintWriterProxy::println(jboolean p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "println", "(Z)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, p0 );
}

void PrintWriterProxy::println(jchar p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "println", "(C)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, p0 );
}

void PrintWriterProxy::println(::net::sourceforge::jnipp::JCharArrayHelper<1> p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "println", "([C)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, static_cast<jcharArray>( p0 ) );
}

void PrintWriterProxy::println(jdouble p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "println", "(D)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, p0 );
}

void PrintWriterProxy::println(jfloat p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "println", "(F)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, p0 );
}

void PrintWriterProxy::println(jint p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "println", "(I)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, p0 );
}

void PrintWriterProxy::println(::java::lang::ObjectProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "println", "(Ljava/lang/Object;)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

void PrintWriterProxy::println(::net::sourceforge::jnipp::JStringHelper p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "println", "(Ljava/lang/String;)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, static_cast<jstring>( p0 ) );
}

void PrintWriterProxy::println(jlong p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "println", "(J)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, p0 );
}

void PrintWriterProxy::write(::net::sourceforge::jnipp::JCharArrayHelper<1> p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "write", "([C)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, static_cast<jcharArray>( p0 ) );
}

void PrintWriterProxy::write(::net::sourceforge::jnipp::JCharArrayHelper<1> p0, jint p1, jint p2)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "write", "([CII)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, static_cast<jcharArray>( p0 ), p1, p2 );
}

void PrintWriterProxy::write(jint p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "write", "(I)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, p0 );
}

void PrintWriterProxy::write(::net::sourceforge::jnipp::JStringHelper p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "write", "(Ljava/lang/String;)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, static_cast<jstring>( p0 ) );
}

void PrintWriterProxy::write(::net::sourceforge::jnipp::JStringHelper p0, jint p1, jint p2)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "write", "(Ljava/lang/String;II)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, static_cast<jstring>( p0 ), p1, p2 );
}

