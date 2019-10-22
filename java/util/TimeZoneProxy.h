#ifndef __java_util_TimeZoneProxy_H
#define __java_util_TimeZoneProxy_H


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
#include "java\util\DateProxyForward.h"
#include "java\util\LocaleProxyForward.h"
#include "java\lang\ObjectProxyForward.h"
#include "java\time\ZoneIdProxyForward.h"

namespace java
{
	namespace util
	{
		class TimeZoneProxy
		{
		private:
			static std::string className;
			static jclass objectClass;
			jobject peerObject;

		protected:
			TimeZoneProxy(void* unused);
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
			TimeZoneProxy(jobject obj);
			TimeZoneProxy();

			virtual ~TimeZoneProxy();
			TimeZoneProxy& operator=(const TimeZoneProxy& rhs);

			// methods
			/*
			 * boolean inDaylightTime(Date);
			 */
			jboolean inDaylightTime(::java::util::DateProxy p0);
			/*
			 * boolean useDaylightTime();
			 */
			jboolean useDaylightTime();
			/*
			 * int getOffset(int, int, int, int, int, int);
			 */
			jint getOffset(jint p0, jint p1, jint p2, jint p3, jint p4, jint p5);
			/*
			 * int getRawOffset();
			 */
			jint getRawOffset();
			/*
			 * void setRawOffset(int);
			 */
			void setRawOffset(jint p0);
			/*
			 * boolean hasSameRules(TimeZone);
			 */
			jboolean hasSameRules(::java::util::TimeZoneProxy p0);
			/*
			 * boolean observesDaylightTime();
			 */
			jboolean observesDaylightTime();
			/*
			 * String getDisplayName();
			 */
			::net::sourceforge::jnipp::JStringHelper getDisplayName();
			/*
			 * String getDisplayName(boolean, int);
			 */
			::net::sourceforge::jnipp::JStringHelper getDisplayName(jboolean p0, jint p1);
			/*
			 * String getDisplayName(Locale);
			 */
			::net::sourceforge::jnipp::JStringHelper getDisplayName(::java::util::LocaleProxy p0);
			/*
			 * int getDSTSavings();
			 */
			jint getDSTSavings();
			/*
			 * int getOffset(long);
			 */
			jint getOffset(jlong p0);
			/*
			 * Object clone();
			 */
			::java::lang::ObjectProxy clone();
			/*
			 * String getDisplayName(boolean, int, Locale);
			 */
			::net::sourceforge::jnipp::JStringHelper getDisplayName(jboolean p0, jint p1, ::java::util::LocaleProxy p2);
			/*
			 * String getID();
			 */
			::net::sourceforge::jnipp::JStringHelper getID();
			/*
			 * ZoneId toZoneId();
			 */
			::java::time::ZoneIdProxy toZoneId();
			/*
			 * static TimeZone getDefault();
			 */
			static ::java::util::TimeZoneProxy getDefault();
			/*
			 * static TimeZone getTimeZone(ZoneId);
			 */
			static ::java::util::TimeZoneProxy getTimeZone(::java::time::ZoneIdProxy p0);
			/*
			 * static String[] getAvailableIDs();
			 */
			static ::net::sourceforge::jnipp::JStringHelperArray<1> getAvailableIDs();
			/*
			 * static String[] getAvailableIDs(int);
			 */
			static ::net::sourceforge::jnipp::JStringHelperArray<1> getAvailableIDs(jint p0);
			/*
			 * static TimeZone getTimeZone(String);
			 */
			static ::java::util::TimeZoneProxy getTimeZone(::net::sourceforge::jnipp::JStringHelper p0);
			/*
			 * static void setDefault(TimeZone);
			 */
			static void setDefault(::java::util::TimeZoneProxy p0);
			/*
			 * void setID(String);
			 */
			void setID(::net::sourceforge::jnipp::JStringHelper p0);

		};
	}
}


#endif
