#ifndef __java_time_ZonedDateTimeProxy_H
#define __java_time_ZonedDateTimeProxy_H


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
#include "java\time\LocalDateProxyForward.h"
#include "java\time\LocalDateTimeProxyForward.h"
#include "java\time\LocalTimeProxyForward.h"
#include "java\time\MonthProxyForward.h"
#include "java\time\OffsetDateTimeProxyForward.h"
#include "java\time\ZoneIdProxyForward.h"
#include "java\time\ZoneOffsetProxyForward.h"
#include "java\time\temporal\TemporalAmountProxyForward.h"
#include "java\time\temporal\TemporalAdjusterProxyForward.h"
#include "java\time\temporal\ValueRangeProxyForward.h"
#include "java\time\temporal\TemporalProxyForward.h"
#include "java\time\temporal\TemporalAccessorProxyForward.h"
#include "java\time\ClockProxyForward.h"
#include "java\time\InstantProxyForward.h"
#include "java\lang\CharSequenceProxyForward.h"

namespace java
{
	namespace time
	{
		class ZonedDateTimeProxy
		{
		private:
			static std::string className;
			static jclass objectClass;
			jobject peerObject;

		protected:
			ZonedDateTimeProxy(void* unused);
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
			ZonedDateTimeProxy(jobject obj);

			virtual ~ZonedDateTimeProxy();
			ZonedDateTimeProxy& operator=(const ZonedDateTimeProxy& rhs);

