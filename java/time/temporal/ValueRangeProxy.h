#ifndef __java_time_temporal_ValueRangeProxy_H
#define __java_time_temporal_ValueRangeProxy_H


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

namespace java
{
	namespace time
	{
		namespace temporal
		{
			class ValueRangeProxy
			{
			private:
				static std::string className;
				static jclass objectClass;
				jobject peerObject;

			protected:
				ValueRangeProxy(void* unused);
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
				ValueRangeProxy(jobject obj);

				virtual ~ValueRangeProxy();
				ValueRangeProxy& operator=(const ValueRangeProxy& rhs);

				// methods
				/*
				 * boolean equals(Object);
				 */
				jboolean equals(::java::lang::ObjectProxy p0);
				/*
				 * boolean isFixed();
				 */
				jboolean isFixed();
				/*
				 * boolean isIntValue();
				 */
				jboolean isIntValue();
				/*
				 * boolean isValidIntValue(long);
				 */
				jboolean isValidIntValue(jlong p0);
				/*
				 * boolean isValidValue(long);
				 */
				jboolean isValidValue(jlong p0);
				/*
				 * int checkValidIntValue(long, TemporalField);
				 */
				jint checkValidIntValue(jlong p0, ::java::time::temporal::TemporalFieldProxy p1);
				/*
				 * int hashCode();
				 */
				jint hashCode();
				/*
				 * String toString();
				 */
				::net::sourceforge::jnipp::JStringHelper toString();
				/*
				 * long checkValidValue(long, TemporalField);
				 */
				jlong checkValidValue(jlong p0, ::java::time::temporal::TemporalFieldProxy p1);
				/*
				 * long getLargestMinimum();
				 */
				jlong getLargestMinimum();
				/*
				 * long getMaximum();
				 */
				jlong getMaximum();
				/*
				 * long getMinimum();
				 */
				jlong getMinimum();
				/*
				 * long getSmallestMaximum();
				 */
				jlong getSmallestMaximum();
				/*
				 * static ValueRange of(long, long);
				 */
				static ::java::time::temporal::ValueRangeProxy of(jlong p0, jlong p1);
				/*
				 * static ValueRange of(long, long, long);
				 */
				static ::java::time::temporal::ValueRangeProxy of(jlong p0, jlong p1, jlong p2);
				/*
				 * static ValueRange of(long, long, long, long);
				 */
				static ::java::time::temporal::ValueRangeProxy of(jlong p0, jlong p1, jlong p2, jlong p3);

			};
		}
	}
}


#endif
