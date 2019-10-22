#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "OutputStreamWriterProxy.h"

// includes for parameter and return type proxy classes
#include "java\io\OutputStreamProxy.h"
#include "java\nio\charset\CharsetProxy.h"
#include "java\nio\charset\CharsetEncoderProxy.h"
#include "sun\nio\cs\StreamEncoderProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::io;


std::string OutputStreamWriterProxy::className = "java/io/OutputStreamWriter";
jclass OutputStreamWriterProxy::objectClass = NULL;

jclass OutputStreamWriterProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

OutputStreamWriterProxy::OutputStreamWriterProxy(void* unused)
{
}

jobject OutputStreamWriterProxy::_getPeerObject() const
{
	return peerObject;
}

jclass OutputStreamWriterProxy::getObjectClass()
{
	return _getObjectClass();
}

OutputStreamWriterProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
OutputStreamWriterProxy::OutputStreamWriterProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

OutputStreamWriterProxy::OutputStreamWriterProxy(::java::io::OutputStreamProxy p0)
{
	jmethodID mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "<init>", "(Ljava/io/OutputStream;)V" );
	peerObject = JNIEnvHelper::NewGlobalRef( JNIEnvHelper::NewObject( _getObjectClass(), mid, static_cast<jobject>( p0 ) ) );
}

OutputStreamWriterProxy::OutputStreamWriterProxy(::java::io::OutputStreamProxy p0, ::net::sourceforge::jnipp::JStringHelper p1)
{
	jmethodID mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "<init>", "(Ljava/io/OutputStream;Ljava/lang/String;)V" );
	peerObject = JNIEnvHelper::NewGlobalRef( JNIEnvHelper::NewObject( _getObjectClass(), mid, static_cast<jobject>( p0 ), static_cast<jstring>( p1 ) ) );
}

OutputStreamWriterProxy::OutputStreamWriterProxy(::java::io::OutputStreamProxy p0, ::java::nio::charset::CharsetProxy p1)
{
	jmethodID mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "<init>", "(Ljava/io/OutputStream;Ljava/nio/charset/Charset;)V" );
	peerObject = JNIEnvHelper::NewGlobalRef( JNIEnvHelper::NewObject( _getObjectClass(), mid, static_cast<jobject>( p0 ), static_cast<jobject>( p1 ) ) );
}

OutputStreamWriterProxy::OutputStreamWriterProxy(::java::io::OutputStreamProxy p0, ::java::nio::charset::CharsetEncoderProxy p1)
{
	jmethodID mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "<init>", "(Ljava/io/OutputStream;Ljava/nio/charset/CharsetEncoder;)V" );
	peerObject = JNIEnvHelper::NewGlobalRef( JNIEnvHelper::NewObject( _getObjectClass(), mid, static_cast<jobject>( p0 ), static_cast<jobject>( p1 ) ) );
}

OutputStreamWriterProxy::~OutputStreamWriterProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

OutputStreamWriterProxy& OutputStreamWriterProxy::operator=(const OutputStreamWriterProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
::net::sourceforge::jnipp::JStringHelper OutputStreamWriterProxy::getEncoding()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getEncoding", "()Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

void OutputStreamWriterProxy::close()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "close", "()V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid );
}

void OutputStreamWriterProxy::flush()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "flush", "()V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid );
}

void OutputStreamWriterProxy::write(::net::sourceforge::jnipp::JCharArrayHelper<1> p0, jint p1, jint p2)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "write", "([CII)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, static_cast<jcharArray>( p0 ), p1, p2 );
}

void OutputStreamWriterProxy::write(jint p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "write", "(I)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, p0 );
}

void OutputStreamWriterProxy::write(::net::sourceforge::jnipp::JStringHelper p0, jint p1, jint p2)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "write", "(Ljava/lang/String;II)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, static_cast<jstring>( p0 ), p1, p2 );
}

