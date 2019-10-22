#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "StreamEncoderProxy.h"

// includes for parameter and return type proxy classes
#include "java\nio\channels\WritableByteChannelProxy.h"
#include "java\nio\charset\CharsetEncoderProxy.h"
#include "java\io\OutputStreamProxy.h"
#include "java\lang\ObjectProxy.h"
#include "java\nio\charset\CharsetProxy.h"
#include "java\nio\ByteBufferProxy.h"
#include "java\nio\CharBufferProxy.h"

using namespace net::sourceforge::jnipp;
using namespace sun::nio::cs;


std::string StreamEncoderProxy::className = "sun/nio/cs/StreamEncoder";
jclass StreamEncoderProxy::objectClass = NULL;

jclass StreamEncoderProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

StreamEncoderProxy::StreamEncoderProxy(void* unused)
{
}

jobject StreamEncoderProxy::_getPeerObject() const
{
	return peerObject;
}

jclass StreamEncoderProxy::getObjectClass()
{
	return _getObjectClass();
}

StreamEncoderProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
StreamEncoderProxy::StreamEncoderProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

StreamEncoderProxy::~StreamEncoderProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

StreamEncoderProxy& StreamEncoderProxy::operator=(const StreamEncoderProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
::net::sourceforge::jnipp::JStringHelper StreamEncoderProxy::getEncoding()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getEncoding", "()Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::sun::nio::cs::StreamEncoderProxy StreamEncoderProxy::forEncoder(::java::nio::channels::WritableByteChannelProxy p0, ::java::nio::charset::CharsetEncoderProxy p1, jint p2)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "forEncoder", "(Ljava/nio/channels/WritableByteChannel;Ljava/nio/charset/CharsetEncoder;I)Lsun/nio/cs/StreamEncoder;" );
	return ::sun::nio::cs::StreamEncoderProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, static_cast<jobject>( p0 ), static_cast<jobject>( p1 ), p2 )  );
}

::sun::nio::cs::StreamEncoderProxy StreamEncoderProxy::forOutputStreamWriter(::java::io::OutputStreamProxy p0, ::java::lang::ObjectProxy p1, ::net::sourceforge::jnipp::JStringHelper p2)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "forOutputStreamWriter", "(Ljava/io/OutputStream;Ljava/lang/Object;Ljava/lang/String;)Lsun/nio/cs/StreamEncoder;" );
	return ::sun::nio::cs::StreamEncoderProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, static_cast<jobject>( p0 ), static_cast<jobject>( p1 ), static_cast<jstring>( p2 ) )  );
}

::sun::nio::cs::StreamEncoderProxy StreamEncoderProxy::forOutputStreamWriter(::java::io::OutputStreamProxy p0, ::java::lang::ObjectProxy p1, ::java::nio::charset::CharsetProxy p2)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "forOutputStreamWriter", "(Ljava/io/OutputStream;Ljava/lang/Object;Ljava/nio/charset/Charset;)Lsun/nio/cs/StreamEncoder;" );
	return ::sun::nio::cs::StreamEncoderProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, static_cast<jobject>( p0 ), static_cast<jobject>( p1 ), static_cast<jobject>( p2 ) )  );
}

::sun::nio::cs::StreamEncoderProxy StreamEncoderProxy::forOutputStreamWriter(::java::io::OutputStreamProxy p0, ::java::lang::ObjectProxy p1, ::java::nio::charset::CharsetEncoderProxy p2)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "forOutputStreamWriter", "(Ljava/io/OutputStream;Ljava/lang/Object;Ljava/nio/charset/CharsetEncoder;)Lsun/nio/cs/StreamEncoder;" );
	return ::sun::nio::cs::StreamEncoderProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, static_cast<jobject>( p0 ), static_cast<jobject>( p1 ), static_cast<jobject>( p2 ) )  );
}

void StreamEncoderProxy::close()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "close", "()V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid );
}

void StreamEncoderProxy::flush()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "flush", "()V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid );
}

void StreamEncoderProxy::flushBuffer()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "flushBuffer", "()V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid );
}

void StreamEncoderProxy::write(::net::sourceforge::jnipp::JCharArrayHelper<1> p0, jint p1, jint p2)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "write", "([CII)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, static_cast<jcharArray>( p0 ), p1, p2 );
}

void StreamEncoderProxy::write(jint p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "write", "(I)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, p0 );
}

void StreamEncoderProxy::write(::net::sourceforge::jnipp::JStringHelper p0, jint p1, jint p2)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "write", "(Ljava/lang/String;II)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, static_cast<jstring>( p0 ), p1, p2 );
}

