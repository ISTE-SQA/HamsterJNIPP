#ifndef __java_time_zone_ZoneOffsetTransitionProxy_H
#define __java_time_zone_ZoneOffsetTransitionProxy_H


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
#include "java\time\ZoneOffsetProxyForward.h"
#include "java\time\DurationProxyForward.h"
#include "java\time\InstantProxyForward.h"
#include "java\time\LocalDateTimeProxyForward.h"

namespace java
{
	namespace time
	{
		namespace zone
		{
			class ZoneOffsetTransitionProxy
			{
			private:
				static std::string className;
				static jclass objectClass;
				jobject peerObject;

			protected:
				ZoneOffsetTransitionProxy(void* unused);
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
				ZoneOffsetTransitionProxy(jobject obj);

				virtual ~ZoneOffsetTransitionProxy();
				ZoneOffsetTransitionProxy& operator=(const ZoneOffsetTransitionProxy& rhs);

				// methods
				/*
				 * boolean equals(Object);
				 */
				jboolean equals(::java::lang::ObjectProxy p0);
				/*
				 * boolean isGap();
				 */
				jboolean isGap();
				/*
				 * boolean isOverlap();
				 */
				jboolean isOverlap();
				/*
				 * boolean isValidOffset(ZoneOffset);
				 */
				jboolean isValidOffset(::java::time::ZoneOffsetProxy p0);
				/*
				 * int compareTo(ZoneOffsetTransition);
				 */
				jint compareTo(::java::time::zone::ZoneOffsetTransitionProxy p0);
				/*
				 * int hashCode();
				 */
				jint hashCode();
				/*
				 * String toString();
				 */
				::net::sourceforge::jnipp::JStringHelper toString();
				/*
				 * Duration getDuration();
				 */
				::java::time::DurationProxy getDuration();
				/*
				 * Instant getInstant();
				 */
				::java::time::InstantProxy getInstant();
				/*
				 * LocalDateTime getDateTimeAfter();
				 */
				::java::time::LocalDateTimeProxy getDateTimeAfter();
				/*
				 * LocalDateTime getDateTimeBefore();
				 */
				::java::time::LocalDateTimeProxy getDateTimeBefore();
				/*
				 * ZoneOffset getOffsetAfter();
				 */
				::java::time::ZoneOffsetProxy getOffsetAfter();
				/*
				 * ZoneOffset getOffsetBefore();
				 */
				::java::time::ZoneOffsetProxy getOffsetBefore();
				/*
				 * long toEpochSecond();
				 */
				jlong toEpochSecond();
				/*
				 * static ZoneOffsetTransition of(LocalDateTime, ZoneOffset, ZoneOffset);
				 */
				static ::java::time::zone::ZoneOffsetTransitionProxy of(::java::time::LocalDateTimeProxy p0, ::java::time::ZoneOffsetProxy p1, ::java::time::ZoneOffsetProxy p2);

			};
		}
	}
}


#endif
