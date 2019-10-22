#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "CharsetEncoderProxy.h"

// includes for parameter and return type proxy classes
#include "java\lang\CharSequenceProxy.h"
#include "java\nio\CharBufferProxy.h"
#include "java\nio\ByteBufferProxy.h"
#include "java\nio\charset\CharsetProxy.h"
#include "java\nio\charset\CodingErrorActionProxy.h"
#include "java\nio\charset\CoderResultProxy.h"
#include "java\lang\ref\WeakReferenceProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::nio::charset;


std::string CharsetEncoderProxy::className = "java/nio/charset/CharsetEncoder";
jclass CharsetEncoderProxy::objectClass = NULL;

jclass CharsetEncoderProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

CharsetEncoderProxy::CharsetEncoderProxy(void* unused)
{
}

jobject CharsetEncoderProxy::_getPeerObject() const
{
	return peerObject;
}

jclass CharsetEncoderProxy::getObjectClass()
{
	return _getObjectClass();
}

CharsetEncoderProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
CharsetEncoderProxy::CharsetEncoderProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

CharsetEncoderProxy::~CharsetEncoderProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

CharsetEncoderProxy& CharsetEncoderProxy::operator=(const CharsetEncoderProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
jboolean CharsetEncoderProxy::canEncode(jchar p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "canEncode", "(C)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, p0 );
}

jboolean CharsetEncoderProxy::canEncode(::java::lang::CharSequenceProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "canEncode", "(Ljava/lang/CharSequence;)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

jboolean CharsetEncoderProxy::isLegalReplacement(::net::sourceforge::jnipp::JByteArrayHelper<1> p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "isLegalReplacement", "([B)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, static_cast<jbyteArray>( p0 ) );
}

::net::sourceforge::jnipp::JByteArrayHelper<1> CharsetEncoderProxy::replacement()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "replacement", "()[B" );
	return ::net::sourceforge::jnipp::JByteArrayHelper<1>( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

jfloat CharsetEncoderProxy::averageBytesPerChar()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "averageBytesPerChar", "()F" );
	return JNIEnvHelper::CallFloatMethod( _getPeerObject(), mid );
}

jfloat CharsetEncoderProxy::maxBytesPerChar()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "maxBytesPerChar", "()F" );
	return JNIEnvHelper::CallFloatMethod( _getPeerObject(), mid );
}

::java::nio::ByteBufferProxy CharsetEncoderProxy::encode(::java::nio::CharBufferProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "encode", "(Ljava/nio/CharBuffer;)Ljava/nio/ByteBuffer;" );
	return ::java::nio::ByteBufferProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::java::nio::charset::CharsetProxy CharsetEncoderProxy::charset()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "charset", "()Ljava/nio/charset/Charset;" );
	return ::java::nio::charset::CharsetProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::nio::charset::CharsetEncoderProxy CharsetEncoderProxy::onMalformedInput(::java::nio::charset::CodingErrorActionProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "onMalformedInput", "(Ljava/nio/charset/CodingErrorAction;)Ljava/nio/charset/CharsetEncoder;" );
	return ::java::nio::charset::CharsetEncoderProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::java::nio::charset::CharsetEncoderProxy CharsetEncoderProxy::onUnmappableCharacter(::java::nio::charset::CodingErrorActionProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "onUnmappableCharacter", "(Ljava/nio/charset/CodingErrorAction;)Ljava/nio/charset/CharsetEncoder;" );
	return ::java::nio::charset::CharsetEncoderProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::java::nio::charset::CharsetEncoderProxy CharsetEncoderProxy::replaceWith(::net::sourceforge::jnipp::JByteArrayHelper<1> p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "replaceWith", "([B)Ljava/nio/charset/CharsetEncoder;" );
	return ::java::nio::charset::CharsetEncoderProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jbyteArray>( p0 ) )  );
}

::java::nio::charset::CharsetEncoderProxy CharsetEncoderProxy::reset()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "reset", "()Ljava/nio/charset/CharsetEncoder;" );
	return ::java::nio::charset::CharsetEncoderProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::nio::charset::CoderResultProxy CharsetEncoderProxy::encode(::java::nio::CharBufferProxy p0, ::java::nio::ByteBufferProxy p1, jboolean p2)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "encode", "(Ljava/nio/CharBuffer;Ljava/nio/ByteBuffer;Z)Ljava/nio/charset/CoderResult;" );
	return ::java::nio::charset::CoderResultProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), static_cast<jobject>( p1 ), p2 )  );
}

::java::nio::charset::CoderResultProxy CharsetEncoderProxy::flush(::java::nio::ByteBufferProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "flush", "(Ljava/nio/ByteBuffer;)Ljava/nio/charset/CoderResult;" );
	return ::java::nio::charset::CoderResultProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::java::nio::charset::CodingErrorActionProxy CharsetEncoderProxy::malformedInputAction()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "malformedInputAction", "()Ljava/nio/charset/CodingErrorAction;" );
	return ::java::nio::charset::CodingErrorActionProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::nio::charset::CodingErrorActionProxy CharsetEncoderProxy::unmappableCharacterAction()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "unmappableCharacterAction", "()Ljava/nio/charset/CodingErrorAction;" );
	return ::java::nio::charset::CodingErrorActionProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

