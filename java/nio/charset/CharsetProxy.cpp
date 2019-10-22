#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "CharsetProxy.h"

// includes for parameter and return type proxy classes
#include "java\nio\charset\CharsetDecoderProxy.h"
#include "java\nio\charset\CharsetEncoderProxy.h"
#include "java\lang\ObjectProxy.h"
#include "java\nio\ByteBufferProxy.h"
#include "java\nio\CharBufferProxy.h"
#include "java\util\SetProxy.h"
#include "java\util\LocaleProxy.h"
#include "java\util\SortedMapProxy.h"
#include "java\lang\ThreadLocalProxy.h"
#include "java\nio\charset\spi\CharsetProviderProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::nio::charset;


std::string CharsetProxy::className = "java/nio/charset/Charset";
jclass CharsetProxy::objectClass = NULL;

jclass CharsetProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

CharsetProxy::CharsetProxy(void* unused)
{
}

jobject CharsetProxy::_getPeerObject() const
{
	return peerObject;
}

jclass CharsetProxy::getObjectClass()
{
	return _getObjectClass();
}

CharsetProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
CharsetProxy::CharsetProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

CharsetProxy::~CharsetProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

CharsetProxy& CharsetProxy::operator=(const CharsetProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
jboolean CharsetProxy::contains(::java::nio::charset::CharsetProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "contains", "(Ljava/nio/charset/Charset;)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

::java::nio::charset::CharsetDecoderProxy CharsetProxy::newDecoder()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "newDecoder", "()Ljava/nio/charset/CharsetDecoder;" );
	return ::java::nio::charset::CharsetDecoderProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::nio::charset::CharsetEncoderProxy CharsetProxy::newEncoder()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "newEncoder", "()Ljava/nio/charset/CharsetEncoder;" );
	return ::java::nio::charset::CharsetEncoderProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

jboolean CharsetProxy::canEncode()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "canEncode", "()Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid );
}

jboolean CharsetProxy::equals(::java::lang::ObjectProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "equals", "(Ljava/lang/Object;)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

jboolean CharsetProxy::isRegistered()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "isRegistered", "()Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid );
}

jint CharsetProxy::compareTo(::java::nio::charset::CharsetProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "compareTo", "(Ljava/nio/charset/Charset;)I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

jint CharsetProxy::hashCode()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "hashCode", "()I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid );
}

::net::sourceforge::jnipp::JStringHelper CharsetProxy::name()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "name", "()Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::net::sourceforge::jnipp::JStringHelper CharsetProxy::toString()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "toString", "()Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::nio::ByteBufferProxy CharsetProxy::encode(::net::sourceforge::jnipp::JStringHelper p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "encode", "(Ljava/lang/String;)Ljava/nio/ByteBuffer;" );
	return ::java::nio::ByteBufferProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jstring>( p0 ) )  );
}

::java::nio::ByteBufferProxy CharsetProxy::encode(::java::nio::CharBufferProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "encode", "(Ljava/nio/CharBuffer;)Ljava/nio/ByteBuffer;" );
	return ::java::nio::ByteBufferProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::java::nio::CharBufferProxy CharsetProxy::decode(::java::nio::ByteBufferProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "decode", "(Ljava/nio/ByteBuffer;)Ljava/nio/CharBuffer;" );
	return ::java::nio::CharBufferProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::java::util::SetProxy CharsetProxy::aliases()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "aliases", "()Ljava/util/Set;" );
	return ::java::util::SetProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::net::sourceforge::jnipp::JStringHelper CharsetProxy::displayName()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "displayName", "()Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::net::sourceforge::jnipp::JStringHelper CharsetProxy::displayName(::java::util::LocaleProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "displayName", "(Ljava/util/Locale;)Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

jboolean CharsetProxy::isSupported(::net::sourceforge::jnipp::JStringHelper p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "isSupported", "(Ljava/lang/String;)Z" );
	return JNIEnvHelper::CallStaticBooleanMethod( _getObjectClass(), mid, static_cast<jstring>( p0 ) );
}

::java::nio::charset::CharsetProxy CharsetProxy::defaultCharset()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "defaultCharset", "()Ljava/nio/charset/Charset;" );
	return ::java::nio::charset::CharsetProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid )  );
}

::java::nio::charset::CharsetProxy CharsetProxy::forName(::net::sourceforge::jnipp::JStringHelper p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "forName", "(Ljava/lang/String;)Ljava/nio/charset/Charset;" );
	return ::java::nio::charset::CharsetProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, static_cast<jstring>( p0 ) )  );
}

::java::util::SortedMapProxy CharsetProxy::availableCharsets()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "availableCharsets", "()Ljava/util/SortedMap;" );
	return ::java::util::SortedMapProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid )  );
}

