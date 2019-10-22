#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "FormatterProxy.h"

// includes for parameter and return type proxy classes
#include "java\io\FileProxy.h"
#include "java\util\LocaleProxy.h"
#include "java\io\OutputStreamProxy.h"
#include "java\io\PrintStreamProxy.h"
#include "java\lang\AppendableProxy.h"
#include "java\io\IOExceptionProxy.h"
#include "java\lang\ObjectProxy.h"
#include "java\util\regex\PatternProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::util;


std::string FormatterProxy::className = "java/util/Formatter";
jclass FormatterProxy::objectClass = NULL;

jclass FormatterProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

FormatterProxy::FormatterProxy(void* unused)
{
}

jobject FormatterProxy::_getPeerObject() const
{
	return peerObject;
}

jclass FormatterProxy::getObjectClass()
{
	return _getObjectClass();
}

FormatterProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
FormatterProxy::FormatterProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

FormatterProxy::FormatterProxy()
{
	jmethodID mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "<init>", "()V" );
	peerObject = JNIEnvHelper::NewGlobalRef( JNIEnvHelper::NewObject( _getObjectClass(), mid ) );
}

FormatterProxy::FormatterProxy(::java::io::FileProxy p0)
{
	jmethodID mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "<init>", "(Ljava/io/File;)V" );
	peerObject = JNIEnvHelper::NewGlobalRef( JNIEnvHelper::NewObject( _getObjectClass(), mid, static_cast<jobject>( p0 ) ) );
}

FormatterProxy::FormatterProxy(::java::io::FileProxy p0, ::net::sourceforge::jnipp::JStringHelper p1)
{
	jmethodID mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "<init>", "(Ljava/io/File;Ljava/lang/String;)V" );
	peerObject = JNIEnvHelper::NewGlobalRef( JNIEnvHelper::NewObject( _getObjectClass(), mid, static_cast<jobject>( p0 ), static_cast<jstring>( p1 ) ) );
}

FormatterProxy::FormatterProxy(::java::io::FileProxy p0, ::net::sourceforge::jnipp::JStringHelper p1, ::java::util::LocaleProxy p2)
{
	jmethodID mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "<init>", "(Ljava/io/File;Ljava/lang/String;Ljava/util/Locale;)V" );
	peerObject = JNIEnvHelper::NewGlobalRef( JNIEnvHelper::NewObject( _getObjectClass(), mid, static_cast<jobject>( p0 ), static_cast<jstring>( p1 ), static_cast<jobject>( p2 ) ) );
}

FormatterProxy::FormatterProxy(::java::io::OutputStreamProxy p0)
{
	jmethodID mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "<init>", "(Ljava/io/OutputStream;)V" );
	peerObject = JNIEnvHelper::NewGlobalRef( JNIEnvHelper::NewObject( _getObjectClass(), mid, static_cast<jobject>( p0 ) ) );
}

FormatterProxy::FormatterProxy(::java::io::OutputStreamProxy p0, ::net::sourceforge::jnipp::JStringHelper p1)
{
	jmethodID mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "<init>", "(Ljava/io/OutputStream;Ljava/lang/String;)V" );
	peerObject = JNIEnvHelper::NewGlobalRef( JNIEnvHelper::NewObject( _getObjectClass(), mid, static_cast<jobject>( p0 ), static_cast<jstring>( p1 ) ) );
}

FormatterProxy::FormatterProxy(::java::io::OutputStreamProxy p0, ::net::sourceforge::jnipp::JStringHelper p1, ::java::util::LocaleProxy p2)
{
	jmethodID mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "<init>", "(Ljava/io/OutputStream;Ljava/lang/String;Ljava/util/Locale;)V" );
	peerObject = JNIEnvHelper::NewGlobalRef( JNIEnvHelper::NewObject( _getObjectClass(), mid, static_cast<jobject>( p0 ), static_cast<jstring>( p1 ), static_cast<jobject>( p2 ) ) );
}

FormatterProxy::FormatterProxy(::java::io::PrintStreamProxy p0)
{
	jmethodID mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "<init>", "(Ljava/io/PrintStream;)V" );
	peerObject = JNIEnvHelper::NewGlobalRef( JNIEnvHelper::NewObject( _getObjectClass(), mid, static_cast<jobject>( p0 ) ) );
}

