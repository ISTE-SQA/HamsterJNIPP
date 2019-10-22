#ifndef __java_time_temporal_TemporalAccessorProxy_H
#define __java_time_temporal_TemporalAccessorProxy_H


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
#include "java\time\temporal\TemporalFieldProxyForward.h"
#include "java\time\temporal\TemporalQueryProxyForward.h"
#include "java\lang\ObjectProxyForward.h"
#include "java\time\temporal\ValueRangeProxyForward.h"

namespace java
{
	namespace time
	{
		namespace temporal
		{
			class TemporalAccessorProxy
			{
			private:
				static std::string className;
				static jclass objectClass;
				jobject peerObject;

			protected:
				TemporalAccessorProxy(void* unused);
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
				TemporalAccessorProxy(jobject obj);

				virtual ~TemporalAccessorProxy();
				TemporalAccessorProxy& operator=(const TemporalAccessorProxy& rhs);

				// methods
				/*
				 * boolean isSupported(TemporalField);
				 */
				jboolean isSupported(::java::time::temporal::TemporalFieldProxy p0);
				/*
				 * long getLong(TemporalField);
				 */
				jlong getLong(::java::time::temporal::TemporalFieldProxy p0);
				/*
				 * int get(TemporalField);
				 */
				jint get(::java::time::temporal::TemporalFieldProxy p0);
				/*
				 * Object query(TemporalQuery);
				 */
				::java::lang::ObjectProxy query(::java::time::temporal::TemporalQueryProxy p0);
				/*
				 * ValueRange range(TemporalField);
				 */
				::java::time::temporal::ValueRangeProxy range(::java::time::temporal::TemporalFieldProxy p0);

			};
		}
	}
}


#endif
