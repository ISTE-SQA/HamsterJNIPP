#ifndef __java_time_ZoneOffsetProxy_H
#define __java_time_ZoneOffsetProxy_H


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
#include "java\time\temporal\TemporalQueryProxyForward.h"
#include "java\time\temporal\TemporalProxyForward.h"
#include "java\time\temporal\ValueRangeProxyForward.h"
#include "java\time\zone\ZoneRulesProxyForward.h"
#include "java\time\temporal\TemporalAccessorProxyForward.h"
#include "java\util\concurrent\ConcurrentMapProxyForward.h"

namespace java
{
	namespace time
	{
		class ZoneOffsetProxy
		{
		private:
			static std::string className;
			static jclass objectClass;
			jobject peerObject;

		protected:
			ZoneOffsetProxy(void* unused);
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
			ZoneOffsetProxy(jobject obj);

			virtual ~ZoneOffsetProxy();
			ZoneOffsetProxy& operator=(const ZoneOffsetProxy& rhs);

			// methods
			/*
			 * boolean equals(Object);
			 */
			jboolean equals(::java::lang::ObjectProxy p0);
			/*
			 * boolean isSupported(TemporalField);
			 */
			jboolean isSupported(::java::time::temporal::TemporalFieldProxy p0);
			/*
			 * int compareTo(ZoneOffset);
			 */
			jint compareTo(::java::time::ZoneOffsetProxy p0);
			/*
			 * int get(TemporalField);
			 */
			jint get(::java::time::temporal::TemporalFieldProxy p0);
			/*
			 * int getTotalSeconds();
			 */
			jint getTotalSeconds();
			/*
			 * int hashCode();
			 */
			jint hashCode();
			/*
			 * Object query(TemporalQuery);
			 */
			::java::lang::ObjectProxy query(::java::time::temporal::TemporalQueryProxy p0);
			/*
			 * String getId();
			 */
			::net::sourceforge::jnipp::JStringHelper getId();
			/*
			 * String toString();
			 */
			::net::sourceforge::jnipp::JStringHelper toString();
			/*
			 * Temporal adjustInto(Temporal);
			 */
			::java::time::temporal::TemporalProxy adjustInto(::java::time::temporal::TemporalProxy p0);
			/*
			 * ValueRange range(TemporalField);
			 */
			::java::time::temporal::ValueRangeProxy range(::java::time::temporal::TemporalFieldProxy p0);
			/*
			 * ZoneRules getRules();
			 */
			::java::time::zone::ZoneRulesProxy getRules();
			/*
			 * long getLong(TemporalField);
			 */
			jlong getLong(::java::time::temporal::TemporalFieldProxy p0);
			/*
			 * static ZoneOffset from(TemporalAccessor);
			 */
			static ::java::time::ZoneOffsetProxy from(::java::time::temporal::TemporalAccessorProxy p0);
			/*
			 * static ZoneOffset of(String);
			 */
			static ::java::time::ZoneOffsetProxy of(::net::sourceforge::jnipp::JStringHelper p0);
			/*
			 * static ZoneOffset ofHours(int);
			 */
			static ::java::time::ZoneOffsetProxy ofHours(jint p0);
			/*
			 * static ZoneOffset ofHoursMinutes(int, int);
			 */
			static ::java::time::ZoneOffsetProxy ofHoursMinutes(jint p0, jint p1);
			/*
			 * static ZoneOffset ofHoursMinutesSeconds(int, int, int);
			 */
			static ::java::time::ZoneOffsetProxy ofHoursMinutesSeconds(jint p0, jint p1, jint p2);
			/*
			 * static ZoneOffset ofTotalSeconds(int);
			 */
			static ::java::time::ZoneOffsetProxy ofTotalSeconds(jint p0);

		};
	}
}


#endif
