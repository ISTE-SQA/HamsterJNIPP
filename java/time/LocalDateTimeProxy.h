#ifndef __java_time_LocalDateTimeProxy_H
#define __java_time_LocalDateTimeProxy_H


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
#include "java\time\chrono\ChronoLocalDateTimeProxyForward.h"
#include "java\time\temporal\TemporalFieldProxyForward.h"
#include "java\time\temporal\TemporalUnitProxyForward.h"
#include "java\time\temporal\TemporalQueryProxyForward.h"
#include "java\time\format\DateTimeFormatterProxyForward.h"
#include "java\time\DayOfWeekProxyForward.h"
#include "java\time\LocalDateProxyForward.h"
#include "java\time\temporal\TemporalAmountProxyForward.h"
#include "java\time\temporal\TemporalAdjusterProxyForward.h"
#include "java\time\LocalTimeProxyForward.h"
#include "java\time\MonthProxyForward.h"
#include "java\time\ZoneOffsetProxyForward.h"
#include "java\time\OffsetDateTimeProxyForward.h"
#include "java\time\ZoneIdProxyForward.h"
#include "java\time\ZonedDateTimeProxyForward.h"
#include "java\time\temporal\TemporalProxyForward.h"
#include "java\time\temporal\ValueRangeProxyForward.h"
#include "java\time\temporal\TemporalAccessorProxyForward.h"
#include "java\time\ClockProxyForward.h"
#include "java\time\InstantProxyForward.h"
#include "java\lang\CharSequenceProxyForward.h"

namespace java
{
	namespace time
	{
		class LocalDateTimeProxy
		{
		private:
			static std::string className;
			static jclass objectClass;
			jobject peerObject;

		protected:
			LocalDateTimeProxy(void* unused);
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
			LocalDateTimeProxy(jobject obj);

			virtual ~LocalDateTimeProxy();
			LocalDateTimeProxy& operator=(const LocalDateTimeProxy& rhs);

