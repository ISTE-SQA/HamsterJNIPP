#ifndef __java_time_temporal_TemporalProxy_H
#define __java_time_temporal_TemporalProxy_H


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
#include "java\time\temporal\TemporalUnitProxyForward.h"
#include "java\time\temporal\TemporalFieldProxyForward.h"
#include "java\time\temporal\TemporalAmountProxyForward.h"
#include "java\time\temporal\TemporalAdjusterProxyForward.h"

namespace java
{
	namespace time
	{
		namespace temporal
		{
			class TemporalProxy
			{
			private:
				static std::string className;
				static jclass objectClass;
				jobject peerObject;

			protected:
				TemporalProxy(void* unused);
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
				TemporalProxy(jobject obj);

				virtual ~TemporalProxy();
				TemporalProxy& operator=(const TemporalProxy& rhs);

				// methods
				/*
				 * boolean isSupported(TemporalUnit);
				 */
				jboolean isSupported(::java::time::temporal::TemporalUnitProxy p0);
				/*
				 * Temporal plus(long, TemporalUnit);
				 */
				::java::time::temporal::TemporalProxy plus(jlong p0, ::java::time::temporal::TemporalUnitProxy p1);
				/*
				 * Temporal with(TemporalField, long);
				 */
				::java::time::temporal::TemporalProxy with(::java::time::temporal::TemporalFieldProxy p0, jlong p1);
				/*
				 * long until(Temporal, TemporalUnit);
				 */
				jlong until(::java::time::temporal::TemporalProxy p0, ::java::time::temporal::TemporalUnitProxy p1);
				/*
				 * Temporal minus(TemporalAmount);
				 */
				::java::time::temporal::TemporalProxy minus(::java::time::temporal::TemporalAmountProxy p0);
				/*
				 * Temporal minus(long, TemporalUnit);
				 */
				::java::time::temporal::TemporalProxy minus(jlong p0, ::java::time::temporal::TemporalUnitProxy p1);
				/*
				 * Temporal plus(TemporalAmount);
				 */
				::java::time::temporal::TemporalProxy plus(::java::time::temporal::TemporalAmountProxy p0);
				/*
				 * Temporal with(TemporalAdjuster);
				 */
				::java::time::temporal::TemporalProxy with(::java::time::temporal::TemporalAdjusterProxy p0);

			};
		}
	}
}


#endif
