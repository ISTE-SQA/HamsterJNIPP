#ifndef __java_time_chrono_IsoChronologyProxy_H
#define __java_time_chrono_IsoChronologyProxy_H


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
#include "java\time\chrono\EraProxyForward.h"
#include "java\time\LocalDateProxyForward.h"
#include "java\time\temporal\TemporalAccessorProxyForward.h"
#include "java\time\ClockProxyForward.h"
#include "java\time\ZoneIdProxyForward.h"
#include "java\util\MapProxyForward.h"
#include "java\time\format\ResolverStyleProxyForward.h"
#include "java\time\LocalDateTimeProxyForward.h"
#include "java\time\PeriodProxyForward.h"
#include "java\time\InstantProxyForward.h"
#include "java\time\ZonedDateTimeProxyForward.h"
#include "java\time\chrono\IsoEraProxyForward.h"
#include "java\time\temporal\ChronoFieldProxyForward.h"
#include "java\time\temporal\ValueRangeProxyForward.h"
#include "java\util\ListProxyForward.h"

namespace java
{
	namespace time
	{
		namespace chrono
		{
			class IsoChronologyProxy
			{
			private:
				static std::string className;
				static jclass objectClass;
				jobject peerObject;

			protected:
				IsoChronologyProxy(void* unused);
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
				IsoChronologyProxy(jobject obj);

				virtual ~IsoChronologyProxy();
				IsoChronologyProxy& operator=(const IsoChronologyProxy& rhs);

				// methods
				/*
				 * boolean isLeapYear(long);
				 */
				jboolean isLeapYear(jlong p0);
				/*
				 * int prolepticYear(Era, int);
				 */
				jint prolepticYear(::java::time::chrono::EraProxy p0, jint p1);
				/*
				 * String getCalendarType();
				 */
				::net::sourceforge::jnipp::JStringHelper getCalendarType();
				/*
				 * String getId();
				 */
				::net::sourceforge::jnipp::JStringHelper getId();
				/*
				 * LocalDate date(int, int, int);
				 */
				::java::time::LocalDateProxy date(jint p0, jint p1, jint p2);
				/*
				 * LocalDate date(Era, int, int, int);
				 */
				::java::time::LocalDateProxy date(::java::time::chrono::EraProxy p0, jint p1, jint p2, jint p3);
				/*
				 * LocalDate date(TemporalAccessor);
				 */
				::java::time::LocalDateProxy date(::java::time::temporal::TemporalAccessorProxy p0);
				/*
				 * LocalDate dateEpochDay(long);
				 */
				::java::time::LocalDateProxy dateEpochDay(jlong p0);
				/*
				 * LocalDate dateNow();
				 */
				::java::time::LocalDateProxy dateNow();
				/*
				 * LocalDate dateNow(Clock);
				 */
				::java::time::LocalDateProxy dateNow(::java::time::ClockProxy p0);
				/*
				 * LocalDate dateNow(ZoneId);
				 */
				::java::time::LocalDateProxy dateNow(::java::time::ZoneIdProxy p0);
				/*
				 * LocalDate dateYearDay(int, int);
				 */
				::java::time::LocalDateProxy dateYearDay(jint p0, jint p1);
				/*
				 * LocalDate dateYearDay(Era, int, int);
				 */
				::java::time::LocalDateProxy dateYearDay(::java::time::chrono::EraProxy p0, jint p1, jint p2);
				/*
				 * LocalDate resolveDate(Map, ResolverStyle);
				 */
				::java::time::LocalDateProxy resolveDate(::java::util::MapProxy p0, ::java::time::format::ResolverStyleProxy p1);
				/*
				 * LocalDateTime localDateTime(TemporalAccessor);
				 */
				::java::time::LocalDateTimeProxy localDateTime(::java::time::temporal::TemporalAccessorProxy p0);
				/*
				 * Period period(int, int, int);
				 */
				::java::time::PeriodProxy period(jint p0, jint p1, jint p2);
				/*
				 * ZonedDateTime zonedDateTime(Instant, ZoneId);
				 */
				::java::time::ZonedDateTimeProxy zonedDateTime(::java::time::InstantProxy p0, ::java::time::ZoneIdProxy p1);
				/*
				 * ZonedDateTime zonedDateTime(TemporalAccessor);
				 */
				::java::time::ZonedDateTimeProxy zonedDateTime(::java::time::temporal::TemporalAccessorProxy p0);
				/*
				 * IsoEra eraOf(int);
				 */
				::java::time::chrono::IsoEraProxy eraOf(jint p0);
				/*
				 * ValueRange range(ChronoField);
				 */
				::java::time::temporal::ValueRangeProxy range(::java::time::temporal::ChronoFieldProxy p0);
				/*
				 * List eras();
				 */
				::java::util::ListProxy eras();

			};
		}
	}
}


#endif
