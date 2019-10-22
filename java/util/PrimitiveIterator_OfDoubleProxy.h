#ifndef __java_util_PrimitiveIterator_OfDoubleProxy_H
#define __java_util_PrimitiveIterator_OfDoubleProxy_H


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
#include "java\lang\DoubleProxyForward.h"
#include "java\util\function\ConsumerProxyForward.h"
#include "java\util\function\DoubleConsumerProxyForward.h"

namespace java
{
	namespace util
	{
		class PrimitiveIterator_OfDoubleProxy
		{
		private:
			static std::string className;
			static jclass objectClass;
			jobject peerObject;

		protected:
			PrimitiveIterator_OfDoubleProxy(void* unused);
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
			PrimitiveIterator_OfDoubleProxy(jobject obj);

			virtual ~PrimitiveIterator_OfDoubleProxy();
			PrimitiveIterator_OfDoubleProxy& operator=(const PrimitiveIterator_OfDoubleProxy& rhs);

			// methods
			/*
			 * double nextDouble();
			 */
			jdouble nextDouble();
			/*
			 * Double next();
			 */
			::java::lang::DoubleProxy next();
			/*
			 * void forEachRemaining(Consumer);
			 */
			void forEachRemaining(::java::util::function::ConsumerProxy p0);
			/*
			 * void forEachRemaining(DoubleConsumer);
			 */
			void forEachRemaining(::java::util::function::DoubleConsumerProxy p0);

		};
	}
}


#endif
