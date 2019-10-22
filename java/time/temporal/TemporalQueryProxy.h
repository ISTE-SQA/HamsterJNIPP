#ifndef __java_time_temporal_TemporalQueryProxy_H
#define __java_time_temporal_TemporalQueryProxy_H


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
#include "java\lang\ObjectProxyForward.h"

namespace java
{
	namespace time
	{
		namespace temporal
		{
			class TemporalQueryProxy
			{
			private:
				static std::string className;
				static jclass objectClass;
				jobject peerObject;

			protected:
				TemporalQueryProxy(void* unused);
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
				TemporalQueryProxy(jobject obj);

				virtual ~TemporalQueryProxy();
				TemporalQueryProxy& operator=(const TemporalQueryProxy& rhs);

				// methods
				/*
				 * Object queryFrom(TemporalAccessor);
				 */
				::java::lang::ObjectProxy queryFrom(::java::time::temporal::TemporalAccessorProxy p0);

			};
		}
	}
}


#endif
