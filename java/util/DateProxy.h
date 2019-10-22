#ifndef __java_util_DateProxy_H
#define __java_util_DateProxy_H


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
#include "sun\util\calendar\BaseCalendarProxyForward.h"
#include "sun\util\calendar\BaseCalendar_DateProxyForward.h"

namespace java
{
	namespace util
	{
		class DateProxy
		{
		private:
			static std::string className;
			static jclass objectClass;
			jobject peerObject;

		protected:
			DateProxy(void* unused);
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
			DateProxy(jobject obj);
			DateProxy();
			DateProxy(jint p0, jint p1, jint p2);
			DateProxy(jint p0, jint p1, jint p2, jint p3, jint p4);
			DateProxy(jint p0, jint p1, jint p2, jint p3, jint p4, jint p5);
			DateProxy(::net::sourceforge::jnipp::JStringHelper p0);
			DateProxy(jlong p0);

			virtual ~DateProxy();
			DateProxy& operator=(const DateProxy& rhs);

			// methods
			/*
			 * boolean after(Date);
			 */
			jboolean after(::java::util::DateProxy p0);
			/*
			 * boolean before(Date);
			 */
			jboolean before(::java::util::DateProxy p0);
			/*
			 * boolean equals(Object);
			 */
			jboolean equals(::java::lang::ObjectProxy p0);
			/*
			 * int compareTo(Date);
			 */
			jint compareTo(::java::util::DateProxy p0);
			/*
			 * int getDate();
			 */
			jint getDate();
			/*
			 * int getDay();
			 */
			jint getDay();
			/*
			 * int getHours();
			 */
			jint getHours();
			/*
			 * int getMinutes();
			 */
			jint getMinutes();
			/*
			 * int getMonth();
			 */
			jint getMonth();
			/*
			 * int getSeconds();
			 */
			jint getSeconds();
			/*
			 * int getTimezoneOffset();
			 */
			jint getTimezoneOffset();
			/*
			 * int getYear();
			 */
			jint getYear();
			/*
			 * int hashCode();
			 */
			jint hashCode();
			/*
			 * Object clone();
			 */
			::java::lang::ObjectProxy clone();
			/*
			 * String toGMTString();
			 */
			::net::sourceforge::jnipp::JStringHelper toGMTString();
			/*
			 * String toLocaleString();
			 */
			::net::sourceforge::jnipp::JStringHelper toLocaleString();
			/*
			 * String toString();
			 */
			::net::sourceforge::jnipp::JStringHelper toString();
			/*
			 * Instant toInstant();
			 */
			::java::time::InstantProxy toInstant();
			/*
			 * long getTime();
			 */
			jlong getTime();
			/*
			 * static Date from(Instant);
			 */
			static ::java::util::DateProxy from(::java::time::InstantProxy p0);
			/*
			 * static long UTC(int, int, int, int, int, int);
			 */
			static jlong UTC(jint p0, jint p1, jint p2, jint p3, jint p4, jint p5);
			/*
			 * static long parse(String);
			 */
			static jlong parse(::net::sourceforge::jnipp::JStringHelper p0);
			/*
			 * void setDate(int);
			 */
			void setDate(jint p0);
			/*
			 * void setHours(int);
			 */
			void setHours(jint p0);
			/*
			 * void setMinutes(int);
			 */
			void setMinutes(jint p0);
			/*
			 * void setMonth(int);
			 */
			void setMonth(jint p0);
			/*
			 * void setSeconds(int);
			 */
			void setSeconds(jint p0);
			/*
			 * void setTime(long);
			 */
			void setTime(jlong p0);
			/*
			 * void setYear(int);
			 */
			void setYear(jint p0);

		};
	}
}


#endif
