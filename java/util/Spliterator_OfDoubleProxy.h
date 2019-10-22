#ifndef __java_util_Spliterator_OfDoubleProxy_H
#define __java_util_Spliterator_OfDoubleProxy_H


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
#include "java\util\function\DoubleConsumerProxyForward.h"
#include "java\util\function\ConsumerProxyForward.h"

namespace java
{
	namespace util
	{
		class Spliterator_OfDoubleProxy
		{
		private:
			static std::string className;
			static jclass objectClass;
			jobject peerObject;

		protected:
			Spliterator_OfDoubleProxy(void* unused);
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
			Spliterator_OfDoubleProxy(jobject obj);

			virtual ~Spliterator_OfDoubleProxy();
			Spliterator_OfDoubleProxy& operator=(const Spliterator_OfDoubleProxy& rhs);

			// methods
			/*
			 * boolean tryAdvance(DoubleConsumer);
			 */
			jboolean tryAdvance(::java::util::function::DoubleConsumerProxy p0);
			/*
			 * Spliterator$OfDouble trySplit();
			 */
			::java::util::Spliterator_OfDoubleProxy trySplit();
			/*
			 * boolean tryAdvance(Consumer);
			 */
			jboolean tryAdvance(::java::util::function::ConsumerProxy p0);
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
