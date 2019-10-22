#ifndef __java_util_concurrent_TimeUnitProxy_H
#define __java_util_concurrent_TimeUnitProxy_H


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
#include "java\lang\ThreadProxyForward.h"
#include "java\lang\ObjectProxyForward.h"
#include "java\util\concurrent\TimeUnitProxy.h"

namespace java
{
	namespace util
	{
		namespace concurrent
		{
			class TimeUnitProxy
			{
			private:
				static std::string className;
				static jclass objectClass;
				jobject peerObject;

			protected:
				TimeUnitProxy(void* unused);
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
				TimeUnitProxy(jobject obj);

				virtual ~TimeUnitProxy();
				TimeUnitProxy& operator=(const TimeUnitProxy& rhs);

				// methods
				/*
				 * long convert(long, TimeUnit);
				 */
				jlong convert(jlong p0, ::java::util::concurrent::TimeUnitProxy p1);
				/*
				 * long toDays(long);
				 */
				jlong toDays(jlong p0);
				/*
				 * long toHours(long);
				 */
				jlong toHours(jlong p0);
				/*
				 * long toMicros(long);
				 */
				jlong toMicros(jlong p0);
				/*
				 * long toMillis(long);
				 */
				jlong toMillis(jlong p0);
				/*
				 * long toMinutes(long);
				 */
				jlong toMinutes(jlong p0);
				/*
				 * long toNanos(long);
				 */
				jlong toNanos(jlong p0);
				/*
				 * long toSeconds(long);
				 */
				jlong toSeconds(jlong p0);
				/*
				 * static TimeUnit valueOf(String);
				 */
				static ::java::util::concurrent::TimeUnitProxy valueOf(::net::sourceforge::jnipp::JStringHelper p0);
				/*
				 * static TimeUnit[] values();
				 */
				static ::net::sourceforge::jnipp::PA<::java::util::concurrent::TimeUnitProxy>::ProxyArray<1> values();
				/*
				 * void sleep(long);
				 */
				void sleep(jlong p0);
				/*
				 * void timedJoin(Thread, long);
				 */
				void timedJoin(::java::lang::ThreadProxy p0, jlong p1);
				/*
				 * void timedWait(Object, long);
				 */
				void timedWait(::java::lang::ObjectProxy p0, jlong p1);

			};
		}
	}
}


#endif
