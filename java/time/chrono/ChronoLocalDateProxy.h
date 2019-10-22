#ifndef __java_time_chrono_ChronoLocalDateProxy_H
#define __java_time_chrono_ChronoLocalDateProxy_H


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
#include "java\time\chrono\ChronoPeriodProxyForward.h"
#include "java\time\chrono\ChronologyProxyForward.h"
#include "java\time\temporal\TemporalProxyForward.h"
#include "java\time\temporal\TemporalUnitProxyForward.h"
#include "java\time\temporal\TemporalFieldProxyForward.h"
#include "java\time\temporal\TemporalQueryProxyForward.h"
#include "java\time\format\DateTimeFormatterProxyForward.h"
#include "java\time\temporal\TemporalAmountProxyForward.h"
#include "java\time\temporal\TemporalAdjusterProxyForward.h"
#include "java\time\LocalTimeProxyForward.h"
#include "java\time\chrono\ChronoLocalDateTimeProxyForward.h"
#include "java\time\chrono\EraProxyForward.h"
#include "java\time\temporal\TemporalAccessorProxyForward.h"
#include "java\util\ComparatorProxyForward.h"

namespace java
{
	namespace time
	{
		namespace chrono
		{
			class ChronoLocalDateProxy
			{
			private:
				static std::string className;
				static jclass objectClass;
				jobject peerObject;

			protected:
				ChronoLocalDateProxy(void* unused);
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
				ChronoLocalDateProxy(jobject obj);

				virtual ~ChronoLocalDateProxy();
				ChronoLocalDateProxy& operator=(const ChronoLocalDateProxy& rhs);

				// methods
				/*
				 * boolean equals(Object);
				 */
				jboolean equals(::java::lang::ObjectProxy p0);
				/*
				 * int hashCode();
				 */
				jint hashCode();
				/*
				 * int lengthOfMonth();
				 */
				jint lengthOfMonth();
				/*
				 * String toString();
				 */
				::net::sourceforge::jnipp::JStringHelper toString();
				/*
				 * ChronoPeriod until(ChronoLocalDate);
				 */
				::java::time::chrono::ChronoPeriodProxy until(::java::time::chrono::ChronoLocalDateProxy p0);
				/*
				 * Chronology getChronology();
				 */
				::java::time::chrono::ChronologyProxy getChronology();
				/*
				 * long until(Temporal, TemporalUnit);
				 */
				jlong until(::java::time::temporal::TemporalProxy p0, ::java::time::temporal::TemporalUnitProxy p1);
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
				 * ChronoLocalDate minus(TemporalAmount);
				 */
				::java::time::chrono::ChronoLocalDateProxy minus(::java::time::temporal::TemporalAmountProxy p0);
				/*
				 * ChronoLocalDate minus(long, TemporalUnit);
				 */
				::java::time::chrono::ChronoLocalDateProxy minus(jlong p0, ::java::time::temporal::TemporalUnitProxy p1);
				/*
				 * ChronoLocalDate plus(TemporalAmount);
				 */
				::java::time::chrono::ChronoLocalDateProxy plus(::java::time::temporal::TemporalAmountProxy p0);
				/*
				 * ChronoLocalDate plus(long, TemporalUnit);
				 */
				::java::time::chrono::ChronoLocalDateProxy plus(jlong p0, ::java::time::temporal::TemporalUnitProxy p1);
				/*
				 * ChronoLocalDate with(TemporalAdjuster);
				 */
				::java::time::chrono::ChronoLocalDateProxy with(::java::time::temporal::TemporalAdjusterProxy p0);
				/*
				 * ChronoLocalDate with(TemporalField, long);
				 */
				::java::time::chrono::ChronoLocalDateProxy with(::java::time::temporal::TemporalFieldProxy p0, jlong p1);
				/*
				 * ChronoLocalDateTime atTime(LocalTime);
				 */
				::java::time::chrono::ChronoLocalDateTimeProxy atTime(::java::time::LocalTimeProxy p0);
				/*
				 * Era getEra();
				 */
				::java::time::chrono::EraProxy getEra();
				/*
				 * Temporal adjustInto(Temporal);
				 */
				::java::time::temporal::TemporalProxy adjustInto(::java::time::temporal::TemporalProxy p0);
				/*
				 * long toEpochDay();
				 */
				jlong toEpochDay();
				/*
				 * static ChronoLocalDate from(TemporalAccessor);
				 */
				static ::java::time::chrono::ChronoLocalDateProxy from(::java::time::temporal::TemporalAccessorProxy p0);
				/*
				 * static Comparator timeLineOrder();
				 */
				static ::java::util::ComparatorProxy timeLineOrder();

			};
		}
	}
}


#endif
