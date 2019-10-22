#ifndef __sun_util_calendar_BaseCalendar_DateProxy_H
#define __sun_util_calendar_BaseCalendar_DateProxy_H


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

namespace sun
{
	namespace util
	{
		namespace calendar
		{
			class BaseCalendar_DateProxy
			{
			private:
				static std::string className;
				static jclass objectClass;
				jobject peerObject;

			protected:
				BaseCalendar_DateProxy(void* unused);
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
				BaseCalendar_DateProxy(jobject obj);

				virtual ~BaseCalendar_DateProxy();
				BaseCalendar_DateProxy& operator=(const BaseCalendar_DateProxy& rhs);

				// methods
				/*
				 * int getNormalizedYear();
				 */
				jint getNormalizedYear();
				/*
				 * void setNormalizedYear(int);
				 */
				void setNormalizedYear(jint p0);
				/*
				 * BaseCalendar$Date setNormalizedDate(int, int, int);
				 */
				::sun::util::calendar::BaseCalendar_DateProxy setNormalizedDate(jint p0, jint p1, jint p2);

			};
		}
	}
}


#endif
