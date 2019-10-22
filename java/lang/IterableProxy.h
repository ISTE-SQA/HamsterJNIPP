#ifndef __java_lang_IterableProxy_H
#define __java_lang_IterableProxy_H


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
#include "java\util\IteratorProxyForward.h"
#include "java\util\SpliteratorProxyForward.h"
#include "java\util\function\ConsumerProxyForward.h"

namespace java
{
	namespace lang
	{
		class IterableProxy
		{
		private:
			static std::string className;
			static jclass objectClass;
			jobject peerObject;

		protected:
			IterableProxy(void* unused);
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
			IterableProxy(jobject obj);

			virtual ~IterableProxy();
			IterableProxy& operator=(const IterableProxy& rhs);

			// methods
			/*
			 * Iterator iterator();
			 */
			::java::util::IteratorProxy iterator();
			/*
			 * Spliterator spliterator();
			 */
			::java::util::SpliteratorProxy spliterator();
			/*
			 * void forEach(Consumer);
			 */
			void forEach(::java::util::function::ConsumerProxy p0);

		};
	}
}


#endif
