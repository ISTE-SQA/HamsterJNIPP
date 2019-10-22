#ifndef __java_time_OffsetTimeProxy_H
#define __java_time_OffsetTimeProxy_H


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
#include "java\time\LocalTimeProxyForward.h"
#include "java\time\LocalDateProxyForward.h"
#include "java\time\OffsetDateTimeProxyForward.h"
#include "java\time\temporal\TemporalAmountProxyForward.h"
#include "java\time\temporal\TemporalAdjusterProxyForward.h"
#include "java\time\ZoneOffsetProxyForward.h"
#include "java\time\temporal\TemporalProxyForward.h"
#include "java\time\temporal\ValueRangeProxyForward.h"
#include "java\time\temporal\TemporalAccessorProxyForward.h"
#include "java\time\ClockProxyForward.h"
#include "java\time\ZoneIdProxyForward.h"
#include "java\time\InstantProxyForward.h"
#include "java\lang\CharSequenceProxyForward.h"

namespace java
{
	namespace time
	{
		class OffsetTimeProxy
		{
		private:
			static std::string className;
			static jclass objectClass;
			jobject peerObject;

		protected:
			OffsetTimeProxy(void* unused);
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
			OffsetTimeProxy(jobject obj);

			virtual ~OffsetTimeProxy();
			OffsetTimeProxy& operator=(const OffsetTimeProxy& rhs);

