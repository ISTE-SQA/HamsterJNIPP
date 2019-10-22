#ifndef __java_time_temporal_TemporalUnitProxy_H
#define __java_time_temporal_TemporalUnitProxy_H


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
#include "java\time\DurationProxyForward.h"
#include "java\time\temporal\TemporalProxyForward.h"

namespace java
{
	namespace time
	{
		namespace temporal
		{
			class TemporalUnitProxy
			{
			private:
				static std::string className;
				static jclass objectClass;
				jobject peerObject;

			protected:
				TemporalUnitProxy(void* unused);
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
				TemporalUnitProxy(jobject obj);

				virtual ~TemporalUnitProxy();
				TemporalUnitProxy& operator=(const TemporalUnitProxy& rhs);

				// methods
				/*
				 * boolean isDateBased();
				 */
				jboolean isDateBased();
				/*
				 * boolean isDurationEstimated();
				 */
				jboolean isDurationEstimated();
				/*
				 * boolean isTimeBased();
				 */
				jboolean isTimeBased();
				/*
				 * String toString();
				 */
				::net::sourceforge::jnipp::JStringHelper toString();
				/*
				 * Duration getDuration();
				 */
				::java::time::DurationProxy getDuration();
				/*
				 * Temporal addTo(Temporal, long);
				 */
				::java::time::temporal::TemporalProxy addTo(::java::time::temporal::TemporalProxy p0, jlong p1);
				/*
				 * long between(Temporal, Temporal);
				 */
				jlong between(::java::time::temporal::TemporalProxy p0, ::java::time::temporal::TemporalProxy p1);
				/*
				 * boolean isSupportedBy(Temporal);
				 */
				jboolean isSupportedBy(::java::time::temporal::TemporalProxy p0);

			};
		}
	}
}


#endif
