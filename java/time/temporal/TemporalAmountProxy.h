#ifndef __java_time_temporal_TemporalAmountProxy_H
#define __java_time_temporal_TemporalAmountProxy_H


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
#include "java\time\temporal\TemporalProxyForward.h"
#include "java\util\ListProxyForward.h"
#include "java\time\temporal\TemporalUnitProxyForward.h"

namespace java
{
	namespace time
	{
		namespace temporal
		{
			class TemporalAmountProxy
			{
			private:
				static std::string className;
				static jclass objectClass;
				jobject peerObject;

			protected:
				TemporalAmountProxy(void* unused);
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
				TemporalAmountProxy(jobject obj);

				virtual ~TemporalAmountProxy();
				TemporalAmountProxy& operator=(const TemporalAmountProxy& rhs);

				// methods
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

			};
		}
	}
}


#endif
