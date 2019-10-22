#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "PrintStreamProxy.h"

// includes for parameter and return type proxy classes
#include "java\io\FileProxy.h"
#include "java\io\OutputStreamProxy.h"
#include "java\lang\CharSequenceProxy.h"
#include "java\lang\ObjectProxy.h"
#include "java\util\LocaleProxy.h"
#include "java\io\BufferedWriterProxy.h"
#include "java\io\OutputStreamWriterProxy.h"
#include "java\util\FormatterProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::io;


std::string PrintStreamProxy::className = "java/io/PrintStream";
jclass PrintStreamProxy::objectClass = NULL;

jclass PrintStreamProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

PrintStreamProxy::PrintStreamProxy(void* unused)
{
}

jobject PrintStreamProxy::_getPeerObject() const
{
	return peerObject;
}

jclass PrintStreamProxy::getObjectClass()
{
	return _getObjectClass();
}

PrintStreamProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
PrintStreamProxy::PrintStreamProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

PrintStreamProxy::PrintStreamProxy(::java::io::FileProxy p0)
{
	jmethodID mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "<init>", "(Ljava/io/File;)V" );
	peerObject = JNIEnvHelper::NewGlobalRef( JNIEnvHelper::NewObject( _getObjectClass(), mid, static_cast<jobject>( p0 ) ) );
}

PrintStreamProxy::PrintStreamProxy(::java::io::FileProxy p0, ::net::sourceforge::jnipp::JStringHelper p1)
{
	jmethodID mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "<init>", "(Ljava/io/File;Ljava/lang/String;)V" );
	peerObject = JNIEnvHelper::NewGlobalRef( JNIEnvHelper::NewObject( _getObjectClass(), mid, static_cast<jobject>( p0 ), static_cast<jstring>( p1 ) ) );
}

PrintStreamProxy::PrintStreamProxy(::java::io::OutputStreamProxy p0)
{
	jmethodID mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "<init>", "(Ljava/io/OutputStream;)V" );
	peerObject = JNIEnvHelper::NewGlobalRef( JNIEnvHelper::NewObject( _getObjectClass(), mid, static_cast<jobject>( p0 ) ) );
}

PrintStreamProxy::PrintStreamProxy(::java::io::OutputStreamProxy p0, jboolean p1)
{
	jmethodID mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "<init>", "(Ljava/io/OutputStream;Z)V" );
	peerObject = JNIEnvHelper::NewGlobalRef( JNIEnvHelper::NewObject( _getObjectClass(), mid, static_cast<jobject>( p0 ), p1 ) );
}

PrintStreamProxy::PrintStreamProxy(::java::io::OutputStreamProxy p0, jboolean p1, ::net::sourceforge::jnipp::JStringHelper p2)
{
	jmethodID mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "<init>", "(Ljava/io/OutputStream;ZLjava/lang/String;)V" );
	peerObject = JNIEnvHelper::NewGlobalRef( JNIEnvHelper::NewObject( _getObjectClass(), mid, static_cast<jobject>( p0 ), p1, static_cast<jstring>( p2 ) ) );
}

PrintStreamProxy::PrintStreamProxy(::net::sourceforge::jnipp::JStringHelper p0)
{
	jmethodID mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "<init>", "(Ljava/lang/String;)V" );
	peerObject = JNIEnvHelper::NewGlobalRef( JNIEnvHelper::NewObject( _getObjectClass(), mid, static_cast<jstring>( p0 ) ) );
}

PrintStreamProxy::PrintStreamProxy(::net::sourceforge::jnipp::JStringHelper p0, ::net::sourceforge::jnipp::JStringHelper p1)
{
	jmethodID mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "<init>", "(Ljava/lang/String;Ljava/lang/String;)V" );
	peerObject = JNIEnvHelper::NewGlobalRef( JNIEnvHelper::NewObject( _getObjectClass(), mid, static_cast<jstring>( p0 ), static_cast<jstring>( p1 ) ) );
}

PrintStreamProxy::~PrintStreamProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

PrintStreamProxy& PrintStreamProxy::operator=(const PrintStreamProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
jboolean PrintStreamProxy::checkError()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "checkError", "()Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid );
}

::java::io::PrintStreamProxy PrintStreamProxy::append(jchar p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "append", "(C)Ljava/io/PrintStream;" );
	return ::java::io::PrintStreamProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0 )  );
}

::java::io::PrintStreamProxy PrintStreamProxy::append(::java::lang::CharSequenceProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "append", "(Ljava/lang/CharSequence;)Ljava/io/PrintStream;" );
	return ::java::io::PrintStreamProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::java::io::PrintStreamProxy PrintStreamProxy::append(::java::lang::CharSequenceProxy p0, jint p1, jint p2)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "append", "(Ljava/lang/CharSequence;II)Ljava/io/PrintStream;" );
	return ::java::io::PrintStreamProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), p1, p2 )  );
}

