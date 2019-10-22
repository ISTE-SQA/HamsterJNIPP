#ifndef __java_time_OffsetDateTimeProxy_H
#define __java_time_OffsetDateTimeProxy_H


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
#include "java\time\temporal\TemporalFieldProxyForward.h"
#include "java\time\temporal\TemporalUnitProxyForward.h"
#include "java\time\temporal\TemporalQueryProxyForward.h"
#include "java\time\format\DateTimeFormatterProxyForward.h"
#include "java\time\DayOfWeekProxyForward.h"
#include "java\time\InstantProxyForward.h"
#include "java\time\LocalDateProxyForward.h"
#include "java\time\LocalDateTimeProxyForward.h"
#include "java\time\LocalTimeProxyForward.h"
#include "java\time\MonthProxyForward.h"
#include "java\time\temporal\TemporalAmountProxyForward.h"
#include "java\time\temporal\TemporalAdjusterProxyForward.h"
#include "java\time\ZoneOffsetProxyForward.h"
#include "java\time\OffsetTimeProxyForward.h"
#include "java\time\ZoneIdProxyForward.h"
#include "java\time\ZonedDateTimeProxyForward.h"
#include "java\time\temporal\TemporalProxyForward.h"
#include "java\time\temporal\ValueRangeProxyForward.h"
#include "java\time\temporal\TemporalAccessorProxyForward.h"
#include "java\time\ClockProxyForward.h"
#include "java\lang\CharSequenceProxyForward.h"
#include "java\util\ComparatorProxyForward.h"

namespace java
{
	namespace time
	{
		class OffsetDateTimeProxy
		{
		private:
			static std::string className;
			static jclass objectClass;
			jobject peerObject;

		protected:
			OffsetDateTimeProxy(void* unused);
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
			OffsetDateTimeProxy(jobject obj);

			virtual ~OffsetDateTimeProxy();
			OffsetDateTimeProxy& operator=(const OffsetDateTimeProxy& rhs);

