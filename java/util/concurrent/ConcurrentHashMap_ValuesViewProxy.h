#ifndef __java_util_concurrent_ConcurrentHashMap_ValuesViewProxy_H
#define __java_util_concurrent_ConcurrentHashMap_ValuesViewProxy_H


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
#include "java\util\CollectionProxyForward.h"
#include "java\util\IteratorProxyForward.h"
#include "java\util\SpliteratorProxyForward.h"
#include "java\util\function\ConsumerProxyForward.h"

namespace java
{
	namespace util
	{
		namespace concurrent
		{
			class ConcurrentHashMap_ValuesViewProxy
			{
			private:
				static std::string className;
				static jclass objectClass;
				jobject peerObject;

			protected:
				ConcurrentHashMap_ValuesViewProxy(void* unused);
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
				ConcurrentHashMap_ValuesViewProxy(jobject obj);

				virtual ~ConcurrentHashMap_ValuesViewProxy();
				ConcurrentHashMap_ValuesViewProxy& operator=(const ConcurrentHashMap_ValuesViewProxy& rhs);

				// methods
				/*
				 * boolean add(Object);
				 */
				jboolean add(::java::lang::ObjectProxy p0);
				/*
				 * boolean addAll(Collection);
				 */
				jboolean addAll(::java::util::CollectionProxy p0);
				/*
				 * boolean contains(Object);
				 */
				jboolean contains(::java::lang::ObjectProxy p0);
				/*
				 * boolean remove(Object);
				 */
				jboolean remove(::java::lang::ObjectProxy p0);
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
}


#endif
