#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "DateTimeFormatterProxy.h"

// includes for parameter and return type proxy classes
#include "java\lang\CharSequenceProxy.h"
#include "java\time\temporal\TemporalQueryProxy.h"
#include "java\lang\ObjectProxy.h"
#include "java\time\temporal\TemporalAccessorProxy.h"
#include "java\text\FormatProxy.h"
#include "java\time\ZoneIdProxy.h"
#include "java\time\chrono\ChronologyProxy.h"
#include "java\time\format\DecimalStyleProxy.h"
#include "java\util\LocaleProxy.h"
#include "java\time\temporal\TemporalFieldProxy.h"
#include "java\util\SetProxy.h"
#include "java\time\format\ResolverStyleProxy.h"
#include "java\text\ParsePositionProxy.h"
#include "java\time\format\FormatStyleProxy.h"
#include "java\lang\AppendableProxy.h"
#include "java\time\format\DateTimeFormatterBuilder_CompositePrinterParserProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::time::format;


std::string DateTimeFormatterProxy::className = "java/time/format/DateTimeFormatter";
jclass DateTimeFormatterProxy::objectClass = NULL;

jclass DateTimeFormatterProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

DateTimeFormatterProxy::DateTimeFormatterProxy(void* unused)
{
}

jobject DateTimeFormatterProxy::_getPeerObject() const
{
	return peerObject;
}

jclass DateTimeFormatterProxy::getObjectClass()
{
	return _getObjectClass();
}

DateTimeFormatterProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
DateTimeFormatterProxy::DateTimeFormatterProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

DateTimeFormatterProxy::~DateTimeFormatterProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

DateTimeFormatterProxy& DateTimeFormatterProxy::operator=(const DateTimeFormatterProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
::java::lang::ObjectProxy DateTimeFormatterProxy::parse(::java::lang::CharSequenceProxy p0, ::java::time::temporal::TemporalQueryProxy p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "parse", "(Ljava/lang/CharSequence;Ljava/time/temporal/TemporalQuery;)Ljava/lang/Object;" );
	return ::java::lang::ObjectProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), static_cast<jobject>( p1 ) )  );
}

::net::sourceforge::jnipp::JStringHelper DateTimeFormatterProxy::format(::java::time::temporal::TemporalAccessorProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "format", "(Ljava/time/temporal/TemporalAccessor;)Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::net::sourceforge::jnipp::JStringHelper DateTimeFormatterProxy::toString()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "toString", "()Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::text::FormatProxy DateTimeFormatterProxy::toFormat()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "toFormat", "()Ljava/text/Format;" );
	return ::java::text::FormatProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::text::FormatProxy DateTimeFormatterProxy::toFormat(::java::time::temporal::TemporalQueryProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "toFormat", "(Ljava/time/temporal/TemporalQuery;)Ljava/text/Format;" );
	return ::java::text::FormatProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::java::time::ZoneIdProxy DateTimeFormatterProxy::getZone()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getZone", "()Ljava/time/ZoneId;" );
	return ::java::time::ZoneIdProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::time::chrono::ChronologyProxy DateTimeFormatterProxy::getChronology()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getChronology", "()Ljava/time/chrono/Chronology;" );
	return ::java::time::chrono::ChronologyProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::time::format::DateTimeFormatterProxy DateTimeFormatterProxy::withChronology(::java::time::chrono::ChronologyProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "withChronology", "(Ljava/time/chrono/Chronology;)Ljava/time/format/DateTimeFormatter;" );
	return ::java::time::format::DateTimeFormatterProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::java::time::format::DateTimeFormatterProxy DateTimeFormatterProxy::withDecimalStyle(::java::time::format::DecimalStyleProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "withDecimalStyle", "(Ljava/time/format/DecimalStyle;)Ljava/time/format/DateTimeFormatter;" );
	return ::java::time::format::DateTimeFormatterProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::java::time::format::DateTimeFormatterProxy DateTimeFormatterProxy::withLocale(::java::util::LocaleProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "withLocale", "(Ljava/util/Locale;)Ljava/time/format/DateTimeFormatter;" );
	return ::java::time::format::DateTimeFormatterProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::java::time::format::DateTimeFormatterProxy DateTimeFormatterProxy::withResolverFields(::net::sourceforge::jnipp::PA<::java::time::temporal::TemporalFieldProxy>::ProxyArray<1> p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "withResolverFields", "([Ljava/time/temporal/TemporalField;)Ljava/time/format/DateTimeFormatter;" );
	return ::java::time::format::DateTimeFormatterProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobjectArray>( p0 ) )  );
}

::java::time::format::DateTimeFormatterProxy DateTimeFormatterProxy::withResolverFields(::java::util::SetProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "withResolverFields", "(Ljava/util/Set;)Ljava/time/format/DateTimeFormatter;" );
	return ::java::time::format::DateTimeFormatterProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::java::time::format::DateTimeFormatterProxy DateTimeFormatterProxy::withResolverStyle(::java::time::format::ResolverStyleProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "withResolverStyle", "(Ljava/time/format/ResolverStyle;)Ljava/time/format/DateTimeFormatter;" );
	return ::java::time::format::DateTimeFormatterProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::java::time::format::DateTimeFormatterProxy DateTimeFormatterProxy::withZone(::java::time::ZoneIdProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "withZone", "(Ljava/time/ZoneId;)Ljava/time/format/DateTimeFormatter;" );
	return ::java::time::format::DateTimeFormatterProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::java::time::format::DecimalStyleProxy DateTimeFormatterProxy::getDecimalStyle()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getDecimalStyle", "()Ljava/time/format/DecimalStyle;" );
	return ::java::time::format::DecimalStyleProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::time::format::ResolverStyleProxy DateTimeFormatterProxy::getResolverStyle()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getResolverStyle", "()Ljava/time/format/ResolverStyle;" );
	return ::java::time::format::ResolverStyleProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::time::temporal::TemporalAccessorProxy DateTimeFormatterProxy::parse(::java::lang::CharSequenceProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "parse", "(Ljava/lang/CharSequence;)Ljava/time/temporal/TemporalAccessor;" );
	return ::java::time::temporal::TemporalAccessorProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::java::time::temporal::TemporalAccessorProxy DateTimeFormatterProxy::parse(::java::lang::CharSequenceProxy p0, ::java::text::ParsePositionProxy p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "parse", "(Ljava/lang/CharSequence;Ljava/text/ParsePosition;)Ljava/time/temporal/TemporalAccessor;" );
	return ::java::time::temporal::TemporalAccessorProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), static_cast<jobject>( p1 ) )  );
}

