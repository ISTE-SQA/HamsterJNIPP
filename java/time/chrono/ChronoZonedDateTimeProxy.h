#ifndef __java_time_chrono_ChronoZonedDateTimeProxy_H
#define __java_time_chrono_ChronoZonedDateTimeProxy_H


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
#include "java\time\ZoneIdProxyForward.h"
#include "java\time\ZoneOffsetProxyForward.h"
#include "java\time\chrono\ChronoLocalDateTimeProxyForward.h"
#include "java\time\temporal\TemporalUnitProxyForward.h"
#include "java\time\temporal\TemporalQueryProxyForward.h"
#include "java\time\format\DateTimeFormatterProxyForward.h"
#include "java\time\InstantProxyForward.h"
#include "java\time\LocalTimeProxyForward.h"
#include "java\time\chrono\ChronoLocalDateProxyForward.h"
#include "java\time\temporal\TemporalAmountProxyForward.h"
#include "java\time\temporal\TemporalAdjusterProxyForward.h"
#include "java\time\chrono\ChronologyProxyForward.h"
#include "java\time\temporal\ValueRangeProxyForward.h"
#include "java\time\temporal\TemporalAccessorProxyForward.h"
#include "java\util\ComparatorProxyForward.h"

namespace java
{
	namespace time
	{
		namespace chrono
		{
			class ChronoZonedDateTimeProxy
			{
			private:
				static std::string className;
				static jclass objectClass;
				jobject peerObject;

			protected:
				ChronoZonedDateTimeProxy(void* unused);
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
				ChronoZonedDateTimeProxy(jobject obj);

				virtual ~ChronoZonedDateTimeProxy();
				ChronoZonedDateTimeProxy& operator=(const ChronoZonedDateTimeProxy& rhs);

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
				 * ZoneId getZone();
				 */
				::java::time::ZoneIdProxy getZone();
				/*
				 * ZoneOffset getOffset();
				 */
				::java::time::ZoneOffsetProxy getOffset();
				/*
				 * ChronoLocalDateTime toLocalDateTime();
				 */
				::java::time::chrono::ChronoLocalDateTimeProxy toLocalDateTime();
				/*
				 * ChronoZonedDateTime plus(long, TemporalUnit);
				 */
				::java::time::chrono::ChronoZonedDateTimeProxy plus(jlong p0, ::java::time::temporal::TemporalUnitProxy p1);
				/*
				 * ChronoZonedDateTime with(TemporalField, long);
				 */
				::java::time::chrono::ChronoZonedDateTimeProxy with(::java::time::temporal::TemporalFieldProxy p0, jlong p1);
				/*
				 * ChronoZonedDateTime withEarlierOffsetAtOverlap();
				 */
				::java::time::chrono::ChronoZonedDateTimeProxy withEarlierOffsetAtOverlap();
				/*
				 * ChronoZonedDateTime withLaterOffsetAtOverlap();
				 */
				::java::time::chrono::ChronoZonedDateTimeProxy withLaterOffsetAtOverlap();
				/*
				 * ChronoZonedDateTime withZoneSameInstant(ZoneId);
				 */
				::java::time::chrono::ChronoZonedDateTimeProxy withZoneSameInstant(::java::time::ZoneIdProxy p0);
				/*
				 * ChronoZonedDateTime withZoneSameLocal(ZoneId);
				 */
				::java::time::chrono::ChronoZonedDateTimeProxy withZoneSameLocal(::java::time::ZoneIdProxy p0);
				/*
				 * boolean isAfter(ChronoZonedDateTime);
				 */
				jboolean isAfter(::java::time::chrono::ChronoZonedDateTimeProxy p0);
				/*
				 * boolean isBefore(ChronoZonedDateTime);
				 */
				jboolean isBefore(::java::time::chrono::ChronoZonedDateTimeProxy p0);
				/*
				 * boolean isEqual(ChronoZonedDateTime);
				 */
				jboolean isEqual(::java::time::chrono::ChronoZonedDateTimeProxy p0);
				/*
				 * boolean isSupported(TemporalUnit);
				 */
				jboolean isSupported(::java::time::temporal::TemporalUnitProxy p0);
				/*
				 * int compareTo(ChronoZonedDateTime);
				 */
				jint compareTo(::java::time::chrono::ChronoZonedDateTimeProxy p0);
				/*
				 * int get(TemporalField);
				 */
				jint get(::java::time::temporal::TemporalFieldProxy p0);
				/*
				 * Object query(TemporalQuery);
				 */
				::java::lang::ObjectProxy query(::java::time::temporal::TemporalQueryProxy p0);
				/*
				 * String format(DateTimeFormatter);
				 */
				::net::sourceforge::jnipp::JStringHelper format(::java::time::format::DateTimeFormatterProxy p0);
				/*
				 * Instant toInstant();
				 */
				::java::time::InstantProxy toInstant();
				/*
				 * LocalTime toLocalTime();
				 */
				::java::time::LocalTimeProxy toLocalTime();
				/*
				 * ChronoLocalDate toLocalDate();
				 */
				::java::time::chrono::ChronoLocalDateProxy toLocalDate();
				/*
				 * ChronoZonedDateTime minus(TemporalAmount);
				 */
				::java::time::chrono::ChronoZonedDateTimeProxy minus(::java::time::temporal::TemporalAmountProxy p0);
				/*
				 * ChronoZonedDateTime minus(long, TemporalUnit);
				 */
				::java::time::chrono::ChronoZonedDateTimeProxy minus(jlong p0, ::java::time::temporal::TemporalUnitProxy p1);
				/*
				 * ChronoZonedDateTime plus(TemporalAmount);
				 */
				::java::time::chrono::ChronoZonedDateTimeProxy plus(::java::time::temporal::TemporalAmountProxy p0);
				/*
				 * ChronoZonedDateTime with(TemporalAdjuster);
				 */
				::java::time::chrono::ChronoZonedDateTimeProxy with(::java::time::temporal::TemporalAdjusterProxy p0);
				/*
				 * Chronology getChronology();
				 */
				::java::time::chrono::ChronologyProxy getChronology();
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
				 * static ChronoZonedDateTime from(TemporalAccessor);
				 */
				static ::java::time::chrono::ChronoZonedDateTimeProxy from(::java::time::temporal::TemporalAccessorProxy p0);
				/*
				 * static Comparator timeLineOrder();
				 */
				static ::java::util::ComparatorProxy timeLineOrder();

			};
		}
	}
}


#endif