::java::io::PrintStreamProxy PrintStreamProxy::format(::net::sourceforge::jnipp::JStringHelper p0, ::net::sourceforge::jnipp::PA<::java::lang::ObjectProxy>::ProxyArray<1> p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "format", "(Ljava/lang/String;[Ljava/lang/Object;)Ljava/io/PrintStream;" );
	return ::java::io::PrintStreamProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jstring>( p0 ), static_cast<jobjectArray>( p1 ) )  );
}

::java::io::PrintStreamProxy PrintStreamProxy::format(::java::util::LocaleProxy p0, ::net::sourceforge::jnipp::JStringHelper p1, ::net::sourceforge::jnipp::PA<::java::lang::ObjectProxy>::ProxyArray<1> p2)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "format", "(Ljava/util/Locale;Ljava/lang/String;[Ljava/lang/Object;)Ljava/io/PrintStream;" );
	return ::java::io::PrintStreamProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), static_cast<jstring>( p1 ), static_cast<jobjectArray>( p2 ) )  );
}

::java::io::PrintStreamProxy PrintStreamProxy::printf(::net::sourceforge::jnipp::JStringHelper p0, ::net::sourceforge::jnipp::PA<::java::lang::ObjectProxy>::ProxyArray<1> p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "printf", "(Ljava/lang/String;[Ljava/lang/Object;)Ljava/io/PrintStream;" );
	return ::java::io::PrintStreamProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jstring>( p0 ), static_cast<jobjectArray>( p1 ) )  );
}

::java::io::PrintStreamProxy PrintStreamProxy::printf(::java::util::LocaleProxy p0, ::net::sourceforge::jnipp::JStringHelper p1, ::net::sourceforge::jnipp::PA<::java::lang::ObjectProxy>::ProxyArray<1> p2)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "printf", "(Ljava/util/Locale;Ljava/lang/String;[Ljava/lang/Object;)Ljava/io/PrintStream;" );
	return ::java::io::PrintStreamProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), static_cast<jstring>( p1 ), static_cast<jobjectArray>( p2 ) )  );
}

void PrintStreamProxy::close()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "close", "()V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid );
}

void PrintStreamProxy::flush()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "flush", "()V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid );
}

void PrintStreamProxy::print(jboolean p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "print", "(Z)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, p0 );
}

void PrintStreamProxy::print(jchar p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "print", "(C)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, p0 );
}

void PrintStreamProxy::print(::net::sourceforge::jnipp::JCharArrayHelper<1> p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "print", "([C)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, static_cast<jcharArray>( p0 ) );
}

void PrintStreamProxy::print(jdouble p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "print", "(D)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, p0 );
}

void PrintStreamProxy::print(jfloat p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "print", "(F)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, p0 );
}

void PrintStreamProxy::print(jint p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "print", "(I)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, p0 );
}

void PrintStreamProxy::print(::java::lang::ObjectProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "print", "(Ljava/lang/Object;)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

void PrintStreamProxy::print(::net::sourceforge::jnipp::JStringHelper p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "print", "(Ljava/lang/String;)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, static_cast<jstring>( p0 ) );
}

void PrintStreamProxy::print(jlong p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "print", "(J)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, p0 );
}

void PrintStreamProxy::println()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "println", "()V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid );
}

void PrintStreamProxy::println(jboolean p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "println", "(Z)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, p0 );
}

void PrintStreamProxy::println(jchar p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "println", "(C)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, p0 );
}

void PrintStreamProxy::println(::net::sourceforge::jnipp::JCharArrayHelper<1> p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "println", "([C)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, static_cast<jcharArray>( p0 ) );
}

void PrintStreamProxy::println(jdouble p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "println", "(D)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, p0 );
}

void PrintStreamProxy::println(jfloat p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "println", "(F)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, p0 );
}

void PrintStreamProxy::println(jint p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "println", "(I)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, p0 );
}

void PrintStreamProxy::println(::java::lang::ObjectProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "println", "(Ljava/lang/Object;)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

void PrintStreamProxy::println(::net::sourceforge::jnipp::JStringHelper p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "println", "(Ljava/lang/String;)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, static_cast<jstring>( p0 ) );
}

void PrintStreamProxy::println(jlong p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "println", "(J)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, p0 );
}

void PrintStreamProxy::write(::net::sourceforge::jnipp::JByteArrayHelper<1> p0, jint p1, jint p2)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "write", "([BII)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, static_cast<jbyteArray>( p0 ), p1, p2 );
}

void PrintStreamProxy::write(jint p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "write", "(I)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, p0 );
}

