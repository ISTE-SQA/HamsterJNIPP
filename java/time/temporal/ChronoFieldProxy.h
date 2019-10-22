#ifndef __java_time_temporal_ChronoFieldProxy_H
#define __java_time_temporal_ChronoFieldProxy_H


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
#include "java\time\temporal\TemporalAccessorProxyForward.h"
#include "java\util\LocaleProxyForward.h"
#include "java\time\temporal\TemporalProxyForward.h"
#include "java\time\temporal\TemporalUnitProxyForward.h"
#include "java\time\temporal\ValueRangeProxyForward.h"
#include "java\time\temporal\ChronoFieldProxy.h"

namespace java
{
	namespace time
	{
		namespace temporal
		{
			class ChronoFieldProxy
			{
			private:
				static std::string className;
				static jclass objectClass;
				jobject peerObject;

			protected:
				ChronoFieldProxy(void* unused);
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
				ChronoFieldProxy(jobject obj);

				virtual ~ChronoFieldProxy();
				ChronoFieldProxy& operator=(const ChronoFieldProxy& rhs);

				// methods
				/*
				 * boolean isDateBased();
				 */
				jboolean isDateBased();
				/*
				 * boolean isSupportedBy(TemporalAccessor);
				 */
				jboolean isSupportedBy(::java::time::temporal::TemporalAccessorProxy p0);
				/*
				 * boolean isTimeBased();
				 */
				jboolean isTimeBased();
				/*
				 * int checkValidIntValue(long);
				 */
				jint checkValidIntValue(jlong p0);
				/*
				 * String getDisplayName(Locale);
				 */
				::net::sourceforge::jnipp::JStringHelper getDisplayName(::java::util::LocaleProxy p0);
				/*
				 * String toString();
				 */
				::net::sourceforge::jnipp::JStringHelper toString();
				/*
				 * Temporal adjustInto(Temporal, long);
				 */
				::java::time::temporal::TemporalProxy adjustInto(::java::time::temporal::TemporalProxy p0, jlong p1);
				/*
				 * TemporalUnit getBaseUnit();
				 */
				::java::time::temporal::TemporalUnitProxy getBaseUnit();
				/*
				 * TemporalUnit getRangeUnit();
				 */
				::java::time::temporal::TemporalUnitProxy getRangeUnit();
				/*
				 * ValueRange range();
				 */
				::java::time::temporal::ValueRangeProxy range();
				/*
				 * ValueRange rangeRefinedBy(TemporalAccessor);
				 */
				::java::time::temporal::ValueRangeProxy rangeRefinedBy(::java::time::temporal::TemporalAccessorProxy p0);
				/*
				 * long checkValidValue(long);
				 */
				jlong checkValidValue(jlong p0);
				/*
				 * long getFrom(TemporalAccessor);
				 */
				jlong getFrom(::java::time::temporal::TemporalAccessorProxy p0);
				/*
				 * static ChronoField valueOf(String);
				 */
				static ::java::time::temporal::ChronoFieldProxy valueOf(::net::sourceforge::jnipp::JStringHelper p0);
				/*
				 * static ChronoField[] values();
				 */
				static ::net::sourceforge::jnipp::PA<::java::time::temporal::ChronoFieldProxy>::ProxyArray<1> values();

			};
		}
	}
}


#endif
