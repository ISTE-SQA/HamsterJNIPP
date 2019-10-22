#ifndef __java_time_PeriodProxy_H
#define __java_time_PeriodProxy_H


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
#include "java\time\temporal\TemporalAmountProxyForward.h"
#include "java\time\chrono\IsoChronologyProxyForward.h"
#include "java\time\temporal\TemporalProxyForward.h"
#include "java\util\ListProxyForward.h"
#include "java\time\temporal\TemporalUnitProxyForward.h"
#include "java\time\LocalDateProxyForward.h"
#include "java\lang\CharSequenceProxyForward.h"
#include "java\util\regex\PatternProxyForward.h"

namespace java
{
	namespace time
	{
		class PeriodProxy
		{
		private:
			static std::string className;
			static jclass objectClass;
			jobject peerObject;

		protected:
			PeriodProxy(void* unused);
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
			PeriodProxy(jobject obj);

			virtual ~PeriodProxy();
			PeriodProxy& operator=(const PeriodProxy& rhs);

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
			 * int getDays();
			 */
			jint getDays();
			/*
			 * int getMonths();
			 */
			jint getMonths();
			/*
			 * int getYears();
			 */
			jint getYears();
			/*
			 * int hashCode();
			 */
			jint hashCode();
			/*
			 * String toString();
			 */
			::net::sourceforge::jnipp::JStringHelper toString();
			/*
			 * Period minus(TemporalAmount);
			 */
			::java::time::PeriodProxy minus(::java::time::temporal::TemporalAmountProxy p0);
			/*
			 * Period minusDays(long);
			 */
			::java::time::PeriodProxy minusDays(jlong p0);
			/*
			 * Period minusMonths(long);
			 */
			::java::time::PeriodProxy minusMonths(jlong p0);
			/*
			 * Period minusYears(long);
			 */
			::java::time::PeriodProxy minusYears(jlong p0);
			/*
			 * Period multipliedBy(int);
			 */
			::java::time::PeriodProxy multipliedBy(jint p0);
			/*
			 * Period negated();
			 */
			::java::time::PeriodProxy negated();
			/*
			 * Period normalized();
			 */
			::java::time::PeriodProxy normalized();
			/*
			 * Period plus(TemporalAmount);
			 */
			::java::time::PeriodProxy plus(::java::time::temporal::TemporalAmountProxy p0);
			/*
			 * Period plusDays(long);
			 */
			::java::time::PeriodProxy plusDays(jlong p0);
			/*
			 * Period plusMonths(long);
			 */
			::java::time::PeriodProxy plusMonths(jlong p0);
			/*
			 * Period plusYears(long);
			 */
			::java::time::PeriodProxy plusYears(jlong p0);
			/*
			 * Period withDays(int);
			 */
			::java::time::PeriodProxy withDays(jint p0);
			/*
			 * Period withMonths(int);
			 */
			::java::time::PeriodProxy withMonths(jint p0);
			/*
			 * Period withYears(int);
			 */
			::java::time::PeriodProxy withYears(jint p0);
			/*
			 * IsoChronology getChronology();
			 */
			::java::time::chrono::IsoChronologyProxy getChronology();
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
			 * long toTotalMonths();
			 */
			jlong toTotalMonths();
			/*
			 * static Period between(LocalDate, LocalDate);
			 */
			static ::java::time::PeriodProxy between(::java::time::LocalDateProxy p0, ::java::time::LocalDateProxy p1);
			/*
			 * static Period from(TemporalAmount);
			 */
			static ::java::time::PeriodProxy from(::java::time::temporal::TemporalAmountProxy p0);
			/*
			 * static Period of(int, int, int);
			 */
			static ::java::time::PeriodProxy of(jint p0, jint p1, jint p2);
			/*
			 * static Period ofDays(int);
			 */
			static ::java::time::PeriodProxy ofDays(jint p0);
			/*
			 * static Period ofMonths(int);
			 */
			static ::java::time::PeriodProxy ofMonths(jint p0);
			/*
			 * static Period ofWeeks(int);
			 */
			static ::java::time::PeriodProxy ofWeeks(jint p0);
			/*
			 * static Period ofYears(int);
			 */
			static ::java::time::PeriodProxy ofYears(jint p0);
			/*
			 * static Period parse(CharSequence);
			 */
			static ::java::time::PeriodProxy parse(::java::lang::CharSequenceProxy p0);

		};
	}
}


#endif
