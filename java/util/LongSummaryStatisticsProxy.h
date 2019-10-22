#ifndef __java_util_LongSummaryStatisticsProxy_H
#define __java_util_LongSummaryStatisticsProxy_H


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

namespace java
{
	namespace util
	{
		class LongSummaryStatisticsProxy
		{
		private:
			static std::string className;
			static jclass objectClass;
			jobject peerObject;

		protected:
			LongSummaryStatisticsProxy(void* unused);
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
			LongSummaryStatisticsProxy(jobject obj);
			LongSummaryStatisticsProxy();

			virtual ~LongSummaryStatisticsProxy();
			LongSummaryStatisticsProxy& operator=(const LongSummaryStatisticsProxy& rhs);

			// methods
			/*
			 * double getAverage();
			 */
			jdouble getAverage();
			/*
			 * long getCount();
			 */
			jlong getCount();
			/*
			 * long getMax();
			 */
			jlong getMax();
			/*
			 * long getMin();
			 */
			jlong getMin();
			/*
			 * long getSum();
			 */
			jlong getSum();
			/*
			 * String toString();
			 */
			::net::sourceforge::jnipp::JStringHelper toString();
			/*
			 * void accept(int);
			 */
			void accept(jint p0);
			/*
			 * void accept(long);
			 */
			void accept(jlong p0);
			/*
			 * void combine(LongSummaryStatistics);
			 */
			void combine(::java::util::LongSummaryStatisticsProxy p0);

		};
	}
}


#endif
