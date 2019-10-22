#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "FormatProxy.h"

// includes for parameter and return type proxy classes
#include "java\text\ParsePositionProxy.h"
#include "java\lang\ObjectProxy.h"
#include "java\lang\StringBufferProxy.h"
#include "java\text\FieldPositionProxy.h"
#include "java\text\AttributedCharacterIteratorProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::text;


std::string FormatProxy::className = "java/text/Format";
jclass FormatProxy::objectClass = NULL;

jclass FormatProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

FormatProxy::FormatProxy(void* unused)
{
}

jobject FormatProxy::_getPeerObject() const
{
	return peerObject;
}

jclass FormatProxy::getObjectClass()
{
	return _getObjectClass();
}

FormatProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
FormatProxy::FormatProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

FormatProxy::~FormatProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

FormatProxy& FormatProxy::operator=(const FormatProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
::java::lang::ObjectProxy FormatProxy::parseObject(::net::sourceforge::jnipp::JStringHelper p0, ::java::text::ParsePositionProxy p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "parseObject", "(Ljava/lang/String;Ljava/text/ParsePosition;)Ljava/lang/Object;" );
	return ::java::lang::ObjectProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jstring>( p0 ), static_cast<jobject>( p1 ) )  );
}

::java::lang::StringBufferProxy FormatProxy::format(::java::lang::ObjectProxy p0, ::java::lang::StringBufferProxy p1, ::java::text::FieldPositionProxy p2)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "format", "(Ljava/lang/Object;Ljava/lang/StringBuffer;Ljava/text/FieldPosition;)Ljava/lang/StringBuffer;" );
	return ::java::lang::StringBufferProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), static_cast<jobject>( p1 ), static_cast<jobject>( p2 ) )  );
}

::net::sourceforge::jnipp::JStringHelper FormatProxy::format(::java::lang::ObjectProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "format", "(Ljava/lang/Object;)Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::java::lang::ObjectProxy FormatProxy::clone()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "clone", "()Ljava/lang/Object;" );
	return ::java::lang::ObjectProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::lang::ObjectProxy FormatProxy::parseObject(::net::sourceforge::jnipp::JStringHelper p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "parseObject", "(Ljava/lang/String;)Ljava/lang/Object;" );
	return ::java::lang::ObjectProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jstring>( p0 ) )  );
}

::java::text::AttributedCharacterIteratorProxy FormatProxy::formatToCharacterIterator(::java::lang::ObjectProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "formatToCharacterIterator", "(Ljava/lang/Object;)Ljava/text/AttributedCharacterIterator;" );
	return ::java::text::AttributedCharacterIteratorProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

