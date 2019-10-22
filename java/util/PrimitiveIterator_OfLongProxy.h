#ifndef __java_util_PrimitiveIterator_OfLongProxy_H
#define __java_util_PrimitiveIterator_OfLongProxy_H


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
#include "java\lang\LongProxyForward.h"
#include "java\util\function\ConsumerProxyForward.h"
#include "java\util\function\LongConsumerProxyForward.h"

namespace java
{
	namespace util
	{
		class PrimitiveIterator_OfLongProxy
		{
		private:
			static std::string className;
			static jclass objectClass;
			jobject peerObject;

		protected:
			PrimitiveIterator_OfLongProxy(void* unused);
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
			PrimitiveIterator_OfLongProxy(jobject obj);

			virtual ~PrimitiveIterator_OfLongProxy();
			PrimitiveIterator_OfLongProxy& operator=(const PrimitiveIterator_OfLongProxy& rhs);

			// methods
			/*
			 * long nextLong();
			 */
			jlong nextLong();
			/*
			 * Long next();
			 */
			::java::lang::LongProxy next();
			/*
			 * void forEachRemaining(Consumer);
			 */
			void forEachRemaining(::java::util::function::ConsumerProxy p0);
			/*
			 * void forEachRemaining(LongConsumer);
			 */
			void forEachRemaining(::java::util::function::LongConsumerProxy p0);

		};
	}
}


#endif