			// methods
			/*
			 * boolean equals(Object);
			 */
			jboolean equals(::java::lang::ObjectProxy p0);
			/*
			 * boolean isAfter(OffsetDateTime);
			 */
			jboolean isAfter(::java::time::OffsetDateTimeProxy p0);
			/*
			 * boolean isBefore(OffsetDateTime);
			 */
			jboolean isBefore(::java::time::OffsetDateTimeProxy p0);
			/*
			 * boolean isEqual(OffsetDateTime);
			 */
			jboolean isEqual(::java::time::OffsetDateTimeProxy p0);
			/*
			 * boolean isSupported(TemporalField);
			 */
			jboolean isSupported(::java::time::temporal::TemporalFieldProxy p0);
			/*
			 * boolean isSupported(TemporalUnit);
			 */
			jboolean isSupported(::java::time::temporal::TemporalUnitProxy p0);
			/*
			 * int compareTo(OffsetDateTime);
			 */
			jint compareTo(::java::time::OffsetDateTimeProxy p0);
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
			 * Instant toInstant();
			 */
			::java::time::InstantProxy toInstant();
			/*
			 * LocalDate toLocalDate();
			 */
			::java::time::LocalDateProxy toLocalDate();
			/*
			 * LocalDateTime toLocalDateTime();
			 */
			::java::time::LocalDateTimeProxy toLocalDateTime();
			/*
			 * LocalTime toLocalTime();
			 */
			::java::time::LocalTimeProxy toLocalTime();
			/*
			 * Month getMonth();
			 */
			::java::time::MonthProxy getMonth();
			/*
			 * OffsetDateTime minus(TemporalAmount);
			 */
			::java::time::OffsetDateTimeProxy minus(::java::time::temporal::TemporalAmountProxy p0);
			/*
			 * OffsetDateTime minus(long, TemporalUnit);
			 */
			::java::time::OffsetDateTimeProxy minus(jlong p0, ::java::time::temporal::TemporalUnitProxy p1);
			/*
			 * OffsetDateTime minusDays(long);
			 */
			::java::time::OffsetDateTimeProxy minusDays(jlong p0);
			/*
			 * OffsetDateTime minusHours(long);
			 */
			::java::time::OffsetDateTimeProxy minusHours(jlong p0);
			/*
			 * OffsetDateTime minusMinutes(long);
			 */
			::java::time::OffsetDateTimeProxy minusMinutes(jlong p0);
			/*
			 * OffsetDateTime minusMonths(long);
			 */
			::java::time::OffsetDateTimeProxy minusMonths(jlong p0);
			/*
			 * OffsetDateTime minusNanos(long);
			 */
			::java::time::OffsetDateTimeProxy minusNanos(jlong p0);
			/*
			 * OffsetDateTime minusSeconds(long);
			 */
			::java::time::OffsetDateTimeProxy minusSeconds(jlong p0);
			/*
			 * OffsetDateTime minusWeeks(long);
			 */
			::java::time::OffsetDateTimeProxy minusWeeks(jlong p0);
			/*
			 * OffsetDateTime minusYears(long);
			 */
			::java::time::OffsetDateTimeProxy minusYears(jlong p0);
			/*
			 * OffsetDateTime plus(TemporalAmount);
			 */
			::java::time::OffsetDateTimeProxy plus(::java::time::temporal::TemporalAmountProxy p0);
			/*
			 * OffsetDateTime plus(long, TemporalUnit);
			 */
			::java::time::OffsetDateTimeProxy plus(jlong p0, ::java::time::temporal::TemporalUnitProxy p1);
			/*
			 * OffsetDateTime plusDays(long);
			 */
			::java::time::OffsetDateTimeProxy plusDays(jlong p0);
			/*
			 * OffsetDateTime plusHours(long);
			 */
			::java::time::OffsetDateTimeProxy plusHours(jlong p0);
			/*
			 * OffsetDateTime plusMinutes(long);
			 */
			::java::time::OffsetDateTimeProxy plusMinutes(jlong p0);
			/*
			 * OffsetDateTime plusMonths(long);
			 */
			::java::time::OffsetDateTimeProxy plusMonths(jlong p0);
			/*
			 * OffsetDateTime plusNanos(long);
			 */
			::java::time::OffsetDateTimeProxy plusNanos(jlong p0);
			/*
			 * OffsetDateTime plusSeconds(long);
			 */
			::java::time::OffsetDateTimeProxy plusSeconds(jlong p0);
			/*
			 * OffsetDateTime plusWeeks(long);
			 */
			::java::time::OffsetDateTimeProxy plusWeeks(jlong p0);
			/*
			 * OffsetDateTime plusYears(long);
			 */
			::java::time::OffsetDateTimeProxy plusYears(jlong p0);
			/*
			 * OffsetDateTime truncatedTo(TemporalUnit);
			 */
			::java::time::OffsetDateTimeProxy truncatedTo(::java::time::temporal::TemporalUnitProxy p0);
			/*
			 * OffsetDateTime with(TemporalAdjuster);
			 */
			::java::time::OffsetDateTimeProxy with(::java::time::temporal::TemporalAdjusterProxy p0);
			/*
			 * OffsetDateTime with(TemporalField, long);
			 */
			::java::time::OffsetDateTimeProxy with(::java::time::temporal::TemporalFieldProxy p0, jlong p1);
			/*
			 * OffsetDateTime withDayOfMonth(int);
			 */
			::java::time::OffsetDateTimeProxy withDayOfMonth(jint p0);
			/*
			 * OffsetDateTime withDayOfYear(int);
			 */
			::java::time::OffsetDateTimeProxy withDayOfYear(jint p0);
			/*
			 * OffsetDateTime withHour(int);
			 */
			::java::time::OffsetDateTimeProxy withHour(jint p0);
			/*
			 * OffsetDateTime withMinute(int);
			 */
			::java::time::OffsetDateTimeProxy withMinute(jint p0);
			/*
			 * OffsetDateTime withMonth(int);
			 */
			::java::time::OffsetDateTimeProxy withMonth(jint p0);
			/*
			 * OffsetDateTime withNano(int);
			 */
			::java::time::OffsetDateTimeProxy withNano(jint p0);
			/*
			 * OffsetDateTime withOffsetSameInstant(ZoneOffset);
			 */
			::java::time::OffsetDateTimeProxy withOffsetSameInstant(::java::time::ZoneOffsetProxy p0);
			/*
			 * OffsetDateTime withOffsetSameLocal(ZoneOffset);
			 */
			::java::time::OffsetDateTimeProxy withOffsetSameLocal(::java::time::ZoneOffsetProxy p0);
			/*
			 * OffsetDateTime withSecond(int);
			 */
			::java::time::OffsetDateTimeProxy withSecond(jint p0);
			/*
			 * OffsetDateTime withYear(int);
			 */
			::java::time::OffsetDateTimeProxy withYear(jint p0);
			/*
			 * OffsetTime toOffsetTime();
			 */
			::java::time::OffsetTimeProxy toOffsetTime();
			/*
			 * ZoneOffset getOffset();
			 */
			::java::time::ZoneOffsetProxy getOffset();
			/*
			 * ZonedDateTime atZoneSameInstant(ZoneId);
			 */
			::java::time::ZonedDateTimeProxy atZoneSameInstant(::java::time::ZoneIdProxy p0);
			/*
			 * ZonedDateTime atZoneSimilarLocal(ZoneId);
			 */
			::java::time::ZonedDateTimeProxy atZoneSimilarLocal(::java::time::ZoneIdProxy p0);
			/*
			 * ZonedDateTime toZonedDateTime();
			 */
			::java::time::ZonedDateTimeProxy toZonedDateTime();
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
			 * long toEpochSecond();
			 */
			jlong toEpochSecond();
			/*
			 * long until(Temporal, TemporalUnit);
			 */
			jlong until(::java::time::temporal::TemporalProxy p0, ::java::time::temporal::TemporalUnitProxy p1);
			/*
			 * static OffsetDateTime from(TemporalAccessor);
			 */
			static ::java::time::OffsetDateTimeProxy from(::java::time::temporal::TemporalAccessorProxy p0);
			/*
			 * static OffsetDateTime now();
			 */
			static ::java::time::OffsetDateTimeProxy now();
			/*
			 * static OffsetDateTime now(Clock);
			 */
			static ::java::time::OffsetDateTimeProxy now(::java::time::ClockProxy p0);
			/*
			 * static OffsetDateTime now(ZoneId);
			 */
			static ::java::time::OffsetDateTimeProxy now(::java::time::ZoneIdProxy p0);
			/*
			 * static OffsetDateTime of(int, int, int, int, int, int, int, ZoneOffset);
			 */
			static ::java::time::OffsetDateTimeProxy of(jint p0, jint p1, jint p2, jint p3, jint p4, jint p5, jint p6, ::java::time::ZoneOffsetProxy p7);
			/*
			 * static OffsetDateTime of(LocalDate, LocalTime, ZoneOffset);
			 */
			static ::java::time::OffsetDateTimeProxy of(::java::time::LocalDateProxy p0, ::java::time::LocalTimeProxy p1, ::java::time::ZoneOffsetProxy p2);
			/*
			 * static OffsetDateTime of(LocalDateTime, ZoneOffset);
			 */
			static ::java::time::OffsetDateTimeProxy of(::java::time::LocalDateTimeProxy p0, ::java::time::ZoneOffsetProxy p1);
			/*
			 * static OffsetDateTime ofInstant(Instant, ZoneId);
			 */
			static ::java::time::OffsetDateTimeProxy ofInstant(::java::time::InstantProxy p0, ::java::time::ZoneIdProxy p1);
			/*
			 * static OffsetDateTime parse(CharSequence);
			 */
			static ::java::time::OffsetDateTimeProxy parse(::java::lang::CharSequenceProxy p0);
			/*
			 * static OffsetDateTime parse(CharSequence, DateTimeFormatter);
			 */
			static ::java::time::OffsetDateTimeProxy parse(::java::lang::CharSequenceProxy p0, ::java::time::format::DateTimeFormatterProxy p1);
			/*
			 * static Comparator timeLineOrder();
			 */
			static ::java::util::ComparatorProxy timeLineOrder();

		};
	}
}


#endif
