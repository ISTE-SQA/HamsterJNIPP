#ifndef __java_util_IteratorProxy_H
#define __java_util_IteratorProxy_H


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
#include "java\util\function\ConsumerProxyForward.h"

namespace java
{
	namespace util
	{
		class IteratorProxy
		{
		private:
			static std::string className;
			static jclass objectClass;
			jobject peerObject;

		protected:
			IteratorProxy(void* unused);
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
			IteratorProxy(jobject obj);

			virtual ~IteratorProxy();
			IteratorProxy& operator=(const IteratorProxy& rhs);

			// methods
			/*
			 * boolean hasNext();
			 */
			jboolean hasNext();
			/*
			 * Object next();
			 */
			::java::lang::ObjectProxy next();
			/*
			 * void forEachRemaining(Consumer);
			 */
			void forEachRemaining(::java::util::function::ConsumerProxy p0);
			/*
			 * void remove();
			 */
			void remove();

		};
	}
}


#endif
