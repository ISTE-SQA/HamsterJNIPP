#ifndef __java_time_LocalTimeProxy_H
#define __java_time_LocalTimeProxy_H


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
#include "java\time\LocalDateProxyForward.h"
#include "java\time\LocalDateTimeProxyForward.h"
#include "java\time\temporal\TemporalAmountProxyForward.h"
#include "java\time\temporal\TemporalAdjusterProxyForward.h"
#include "java\time\ZoneOffsetProxyForward.h"
#include "java\time\OffsetTimeProxyForward.h"
#include "java\time\temporal\TemporalProxyForward.h"
#include "java\time\temporal\ValueRangeProxyForward.h"
#include "java\time\temporal\TemporalAccessorProxyForward.h"
#include "java\time\ClockProxyForward.h"
#include "java\time\ZoneIdProxyForward.h"
#include "java\lang\CharSequenceProxyForward.h"
#include "java\time\LocalTimeProxy.h"

namespace java
{
	namespace time
	{
		class LocalTimeProxy
		{
		private:
			static std::string className;
			static jclass objectClass;
			jobject peerObject;

		protected:
			LocalTimeProxy(void* unused);
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
			LocalTimeProxy(jobject obj);

			virtual ~LocalTimeProxy();
			LocalTimeProxy& operator=(const LocalTimeProxy& rhs);

