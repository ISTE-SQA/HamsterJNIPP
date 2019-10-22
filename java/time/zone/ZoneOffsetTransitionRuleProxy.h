#ifndef __java_time_zone_ZoneOffsetTransitionRuleProxy_H
#define __java_time_zone_ZoneOffsetTransitionRuleProxy_H


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
#include "java\time\DayOfWeekProxyForward.h"
#include "java\time\LocalTimeProxyForward.h"
#include "java\time\MonthProxyForward.h"
#include "java\time\ZoneOffsetProxyForward.h"
#include "java\time\zone\ZoneOffsetTransitionProxyForward.h"
#include "java\time\zone\ZoneOffsetTransitionRule_TimeDefinitionProxyForward.h"

namespace java
{
	namespace time
	{
		namespace zone
		{
			class ZoneOffsetTransitionRuleProxy
			{
			private:
				static std::string className;
				static jclass objectClass;
				jobject peerObject;

			protected:
				ZoneOffsetTransitionRuleProxy(void* unused);
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
				ZoneOffsetTransitionRuleProxy(jobject obj);

				virtual ~ZoneOffsetTransitionRuleProxy();
				ZoneOffsetTransitionRuleProxy& operator=(const ZoneOffsetTransitionRuleProxy& rhs);

				// methods
				/*
				 * boolean equals(Object);
				 */
				jboolean equals(::java::lang::ObjectProxy p0);
				/*
				 * boolean isMidnightEndOfDay();
				 */
				jboolean isMidnightEndOfDay();
				/*
				 * int getDayOfMonthIndicator();
				 */
				jint getDayOfMonthIndicator();
				/*
				 * int hashCode();
				 */
				jint hashCode();
				/*
				 * String toString();
				 */
				::net::sourceforge::jnipp::JStringHelper toString();
				/*
				 * DayOfWeek getDayOfWeek();
				 */
				::java::time::DayOfWeekProxy getDayOfWeek();
				/*
				 * LocalTime getLocalTime();
				 */
				::java::time::LocalTimeProxy getLocalTime();
				/*
				 * Month getMonth();
				 */
				::java::time::MonthProxy getMonth();
				/*
				 * ZoneOffset getOffsetAfter();
				 */
				::java::time::ZoneOffsetProxy getOffsetAfter();
				/*
				 * ZoneOffset getOffsetBefore();
				 */
				::java::time::ZoneOffsetProxy getOffsetBefore();
				/*
				 * ZoneOffset getStandardOffset();
				 */
				::java::time::ZoneOffsetProxy getStandardOffset();
				/*
				 * ZoneOffsetTransition createTransition(int);
				 */
				::java::time::zone::ZoneOffsetTransitionProxy createTransition(jint p0);
				/*
				 * ZoneOffsetTransitionRule$TimeDefinition getTimeDefinition();
				 */
				::java::time::zone::ZoneOffsetTransitionRule_TimeDefinitionProxy getTimeDefinition();
				/*
				 * static ZoneOffsetTransitionRule of(Month, int, DayOfWeek, LocalTime, boolean, ZoneOffsetTransitionRule$TimeDefinition, ZoneOffset, ZoneOffset, ZoneOffset);
				 */
				static ::java::time::zone::ZoneOffsetTransitionRuleProxy of(::java::time::MonthProxy p0, jint p1, ::java::time::DayOfWeekProxy p2, ::java::time::LocalTimeProxy p3, jboolean p4, ::java::time::zone::ZoneOffsetTransitionRule_TimeDefinitionProxy p5, ::java::time::ZoneOffsetProxy p6, ::java::time::ZoneOffsetProxy p7, ::java::time::ZoneOffsetProxy p8);

			};
		}
	}
}


#endif
