#ifndef __java_time_format_DateTimeFormatterProxy_H
#define __java_time_format_DateTimeFormatterProxy_H


#include <jni.h>
#include <string>

#include "net/sourceforge/jnipp/JBooleanArrayHelper.h"
#include "net/sourceforge/jnipp/JByteArrayHelper.h"
#include "net/sourceforge/jnipp/JCharArrayHelper.h"
#include "net/sourceforge/jnipp/JDoubleArrayHelper.h"
#include "net/sourceforge/jnipp/JFloatArrayHelper.h"
#include "net/sourceforge/jnipp/JIntArrayHelper.h"
#include "net/sourceforge/jnipp/JLongArrayHelper.h"
#include "net/sourceforge/jnipp/JShortArrayHelper.h"
#include "net/sourceforge/jnipp/JStringHelper.h"
#include "net/sourceforge/jnipp/JStringHelperArray.h"
#include "net/sourceforge/jnipp/ProxyArray.h"

// includes for parameter and return type proxy classes
#include "java\lang\CharSequenceProxyForward.h"
#include "java\time\temporal\TemporalQueryProxyForward.h"
#include "java\lang\ObjectProxyForward.h"
#include "java\time\temporal\TemporalAccessorProxyForward.h"
#include "java\text\FormatProxyForward.h"
#include "java\time\ZoneIdProxyForward.h"
#include "java\time\chrono\ChronologyProxyForward.h"
#include "java\time\format\DecimalStyleProxyForward.h"
#include "java\util\LocaleProxyForward.h"
#include "java\util\SetProxyForward.h"
#include "java\time\format\ResolverStyleProxyForward.h"
#include "java\text\ParsePositionProxyForward.h"
#include "java\time\format\FormatStyleProxyForward.h"
#include "java\lang\AppendableProxyForward.h"
#include "java\time\format\DateTimeFormatterBuilder_CompositePrinterParserProxyForward.h"
#include "java\time\temporal\TemporalFieldProxy.h"
#include "java\time\temporal\TemporalQueryProxy.h"

namespace java
{
	namespace time
	{
		namespace format
		{
			class DateTimeFormatterProxy
			{
			private:
				static std::string className;
				static jclass objectClass;
				jobject peerObject;

			protected:
				DateTimeFormatterProxy(void* unused);
				virtual jobject _getPeerObject() const;

			public:
				static jclass _getObjectClass();
				static inline std::string _getClassName()
				{
					return className;
				}

				jclass getObjectClass();
				operator jobject();
				// constructors
				DateTimeFormatterProxy(jobject obj);

				virtual ~DateTimeFormatterProxy();
				DateTimeFormatterProxy& operator=(const DateTimeFormatterProxy& rhs);

