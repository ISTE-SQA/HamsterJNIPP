#ifndef __java_time_LocalDateProxy_H
#define __java_time_LocalDateProxy_H


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
#include "java\time\chrono\ChronoLocalDateProxyForward.h"
#include "java\time\temporal\TemporalFieldProxyForward.h"
#include "java\time\temporal\TemporalUnitProxyForward.h"
#include "java\time\temporal\TemporalQueryProxyForward.h"
#include "java\time\format\DateTimeFormatterProxyForward.h"
#include "java\time\DayOfWeekProxyForward.h"
#include "java\time\temporal\TemporalAmountProxyForward.h"
#include "java\time\temporal\TemporalAdjusterProxyForward.h"
#include "java\time\LocalDateTimeProxyForward.h"
#include "java\time\LocalTimeProxyForward.h"
#include "java\time\MonthProxyForward.h"
#include "java\time\OffsetTimeProxyForward.h"
#include "java\time\OffsetDateTimeProxyForward.h"
#include "java\time\PeriodProxyForward.h"
#include "java\time\ZoneIdProxyForward.h"
#include "java\time\ZonedDateTimeProxyForward.h"
#include "java\time\chrono\EraProxyForward.h"
#include "java\time\chrono\IsoChronologyProxyForward.h"
#include "java\time\temporal\TemporalProxyForward.h"
#include "java\time\temporal\ValueRangeProxyForward.h"
#include "java\time\temporal\TemporalAccessorProxyForward.h"
#include "java\time\ClockProxyForward.h"
#include "java\lang\CharSequenceProxyForward.h"

namespace java
{
	namespace time
	{
		class LocalDateProxy
		{
		private:
			static std::string className;
			static jclass objectClass;
			jobject peerObject;

		protected:
			LocalDateProxy(void* unused);
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
			LocalDateProxy(jobject obj);

			virtual ~LocalDateProxy();
			LocalDateProxy& operator=(const LocalDateProxy& rhs);

