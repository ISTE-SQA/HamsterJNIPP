#ifndef __java_time_ZoneIdProxy_H
#define __java_time_ZoneIdProxy_H


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
#include "java\time\zone\ZoneRulesProxyForward.h"
#include "java\lang\ObjectProxyForward.h"
#include "java\time\format\TextStyleProxyForward.h"
#include "java\util\LocaleProxyForward.h"
#include "java\time\temporal\TemporalAccessorProxyForward.h"
#include "java\util\MapProxyForward.h"
#include "java\time\ZoneOffsetProxyForward.h"
#include "java\util\SetProxyForward.h"

namespace java
{
	namespace time
	{
		class ZoneIdProxy
		{
		private:
			static std::string className;
			static jclass objectClass;
			jobject peerObject;

		protected:
			ZoneIdProxy(void* unused);
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
			ZoneIdProxy(jobject obj);

			virtual ~ZoneIdProxy();
			ZoneIdProxy& operator=(const ZoneIdProxy& rhs);

			// methods
			/*
			 * String getId();
			 */
			::net::sourceforge::jnipp::JStringHelper getId();
			/*
			 * ZoneRules getRules();
			 */
			::java::time::zone::ZoneRulesProxy getRules();
			/*
			 * boolean equals(Object);
			 */
			jboolean equals(::java::lang::ObjectProxy p0);
			/*
			 * int hashCode();
			 */
			jint hashCode();
			/*
			 * String getDisplayName(TextStyle, Locale);
			 */
			::net::sourceforge::jnipp::JStringHelper getDisplayName(::java::time::format::TextStyleProxy p0, ::java::util::LocaleProxy p1);
			/*
			 * String toString();
			 */
			::net::sourceforge::jnipp::JStringHelper toString();
			/*
			 * ZoneId normalized();
			 */
			::java::time::ZoneIdProxy normalized();
			/*
			 * static ZoneId from(TemporalAccessor);
			 */
			static ::java::time::ZoneIdProxy from(::java::time::temporal::TemporalAccessorProxy p0);
			/*
			 * static ZoneId of(String);
			 */
			static ::java::time::ZoneIdProxy of(::net::sourceforge::jnipp::JStringHelper p0);
			/*
			 * static ZoneId of(String, Map);
			 */
			static ::java::time::ZoneIdProxy of(::net::sourceforge::jnipp::JStringHelper p0, ::java::util::MapProxy p1);
			/*
			 * static ZoneId ofOffset(String, ZoneOffset);
			 */
			static ::java::time::ZoneIdProxy ofOffset(::net::sourceforge::jnipp::JStringHelper p0, ::java::time::ZoneOffsetProxy p1);
			/*
			 * static ZoneId systemDefault();
			 */
			static ::java::time::ZoneIdProxy systemDefault();
			/*
			 * static Set getAvailableZoneIds();
			 */
			static ::java::util::SetProxy getAvailableZoneIds();

		};
	}
}


#endif
