#ifndef __java_time_chrono_ChronologyProxy_H
#define __java_time_chrono_ChronologyProxy_H


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
#include "java\lang\ObjectProxyForward.h"
#include "java\time\chrono\EraProxyForward.h"
#include "java\time\chrono\ChronoLocalDateProxyForward.h"
#include "java\time\temporal\TemporalAccessorProxyForward.h"
#include "java\util\MapProxyForward.h"
#include "java\time\format\ResolverStyleProxyForward.h"
#include "java\time\temporal\ChronoFieldProxyForward.h"
#include "java\time\temporal\ValueRangeProxyForward.h"
#include "java\util\ListProxyForward.h"
#include "java\time\format\TextStyleProxyForward.h"
#include "java\util\LocaleProxyForward.h"
#include "java\time\ClockProxyForward.h"
#include "java\time\ZoneIdProxyForward.h"
#include "java\time\chrono\ChronoLocalDateTimeProxyForward.h"
#include "java\time\chrono\ChronoPeriodProxyForward.h"
#include "java\time\InstantProxyForward.h"
#include "java\time\chrono\ChronoZonedDateTimeProxyForward.h"
#include "java\util\SetProxyForward.h"

namespace java
{
	namespace time
	{
		namespace chrono
		{
			class ChronologyProxy
			{
			private:
				static std::string className;
				static jclass objectClass;
				jobject peerObject;

			protected:
				ChronologyProxy(void* unused);
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
				ChronologyProxy(jobject obj);

				virtual ~ChronologyProxy();
				ChronologyProxy& operator=(const ChronologyProxy& rhs);

				// methods
				/*
				 * boolean equals(Object);
				 */
				jboolean equals(::java::lang::ObjectProxy p0);
				/*
				 * boolean isLeapYear(long);
				 */
				jboolean isLeapYear(jlong p0);
				/*
				 * int compareTo(Chronology);
				 */
				jint compareTo(::java::time::chrono::ChronologyProxy p0);
				/*
				 * int hashCode();
				 */
				jint hashCode();
				/*
				 * int prolepticYear(Era, int);
				 */
				jint prolepticYear(::java::time::chrono::EraProxy p0, jint p1);
				/*
				 * String getCalendarType();
				 */
				::net::sourceforge::jnipp::JStringHelper getCalendarType();
				/*
				 * String getId();
				 */
				::net::sourceforge::jnipp::JStringHelper getId();
				/*
				 * String toString();
				 */
				::net::sourceforge::jnipp::JStringHelper toString();
				/*
				 * ChronoLocalDate date(int, int, int);
				 */
				::java::time::chrono::ChronoLocalDateProxy date(jint p0, jint p1, jint p2);
				/*
				 * ChronoLocalDate date(TemporalAccessor);
				 */
				::java::time::chrono::ChronoLocalDateProxy date(::java::time::temporal::TemporalAccessorProxy p0);
				/*
				 * ChronoLocalDate dateEpochDay(long);
				 */
				::java::time::chrono::ChronoLocalDateProxy dateEpochDay(jlong p0);
				/*
				 * ChronoLocalDate dateYearDay(int, int);
				 */
				::java::time::chrono::ChronoLocalDateProxy dateYearDay(jint p0, jint p1);
				/*
				 * ChronoLocalDate resolveDate(Map, ResolverStyle);
				 */
				::java::time::chrono::ChronoLocalDateProxy resolveDate(::java::util::MapProxy p0, ::java::time::format::ResolverStyleProxy p1);
				/*
				 * Era eraOf(int);
				 */
				::java::time::chrono::EraProxy eraOf(jint p0);
				/*
				 * ValueRange range(ChronoField);
				 */
				::java::time::temporal::ValueRangeProxy range(::java::time::temporal::ChronoFieldProxy p0);
				/*
				 * List eras();
				 */
				::java::util::ListProxy eras();
				/*
				 * String getDisplayName(TextStyle, Locale);
				 */
				::net::sourceforge::jnipp::JStringHelper getDisplayName(::java::time::format::TextStyleProxy p0, ::java::util::LocaleProxy p1);
				/*
				 * ChronoLocalDate date(Era, int, int, int);
				 */
				::java::time::chrono::ChronoLocalDateProxy date(::java::time::chrono::EraProxy p0, jint p1, jint p2, jint p3);
				/*
				 * ChronoLocalDate dateNow();
				 */
				::java::time::chrono::ChronoLocalDateProxy dateNow();
				/*
				 * ChronoLocalDate dateNow(Clock);
				 */
				::java::time::chrono::ChronoLocalDateProxy dateNow(::java::time::ClockProxy p0);
				/*
				 * ChronoLocalDate dateNow(ZoneId);
				 */
				::java::time::chrono::ChronoLocalDateProxy dateNow(::java::time::ZoneIdProxy p0);
				/*
				 * ChronoLocalDate dateYearDay(Era, int, int);
				 */
				::java::time::chrono::ChronoLocalDateProxy dateYearDay(::java::time::chrono::EraProxy p0, jint p1, jint p2);
				/*
				 * ChronoLocalDateTime localDateTime(TemporalAccessor);
				 */
				::java::time::chrono::ChronoLocalDateTimeProxy localDateTime(::java::time::temporal::TemporalAccessorProxy p0);
				/*
				 * ChronoPeriod period(int, int, int);
				 */
				::java::time::chrono::ChronoPeriodProxy period(jint p0, jint p1, jint p2);
				/*
				 * ChronoZonedDateTime zonedDateTime(Instant, ZoneId);
				 */
				::java::time::chrono::ChronoZonedDateTimeProxy zonedDateTime(::java::time::InstantProxy p0, ::java::time::ZoneIdProxy p1);
				/*
				 * ChronoZonedDateTime zonedDateTime(TemporalAccessor);
				 */
				::java::time::chrono::ChronoZonedDateTimeProxy zonedDateTime(::java::time::temporal::TemporalAccessorProxy p0);
				/*
				 * static Chronology from(TemporalAccessor);
				 */
				static ::java::time::chrono::ChronologyProxy from(::java::time::temporal::TemporalAccessorProxy p0);
				/*
				 * static Chronology of(String);
				 */
				static ::java::time::chrono::ChronologyProxy of(::net::sourceforge::jnipp::JStringHelper p0);
				/*
				 * static Chronology ofLocale(Locale);
				 */
				static ::java::time::chrono::ChronologyProxy ofLocale(::java::util::LocaleProxy p0);
				/*
				 * static Set getAvailableChronologies();
				 */
				static ::java::util::SetProxy getAvailableChronologies();

			};
		}
	}
}


#endif
