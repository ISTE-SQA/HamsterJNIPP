#ifndef __sun_util_calendar_EraProxy_H
#define __sun_util_calendar_EraProxy_H


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
#include "java\util\LocaleProxyForward.h"
#include "java\util\TimeZoneProxyForward.h"
#include "sun\util\calendar\CalendarDateProxyForward.h"

namespace sun
{
	namespace util
	{
		namespace calendar
		{
			class EraProxy
			{
			private:
				static std::string className;
				static jclass objectClass;
				jobject peerObject;

			protected:
				EraProxy(void* unused);
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
				EraProxy(jobject obj);
				EraProxy(::net::sourceforge::jnipp::JStringHelper p0, ::net::sourceforge::jnipp::JStringHelper p1, jlong p2, jboolean p3);

				virtual ~EraProxy();
				EraProxy& operator=(const EraProxy& rhs);

				// methods
				/*
				 * boolean equals(Object);
				 */
				jboolean equals(::java::lang::ObjectProxy p0);
				/*
				 * boolean isLocalTime();
				 */
				jboolean isLocalTime();
				/*
				 * int hashCode();
				 */
				jint hashCode();
				/*
				 * String getAbbreviation();
				 */
				::net::sourceforge::jnipp::JStringHelper getAbbreviation();
				/*
				 * String getDiaplayAbbreviation(Locale);
				 */
				::net::sourceforge::jnipp::JStringHelper getDiaplayAbbreviation(::java::util::LocaleProxy p0);
				/*
				 * String getDisplayName(Locale);
				 */
				::net::sourceforge::jnipp::JStringHelper getDisplayName(::java::util::LocaleProxy p0);
				/*
				 * String getName();
				 */
				::net::sourceforge::jnipp::JStringHelper getName();
				/*
				 * String toString();
				 */
				::net::sourceforge::jnipp::JStringHelper toString();
				/*
				 * long getSince(TimeZone);
				 */
				jlong getSince(::java::util::TimeZoneProxy p0);
				/*
				 * CalendarDate getSinceDate();
				 */
				::sun::util::calendar::CalendarDateProxy getSinceDate();

			};
		}
	}
}


#endif
