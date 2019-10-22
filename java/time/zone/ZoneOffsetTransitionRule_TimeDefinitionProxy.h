#ifndef __java_time_zone_ZoneOffsetTransitionRule_TimeDefinitionProxy_H
#define __java_time_zone_ZoneOffsetTransitionRule_TimeDefinitionProxy_H


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
#include "java\time\LocalDateTimeProxyForward.h"
#include "java\time\ZoneOffsetProxyForward.h"
#include "java\time\zone\ZoneOffsetTransitionRule_TimeDefinitionProxy.h"

namespace java
{
	namespace time
	{
		namespace zone
		{
			class ZoneOffsetTransitionRule_TimeDefinitionProxy
			{
			private:
				static std::string className;
				static jclass objectClass;
				jobject peerObject;

			protected:
				ZoneOffsetTransitionRule_TimeDefinitionProxy(void* unused);
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
				ZoneOffsetTransitionRule_TimeDefinitionProxy(jobject obj);

				virtual ~ZoneOffsetTransitionRule_TimeDefinitionProxy();
				ZoneOffsetTransitionRule_TimeDefinitionProxy& operator=(const ZoneOffsetTransitionRule_TimeDefinitionProxy& rhs);

				// methods
				/*
				 * LocalDateTime createDateTime(LocalDateTime, ZoneOffset, ZoneOffset);
				 */
				::java::time::LocalDateTimeProxy createDateTime(::java::time::LocalDateTimeProxy p0, ::java::time::ZoneOffsetProxy p1, ::java::time::ZoneOffsetProxy p2);
				/*
				 * static ZoneOffsetTransitionRule$TimeDefinition valueOf(String);
				 */
				static ::java::time::zone::ZoneOffsetTransitionRule_TimeDefinitionProxy valueOf(::net::sourceforge::jnipp::JStringHelper p0);
				/*
				 * static ZoneOffsetTransitionRule$TimeDefinition[] values();
				 */
				static ::net::sourceforge::jnipp::PA<::java::time::zone::ZoneOffsetTransitionRule_TimeDefinitionProxy>::ProxyArray<1> values();

			};
		}
	}
}


#endif
