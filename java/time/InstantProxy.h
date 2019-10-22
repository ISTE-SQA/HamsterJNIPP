#ifndef __java_time_InstantProxy_H
#define __java_time_InstantProxy_H


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
#include "java\time\temporal\TemporalAmountProxyForward.h"
#include "java\time\temporal\TemporalAdjusterProxyForward.h"
#include "java\time\ZoneOffsetProxyForward.h"
#include "java\time\OffsetDateTimeProxyForward.h"
#include "java\time\ZoneIdProxyForward.h"
#include "java\time\ZonedDateTimeProxyForward.h"
#include "java\time\temporal\TemporalProxyForward.h"
#include "java\time\temporal\ValueRangeProxyForward.h"
#include "java\time\temporal\TemporalAccessorProxyForward.h"
#include "java\time\ClockProxyForward.h"
#include "java\lang\CharSequenceProxyForward.h"

namespace java
{
	namespace time
	{
		class InstantProxy
		{
		private:
			static std::string className;
			static jclass objectClass;
			jobject peerObject;

		protected:
			InstantProxy(void* unused);
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
			InstantProxy(jobject obj);

			virtual ~InstantProxy();
			InstantProxy& operator=(const InstantProxy& rhs);

			// methods
			/*
			 * boolean equals(Object);
			 */
			jboolean equals(::java::lang::ObjectProxy p0);
			/*
			 * boolean isAfter(Instant);
			 */
			jboolean isAfter(::java::time::InstantProxy p0);
			/*
			 * boolean isBefore(Instant);
			 */
			jboolean isBefore(::java::time::InstantProxy p0);
			/*
			 * boolean isSupported(TemporalField);
			 */
			jboolean isSupported(::java::time::temporal::TemporalFieldProxy p0);
			/*
			 * boolean isSupported(TemporalUnit);
			 */
			jboolean isSupported(::java::time::temporal::TemporalUnitProxy p0);
			/*
			 * int compareTo(Instant);
			 */
			jint compareTo(::java::time::InstantProxy p0);
			/*
			 * int get(TemporalField);
			 */
			jint get(::java::time::temporal::TemporalFieldProxy p0);
			/*
			 * int getNano();
			 */
			jint getNano();
			/*
			 * int hashCode();
			 */
			jint hashCode();
			/*
			 * Object query(TemporalQuery);
			 */
			::java::lang::ObjectProxy query(::java::time::temporal::TemporalQueryProxy p0);
			/*
			 * String toString();
			 */
			::net::sourceforge::jnipp::JStringHelper toString();
			/*
			 * Instant minus(TemporalAmount);
			 */
			::java::time::InstantProxy minus(::java::time::temporal::TemporalAmountProxy p0);
			/*
			 * Instant minus(long, TemporalUnit);
			 */
			::java::time::InstantProxy minus(jlong p0, ::java::time::temporal::TemporalUnitProxy p1);
			/*
			 * Instant minusMillis(long);
			 */
			::java::time::InstantProxy minusMillis(jlong p0);
			/*
			 * Instant minusNanos(long);
			 */
			::java::time::InstantProxy minusNanos(jlong p0);
			/*
			 * Instant minusSeconds(long);
			 */
			::java::time::InstantProxy minusSeconds(jlong p0);
			/*
			 * Instant plus(TemporalAmount);
			 */
			::java::time::InstantProxy plus(::java::time::temporal::TemporalAmountProxy p0);
			/*
			 * Instant plus(long, TemporalUnit);
			 */
			::java::time::InstantProxy plus(jlong p0, ::java::time::temporal::TemporalUnitProxy p1);
			/*
			 * Instant plusMillis(long);
			 */
			::java::time::InstantProxy plusMillis(jlong p0);
			/*
			 * Instant plusNanos(long);
			 */
			::java::time::InstantProxy plusNanos(jlong p0);
			/*
			 * Instant plusSeconds(long);
			 */
			::java::time::InstantProxy plusSeconds(jlong p0);
			/*
			 * Instant truncatedTo(TemporalUnit);
			 */
			::java::time::InstantProxy truncatedTo(::java::time::temporal::TemporalUnitProxy p0);
			/*
			 * Instant with(TemporalAdjuster);
			 */
			::java::time::InstantProxy with(::java::time::temporal::TemporalAdjusterProxy p0);
			/*
			 * Instant with(TemporalField, long);
			 */
			::java::time::InstantProxy with(::java::time::temporal::TemporalFieldProxy p0, jlong p1);
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
			 * long getEpochSecond();
			 */
			jlong getEpochSecond();
			/*
			 * long getLong(TemporalField);
			 */
			jlong getLong(::java::time::temporal::TemporalFieldProxy p0);
			/*
			 * long toEpochMilli();
			 */
			jlong toEpochMilli();
			/*
			 * long until(Temporal, TemporalUnit);
			 */
			jlong until(::java::time::temporal::TemporalProxy p0, ::java::time::temporal::TemporalUnitProxy p1);
			/*
			 * static Instant from(TemporalAccessor);
			 */
			static ::java::time::InstantProxy from(::java::time::temporal::TemporalAccessorProxy p0);
			/*
			 * static Instant now();
			 */
			static ::java::time::InstantProxy now();
			/*
			 * static Instant now(Clock);
			 */
			static ::java::time::InstantProxy now(::java::time::ClockProxy p0);
			/*
			 * static Instant ofEpochMilli(long);
			 */
			static ::java::time::InstantProxy ofEpochMilli(jlong p0);
			/*
			 * static Instant ofEpochSecond(long);
			 */
			static ::java::time::InstantProxy ofEpochSecond(jlong p0);
			/*
			 * static Instant ofEpochSecond(long, long);
			 */
			static ::java::time::InstantProxy ofEpochSecond(jlong p0, jlong p1);
			/*
			 * static Instant parse(CharSequence);
			 */
			static ::java::time::InstantProxy parse(::java::lang::CharSequenceProxy p0);

		};
	}
}


#endif
