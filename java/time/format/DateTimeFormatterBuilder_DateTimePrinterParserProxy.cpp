#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "DateTimeFormatterBuilder_DateTimePrinterParserProxy.h"

// includes for parameter and return type proxy classes
#include "java\time\format\DateTimePrintContextProxy.h"
#include "java\lang\StringBuilderProxy.h"
#include "java\time\format\DateTimeParseContextProxy.h"
#include "java\lang\CharSequenceProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::time::format;


std::string DateTimeFormatterBuilder_DateTimePrinterParserProxy::className = "java/time/format/DateTimeFormatterBuilder$DateTimePrinterParser";
jclass DateTimeFormatterBuilder_DateTimePrinterParserProxy::objectClass = NULL;

jclass DateTimeFormatterBuilder_DateTimePrinterParserProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

DateTimeFormatterBuilder_DateTimePrinterParserProxy::DateTimeFormatterBuilder_DateTimePrinterParserProxy(void* unused)
{
}

jobject DateTimeFormatterBuilder_DateTimePrinterParserProxy::_getPeerObject() const
{
	return peerObject;
}

jclass DateTimeFormatterBuilder_DateTimePrinterParserProxy::getObjectClass()
{
	return _getObjectClass();
}

DateTimeFormatterBuilder_DateTimePrinterParserProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
DateTimeFormatterBuilder_DateTimePrinterParserProxy::DateTimeFormatterBuilder_DateTimePrinterParserProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

DateTimeFormatterBuilder_DateTimePrinterParserProxy::~DateTimeFormatterBuilder_DateTimePrinterParserProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

DateTimeFormatterBuilder_DateTimePrinterParserProxy& DateTimeFormatterBuilder_DateTimePrinterParserProxy::operator=(const DateTimeFormatterBuilder_DateTimePrinterParserProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
jboolean DateTimeFormatterBuilder_DateTimePrinterParserProxy::format(::java::time::format::DateTimePrintContextProxy p0, ::java::lang::StringBuilderProxy p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "format", "(Ljava/time/format/DateTimePrintContext;Ljava/lang/StringBuilder;)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), static_cast<jobject>( p1 ) );
}

jint DateTimeFormatterBuilder_DateTimePrinterParserProxy::parse(::java::time::format::DateTimeParseContextProxy p0, ::java::lang::CharSequenceProxy p1, jint p2)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "parse", "(Ljava/time/format/DateTimeParseContext;Ljava/lang/CharSequence;I)I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), static_cast<jobject>( p1 ), p2 );
}

