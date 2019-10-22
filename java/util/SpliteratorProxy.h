#ifndef __java_util_SpliteratorProxy_H
#define __java_util_SpliteratorProxy_H


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
#include "java\util\function\ConsumerProxyForward.h"
#include "java\util\ComparatorProxyForward.h"

namespace java
{
	namespace util
	{
		class SpliteratorProxy
		{
		private:
			static std::string className;
			static jclass objectClass;
			jobject peerObject;

		protected:
			SpliteratorProxy(void* unused);
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
			SpliteratorProxy(jobject obj);

			virtual ~SpliteratorProxy();
			SpliteratorProxy& operator=(const SpliteratorProxy& rhs);

			// methods
			/*
			 * boolean tryAdvance(Consumer);
			 */
			jboolean tryAdvance(::java::util::function::ConsumerProxy p0);
			/*
			 * int characteristics();
			 */
			jint characteristics();
			/*
			 * Spliterator trySplit();
			 */
			::java::util::SpliteratorProxy trySplit();
			/*
			 * long estimateSize();
			 */
			jlong estimateSize();
			/*
			 * boolean hasCharacteristics(int);
			 */
			jboolean hasCharacteristics(jint p0);
			/*
			 * Comparator getComparator();
			 */
			::java::util::ComparatorProxy getComparator();
			/*
			 * long getExactSizeIfKnown();
			 */
			jlong getExactSizeIfKnown();
			/*
			 * void forEachRemaining(Consumer);
			 */
			void forEachRemaining(::java::util::function::ConsumerProxy p0);

		};
	}
}


#endif