			// methods
			/*
			 * boolean equals(Object);
			 */
			jboolean equals(::java::lang::ObjectProxy p0);
			/*
			 * boolean isAfter(LocalTime);
			 */
			jboolean isAfter(::java::time::LocalTimeProxy p0);
			/*
			 * boolean isBefore(LocalTime);
			 */
			jboolean isBefore(::java::time::LocalTimeProxy p0);
			/*
			 * boolean isSupported(TemporalField);
			 */
			jboolean isSupported(::java::time::temporal::TemporalFieldProxy p0);
			/*
			 * boolean isSupported(TemporalUnit);
			 */
			jboolean isSupported(::java::time::temporal::TemporalUnitProxy p0);
			/*
			 * int compareTo(LocalTime);
			 */
			jint compareTo(::java::time::LocalTimeProxy p0);
			/*
			 * int get(TemporalField);
			 */
			jint get(::java::time::temporal::TemporalFieldProxy p0);
			/*
			 * int getHour();
			 */
			jint getHour();
			/*
			 * int getMinute();
			 */
			jint getMinute();
			/*
			 * int getNano();
			 */
			jint getNano();
			/*
			 * int getSecond();
			 */
			jint getSecond();
			/*
			 * int hashCode();
			 */
			jint hashCode();
			/*
			 * int toSecondOfDay();
			 */
			jint toSecondOfDay();
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
			 * LocalDateTime atDate(LocalDate);
			 */
			::java::time::LocalDateTimeProxy atDate(::java::time::LocalDateProxy p0);
			/*
			 * LocalTime minus(TemporalAmount);
			 */
			::java::time::LocalTimeProxy minus(::java::time::temporal::TemporalAmountProxy p0);
			/*
			 * LocalTime minus(long, TemporalUnit);
			 */
			::java::time::LocalTimeProxy minus(jlong p0, ::java::time::temporal::TemporalUnitProxy p1);
			/*
			 * LocalTime minusHours(long);
			 */
			::java::time::LocalTimeProxy minusHours(jlong p0);
			/*
			 * LocalTime minusMinutes(long);
			 */
			::java::time::LocalTimeProxy minusMinutes(jlong p0);
			/*
			 * LocalTime minusNanos(long);
			 */
			::java::time::LocalTimeProxy minusNanos(jlong p0);
			/*
			 * LocalTime minusSeconds(long);
			 */
			::java::time::LocalTimeProxy minusSeconds(jlong p0);
			/*
			 * LocalTime plus(TemporalAmount);
			 */
			::java::time::LocalTimeProxy plus(::java::time::temporal::TemporalAmountProxy p0);
			/*
			 * LocalTime plus(long, TemporalUnit);
			 */
			::java::time::LocalTimeProxy plus(jlong p0, ::java::time::temporal::TemporalUnitProxy p1);
			/*
			 * LocalTime plusHours(long);
			 */
			::java::time::LocalTimeProxy plusHours(jlong p0);
			/*
			 * LocalTime plusMinutes(long);
			 */
			::java::time::LocalTimeProxy plusMinutes(jlong p0);
			/*
			 * LocalTime plusNanos(long);
			 */
			::java::time::LocalTimeProxy plusNanos(jlong p0);
			/*
			 * LocalTime plusSeconds(long);
			 */
			::java::time::LocalTimeProxy plusSeconds(jlong p0);
			/*
			 * LocalTime truncatedTo(TemporalUnit);
			 */
			::java::time::LocalTimeProxy truncatedTo(::java::time::temporal::TemporalUnitProxy p0);
			/*
			 * LocalTime with(TemporalAdjuster);
			 */
			::java::time::LocalTimeProxy with(::java::time::temporal::TemporalAdjusterProxy p0);
			/*
			 * LocalTime with(TemporalField, long);
			 */
			::java::time::LocalTimeProxy with(::java::time::temporal::TemporalFieldProxy p0, jlong p1);
			/*
			 * LocalTime withHour(int);
			 */
			::java::time::LocalTimeProxy withHour(jint p0);
			/*
			 * LocalTime withMinute(int);
			 */
			::java::time::LocalTimeProxy withMinute(jint p0);
			/*
			 * LocalTime withNano(int);
			 */
			::java::time::LocalTimeProxy withNano(jint p0);
			/*
			 * LocalTime withSecond(int);
			 */
			::java::time::LocalTimeProxy withSecond(jint p0);
			/*
			 * OffsetTime atOffset(ZoneOffset);
			 */
			::java::time::OffsetTimeProxy atOffset(::java::time::ZoneOffsetProxy p0);
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
			 * long toNanoOfDay();
			 */
			jlong toNanoOfDay();
			/*
			 * long until(Temporal, TemporalUnit);
			 */
			jlong until(::java::time::temporal::TemporalProxy p0, ::java::time::temporal::TemporalUnitProxy p1);
			/*
			 * static LocalTime from(TemporalAccessor);
			 */
			static ::java::time::LocalTimeProxy from(::java::time::temporal::TemporalAccessorProxy p0);
			/*
			 * static LocalTime now();
			 */
			static ::java::time::LocalTimeProxy now();
			/*
			 * static LocalTime now(Clock);
			 */
			static ::java::time::LocalTimeProxy now(::java::time::ClockProxy p0);
			/*
			 * static LocalTime now(ZoneId);
			 */
			static ::java::time::LocalTimeProxy now(::java::time::ZoneIdProxy p0);
			/*
			 * static LocalTime of(int, int);
			 */
			static ::java::time::LocalTimeProxy of(jint p0, jint p1);
			/*
			 * static LocalTime of(int, int, int);
			 */
			static ::java::time::LocalTimeProxy of(jint p0, jint p1, jint p2);
			/*
			 * static LocalTime of(int, int, int, int);
			 */
			static ::java::time::LocalTimeProxy of(jint p0, jint p1, jint p2, jint p3);
			/*
			 * static LocalTime ofNanoOfDay(long);
			 */
			static ::java::time::LocalTimeProxy ofNanoOfDay(jlong p0);
			/*
			 * static LocalTime ofSecondOfDay(long);
			 */
			static ::java::time::LocalTimeProxy ofSecondOfDay(jlong p0);
			/*
			 * static LocalTime parse(CharSequence);
			 */
			static ::java::time::LocalTimeProxy parse(::java::lang::CharSequenceProxy p0);
			/*
			 * static LocalTime parse(CharSequence, DateTimeFormatter);
			 */
			static ::java::time::LocalTimeProxy parse(::java::lang::CharSequenceProxy p0, ::java::time::format::DateTimeFormatterProxy p1);

		};
	}
}


#endif