			// methods
			/*
			 * boolean equals(Object);
			 */
			jboolean equals(::java::lang::ObjectProxy p0);
			/*
			 * boolean isAfter(ChronoLocalDateTime);
			 */
			jboolean isAfter(::java::time::chrono::ChronoLocalDateTimeProxy p0);
			/*
			 * boolean isBefore(ChronoLocalDateTime);
			 */
			jboolean isBefore(::java::time::chrono::ChronoLocalDateTimeProxy p0);
			/*
			 * boolean isEqual(ChronoLocalDateTime);
			 */
			jboolean isEqual(::java::time::chrono::ChronoLocalDateTimeProxy p0);
			/*
			 * boolean isSupported(TemporalField);
			 */
			jboolean isSupported(::java::time::temporal::TemporalFieldProxy p0);
			/*
			 * boolean isSupported(TemporalUnit);
			 */
			jboolean isSupported(::java::time::temporal::TemporalUnitProxy p0);
			/*
			 * int compareTo(ChronoLocalDateTime);
			 */
			jint compareTo(::java::time::chrono::ChronoLocalDateTimeProxy p0);
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
			 * int getHour();
			 */
			jint getHour();
			/*
			 * int getMinute();
			 */
			jint getMinute();
			/*
			 * int getMonthValue();
			 */
			jint getMonthValue();
			/*
			 * int getNano();
			 */
			jint getNano();
			/*
			 * int getSecond();
			 */
			jint getSecond();
			/*
			 * int getYear();
			 */
			jint getYear();
			/*
			 * int hashCode();
			 */
			jint hashCode();
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
			 * LocalDate toLocalDate();
			 */
			::java::time::LocalDateProxy toLocalDate();
			/*
			 * LocalDateTime minus(TemporalAmount);
			 */
			::java::time::LocalDateTimeProxy minus(::java::time::temporal::TemporalAmountProxy p0);
			/*
			 * LocalDateTime minus(long, TemporalUnit);
			 */
			::java::time::LocalDateTimeProxy minus(jlong p0, ::java::time::temporal::TemporalUnitProxy p1);
			/*
			 * LocalDateTime minusDays(long);
			 */
			::java::time::LocalDateTimeProxy minusDays(jlong p0);
			/*
			 * LocalDateTime minusHours(long);
			 */
			::java::time::LocalDateTimeProxy minusHours(jlong p0);
			/*
			 * LocalDateTime minusMinutes(long);
			 */
			::java::time::LocalDateTimeProxy minusMinutes(jlong p0);
			/*
			 * LocalDateTime minusMonths(long);
			 */
			::java::time::LocalDateTimeProxy minusMonths(jlong p0);
			/*
			 * LocalDateTime minusNanos(long);
			 */
			::java::time::LocalDateTimeProxy minusNanos(jlong p0);
			/*
			 * LocalDateTime minusSeconds(long);
			 */
			::java::time::LocalDateTimeProxy minusSeconds(jlong p0);
			/*
			 * LocalDateTime minusWeeks(long);
			 */
			::java::time::LocalDateTimeProxy minusWeeks(jlong p0);
			/*
			 * LocalDateTime minusYears(long);
			 */
			::java::time::LocalDateTimeProxy minusYears(jlong p0);
			/*
			 * LocalDateTime plus(TemporalAmount);
			 */
			::java::time::LocalDateTimeProxy plus(::java::time::temporal::TemporalAmountProxy p0);
			/*
			 * LocalDateTime plus(long, TemporalUnit);
			 */
			::java::time::LocalDateTimeProxy plus(jlong p0, ::java::time::temporal::TemporalUnitProxy p1);
			/*
			 * LocalDateTime plusDays(long);
			 */
			::java::time::LocalDateTimeProxy plusDays(jlong p0);
			/*
			 * LocalDateTime plusHours(long);
			 */
			::java::time::LocalDateTimeProxy plusHours(jlong p0);
			/*
			 * LocalDateTime plusMinutes(long);
			 */
			::java::time::LocalDateTimeProxy plusMinutes(jlong p0);
			/*
			 * LocalDateTime plusMonths(long);
			 */
			::java::time::LocalDateTimeProxy plusMonths(jlong p0);
			/*
			 * LocalDateTime plusNanos(long);
			 */
			::java::time::LocalDateTimeProxy plusNanos(jlong p0);
			/*
			 * LocalDateTime plusSeconds(long);
			 */
			::java::time::LocalDateTimeProxy plusSeconds(jlong p0);
			/*
			 * LocalDateTime plusWeeks(long);
			 */
			::java::time::LocalDateTimeProxy plusWeeks(jlong p0);
			/*
			 * LocalDateTime plusYears(long);
			 */
			::java::time::LocalDateTimeProxy plusYears(jlong p0);
			/*
			 * LocalDateTime truncatedTo(TemporalUnit);
			 */
			::java::time::LocalDateTimeProxy truncatedTo(::java::time::temporal::TemporalUnitProxy p0);
			/*
			 * LocalDateTime with(TemporalAdjuster);
			 */
			::java::time::LocalDateTimeProxy with(::java::time::temporal::TemporalAdjusterProxy p0);
			/*
			 * LocalDateTime with(TemporalField, long);
			 */
			::java::time::LocalDateTimeProxy with(::java::time::temporal::TemporalFieldProxy p0, jlong p1);
			/*
			 * LocalDateTime withDayOfMonth(int);
			 */
			::java::time::LocalDateTimeProxy withDayOfMonth(jint p0);
			/*
			 * LocalDateTime withDayOfYear(int);
			 */
			::java::time::LocalDateTimeProxy withDayOfYear(jint p0);
			/*
			 * LocalDateTime withHour(int);
			 */
			::java::time::LocalDateTimeProxy withHour(jint p0);
			/*
			 * LocalDateTime withMinute(int);
			 */
			::java::time::LocalDateTimeProxy withMinute(jint p0);
			/*
			 * LocalDateTime withMonth(int);
			 */
			::java::time::LocalDateTimeProxy withMonth(jint p0);
			/*
			 * LocalDateTime withNano(int);
			 */
			::java::time::LocalDateTimeProxy withNano(jint p0);
			/*
			 * LocalDateTime withSecond(int);
			 */
			::java::time::LocalDateTimeProxy withSecond(jint p0);
			/*
			 * LocalDateTime withYear(int);
			 */
			::java::time::LocalDateTimeProxy withYear(jint p0);
			/*
			 * LocalTime toLocalTime();
			 */
			::java::time::LocalTimeProxy toLocalTime();
			/*
			 * Month getMonth();
			 */
			::java::time::MonthProxy getMonth();
			/*
			 * OffsetDateTime atOffset(ZoneOffset);
			 */
			::java::time::OffsetDateTimeProxy atOffset(::java::time::ZoneOffsetProxy p0);
			/*
			 * ZonedDateTime atZone(ZoneId);
			 */
			::java::time::ZonedDateTimeProxy atZone(::java::time::ZoneIdProxy p0);
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
			 * long until(Temporal, TemporalUnit);
			 */
			jlong until(::java::time::temporal::TemporalProxy p0, ::java::time::temporal::TemporalUnitProxy p1);
			/*
			 * static LocalDateTime from(TemporalAccessor);
			 */
			static ::java::time::LocalDateTimeProxy from(::java::time::temporal::TemporalAccessorProxy p0);
			/*
			 * static LocalDateTime now();
			 */
			static ::java::time::LocalDateTimeProxy now();
			/*
			 * static LocalDateTime now(Clock);
			 */
			static ::java::time::LocalDateTimeProxy now(::java::time::ClockProxy p0);
			/*
			 * static LocalDateTime now(ZoneId);
			 */
			static ::java::time::LocalDateTimeProxy now(::java::time::ZoneIdProxy p0);
			/*
			 * static LocalDateTime of(int, int, int, int, int);
			 */
			static ::java::time::LocalDateTimeProxy of(jint p0, jint p1, jint p2, jint p3, jint p4);
			/*
			 * static LocalDateTime of(int, int, int, int, int, int);
			 */
			static ::java::time::LocalDateTimeProxy of(jint p0, jint p1, jint p2, jint p3, jint p4, jint p5);
			/*
			 * static LocalDateTime of(int, int, int, int, int, int, int);
			 */
			static ::java::time::LocalDateTimeProxy of(jint p0, jint p1, jint p2, jint p3, jint p4, jint p5, jint p6);
			/*
			 * static LocalDateTime of(int, Month, int, int, int);
			 */
			static ::java::time::LocalDateTimeProxy of(jint p0, ::java::time::MonthProxy p1, jint p2, jint p3, jint p4);
			/*
			 * static LocalDateTime of(int, Month, int, int, int, int);
			 */
			static ::java::time::LocalDateTimeProxy of(jint p0, ::java::time::MonthProxy p1, jint p2, jint p3, jint p4, jint p5);
			/*
			 * static LocalDateTime of(int, Month, int, int, int, int, int);
			 */
			static ::java::time::LocalDateTimeProxy of(jint p0, ::java::time::MonthProxy p1, jint p2, jint p3, jint p4, jint p5, jint p6);
			/*
			 * static LocalDateTime of(LocalDate, LocalTime);
			 */
			static ::java::time::LocalDateTimeProxy of(::java::time::LocalDateProxy p0, ::java::time::LocalTimeProxy p1);
			/*
			 * static LocalDateTime ofEpochSecond(long, int, ZoneOffset);
			 */
			static ::java::time::LocalDateTimeProxy ofEpochSecond(jlong p0, jint p1, ::java::time::ZoneOffsetProxy p2);
			/*
			 * static LocalDateTime ofInstant(Instant, ZoneId);
			 */
			static ::java::time::LocalDateTimeProxy ofInstant(::java::time::InstantProxy p0, ::java::time::ZoneIdProxy p1);
			/*
			 * static LocalDateTime parse(CharSequence);
			 */
			static ::java::time::LocalDateTimeProxy parse(::java::lang::CharSequenceProxy p0);
			/*
			 * static LocalDateTime parse(CharSequence, DateTimeFormatter);
			 */
			static ::java::time::LocalDateTimeProxy parse(::java::lang::CharSequenceProxy p0, ::java::time::format::DateTimeFormatterProxy p1);

		};
	}
}


#endif
