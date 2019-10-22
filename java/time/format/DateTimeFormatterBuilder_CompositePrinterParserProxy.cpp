#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "DateTimeFormatterBuilder_CompositePrinterParserProxy.h"

// includes for parameter and return type proxy classes
#include "java\time\format\DateTimePrintContextProxy.h"
#include "java\lang\StringBuilderProxy.h"
#include "java\time\format\DateTimeParseContextProxy.h"
#include "java\lang\CharSequenceProxy.h"
#include "java\time\format\DateTimeFormatterBuilder_DateTimePrinterParserProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::time::format;


std::string DateTimeFormatterBuilder_CompositePrinterParserProxy::className = "java/time/format/DateTimeFormatterBuilder$CompositePrinterParser";
jclass DateTimeFormatterBuilder_CompositePrinterParserProxy::objectClass = NULL;

jclass DateTimeFormatterBuilder_CompositePrinterParserProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

DateTimeFormatterBuilder_CompositePrinterParserProxy::DateTimeFormatterBuilder_CompositePrinterParserProxy(void* unused)
{
}

jobject DateTimeFormatterBuilder_CompositePrinterParserProxy::_getPeerObject() const
{
	return peerObject;
}

jclass DateTimeFormatterBuilder_CompositePrinterParserProxy::getObjectClass()
{
	return _getObjectClass();
}

DateTimeFormatterBuilder_CompositePrinterParserProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
DateTimeFormatterBuilder_CompositePrinterParserProxy::DateTimeFormatterBuilder_CompositePrinterParserProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

DateTimeFormatterBuilder_CompositePrinterParserProxy::~DateTimeFormatterBuilder_CompositePrinterParserProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

DateTimeFormatterBuilder_CompositePrinterParserProxy& DateTimeFormatterBuilder_CompositePrinterParserProxy::operator=(const DateTimeFormatterBuilder_CompositePrinterParserProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
jboolean DateTimeFormatterBuilder_CompositePrinterParserProxy::format(::java::time::format::DateTimePrintContextProxy p0, ::java::lang::StringBuilderProxy p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "format", "(Ljava/time/format/DateTimePrintContext;Ljava/lang/StringBuilder;)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), static_cast<jobject>( p1 ) );
}

jint DateTimeFormatterBuilder_CompositePrinterParserProxy::parse(::java::time::format::DateTimeParseContextProxy p0, ::java::lang::CharSequenceProxy p1, jint p2)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "parse", "(Ljava/time/format/DateTimeParseContext;Ljava/lang/CharSequence;I)I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), static_cast<jobject>( p1 ), p2 );
}

::net::sourceforge::jnipp::JStringHelper DateTimeFormatterBuilder_CompositePrinterParserProxy::toString()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "toString", "()Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::time::format::DateTimeFormatterBuilder_CompositePrinterParserProxy DateTimeFormatterBuilder_CompositePrinterParserProxy::withOptional(jboolean p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "withOptional", "(Z)Ljava/time/format/DateTimeFormatterBuilder$CompositePrinterParser;" );
	return ::java::time::format::DateTimeFormatterBuilder_CompositePrinterParserProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0 )  );
}

