#ifndef __java_util_Spliterator_OfPrimitiveProxy_H
#define __java_util_Spliterator_OfPrimitiveProxy_H


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
#include "java\lang\ObjectProxyForward.h"
#include "java\util\SpliteratorProxyForward.h"

namespace java
{
	namespace util
	{
		class Spliterator_OfPrimitiveProxy
		{
		private:
			static std::string className;
			static jclass objectClass;
			jobject peerObject;

		protected:
			Spliterator_OfPrimitiveProxy(void* unused);
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
			Spliterator_OfPrimitiveProxy(jobject obj);

			virtual ~Spliterator_OfPrimitiveProxy();
			Spliterator_OfPrimitiveProxy& operator=(const Spliterator_OfPrimitiveProxy& rhs);

			// methods
			/*
			 * boolean tryAdvance(Object);
			 */
			jboolean tryAdvance(::java::lang::ObjectProxy p0);
			/*
			 * Spliterator$OfPrimitive trySplit();
			 */
			::java::util::Spliterator_OfPrimitiveProxy trySplit();
			/*
			 * Spliterator trySplit();
			 */
			::java::util::SpliteratorProxy trySplit();
			/*
			 * void forEachRemaining(Object);
			 */
			void forEachRemaining(::java::lang::ObjectProxy p0);

		};
	}
}


#endif
