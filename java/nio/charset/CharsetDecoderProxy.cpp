#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "CharsetDecoderProxy.h"

// includes for parameter and return type proxy classes
#include "java\nio\ByteBufferProxy.h"
#include "java\nio\CharBufferProxy.h"
#include "java\nio\charset\CharsetProxy.h"
#include "java\nio\charset\CodingErrorActionProxy.h"
#include "java\nio\charset\CoderResultProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::nio::charset;


std::string CharsetDecoderProxy::className = "java/nio/charset/CharsetDecoder";
jclass CharsetDecoderProxy::objectClass = NULL;

jclass CharsetDecoderProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

CharsetDecoderProxy::CharsetDecoderProxy(void* unused)
{
}

jobject CharsetDecoderProxy::_getPeerObject() const
{
	return peerObject;
}

jclass CharsetDecoderProxy::getObjectClass()
{
	return _getObjectClass();
}

CharsetDecoderProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
CharsetDecoderProxy::CharsetDecoderProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

CharsetDecoderProxy::~CharsetDecoderProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

CharsetDecoderProxy& CharsetDecoderProxy::operator=(const CharsetDecoderProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
jboolean CharsetDecoderProxy::isAutoDetecting()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "isAutoDetecting", "()Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid );
}

jboolean CharsetDecoderProxy::isCharsetDetected()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "isCharsetDetected", "()Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid );
}

jfloat CharsetDecoderProxy::averageCharsPerByte()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "averageCharsPerByte", "()F" );
	return JNIEnvHelper::CallFloatMethod( _getPeerObject(), mid );
}

jfloat CharsetDecoderProxy::maxCharsPerByte()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "maxCharsPerByte", "()F" );
	return JNIEnvHelper::CallFloatMethod( _getPeerObject(), mid );
}

::net::sourceforge::jnipp::JStringHelper CharsetDecoderProxy::replacement()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "replacement", "()Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::nio::CharBufferProxy CharsetDecoderProxy::decode(::java::nio::ByteBufferProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "decode", "(Ljava/nio/ByteBuffer;)Ljava/nio/CharBuffer;" );
	return ::java::nio::CharBufferProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::java::nio::charset::CharsetProxy CharsetDecoderProxy::charset()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "charset", "()Ljava/nio/charset/Charset;" );
	return ::java::nio::charset::CharsetProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::nio::charset::CharsetDecoderProxy CharsetDecoderProxy::onMalformedInput(::java::nio::charset::CodingErrorActionProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "onMalformedInput", "(Ljava/nio/charset/CodingErrorAction;)Ljava/nio/charset/CharsetDecoder;" );
	return ::java::nio::charset::CharsetDecoderProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::java::nio::charset::CharsetDecoderProxy CharsetDecoderProxy::onUnmappableCharacter(::java::nio::charset::CodingErrorActionProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "onUnmappableCharacter", "(Ljava/nio/charset/CodingErrorAction;)Ljava/nio/charset/CharsetDecoder;" );
	return ::java::nio::charset::CharsetDecoderProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::java::nio::charset::CharsetDecoderProxy CharsetDecoderProxy::replaceWith(::net::sourceforge::jnipp::JStringHelper p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "replaceWith", "(Ljava/lang/String;)Ljava/nio/charset/CharsetDecoder;" );
	return ::java::nio::charset::CharsetDecoderProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jstring>( p0 ) )  );
}

::java::nio::charset::CharsetDecoderProxy CharsetDecoderProxy::reset()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "reset", "()Ljava/nio/charset/CharsetDecoder;" );
	return ::java::nio::charset::CharsetDecoderProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::nio::charset::CoderResultProxy CharsetDecoderProxy::decode(::java::nio::ByteBufferProxy p0, ::java::nio::CharBufferProxy p1, jboolean p2)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "decode", "(Ljava/nio/ByteBuffer;Ljava/nio/CharBuffer;Z)Ljava/nio/charset/CoderResult;" );
	return ::java::nio::charset::CoderResultProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), static_cast<jobject>( p1 ), p2 )  );
}

::java::nio::charset::CoderResultProxy CharsetDecoderProxy::flush(::java::nio::CharBufferProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "flush", "(Ljava/nio/CharBuffer;)Ljava/nio/charset/CoderResult;" );
	return ::java::nio::charset::CoderResultProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::java::nio::charset::CharsetProxy CharsetDecoderProxy::detectedCharset()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "detectedCharset", "()Ljava/nio/charset/Charset;" );
	return ::java::nio::charset::CharsetProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::nio::charset::CodingErrorActionProxy CharsetDecoderProxy::malformedInputAction()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "malformedInputAction", "()Ljava/nio/charset/CodingErrorAction;" );
	return ::java::nio::charset::CodingErrorActionProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::nio::charset::CodingErrorActionProxy CharsetDecoderProxy::unmappableCharacterAction()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "unmappableCharacterAction", "()Ljava/nio/charset/CodingErrorAction;" );
	return ::java::nio::charset::CodingErrorActionProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

