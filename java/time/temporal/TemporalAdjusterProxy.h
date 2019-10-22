#ifndef __java_time_temporal_TemporalAdjusterProxy_H
#define __java_time_temporal_TemporalAdjusterProxy_H


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

namespace java
{
	namespace time
	{
		namespace temporal
		{
			class TemporalAdjusterProxy
			{
			private:
				static std::string className;
				static jclass objectClass;
				jobject peerObject;

			protected:
				TemporalAdjusterProxy(void* unused);
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
				TemporalAdjusterProxy(jobject obj);

				virtual ~TemporalAdjusterProxy();
				TemporalAdjusterProxy& operator=(const TemporalAdjusterProxy& rhs);

				// methods
				/*
				 * Temporal adjustInto(Temporal);
				 */
				::java::time::temporal::TemporalProxy adjustInto(::java::time::temporal::TemporalProxy p0);

			};
		}
	}
}


#endif
