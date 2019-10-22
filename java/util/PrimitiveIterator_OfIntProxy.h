#ifndef __java_util_PrimitiveIterator_OfIntProxy_H
#define __java_util_PrimitiveIterator_OfIntProxy_H


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
#include "java\lang\IntegerProxyForward.h"
#include "java\util\function\ConsumerProxyForward.h"
#include "java\util\function\IntConsumerProxyForward.h"

namespace java
{
	namespace util
	{
		class PrimitiveIterator_OfIntProxy
		{
		private:
			static std::string className;
			static jclass objectClass;
			jobject peerObject;

		protected:
			PrimitiveIterator_OfIntProxy(void* unused);
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
			PrimitiveIterator_OfIntProxy(jobject obj);

			virtual ~PrimitiveIterator_OfIntProxy();
			PrimitiveIterator_OfIntProxy& operator=(const PrimitiveIterator_OfIntProxy& rhs);

			// methods
			/*
			 * int nextInt();
			 */
			jint nextInt();
			/*
			 * Integer next();
			 */
			::java::lang::IntegerProxy next();
			/*
			 * void forEachRemaining(Consumer);
			 */
			void forEachRemaining(::java::util::function::ConsumerProxy p0);
			/*
			 * void forEachRemaining(IntConsumer);
			 */
			void forEachRemaining(::java::util::function::IntConsumerProxy p0);

		};
	}
}


#endif