			// methods
			/*
			 * boolean equals(Object);
			 */
			jboolean equals(::java::lang::ObjectProxy p0);
			/*
			 * boolean isSupported(TemporalField);
			 */
			jboolean isSupported(::java::time::temporal::TemporalFieldProxy p0);
			/*
			 * boolean isSupported(TemporalUnit);
			 */
			jboolean isSupported(::java::time::temporal::TemporalUnitProxy p0);
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
			 * OffsetDateTime toOffsetDateTime();
			 */
			::java::time::OffsetDateTimeProxy toOffsetDateTime();
			/*
			 * ZoneId getZone();
			 */
			::java::time::ZoneIdProxy getZone();
			/*
			 * ZoneOffset getOffset();
			 */
			::java::time::ZoneOffsetProxy getOffset();
			/*
			 * ZonedDateTime minus(TemporalAmount);
			 */
			::java::time::ZonedDateTimeProxy minus(::java::time::temporal::TemporalAmountProxy p0);
			/*
			 * ZonedDateTime minus(long, TemporalUnit);
			 */
			::java::time::ZonedDateTimeProxy minus(jlong p0, ::java::time::temporal::TemporalUnitProxy p1);
			/*
			 * ZonedDateTime minusDays(long);
			 */
			::java::time::ZonedDateTimeProxy minusDays(jlong p0);
			/*
			 * ZonedDateTime minusHours(long);
			 */
			::java::time::ZonedDateTimeProxy minusHours(jlong p0);
			/*
			 * ZonedDateTime minusMinutes(long);
			 */
			::java::time::ZonedDateTimeProxy minusMinutes(jlong p0);
			/*
			 * ZonedDateTime minusMonths(long);
			 */
			::java::time::ZonedDateTimeProxy minusMonths(jlong p0);
			/*
			 * ZonedDateTime minusNanos(long);
			 */
			::java::time::ZonedDateTimeProxy minusNanos(jlong p0);
			/*
			 * ZonedDateTime minusSeconds(long);
			 */
			::java::time::ZonedDateTimeProxy minusSeconds(jlong p0);
			/*
			 * ZonedDateTime minusWeeks(long);
			 */
			::java::time::ZonedDateTimeProxy minusWeeks(jlong p0);
			/*
			 * ZonedDateTime minusYears(long);
			 */
			::java::time::ZonedDateTimeProxy minusYears(jlong p0);
			/*
			 * ZonedDateTime plus(TemporalAmount);
			 */
			::java::time::ZonedDateTimeProxy plus(::java::time::temporal::TemporalAmountProxy p0);
			/*
			 * ZonedDateTime plus(long, TemporalUnit);
			 */
			::java::time::ZonedDateTimeProxy plus(jlong p0, ::java::time::temporal::TemporalUnitProxy p1);
			/*
			 * ZonedDateTime plusDays(long);
			 */
			::java::time::ZonedDateTimeProxy plusDays(jlong p0);
			/*
			 * ZonedDateTime plusHours(long);
			 */
			::java::time::ZonedDateTimeProxy plusHours(jlong p0);
			/*
			 * ZonedDateTime plusMinutes(long);
			 */
			::java::time::ZonedDateTimeProxy plusMinutes(jlong p0);
			/*
			 * ZonedDateTime plusMonths(long);
			 */
			::java::time::ZonedDateTimeProxy plusMonths(jlong p0);
			/*
			 * ZonedDateTime plusNanos(long);
			 */
			::java::time::ZonedDateTimeProxy plusNanos(jlong p0);
			/*
			 * ZonedDateTime plusSeconds(long);
			 */
			::java::time::ZonedDateTimeProxy plusSeconds(jlong p0);
			/*
			 * ZonedDateTime plusWeeks(long);
			 */
			::java::time::ZonedDateTimeProxy plusWeeks(jlong p0);
			/*
			 * ZonedDateTime plusYears(long);
			 */
			::java::time::ZonedDateTimeProxy plusYears(jlong p0);
			/*
			 * ZonedDateTime truncatedTo(TemporalUnit);
			 */
			::java::time::ZonedDateTimeProxy truncatedTo(::java::time::temporal::TemporalUnitProxy p0);
			/*
			 * ZonedDateTime with(TemporalAdjuster);
			 */
			::java::time::ZonedDateTimeProxy with(::java::time::temporal::TemporalAdjusterProxy p0);
			/*
			 * ZonedDateTime with(TemporalField, long);
			 */
			::java::time::ZonedDateTimeProxy with(::java::time::temporal::TemporalFieldProxy p0, jlong p1);
			/*
			 * ZonedDateTime withDayOfMonth(int);
			 */
			::java::time::ZonedDateTimeProxy withDayOfMonth(jint p0);
			/*
			 * ZonedDateTime withDayOfYear(int);
			 */
			::java::time::ZonedDateTimeProxy withDayOfYear(jint p0);
			/*
			 * ZonedDateTime withEarlierOffsetAtOverlap();
			 */
			::java::time::ZonedDateTimeProxy withEarlierOffsetAtOverlap();
			/*
			 * ZonedDateTime withFixedOffsetZone();
			 */
			::java::time::ZonedDateTimeProxy withFixedOffsetZone();
			/*
			 * ZonedDateTime withHour(int);
			 */
			::java::time::ZonedDateTimeProxy withHour(jint p0);
			/*
			 * ZonedDateTime withLaterOffsetAtOverlap();
			 */
			::java::time::ZonedDateTimeProxy withLaterOffsetAtOverlap();
			/*
			 * ZonedDateTime withMinute(int);
			 */
			::java::time::ZonedDateTimeProxy withMinute(jint p0);
			/*
			 * ZonedDateTime withMonth(int);
			 */
			::java::time::ZonedDateTimeProxy withMonth(jint p0);
			/*
			 * ZonedDateTime withNano(int);
			 */
			::java::time::ZonedDateTimeProxy withNano(jint p0);
			/*
			 * ZonedDateTime withSecond(int);
			 */
			::java::time::ZonedDateTimeProxy withSecond(jint p0);
			/*
			 * ZonedDateTime withYear(int);
			 */
			::java::time::ZonedDateTimeProxy withYear(jint p0);
			/*
			 * ZonedDateTime withZoneSameInstant(ZoneId);
			 */
			::java::time::ZonedDateTimeProxy withZoneSameInstant(::java::time::ZoneIdProxy p0);
			/*
			 * ZonedDateTime withZoneSameLocal(ZoneId);
			 */
			::java::time::ZonedDateTimeProxy withZoneSameLocal(::java::time::ZoneIdProxy p0);
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
			 * static ZonedDateTime from(TemporalAccessor);
			 */
			static ::java::time::ZonedDateTimeProxy from(::java::time::temporal::TemporalAccessorProxy p0);
			/*
			 * static ZonedDateTime now();
			 */
			static ::java::time::ZonedDateTimeProxy now();
			/*
			 * static ZonedDateTime now(Clock);
			 */
			static ::java::time::ZonedDateTimeProxy now(::java::time::ClockProxy p0);
			/*
			 * static ZonedDateTime now(ZoneId);
			 */
			static ::java::time::ZonedDateTimeProxy now(::java::time::ZoneIdProxy p0);
			/*
			 * static ZonedDateTime of(int, int, int, int, int, int, int, ZoneId);
			 */
			static ::java::time::ZonedDateTimeProxy of(jint p0, jint p1, jint p2, jint p3, jint p4, jint p5, jint p6, ::java::time::ZoneIdProxy p7);
			/*
			 * static ZonedDateTime of(LocalDate, LocalTime, ZoneId);
			 */
			static ::java::time::ZonedDateTimeProxy of(::java::time::LocalDateProxy p0, ::java::time::LocalTimeProxy p1, ::java::time::ZoneIdProxy p2);
			/*
			 * static ZonedDateTime of(LocalDateTime, ZoneId);
			 */
			static ::java::time::ZonedDateTimeProxy of(::java::time::LocalDateTimeProxy p0, ::java::time::ZoneIdProxy p1);
			/*
			 * static ZonedDateTime ofInstant(Instant, ZoneId);
			 */
			static ::java::time::ZonedDateTimeProxy ofInstant(::java::time::InstantProxy p0, ::java::time::ZoneIdProxy p1);
			/*
			 * static ZonedDateTime ofInstant(LocalDateTime, ZoneOffset, ZoneId);
			 */
			static ::java::time::ZonedDateTimeProxy ofInstant(::java::time::LocalDateTimeProxy p0, ::java::time::ZoneOffsetProxy p1, ::java::time::ZoneIdProxy p2);
			/*
			 * static ZonedDateTime ofLocal(LocalDateTime, ZoneId, ZoneOffset);
			 */
			static ::java::time::ZonedDateTimeProxy ofLocal(::java::time::LocalDateTimeProxy p0, ::java::time::ZoneIdProxy p1, ::java::time::ZoneOffsetProxy p2);
			/*
			 * static ZonedDateTime ofStrict(LocalDateTime, ZoneOffset, ZoneId);
			 */
			static ::java::time::ZonedDateTimeProxy ofStrict(::java::time::LocalDateTimeProxy p0, ::java::time::ZoneOffsetProxy p1, ::java::time::ZoneIdProxy p2);
			/*
			 * static ZonedDateTime parse(CharSequence);
			 */
			static ::java::time::ZonedDateTimeProxy parse(::java::lang::CharSequenceProxy p0);
			/*
			 * static ZonedDateTime parse(CharSequence, DateTimeFormatter);
			 */
			static ::java::time::ZonedDateTimeProxy parse(::java::lang::CharSequenceProxy p0, ::java::time::format::DateTimeFormatterProxy p1);

		};
	}
}


#endif
