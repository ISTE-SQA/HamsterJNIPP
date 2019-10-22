#ifndef __java_time_MonthProxy_H
#define __java_time_MonthProxy_H


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
#include "java\time\MonthProxy.h"

namespace java
{
	namespace time
	{
		class MonthProxy
		{
		private:
			static std::string className;
			static jclass objectClass;
			jobject peerObject;

		protected:
			MonthProxy(void* unused);
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
			MonthProxy(jobject obj);

			virtual ~MonthProxy();
			MonthProxy& operator=(const MonthProxy& rhs);

			// methods
			/*
			 * boolean isSupported(TemporalField);
			 */
			jboolean isSupported(::java::time::temporal::TemporalFieldProxy p0);
			/*
			 * int firstDayOfYear(boolean);
			 */
			jint firstDayOfYear(jboolean p0);
			/*
			 * int get(TemporalField);
			 */
			jint get(::java::time::temporal::TemporalFieldProxy p0);
			/*
			 * int getValue();
			 */
			jint getValue();
			/*
			 * int length(boolean);
			 */
			jint length(jboolean p0);
			/*
			 * int maxLength();
			 */
			jint maxLength();
			/*
			 * int minLength();
			 */
			jint minLength();
			/*
			 * Object query(TemporalQuery);
			 */
			::java::lang::ObjectProxy query(::java::time::temporal::TemporalQueryProxy p0);
			/*
			 * String getDisplayName(TextStyle, Locale);
			 */
			::net::sourceforge::jnipp::JStringHelper getDisplayName(::java::time::format::TextStyleProxy p0, ::java::util::LocaleProxy p1);
			/*
			 * Month firstMonthOfQuarter();
			 */
			::java::time::MonthProxy firstMonthOfQuarter();
			/*
			 * Month minus(long);
			 */
			::java::time::MonthProxy minus(jlong p0);
			/*
			 * Month plus(long);
			 */
			::java::time::MonthProxy plus(jlong p0);
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
			 * static Month from(TemporalAccessor);
			 */
			static ::java::time::MonthProxy from(::java::time::temporal::TemporalAccessorProxy p0);
			/*
			 * static Month of(int);
			 */
			static ::java::time::MonthProxy of(jint p0);
			/*
			 * static Month valueOf(String);
			 */
			static ::java::time::MonthProxy valueOf(::net::sourceforge::jnipp::JStringHelper p0);
			/*
			 * static Month[] values();
			 */
			static ::net::sourceforge::jnipp::PA<::java::time::MonthProxy>::ProxyArray<1> values();

		};
	}
}


#endif
