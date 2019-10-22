#ifndef __java_util_Spliterator_OfIntProxy_H
#define __java_util_Spliterator_OfIntProxy_H


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
#include "java\util\function\IntConsumerProxyForward.h"
#include "java\util\function\ConsumerProxyForward.h"

namespace java
{
	namespace util
	{
		class Spliterator_OfIntProxy
		{
		private:
			static std::string className;
			static jclass objectClass;
			jobject peerObject;

		protected:
			Spliterator_OfIntProxy(void* unused);
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
			Spliterator_OfIntProxy(jobject obj);

			virtual ~Spliterator_OfIntProxy();
			Spliterator_OfIntProxy& operator=(const Spliterator_OfIntProxy& rhs);

			// methods
			/*
			 * boolean tryAdvance(IntConsumer);
			 */
			jboolean tryAdvance(::java::util::function::IntConsumerProxy p0);
			/*
			 * Spliterator$OfInt trySplit();
			 */
			::java::util::Spliterator_OfIntProxy trySplit();
			/*
			 * boolean tryAdvance(Consumer);
			 */
			jboolean tryAdvance(::java::util::function::ConsumerProxy p0);
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
