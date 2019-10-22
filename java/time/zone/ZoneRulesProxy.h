#ifndef __java_time_zone_ZoneRulesProxy_H
#define __java_time_zone_ZoneRulesProxy_H


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
#include "java\time\InstantProxyForward.h"
#include "java\time\LocalDateTimeProxyForward.h"
#include "java\time\ZoneOffsetProxyForward.h"
#include "java\time\DurationProxyForward.h"
#include "java\time\zone\ZoneOffsetTransitionProxyForward.h"
#include "java\util\ListProxyForward.h"
#include "java\util\concurrent\ConcurrentMapProxyForward.h"
#include "java\time\LocalDateTimeProxy.h"
#include "java\time\ZoneOffsetProxy.h"
#include "java\time\zone\ZoneOffsetTransitionRuleProxy.h"

namespace java
{
	namespace time
	{
		namespace zone
		{
			class ZoneRulesProxy
			{
			private:
				static std::string className;
				static jclass objectClass;
				jobject peerObject;

			protected:
				ZoneRulesProxy(void* unused);
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
				ZoneRulesProxy(jobject obj);

				virtual ~ZoneRulesProxy();
				ZoneRulesProxy& operator=(const ZoneRulesProxy& rhs);

				// methods
				/*
				 * boolean equals(Object);
				 */
				jboolean equals(::java::lang::ObjectProxy p0);
				/*
				 * boolean isDaylightSavings(Instant);
				 */
				jboolean isDaylightSavings(::java::time::InstantProxy p0);
				/*
				 * boolean isFixedOffset();
				 */
				jboolean isFixedOffset();
				/*
				 * boolean isValidOffset(LocalDateTime, ZoneOffset);
				 */
				jboolean isValidOffset(::java::time::LocalDateTimeProxy p0, ::java::time::ZoneOffsetProxy p1);
				/*
				 * int hashCode();
				 */
				jint hashCode();
				/*
				 * String toString();
				 */
				::net::sourceforge::jnipp::JStringHelper toString();
				/*
				 * Duration getDaylightSavings(Instant);
				 */
				::java::time::DurationProxy getDaylightSavings(::java::time::InstantProxy p0);
				/*
				 * ZoneOffset getOffset(Instant);
				 */
				::java::time::ZoneOffsetProxy getOffset(::java::time::InstantProxy p0);
				/*
				 * ZoneOffset getOffset(LocalDateTime);
				 */
				::java::time::ZoneOffsetProxy getOffset(::java::time::LocalDateTimeProxy p0);
				/*
				 * ZoneOffset getStandardOffset(Instant);
				 */
				::java::time::ZoneOffsetProxy getStandardOffset(::java::time::InstantProxy p0);
				/*
				 * ZoneOffsetTransition getTransition(LocalDateTime);
				 */
				::java::time::zone::ZoneOffsetTransitionProxy getTransition(::java::time::LocalDateTimeProxy p0);
				/*
				 * ZoneOffsetTransition nextTransition(Instant);
				 */
				::java::time::zone::ZoneOffsetTransitionProxy nextTransition(::java::time::InstantProxy p0);
				/*
				 * ZoneOffsetTransition previousTransition(Instant);
				 */
				::java::time::zone::ZoneOffsetTransitionProxy previousTransition(::java::time::InstantProxy p0);
				/*
				 * List getTransitionRules();
				 */
				::java::util::ListProxy getTransitionRules();
				/*
				 * List getTransitions();
				 */
				::java::util::ListProxy getTransitions();
				/*
				 * List getValidOffsets(LocalDateTime);
				 */
				::java::util::ListProxy getValidOffsets(::java::time::LocalDateTimeProxy p0);
				/*
				 * static ZoneRules of(ZoneOffset);
				 */
				static ::java::time::zone::ZoneRulesProxy of(::java::time::ZoneOffsetProxy p0);
				/*
				 * static ZoneRules of(ZoneOffset, ZoneOffset, List, List, List);
				 */
				static ::java::time::zone::ZoneRulesProxy of(::java::time::ZoneOffsetProxy p0, ::java::time::ZoneOffsetProxy p1, ::java::util::ListProxy p2, ::java::util::ListProxy p3, ::java::util::ListProxy p4);

			};
		}
	}
}


#endif
