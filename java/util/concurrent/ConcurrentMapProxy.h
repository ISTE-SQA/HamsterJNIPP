#ifndef __java_util_concurrent_ConcurrentMapProxy_H
#define __java_util_concurrent_ConcurrentMapProxy_H


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
#include "java\util\function\BiFunctionProxyForward.h"
#include "java\util\function\FunctionProxyForward.h"
#include "java\util\function\BiConsumerProxyForward.h"

namespace java
{
	namespace util
	{
		namespace concurrent
		{
			class ConcurrentMapProxy
			{
			private:
				static std::string className;
				static jclass objectClass;
				jobject peerObject;

			protected:
				ConcurrentMapProxy(void* unused);
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
				ConcurrentMapProxy(jobject obj);

				virtual ~ConcurrentMapProxy();
				ConcurrentMapProxy& operator=(const ConcurrentMapProxy& rhs);

				// methods
				/*
				 * boolean remove(Object, Object);
				 */
				jboolean remove(::java::lang::ObjectProxy p0, ::java::lang::ObjectProxy p1);
				/*
				 * boolean replace(Object, Object, Object);
				 */
				jboolean replace(::java::lang::ObjectProxy p0, ::java::lang::ObjectProxy p1, ::java::lang::ObjectProxy p2);
				/*
				 * Object putIfAbsent(Object, Object);
				 */
				::java::lang::ObjectProxy putIfAbsent(::java::lang::ObjectProxy p0, ::java::lang::ObjectProxy p1);
				/*
				 * Object replace(Object, Object);
				 */
				::java::lang::ObjectProxy replace(::java::lang::ObjectProxy p0, ::java::lang::ObjectProxy p1);
				/*
				 * Object compute(Object, BiFunction);
				 */
				::java::lang::ObjectProxy compute(::java::lang::ObjectProxy p0, ::java::util::function::BiFunctionProxy p1);
				/*
				 * Object computeIfAbsent(Object, Function);
				 */
				::java::lang::ObjectProxy computeIfAbsent(::java::lang::ObjectProxy p0, ::java::util::function::FunctionProxy p1);
				/*
				 * Object computeIfPresent(Object, BiFunction);
				 */
				::java::lang::ObjectProxy computeIfPresent(::java::lang::ObjectProxy p0, ::java::util::function::BiFunctionProxy p1);
				/*
				 * Object getOrDefault(Object, Object);
				 */
				::java::lang::ObjectProxy getOrDefault(::java::lang::ObjectProxy p0, ::java::lang::ObjectProxy p1);
				/*
				 * Object merge(Object, Object, BiFunction);
				 */
				::java::lang::ObjectProxy merge(::java::lang::ObjectProxy p0, ::java::lang::ObjectProxy p1, ::java::util::function::BiFunctionProxy p2);
				/*
				 * void forEach(BiConsumer);
				 */
				void forEach(::java::util::function::BiConsumerProxy p0);
				/*
				 * void replaceAll(BiFunction);
				 */
				void replaceAll(::java::util::function::BiFunctionProxy p0);

			};
		}
	}
}


#endif
