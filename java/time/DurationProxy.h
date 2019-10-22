#ifndef __java_time_DurationProxy_H
#define __java_time_DurationProxy_H


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
#include "java\time\temporal\TemporalUnitProxyForward.h"
#include "java\time\temporal\TemporalProxyForward.h"
#include "java\util\ListProxyForward.h"
#include "java\time\temporal\TemporalAmountProxyForward.h"
#include "java\lang\CharSequenceProxyForward.h"
#include "java\math\BigIntegerProxyForward.h"
#include "java\util\regex\PatternProxyForward.h"

namespace java
{
	namespace time
	{
		class DurationProxy
		{
		private:
			static std::string className;
			static jclass objectClass;
			jobject peerObject;

		protected:
			DurationProxy(void* unused);
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
			DurationProxy(jobject obj);

			virtual ~DurationProxy();
			DurationProxy& operator=(const DurationProxy& rhs);

			// methods
			/*
			 * boolean equals(Object);
			 */
			jboolean equals(::java::lang::ObjectProxy p0);
			/*
			 * boolean isNegative();
			 */
			jboolean isNegative();
			/*
			 * boolean isZero();
			 */
			jboolean isZero();
			/*
			 * int compareTo(Duration);
			 */
			jint compareTo(::java::time::DurationProxy p0);
			/*
			 * int getNano();
			 */
			jint getNano();
			/*
			 * int hashCode();
			 */
			jint hashCode();
			/*
			 * String toString();
			 */
			::net::sourceforge::jnipp::JStringHelper toString();
			/*
			 * Duration abs();
			 */
			::java::time::DurationProxy abs();
			/*
			 * Duration dividedBy(long);
			 */
			::java::time::DurationProxy dividedBy(jlong p0);
			/*
			 * Duration minus(Duration);
			 */
			::java::time::DurationProxy minus(::java::time::DurationProxy p0);
			/*
			 * Duration minus(long, TemporalUnit);
			 */
			::java::time::DurationProxy minus(jlong p0, ::java::time::temporal::TemporalUnitProxy p1);
			/*
			 * Duration minusDays(long);
			 */
			::java::time::DurationProxy minusDays(jlong p0);
			/*
			 * Duration minusHours(long);
			 */
			::java::time::DurationProxy minusHours(jlong p0);
			/*
			 * Duration minusMillis(long);
			 */
			::java::time::DurationProxy minusMillis(jlong p0);
			/*
			 * Duration minusMinutes(long);
			 */
			::java::time::DurationProxy minusMinutes(jlong p0);
			/*
			 * Duration minusNanos(long);
			 */
			::java::time::DurationProxy minusNanos(jlong p0);
			/*
			 * Duration minusSeconds(long);
			 */
			::java::time::DurationProxy minusSeconds(jlong p0);
			/*
			 * Duration multipliedBy(long);
			 */
			::java::time::DurationProxy multipliedBy(jlong p0);
			/*
			 * Duration negated();
			 */
			::java::time::DurationProxy negated();
			/*
			 * Duration plus(Duration);
			 */
			::java::time::DurationProxy plus(::java::time::DurationProxy p0);
			/*
			 * Duration plus(long, TemporalUnit);
			 */
			::java::time::DurationProxy plus(jlong p0, ::java::time::temporal::TemporalUnitProxy p1);
			/*
			 * Duration plusDays(long);
			 */
			::java::time::DurationProxy plusDays(jlong p0);
			/*
			 * Duration plusHours(long);
			 */
			::java::time::DurationProxy plusHours(jlong p0);
			/*
			 * Duration plusMillis(long);
			 */
			::java::time::DurationProxy plusMillis(jlong p0);
			/*
			 * Duration plusMinutes(long);
			 */
			::java::time::DurationProxy plusMinutes(jlong p0);
			/*
			 * Duration plusNanos(long);
			 */
			::java::time::DurationProxy plusNanos(jlong p0);
			/*
			 * Duration plusSeconds(long);
			 */
			::java::time::DurationProxy plusSeconds(jlong p0);
			/*
			 * Duration withNanos(int);
			 */
			::java::time::DurationProxy withNanos(jint p0);
			/*
			 * Duration withSeconds(long);
			 */
			::java::time::DurationProxy withSeconds(jlong p0);
			/*
			 * Temporal addTo(Temporal);
			 */
			::java::time::temporal::TemporalProxy addTo(::java::time::temporal::TemporalProxy p0);
			/*
			 * Temporal subtractFrom(Temporal);
			 */
			::java::time::temporal::TemporalProxy subtractFrom(::java::time::temporal::TemporalProxy p0);
			/*
			 * List getUnits();
			 */
			::java::util::ListProxy getUnits();
			/*
			 * long get(TemporalUnit);
			 */
			jlong get(::java::time::temporal::TemporalUnitProxy p0);
			/*
			 * long getSeconds();
			 */
			jlong getSeconds();
			/*
			 * long toDays();
			 */
			jlong toDays();
			/*
			 * long toHours();
			 */
			jlong toHours();
			/*
			 * long toMillis();
			 */
			jlong toMillis();
			/*
			 * long toMinutes();
			 */
			jlong toMinutes();
			/*
			 * long toNanos();
			 */
			jlong toNanos();
			/*
			 * static Duration between(Temporal, Temporal);
			 */
			static ::java::time::DurationProxy between(::java::time::temporal::TemporalProxy p0, ::java::time::temporal::TemporalProxy p1);
			/*
			 * static Duration from(TemporalAmount);
			 */
			static ::java::time::DurationProxy from(::java::time::temporal::TemporalAmountProxy p0);
			/*
			 * static Duration of(long, TemporalUnit);
			 */
			static ::java::time::DurationProxy of(jlong p0, ::java::time::temporal::TemporalUnitProxy p1);
			/*
			 * static Duration ofDays(long);
			 */
			static ::java::time::DurationProxy ofDays(jlong p0);
			/*
			 * static Duration ofHours(long);
			 */
			static ::java::time::DurationProxy ofHours(jlong p0);
			/*
			 * static Duration ofMillis(long);
			 */
			static ::java::time::DurationProxy ofMillis(jlong p0);
			/*
			 * static Duration ofMinutes(long);
			 */
			static ::java::time::DurationProxy ofMinutes(jlong p0);
			/*
			 * static Duration ofNanos(long);
			 */
			static ::java::time::DurationProxy ofNanos(jlong p0);
			/*
			 * static Duration ofSeconds(long);
			 */
			static ::java::time::DurationProxy ofSeconds(jlong p0);
			/*
			 * static Duration ofSeconds(long, long);
			 */
			static ::java::time::DurationProxy ofSeconds(jlong p0, jlong p1);
			/*
			 * static Duration parse(CharSequence);
			 */
			static ::java::time::DurationProxy parse(::java::lang::CharSequenceProxy p0);

		};
	}
}


#endif
