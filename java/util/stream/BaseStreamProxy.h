#ifndef __java_util_stream_BaseStreamProxy_H
#define __java_util_stream_BaseStreamProxy_H


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
#include "java\lang\RunnableProxyForward.h"

namespace java
{
	namespace util
	{
		namespace stream
		{
			class BaseStreamProxy
			{
			private:
				static std::string className;
				static jclass objectClass;
				jobject peerObject;

			protected:
				BaseStreamProxy(void* unused);
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
				BaseStreamProxy(jobject obj);

				virtual ~BaseStreamProxy();
				BaseStreamProxy& operator=(const BaseStreamProxy& rhs);

				// methods
				/*
				 * boolean isParallel();
				 */
				jboolean isParallel();
				/*
				 * Iterator iterator();
				 */
				::java::util::IteratorProxy iterator();
				/*
				 * Spliterator spliterator();
				 */
				::java::util::SpliteratorProxy spliterator();
				/*
				 * BaseStream onClose(Runnable);
				 */
				::java::util::stream::BaseStreamProxy onClose(::java::lang::RunnableProxy p0);
				/*
				 * BaseStream parallel();
				 */
				::java::util::stream::BaseStreamProxy parallel();
				/*
				 * BaseStream sequential();
				 */
				::java::util::stream::BaseStreamProxy sequential();
				/*
				 * BaseStream unordered();
				 */
				::java::util::stream::BaseStreamProxy unordered();
				/*
				 * void close();
				 */
				void close();

			};
		}
	}
}


#endif
