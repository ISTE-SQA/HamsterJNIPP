#ifndef __java_time_DayOfWeekProxy_H
#define __java_time_DayOfWeekProxy_H


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
#include "java\time\temporal\TemporalFieldProxyForward.h"
#include "java\time\temporal\TemporalQueryProxyForward.h"
#include "java\lang\ObjectProxyForward.h"
#include "java\time\format\TextStyleProxyForward.h"
#include "java\util\LocaleProxyForward.h"
#include "java\time\temporal\TemporalProxyForward.h"
#include "java\time\temporal\ValueRangeProxyForward.h"
#include "java\time\temporal\TemporalAccessorProxyForward.h"
#include "java\time\DayOfWeekProxy.h"

namespace java
{
	namespace time
	{
		class DayOfWeekProxy
		{
		private:
			static std::string className;
			static jclass objectClass;
			jobject peerObject;

		protected:
			DayOfWeekProxy(void* unused);
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
			DayOfWeekProxy(jobject obj);

			virtual ~DayOfWeekProxy();
			DayOfWeekProxy& operator=(const DayOfWeekProxy& rhs);

			// methods
			/*
			 * boolean isSupported(TemporalField);
			 */
			jboolean isSupported(::java::time::temporal::TemporalFieldProxy p0);
			/*
			 * int get(TemporalField);
			 */
			jint get(::java::time::temporal::TemporalFieldProxy p0);
			/*
			 * int getValue();
			 */
			jint getValue();
			/*
			 * Object query(TemporalQuery);
			 */
			::java::lang::ObjectProxy query(::java::time::temporal::TemporalQueryProxy p0);
			/*
			 * String getDisplayName(TextStyle, Locale);
			 */
			::net::sourceforge::jnipp::JStringHelper getDisplayName(::java::time::format::TextStyleProxy p0, ::java::util::LocaleProxy p1);
			/*
			 * DayOfWeek minus(long);
			 */
			::java::time::DayOfWeekProxy minus(jlong p0);
			/*
			 * DayOfWeek plus(long);
			 */
			::java::time::DayOfWeekProxy plus(jlong p0);
			/*
			 * Temporal adjustInto(Temporal);
			 */
			::java::time::temporal::TemporalProxy adjustInto(::java::time::temporal::TemporalProxy p0);
			/*
			 * ValueRange range(TemporalField);
			 */
			::java::time::temporal::ValueRangeProxy range(::java::time::temporal::TemporalFieldProxy p0);
			/*
			 * long getLong(TemporalField);
			 */
			jlong getLong(::java::time::temporal::TemporalFieldProxy p0);
			/*
			 * static DayOfWeek from(TemporalAccessor);
			 */
			static ::java::time::DayOfWeekProxy from(::java::time::temporal::TemporalAccessorProxy p0);
			/*
			 * static DayOfWeek of(int);
			 */
			static ::java::time::DayOfWeekProxy of(jint p0);
			/*
			 * static DayOfWeek valueOf(String);
			 */
			static ::java::time::DayOfWeekProxy valueOf(::net::sourceforge::jnipp::JStringHelper p0);
			/*
			 * static DayOfWeek[] values();
			 */
			static ::net::sourceforge::jnipp::PA<::java::time::DayOfWeekProxy>::ProxyArray<1> values();

		};
	}
}


#endif
