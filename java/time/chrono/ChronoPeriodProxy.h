#ifndef __java_time_chrono_ChronoPeriodProxy_H
#define __java_time_chrono_ChronoPeriodProxy_H


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
#include "java\time\chrono\ChronologyProxyForward.h"
#include "java\time\temporal\TemporalProxyForward.h"
#include "java\util\ListProxyForward.h"
#include "java\time\temporal\TemporalUnitProxyForward.h"
#include "java\time\chrono\ChronoLocalDateProxyForward.h"

namespace java
{
	namespace time
	{
		namespace chrono
		{
			class ChronoPeriodProxy
			{
			private:
				static std::string className;
				static jclass objectClass;
				jobject peerObject;

			protected:
				ChronoPeriodProxy(void* unused);
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
				ChronoPeriodProxy(jobject obj);

				virtual ~ChronoPeriodProxy();
				ChronoPeriodProxy& operator=(const ChronoPeriodProxy& rhs);

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
				 * String toString();
				 */
				::net::sourceforge::jnipp::JStringHelper toString();
				/*
				 * ChronoPeriod minus(TemporalAmount);
				 */
				::java::time::chrono::ChronoPeriodProxy minus(::java::time::temporal::TemporalAmountProxy p0);
				/*
				 * ChronoPeriod multipliedBy(int);
				 */
				::java::time::chrono::ChronoPeriodProxy multipliedBy(jint p0);
				/*
				 * ChronoPeriod normalized();
				 */
				::java::time::chrono::ChronoPeriodProxy normalized();
				/*
				 * ChronoPeriod plus(TemporalAmount);
				 */
				::java::time::chrono::ChronoPeriodProxy plus(::java::time::temporal::TemporalAmountProxy p0);
				/*
				 * Chronology getChronology();
				 */
				::java::time::chrono::ChronologyProxy getChronology();
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
				 * boolean isNegative();
				 */
				jboolean isNegative();
				/*
				 * boolean isZero();
				 */
				jboolean isZero();
				/*
				 * ChronoPeriod negated();
				 */
				::java::time::chrono::ChronoPeriodProxy negated();
				/*
				 * static ChronoPeriod between(ChronoLocalDate, ChronoLocalDate);
				 */
				static ::java::time::chrono::ChronoPeriodProxy between(::java::time::chrono::ChronoLocalDateProxy p0, ::java::time::chrono::ChronoLocalDateProxy p1);

			};
		}
	}
}


#endif