FormatterProxy::FormatterProxy(::java::lang::AppendableProxy p0)
{
	jmethodID mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "<init>", "(Ljava/lang/Appendable;)V" );
	peerObject = JNIEnvHelper::NewGlobalRef( JNIEnvHelper::NewObject( _getObjectClass(), mid, static_cast<jobject>( p0 ) ) );
}

FormatterProxy::FormatterProxy(::java::lang::AppendableProxy p0, ::java::util::LocaleProxy p1)
{
	jmethodID mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "<init>", "(Ljava/lang/Appendable;Ljava/util/Locale;)V" );
	peerObject = JNIEnvHelper::NewGlobalRef( JNIEnvHelper::NewObject( _getObjectClass(), mid, static_cast<jobject>( p0 ), static_cast<jobject>( p1 ) ) );
}

FormatterProxy::FormatterProxy(::net::sourceforge::jnipp::JStringHelper p0)
{
	jmethodID mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "<init>", "(Ljava/lang/String;)V" );
	peerObject = JNIEnvHelper::NewGlobalRef( JNIEnvHelper::NewObject( _getObjectClass(), mid, static_cast<jstring>( p0 ) ) );
}

FormatterProxy::FormatterProxy(::net::sourceforge::jnipp::JStringHelper p0, ::net::sourceforge::jnipp::JStringHelper p1)
{
	jmethodID mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "<init>", "(Ljava/lang/String;Ljava/lang/String;)V" );
	peerObject = JNIEnvHelper::NewGlobalRef( JNIEnvHelper::NewObject( _getObjectClass(), mid, static_cast<jstring>( p0 ), static_cast<jstring>( p1 ) ) );
}

FormatterProxy::FormatterProxy(::net::sourceforge::jnipp::JStringHelper p0, ::net::sourceforge::jnipp::JStringHelper p1, ::java::util::LocaleProxy p2)
{
	jmethodID mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/util/Locale;)V" );
	peerObject = JNIEnvHelper::NewGlobalRef( JNIEnvHelper::NewObject( _getObjectClass(), mid, static_cast<jstring>( p0 ), static_cast<jstring>( p1 ), static_cast<jobject>( p2 ) ) );
}

FormatterProxy::FormatterProxy(::java::util::LocaleProxy p0)
{
	jmethodID mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "<init>", "(Ljava/util/Locale;)V" );
	peerObject = JNIEnvHelper::NewGlobalRef( JNIEnvHelper::NewObject( _getObjectClass(), mid, static_cast<jobject>( p0 ) ) );
}

FormatterProxy::~FormatterProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

FormatterProxy& FormatterProxy::operator=(const FormatterProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
::java::io::IOExceptionProxy FormatterProxy::ioException()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "ioException", "()Ljava/io/IOException;" );
	return ::java::io::IOExceptionProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::lang::AppendableProxy FormatterProxy::out()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "out", "()Ljava/lang/Appendable;" );
	return ::java::lang::AppendableProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::net::sourceforge::jnipp::JStringHelper FormatterProxy::toString()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "toString", "()Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::util::FormatterProxy FormatterProxy::format(::net::sourceforge::jnipp::JStringHelper p0, ::net::sourceforge::jnipp::PA<::java::lang::ObjectProxy>::ProxyArray<1> p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "format", "(Ljava/lang/String;[Ljava/lang/Object;)Ljava/util/Formatter;" );
	return ::java::util::FormatterProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jstring>( p0 ), static_cast<jobjectArray>( p1 ) )  );
}

::java::util::FormatterProxy FormatterProxy::format(::java::util::LocaleProxy p0, ::net::sourceforge::jnipp::JStringHelper p1, ::net::sourceforge::jnipp::PA<::java::lang::ObjectProxy>::ProxyArray<1> p2)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "format", "(Ljava/util/Locale;Ljava/lang/String;[Ljava/lang/Object;)Ljava/util/Formatter;" );
	return ::java::util::FormatterProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), static_cast<jstring>( p1 ), static_cast<jobjectArray>( p2 ) )  );
}

::java::util::LocaleProxy FormatterProxy::locale()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "locale", "()Ljava/util/Locale;" );
	return ::java::util::LocaleProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

void FormatterProxy::close()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "close", "()V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid );
}

void FormatterProxy::flush()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "flush", "()V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid );
}

