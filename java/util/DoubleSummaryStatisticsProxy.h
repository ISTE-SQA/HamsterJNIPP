#ifndef __java_util_DoubleSummaryStatisticsProxy_H
#define __java_util_DoubleSummaryStatisticsProxy_H


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
		class DoubleSummaryStatisticsProxy
		{
		private:
			static std::string className;
			static jclass objectClass;
			jobject peerObject;

		protected:
			DoubleSummaryStatisticsProxy(void* unused);
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
			DoubleSummaryStatisticsProxy(jobject obj);
			DoubleSummaryStatisticsProxy();

			virtual ~DoubleSummaryStatisticsProxy();
			DoubleSummaryStatisticsProxy& operator=(const DoubleSummaryStatisticsProxy& rhs);

			// methods
			/*
			 * double getAverage();
			 */
			jdouble getAverage();
			/*
			 * double getMax();
			 */
			jdouble getMax();
			/*
			 * double getMin();
			 */
			jdouble getMin();
			/*
			 * double getSum();
			 */
			jdouble getSum();
			/*
			 * long getCount();
			 */
			jlong getCount();
			/*
			 * String toString();
			 */
			::net::sourceforge::jnipp::JStringHelper toString();
			/*
			 * void accept(double);
			 */
			void accept(jdouble p0);
			/*
			 * void combine(DoubleSummaryStatistics);
			 */
			void combine(::java::util::DoubleSummaryStatisticsProxy p0);

		};
	}
}


#endif