			// methods
			/*
			 * boolean equals(Object);
			 */
			jboolean equals(::java::lang::ObjectProxy p0);
			/*
			 * boolean isAfter(ChronoLocalDate);
			 */
			jboolean isAfter(::java::time::chrono::ChronoLocalDateProxy p0);
			/*
			 * boolean isBefore(ChronoLocalDate);
			 */
			jboolean isBefore(::java::time::chrono::ChronoLocalDateProxy p0);
			/*
			 * boolean isEqual(ChronoLocalDate);
			 */
			jboolean isEqual(::java::time::chrono::ChronoLocalDateProxy p0);
			/*
			 * boolean isLeapYear();
			 */
			jboolean isLeapYear();
			/*
			 * boolean isSupported(TemporalField);
			 */
			jboolean isSupported(::java::time::temporal::TemporalFieldProxy p0);
			/*
			 * boolean isSupported(TemporalUnit);
			 */
			jboolean isSupported(::java::time::temporal::TemporalUnitProxy p0);
			/*
			 * int compareTo(ChronoLocalDate);
			 */
			jint compareTo(::java::time::chrono::ChronoLocalDateProxy p0);
			/*
			 * int get(TemporalField);
			 */
			jint get(::java::time::temporal::TemporalFieldProxy p0);
			/*
			 * int getDayOfMonth();
			 */
			jint getDayOfMonth();
			/*
			 * int getDayOfYear();
			 */
			jint getDayOfYear();
			/*
			 * int getMonthValue();
			 */
			jint getMonthValue();
			/*
			 * int getYear();
			 */
			jint getYear();
			/*
			 * int hashCode();
			 */
			jint hashCode();
			/*
			 * int lengthOfMonth();
			 */
			jint lengthOfMonth();
			/*
			 * int lengthOfYear();
			 */
			jint lengthOfYear();
			/*
			 * Object query(TemporalQuery);
			 */
			::java::lang::ObjectProxy query(::java::time::temporal::TemporalQueryProxy p0);
			/*
			 * String format(DateTimeFormatter);
			 */
			::net::sourceforge::jnipp::JStringHelper format(::java::time::format::DateTimeFormatterProxy p0);
			/*
			 * String toString();
			 */
			::net::sourceforge::jnipp::JStringHelper toString();
			/*
			 * DayOfWeek getDayOfWeek();
			 */
			::java::time::DayOfWeekProxy getDayOfWeek();
			/*
			 * LocalDate minus(TemporalAmount);
			 */
			::java::time::LocalDateProxy minus(::java::time::temporal::TemporalAmountProxy p0);
			/*
			 * LocalDate minus(long, TemporalUnit);
			 */
			::java::time::LocalDateProxy minus(jlong p0, ::java::time::temporal::TemporalUnitProxy p1);
			/*
			 * LocalDate minusDays(long);
			 */
			::java::time::LocalDateProxy minusDays(jlong p0);
			/*
			 * LocalDate minusMonths(long);
			 */
			::java::time::LocalDateProxy minusMonths(jlong p0);
			/*
			 * LocalDate minusWeeks(long);
			 */
			::java::time::LocalDateProxy minusWeeks(jlong p0);
			/*
			 * LocalDate minusYears(long);
			 */
			::java::time::LocalDateProxy minusYears(jlong p0);
			/*
			 * LocalDate plus(TemporalAmount);
			 */
			::java::time::LocalDateProxy plus(::java::time::temporal::TemporalAmountProxy p0);
			/*
			 * LocalDate plus(long, TemporalUnit);
			 */
			::java::time::LocalDateProxy plus(jlong p0, ::java::time::temporal::TemporalUnitProxy p1);
			/*
			 * LocalDate plusDays(long);
			 */
			::java::time::LocalDateProxy plusDays(jlong p0);
			/*
			 * LocalDate plusMonths(long);
			 */
			::java::time::LocalDateProxy plusMonths(jlong p0);
			/*
			 * LocalDate plusWeeks(long);
			 */
			::java::time::LocalDateProxy plusWeeks(jlong p0);
			/*
			 * LocalDate plusYears(long);
			 */
			::java::time::LocalDateProxy plusYears(jlong p0);
			/*
			 * LocalDate with(TemporalAdjuster);
			 */
			::java::time::LocalDateProxy with(::java::time::temporal::TemporalAdjusterProxy p0);
			/*
			 * LocalDate with(TemporalField, long);
			 */
			::java::time::LocalDateProxy with(::java::time::temporal::TemporalFieldProxy p0, jlong p1);
			/*
			 * LocalDate withDayOfMonth(int);
			 */
			::java::time::LocalDateProxy withDayOfMonth(jint p0);
			/*
			 * LocalDate withDayOfYear(int);
			 */
			::java::time::LocalDateProxy withDayOfYear(jint p0);
			/*
			 * LocalDate withMonth(int);
			 */
			::java::time::LocalDateProxy withMonth(jint p0);
			/*
			 * LocalDate withYear(int);
			 */
			::java::time::LocalDateProxy withYear(jint p0);
			/*
			 * LocalDateTime atStartOfDay();
			 */
			::java::time::LocalDateTimeProxy atStartOfDay();
			/*
			 * LocalDateTime atTime(int, int);
			 */
			::java::time::LocalDateTimeProxy atTime(jint p0, jint p1);
			/*
			 * LocalDateTime atTime(int, int, int);
			 */
			::java::time::LocalDateTimeProxy atTime(jint p0, jint p1, jint p2);
			/*
			 * LocalDateTime atTime(int, int, int, int);
			 */
			::java::time::LocalDateTimeProxy atTime(jint p0, jint p1, jint p2, jint p3);
			/*
			 * LocalDateTime atTime(LocalTime);
			 */
			::java::time::LocalDateTimeProxy atTime(::java::time::LocalTimeProxy p0);
			/*
			 * Month getMonth();
			 */
			::java::time::MonthProxy getMonth();
			/*
			 * OffsetDateTime atTime(OffsetTime);
			 */
			::java::time::OffsetDateTimeProxy atTime(::java::time::OffsetTimeProxy p0);
			/*
			 * Period until(ChronoLocalDate);
			 */
			::java::time::PeriodProxy until(::java::time::chrono::ChronoLocalDateProxy p0);
			/*
			 * ZonedDateTime atStartOfDay(ZoneId);
			 */
			::java::time::ZonedDateTimeProxy atStartOfDay(::java::time::ZoneIdProxy p0);
			/*
			 * Era getEra();
			 */
			::java::time::chrono::EraProxy getEra();
			/*
			 * IsoChronology getChronology();
			 */
			::java::time::chrono::IsoChronologyProxy getChronology();
			/*
			 * Temporal adjustInto(Temporal);
			 */
			::java::time::temporal::TemporalProxy adjustInto(::java::time::temporal::TemporalProxy p0);
			/*
			 * ValueRange range(TemporalField);
			 */
			::java::time::temporal::ValueRangeProxy range(::java::time::temporal::TemporalFieldProxy p0);
			/*
			 * long getLong(TemporalField);
			 */
			jlong getLong(::java::time::temporal::TemporalFieldProxy p0);
			/*
			 * long toEpochDay();
			 */
			jlong toEpochDay();
			/*
			 * long until(Temporal, TemporalUnit);
			 */
			jlong until(::java::time::temporal::TemporalProxy p0, ::java::time::temporal::TemporalUnitProxy p1);
			/*
			 * static LocalDate from(TemporalAccessor);
			 */
			static ::java::time::LocalDateProxy from(::java::time::temporal::TemporalAccessorProxy p0);
			/*
			 * static LocalDate now();
			 */
			static ::java::time::LocalDateProxy now();
			/*
			 * static LocalDate now(Clock);
			 */
			static ::java::time::LocalDateProxy now(::java::time::ClockProxy p0);
			/*
			 * static LocalDate now(ZoneId);
			 */
			static ::java::time::LocalDateProxy now(::java::time::ZoneIdProxy p0);
			/*
			 * static LocalDate of(int, int, int);
			 */
			static ::java::time::LocalDateProxy of(jint p0, jint p1, jint p2);
			/*
			 * static LocalDate of(int, Month, int);
			 */
			static ::java::time::LocalDateProxy of(jint p0, ::java::time::MonthProxy p1, jint p2);
			/*
			 * static LocalDate ofEpochDay(long);
			 */
			static ::java::time::LocalDateProxy ofEpochDay(jlong p0);
			/*
			 * static LocalDate ofYearDay(int, int);
			 */
			static ::java::time::LocalDateProxy ofYearDay(jint p0, jint p1);
			/*
			 * static LocalDate parse(CharSequence);
			 */
			static ::java::time::LocalDateProxy parse(::java::lang::CharSequenceProxy p0);
			/*
			 * static LocalDate parse(CharSequence, DateTimeFormatter);
			 */
			static ::java::time::LocalDateProxy parse(::java::lang::CharSequenceProxy p0, ::java::time::format::DateTimeFormatterProxy p1);

		};
	}
}


#endif