			// methods
			/*
			 * boolean equals(Object);
			 */
			jboolean equals(::java::lang::ObjectProxy p0);
			/*
			 * boolean isAfter(OffsetTime);
			 */
			jboolean isAfter(::java::time::OffsetTimeProxy p0);
			/*
			 * boolean isBefore(OffsetTime);
			 */
			jboolean isBefore(::java::time::OffsetTimeProxy p0);
			/*
			 * boolean isEqual(OffsetTime);
			 */
			jboolean isEqual(::java::time::OffsetTimeProxy p0);
			/*
			 * boolean isSupported(TemporalField);
			 */
			jboolean isSupported(::java::time::temporal::TemporalFieldProxy p0);
			/*
			 * boolean isSupported(TemporalUnit);
			 */
			jboolean isSupported(::java::time::temporal::TemporalUnitProxy p0);
			/*
			 * int compareTo(OffsetTime);
			 */
			jint compareTo(::java::time::OffsetTimeProxy p0);
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
			 * LocalTime toLocalTime();
			 */
			::java::time::LocalTimeProxy toLocalTime();
			/*
			 * OffsetDateTime atDate(LocalDate);
			 */
			::java::time::OffsetDateTimeProxy atDate(::java::time::LocalDateProxy p0);
			/*
			 * OffsetTime minus(TemporalAmount);
			 */
			::java::time::OffsetTimeProxy minus(::java::time::temporal::TemporalAmountProxy p0);
			/*
			 * OffsetTime minus(long, TemporalUnit);
			 */
			::java::time::OffsetTimeProxy minus(jlong p0, ::java::time::temporal::TemporalUnitProxy p1);
			/*
			 * OffsetTime minusHours(long);
			 */
			::java::time::OffsetTimeProxy minusHours(jlong p0);
			/*
			 * OffsetTime minusMinutes(long);
			 */
			::java::time::OffsetTimeProxy minusMinutes(jlong p0);
			/*
			 * OffsetTime minusNanos(long);
			 */
			::java::time::OffsetTimeProxy minusNanos(jlong p0);
			/*
			 * OffsetTime minusSeconds(long);
			 */
			::java::time::OffsetTimeProxy minusSeconds(jlong p0);
			/*
			 * OffsetTime plus(TemporalAmount);
			 */
			::java::time::OffsetTimeProxy plus(::java::time::temporal::TemporalAmountProxy p0);
			/*
			 * OffsetTime plus(long, TemporalUnit);
			 */
			::java::time::OffsetTimeProxy plus(jlong p0, ::java::time::temporal::TemporalUnitProxy p1);
			/*
			 * OffsetTime plusHours(long);
			 */
			::java::time::OffsetTimeProxy plusHours(jlong p0);
			/*
			 * OffsetTime plusMinutes(long);
			 */
			::java::time::OffsetTimeProxy plusMinutes(jlong p0);
			/*
			 * OffsetTime plusNanos(long);
			 */
			::java::time::OffsetTimeProxy plusNanos(jlong p0);
			/*
			 * OffsetTime plusSeconds(long);
			 */
			::java::time::OffsetTimeProxy plusSeconds(jlong p0);
			/*
			 * OffsetTime truncatedTo(TemporalUnit);
			 */
			::java::time::OffsetTimeProxy truncatedTo(::java::time::temporal::TemporalUnitProxy p0);
			/*
			 * OffsetTime with(TemporalAdjuster);
			 */
			::java::time::OffsetTimeProxy with(::java::time::temporal::TemporalAdjusterProxy p0);
			/*
			 * OffsetTime with(TemporalField, long);
			 */
			::java::time::OffsetTimeProxy with(::java::time::temporal::TemporalFieldProxy p0, jlong p1);
			/*
			 * OffsetTime withHour(int);
			 */
			::java::time::OffsetTimeProxy withHour(jint p0);
			/*
			 * OffsetTime withMinute(int);
			 */
			::java::time::OffsetTimeProxy withMinute(jint p0);
			/*
			 * OffsetTime withNano(int);
			 */
			::java::time::OffsetTimeProxy withNano(jint p0);
			/*
			 * OffsetTime withOffsetSameInstant(ZoneOffset);
			 */
			::java::time::OffsetTimeProxy withOffsetSameInstant(::java::time::ZoneOffsetProxy p0);
			/*
			 * OffsetTime withOffsetSameLocal(ZoneOffset);
			 */
			::java::time::OffsetTimeProxy withOffsetSameLocal(::java::time::ZoneOffsetProxy p0);
			/*
			 * OffsetTime withSecond(int);
			 */
			::java::time::OffsetTimeProxy withSecond(jint p0);
			/*
			 * ZoneOffset getOffset();
			 */
			::java::time::ZoneOffsetProxy getOffset();
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
			 * static OffsetTime from(TemporalAccessor);
			 */
			static ::java::time::OffsetTimeProxy from(::java::time::temporal::TemporalAccessorProxy p0);
			/*
			 * static OffsetTime now();
			 */
			static ::java::time::OffsetTimeProxy now();
			/*
			 * static OffsetTime now(Clock);
			 */
			static ::java::time::OffsetTimeProxy now(::java::time::ClockProxy p0);
			/*
			 * static OffsetTime now(ZoneId);
			 */
			static ::java::time::OffsetTimeProxy now(::java::time::ZoneIdProxy p0);
			/*
			 * static OffsetTime of(int, int, int, int, ZoneOffset);
			 */
			static ::java::time::OffsetTimeProxy of(jint p0, jint p1, jint p2, jint p3, ::java::time::ZoneOffsetProxy p4);
			/*
			 * static OffsetTime of(LocalTime, ZoneOffset);
			 */
			static ::java::time::OffsetTimeProxy of(::java::time::LocalTimeProxy p0, ::java::time::ZoneOffsetProxy p1);
			/*
			 * static OffsetTime ofInstant(Instant, ZoneId);
			 */
			static ::java::time::OffsetTimeProxy ofInstant(::java::time::InstantProxy p0, ::java::time::ZoneIdProxy p1);
			/*
			 * static OffsetTime parse(CharSequence);
			 */
			static ::java::time::OffsetTimeProxy parse(::java::lang::CharSequenceProxy p0);
			/*
			 * static OffsetTime parse(CharSequence, DateTimeFormatter);
			 */
			static ::java::time::OffsetTimeProxy parse(::java::lang::CharSequenceProxy p0, ::java::time::format::DateTimeFormatterProxy p1);

		};
	}
}


#endif