::java::time::temporal::TemporalAccessorProxy DateTimeFormatterProxy::parseBest(::java::lang::CharSequenceProxy p0, ::net::sourceforge::jnipp::PA<::java::time::temporal::TemporalQueryProxy>::ProxyArray<1> p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "parseBest", "(Ljava/lang/CharSequence;[Ljava/time/temporal/TemporalQuery;)Ljava/time/temporal/TemporalAccessor;" );
	return ::java::time::temporal::TemporalAccessorProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), static_cast<jobjectArray>( p1 ) )  );
}

::java::time::temporal::TemporalAccessorProxy DateTimeFormatterProxy::parseUnresolved(::java::lang::CharSequenceProxy p0, ::java::text::ParsePositionProxy p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "parseUnresolved", "(Ljava/lang/CharSequence;Ljava/text/ParsePosition;)Ljava/time/temporal/TemporalAccessor;" );
	return ::java::time::temporal::TemporalAccessorProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), static_cast<jobject>( p1 ) )  );
}

::java::util::LocaleProxy DateTimeFormatterProxy::getLocale()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getLocale", "()Ljava/util/Locale;" );
	return ::java::util::LocaleProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::util::SetProxy DateTimeFormatterProxy::getResolverFields()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getResolverFields", "()Ljava/util/Set;" );
	return ::java::util::SetProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::time::temporal::TemporalQueryProxy DateTimeFormatterProxy::parsedExcessDays()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "parsedExcessDays", "()Ljava/time/temporal/TemporalQuery;" );
	return ::java::time::temporal::TemporalQueryProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid )  );
}

::java::time::temporal::TemporalQueryProxy DateTimeFormatterProxy::parsedLeapSecond()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "parsedLeapSecond", "()Ljava/time/temporal/TemporalQuery;" );
	return ::java::time::temporal::TemporalQueryProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid )  );
}

::java::time::format::DateTimeFormatterProxy DateTimeFormatterProxy::ofLocalizedDate(::java::time::format::FormatStyleProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "ofLocalizedDate", "(Ljava/time/format/FormatStyle;)Ljava/time/format/DateTimeFormatter;" );
	return ::java::time::format::DateTimeFormatterProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, static_cast<jobject>( p0 ) )  );
}

::java::time::format::DateTimeFormatterProxy DateTimeFormatterProxy::ofLocalizedDateTime(::java::time::format::FormatStyleProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "ofLocalizedDateTime", "(Ljava/time/format/FormatStyle;)Ljava/time/format/DateTimeFormatter;" );
	return ::java::time::format::DateTimeFormatterProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, static_cast<jobject>( p0 ) )  );
}

::java::time::format::DateTimeFormatterProxy DateTimeFormatterProxy::ofLocalizedDateTime(::java::time::format::FormatStyleProxy p0, ::java::time::format::FormatStyleProxy p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "ofLocalizedDateTime", "(Ljava/time/format/FormatStyle;Ljava/time/format/FormatStyle;)Ljava/time/format/DateTimeFormatter;" );
	return ::java::time::format::DateTimeFormatterProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, static_cast<jobject>( p0 ), static_cast<jobject>( p1 ) )  );
}

::java::time::format::DateTimeFormatterProxy DateTimeFormatterProxy::ofLocalizedTime(::java::time::format::FormatStyleProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "ofLocalizedTime", "(Ljava/time/format/FormatStyle;)Ljava/time/format/DateTimeFormatter;" );
	return ::java::time::format::DateTimeFormatterProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, static_cast<jobject>( p0 ) )  );
}

::java::time::format::DateTimeFormatterProxy DateTimeFormatterProxy::ofPattern(::net::sourceforge::jnipp::JStringHelper p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "ofPattern", "(Ljava/lang/String;)Ljava/time/format/DateTimeFormatter;" );
	return ::java::time::format::DateTimeFormatterProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, static_cast<jstring>( p0 ) )  );
}

::java::time::format::DateTimeFormatterProxy DateTimeFormatterProxy::ofPattern(::net::sourceforge::jnipp::JStringHelper p0, ::java::util::LocaleProxy p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "ofPattern", "(Ljava/lang/String;Ljava/util/Locale;)Ljava/time/format/DateTimeFormatter;" );
	return ::java::time::format::DateTimeFormatterProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, static_cast<jstring>( p0 ), static_cast<jobject>( p1 ) )  );
}

void DateTimeFormatterProxy::formatTo(::java::time::temporal::TemporalAccessorProxy p0, ::java::lang::AppendableProxy p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "formatTo", "(Ljava/time/temporal/TemporalAccessor;Ljava/lang/Appendable;)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), static_cast<jobject>( p1 ) );
}