				// methods
				/*
				 * Object parse(CharSequence, TemporalQuery);
				 */
				::java::lang::ObjectProxy parse(::java::lang::CharSequenceProxy p0, ::java::time::temporal::TemporalQueryProxy p1);
				/*
				 * String format(TemporalAccessor);
				 */
				::net::sourceforge::jnipp::JStringHelper format(::java::time::temporal::TemporalAccessorProxy p0);
				/*
				 * String toString();
				 */
				::net::sourceforge::jnipp::JStringHelper toString();
				/*
				 * Format toFormat();
				 */
				::java::text::FormatProxy toFormat();
				/*
				 * Format toFormat(TemporalQuery);
				 */
				::java::text::FormatProxy toFormat(::java::time::temporal::TemporalQueryProxy p0);
				/*
				 * ZoneId getZone();
				 */
				::java::time::ZoneIdProxy getZone();
				/*
				 * Chronology getChronology();
				 */
				::java::time::chrono::ChronologyProxy getChronology();
				/*
				 * DateTimeFormatter withChronology(Chronology);
				 */
				::java::time::format::DateTimeFormatterProxy withChronology(::java::time::chrono::ChronologyProxy p0);
				/*
				 * DateTimeFormatter withDecimalStyle(DecimalStyle);
				 */
				::java::time::format::DateTimeFormatterProxy withDecimalStyle(::java::time::format::DecimalStyleProxy p0);
				/*
				 * DateTimeFormatter withLocale(Locale);
				 */
				::java::time::format::DateTimeFormatterProxy withLocale(::java::util::LocaleProxy p0);
				/*
				 * DateTimeFormatter withResolverFields(TemporalField[]);
				 */
				::java::time::format::DateTimeFormatterProxy withResolverFields(::net::sourceforge::jnipp::PA<::java::time::temporal::TemporalFieldProxy>::ProxyArray<1> p0);
				/*
				 * DateTimeFormatter withResolverFields(Set);
				 */
				::java::time::format::DateTimeFormatterProxy withResolverFields(::java::util::SetProxy p0);
				/*
				 * DateTimeFormatter withResolverStyle(ResolverStyle);
				 */
				::java::time::format::DateTimeFormatterProxy withResolverStyle(::java::time::format::ResolverStyleProxy p0);
				/*
				 * DateTimeFormatter withZone(ZoneId);
				 */
				::java::time::format::DateTimeFormatterProxy withZone(::java::time::ZoneIdProxy p0);
				/*
				 * DecimalStyle getDecimalStyle();
				 */
				::java::time::format::DecimalStyleProxy getDecimalStyle();
				/*
				 * ResolverStyle getResolverStyle();
				 */
				::java::time::format::ResolverStyleProxy getResolverStyle();
				/*
				 * TemporalAccessor parse(CharSequence);
				 */
				::java::time::temporal::TemporalAccessorProxy parse(::java::lang::CharSequenceProxy p0);
				/*
				 * TemporalAccessor parse(CharSequence, ParsePosition);
				 */
				::java::time::temporal::TemporalAccessorProxy parse(::java::lang::CharSequenceProxy p0, ::java::text::ParsePositionProxy p1);
				/*
				 * TemporalAccessor parseBest(CharSequence, TemporalQuery[]);
				 */
				::java::time::temporal::TemporalAccessorProxy parseBest(::java::lang::CharSequenceProxy p0, ::net::sourceforge::jnipp::PA<::java::time::temporal::TemporalQueryProxy>::ProxyArray<1> p1);
				/*
				 * TemporalAccessor parseUnresolved(CharSequence, ParsePosition);
				 */
				::java::time::temporal::TemporalAccessorProxy parseUnresolved(::java::lang::CharSequenceProxy p0, ::java::text::ParsePositionProxy p1);
				/*
				 * Locale getLocale();
				 */
				::java::util::LocaleProxy getLocale();
				/*
				 * Set getResolverFields();
				 */
				::java::util::SetProxy getResolverFields();
				/*
				 * static TemporalQuery parsedExcessDays();
				 */
				static ::java::time::temporal::TemporalQueryProxy parsedExcessDays();
				/*
				 * static TemporalQuery parsedLeapSecond();
				 */
				static ::java::time::temporal::TemporalQueryProxy parsedLeapSecond();
				/*
				 * static DateTimeFormatter ofLocalizedDate(FormatStyle);
				 */
				static ::java::time::format::DateTimeFormatterProxy ofLocalizedDate(::java::time::format::FormatStyleProxy p0);
				/*
				 * static DateTimeFormatter ofLocalizedDateTime(FormatStyle);
				 */
				static ::java::time::format::DateTimeFormatterProxy ofLocalizedDateTime(::java::time::format::FormatStyleProxy p0);
				/*
				 * static DateTimeFormatter ofLocalizedDateTime(FormatStyle, FormatStyle);
				 */
				static ::java::time::format::DateTimeFormatterProxy ofLocalizedDateTime(::java::time::format::FormatStyleProxy p0, ::java::time::format::FormatStyleProxy p1);
				/*
				 * static DateTimeFormatter ofLocalizedTime(FormatStyle);
				 */
				static ::java::time::format::DateTimeFormatterProxy ofLocalizedTime(::java::time::format::FormatStyleProxy p0);
				/*
				 * static DateTimeFormatter ofPattern(String);
				 */
				static ::java::time::format::DateTimeFormatterProxy ofPattern(::net::sourceforge::jnipp::JStringHelper p0);
				/*
				 * static DateTimeFormatter ofPattern(String, Locale);
				 */
				static ::java::time::format::DateTimeFormatterProxy ofPattern(::net::sourceforge::jnipp::JStringHelper p0, ::java::util::LocaleProxy p1);
				/*
				 * void formatTo(TemporalAccessor, Appendable);
				 */
				void formatTo(::java::time::temporal::TemporalAccessorProxy p0, ::java::lang::AppendableProxy p1);

			};
		}
	}
}


#endif
