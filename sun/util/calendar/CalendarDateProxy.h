#ifndef __sun_util_calendar_CalendarDateProxy_H
#define __sun_util_calendar_CalendarDateProxy_H


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
#include "java\util\TimeZoneProxyForward.h"
#include "sun\util\calendar\EraProxyForward.h"
#include "java\util\LocaleProxyForward.h"

namespace sun
{
	namespace util
	{
		namespace calendar
		{
			class CalendarDateProxy
			{
			private:
				static std::string className;
				static jclass objectClass;
				jobject peerObject;

			protected:
				CalendarDateProxy(void* unused);
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
				CalendarDateProxy(jobject obj);

				virtual ~CalendarDateProxy();
				CalendarDateProxy& operator=(const CalendarDateProxy& rhs);

				// methods
				/*
				 * boolean equals(Object);
				 */
				jboolean equals(::java::lang::ObjectProxy p0);
				/*
				 * boolean isDaylightTime();
				 */
				jboolean isDaylightTime();
				/*
				 * boolean isLeapYear();
				 */
				jboolean isLeapYear();
				/*
				 * boolean isNormalized();
				 */
				jboolean isNormalized();
				/*
				 * boolean isSameDate(CalendarDate);
				 */
				jboolean isSameDate(::sun::util::calendar::CalendarDateProxy p0);
				/*
				 * boolean isStandardTime();
				 */
				jboolean isStandardTime();
				/*
				 * int getDayOfMonth();
				 */
				jint getDayOfMonth();
				/*
				 * int getDayOfWeek();
				 */
				jint getDayOfWeek();
				/*
				 * int getDaylightSaving();
				 */
				jint getDaylightSaving();
				/*
				 * int getHours();
				 */
				jint getHours();
				/*
				 * int getMillis();
				 */
				jint getMillis();
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
				 * int getYear();
				 */
				jint getYear();
				/*
				 * int getZoneOffset();
				 */
				jint getZoneOffset();
				/*
				 * int hashCode();
				 */
				jint hashCode();
				/*
				 * Object clone();
				 */
				::java::lang::ObjectProxy clone();
				/*
				 * String toString();
				 */
				::net::sourceforge::jnipp::JStringHelper toString();
				/*
				 * TimeZone getZone();
				 */
				::java::util::TimeZoneProxy getZone();
				/*
				 * long getTimeOfDay();
				 */
				jlong getTimeOfDay();
				/*
				 * CalendarDate addDate(int, int, int);
				 */
				::sun::util::calendar::CalendarDateProxy addDate(jint p0, jint p1, jint p2);
				/*
				 * CalendarDate addDayOfMonth(int);
				 */
				::sun::util::calendar::CalendarDateProxy addDayOfMonth(jint p0);
				/*
				 * CalendarDate addHours(int);
				 */
				::sun::util::calendar::CalendarDateProxy addHours(jint p0);
				/*
				 * CalendarDate addMillis(int);
				 */
				::sun::util::calendar::CalendarDateProxy addMillis(jint p0);
				/*
				 * CalendarDate addMinutes(int);
				 */
				::sun::util::calendar::CalendarDateProxy addMinutes(jint p0);
				/*
				 * CalendarDate addMonth(int);
				 */
				::sun::util::calendar::CalendarDateProxy addMonth(jint p0);
				/*
				 * CalendarDate addSeconds(int);
				 */
				::sun::util::calendar::CalendarDateProxy addSeconds(jint p0);
				/*
				 * CalendarDate addTimeOfDay(int, int, int, int);
				 */
				::sun::util::calendar::CalendarDateProxy addTimeOfDay(jint p0, jint p1, jint p2, jint p3);
				/*
				 * CalendarDate addYear(int);
				 */
				::sun::util::calendar::CalendarDateProxy addYear(jint p0);
				/*
				 * CalendarDate setDate(int, int, int);
				 */
				::sun::util::calendar::CalendarDateProxy setDate(jint p0, jint p1, jint p2);
				/*
				 * CalendarDate setDayOfMonth(int);
				 */
				::sun::util::calendar::CalendarDateProxy setDayOfMonth(jint p0);
				/*
				 * CalendarDate setEra(Era);
				 */
				::sun::util::calendar::CalendarDateProxy setEra(::sun::util::calendar::EraProxy p0);
				/*
				 * CalendarDate setHours(int);
				 */
				::sun::util::calendar::CalendarDateProxy setHours(jint p0);
				/*
				 * CalendarDate setMillis(int);
				 */
				::sun::util::calendar::CalendarDateProxy setMillis(jint p0);
				/*
				 * CalendarDate setMinutes(int);
				 */
				::sun::util::calendar::CalendarDateProxy setMinutes(jint p0);
				/*
				 * CalendarDate setMonth(int);
				 */
				::sun::util::calendar::CalendarDateProxy setMonth(jint p0);
				/*
				 * CalendarDate setSeconds(int);
				 */
				::sun::util::calendar::CalendarDateProxy setSeconds(jint p0);
				/*
				 * CalendarDate setTimeOfDay(int, int, int, int);
				 */
				::sun::util::calendar::CalendarDateProxy setTimeOfDay(jint p0, jint p1, jint p2, jint p3);
				/*
				 * CalendarDate setYear(int);
				 */
				::sun::util::calendar::CalendarDateProxy setYear(jint p0);
				/*
				 * CalendarDate setZone(TimeZone);
				 */
				::sun::util::calendar::CalendarDateProxy setZone(::java::util::TimeZoneProxy p0);
				/*
				 * Era getEra();
				 */
				::sun::util::calendar::EraProxy getEra();
				/*
				 * void setStandardTime(boolean);
				 */
				void setStandardTime(jboolean p0);

			};
		}
	}
}


#endif
