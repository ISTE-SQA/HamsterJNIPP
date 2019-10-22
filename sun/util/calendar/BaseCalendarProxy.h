#ifndef __sun_util_calendar_BaseCalendarProxy_H
#define __sun_util_calendar_BaseCalendarProxy_H


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
#include "sun\util\calendar\CalendarDateProxyForward.h"
#include "sun\util\calendar\BaseCalendar_DateProxyForward.h"

namespace sun
{
	namespace util
	{
		namespace calendar
		{
			class BaseCalendarProxy
			{
			private:
				static std::string className;
				static jclass objectClass;
				jobject peerObject;

			protected:
				BaseCalendarProxy(void* unused);
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
				BaseCalendarProxy(jobject obj);
				BaseCalendarProxy();

				virtual ~BaseCalendarProxy();
				BaseCalendarProxy& operator=(const BaseCalendarProxy& rhs);

				// methods
				/*
				 * boolean normalize(CalendarDate);
				 */
				jboolean normalize(::sun::util::calendar::CalendarDateProxy p0);
				/*
				 * boolean validate(CalendarDate);
				 */
				jboolean validate(::sun::util::calendar::CalendarDateProxy p0);
				/*
				 * int getDayOfWeek(CalendarDate);
				 */
				jint getDayOfWeek(::sun::util::calendar::CalendarDateProxy p0);
				/*
				 * int getMonthLength(CalendarDate);
				 */
				jint getMonthLength(::sun::util::calendar::CalendarDateProxy p0);
				/*
				 * int getYearFromFixedDate(long);
				 */
				jint getYearFromFixedDate(jlong p0);
				/*
				 * int getYearLength(CalendarDate);
				 */
				jint getYearLength(::sun::util::calendar::CalendarDateProxy p0);
				/*
				 * int getYearLengthInMonths(CalendarDate);
				 */
				jint getYearLengthInMonths(::sun::util::calendar::CalendarDateProxy p0);
				/*
				 * long getDayOfYear(CalendarDate);
				 */
				jlong getDayOfYear(::sun::util::calendar::CalendarDateProxy p0);
				/*
				 * long getFixedDate(int, int, int, BaseCalendar$Date);
				 */
				jlong getFixedDate(jint p0, jint p1, jint p2, ::sun::util::calendar::BaseCalendar_DateProxy p3);
				/*
				 * long getFixedDate(CalendarDate);
				 */
				jlong getFixedDate(::sun::util::calendar::CalendarDateProxy p0);
				/*
				 * static int getDayOfWeekFromFixedDate(long);
				 */
				static jint getDayOfWeekFromFixedDate(jlong p0);
				/*
				 * void getCalendarDateFromFixedDate(CalendarDate, long);
				 */
				void getCalendarDateFromFixedDate(::sun::util::calendar::CalendarDateProxy p0, jlong p1);

			};
		}
	}
}


#endif
