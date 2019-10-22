#ifndef __java_time_chrono_ChronoLocalDateTimeProxy_H
#define __java_time_chrono_ChronoLocalDateTimeProxy_H


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
#include "java\time\LocalTimeProxyForward.h"
#include "java\time\chrono\ChronoLocalDateProxyForward.h"
#include "java\time\temporal\TemporalUnitProxyForward.h"
#include "java\time\ZoneIdProxyForward.h"
#include "java\time\chrono\ChronoZonedDateTimeProxyForward.h"
#include "java\time\temporal\TemporalQueryProxyForward.h"
#include "java\time\format\DateTimeFormatterProxyForward.h"
#include "java\time\ZoneOffsetProxyForward.h"
#include "java\time\InstantProxyForward.h"
#include "java\time\temporal\TemporalAmountProxyForward.h"
#include "java\time\temporal\TemporalAdjusterProxyForward.h"
#include "java\time\chrono\ChronologyProxyForward.h"
#include "java\time\temporal\TemporalProxyForward.h"
#include "java\time\temporal\TemporalAccessorProxyForward.h"
#include "java\util\ComparatorProxyForward.h"

namespace java
{
	namespace time
	{
		namespace chrono
		{
			class ChronoLocalDateTimeProxy
			{
			private:
				static std::string className;
				static jclass objectClass;
				jobject peerObject;

			protected:
				ChronoLocalDateTimeProxy(void* unused);
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
				ChronoLocalDateTimeProxy(jobject obj);

				virtual ~ChronoLocalDateTimeProxy();
				ChronoLocalDateTimeProxy& operator=(const ChronoLocalDateTimeProxy& rhs);

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
				 * int hashCode();
				 */
				jint hashCode();
				/*
				 * String toString();
				 */
				::net::sourceforge::jnipp::JStringHelper toString();
				/*
				 * LocalTime toLocalTime();
				 */
				::java::time::LocalTimeProxy toLocalTime();
				/*
				 * ChronoLocalDate toLocalDate();
				 */
				::java::time::chrono::ChronoLocalDateProxy toLocalDate();
				/*
				 * ChronoLocalDateTime plus(long, TemporalUnit);
				 */
				::java::time::chrono::ChronoLocalDateTimeProxy plus(jlong p0, ::java::time::temporal::TemporalUnitProxy p1);
				/*
				 * ChronoLocalDateTime with(TemporalField, long);
				 */
				::java::time::chrono::ChronoLocalDateTimeProxy with(::java::time::temporal::TemporalFieldProxy p0, jlong p1);
				/*
				 * ChronoZonedDateTime atZone(ZoneId);
				 */
				::java::time::chrono::ChronoZonedDateTimeProxy atZone(::java::time::ZoneIdProxy p0);
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
				 * boolean isSupported(TemporalUnit);
				 */
				jboolean isSupported(::java::time::temporal::TemporalUnitProxy p0);
				/*
				 * int compareTo(ChronoLocalDateTime);
				 */
				jint compareTo(::java::time::chrono::ChronoLocalDateTimeProxy p0);
				/*
				 * Object query(TemporalQuery);
				 */
				::java::lang::ObjectProxy query(::java::time::temporal::TemporalQueryProxy p0);
				/*
				 * String format(DateTimeFormatter);
				 */
				::net::sourceforge::jnipp::JStringHelper format(::java::time::format::DateTimeFormatterProxy p0);
				/*
				 * Instant toInstant(ZoneOffset);
				 */
				::java::time::InstantProxy toInstant(::java::time::ZoneOffsetProxy p0);
				/*
				 * ChronoLocalDateTime minus(TemporalAmount);
				 */
				::java::time::chrono::ChronoLocalDateTimeProxy minus(::java::time::temporal::TemporalAmountProxy p0);
				/*
				 * ChronoLocalDateTime minus(long, TemporalUnit);
				 */
				::java::time::chrono::ChronoLocalDateTimeProxy minus(jlong p0, ::java::time::temporal::TemporalUnitProxy p1);
				/*
				 * ChronoLocalDateTime plus(TemporalAmount);
				 */
				::java::time::chrono::ChronoLocalDateTimeProxy plus(::java::time::temporal::TemporalAmountProxy p0);
				/*
				 * ChronoLocalDateTime with(TemporalAdjuster);
				 */
				::java::time::chrono::ChronoLocalDateTimeProxy with(::java::time::temporal::TemporalAdjusterProxy p0);
				/*
				 * Chronology getChronology();
				 */
				::java::time::chrono::ChronologyProxy getChronology();
				/*
				 * Temporal adjustInto(Temporal);
				 */
				::java::time::temporal::TemporalProxy adjustInto(::java::time::temporal::TemporalProxy p0);
				/*
				 * long toEpochSecond(ZoneOffset);
				 */
				jlong toEpochSecond(::java::time::ZoneOffsetProxy p0);
				/*
				 * static ChronoLocalDateTime from(TemporalAccessor);
				 */
				static ::java::time::chrono::ChronoLocalDateTimeProxy from(::java::time::temporal::TemporalAccessorProxy p0);
				/*
				 * static Comparator timeLineOrder();
				 */
				static ::java::util::ComparatorProxy timeLineOrder();

			};
		}
	}
}


#endif
