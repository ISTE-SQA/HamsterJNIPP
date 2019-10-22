#ifndef __java_util_concurrent_ConcurrentHashMap_KeySetViewProxy_H
#define __java_util_concurrent_ConcurrentHashMap_KeySetViewProxy_H


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
			class ConcurrentHashMap_KeySetViewProxy
			{
			private:
				static std::string className;
				static jclass objectClass;
				jobject peerObject;

			protected:
				ConcurrentHashMap_KeySetViewProxy(void* unused);
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
				ConcurrentHashMap_KeySetViewProxy(jobject obj);

				virtual ~ConcurrentHashMap_KeySetViewProxy();
				ConcurrentHashMap_KeySetViewProxy& operator=(const ConcurrentHashMap_KeySetViewProxy& rhs);

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
				 * boolean equals(Object);
				 */
				jboolean equals(::java::lang::ObjectProxy p0);
				/*
				 * boolean remove(Object);
				 */
				jboolean remove(::java::lang::ObjectProxy p0);
				/*
				 * int hashCode();
				 */
				jint hashCode();
				/*
				 * Object getMappedValue();
				 */
				::java::lang::ObjectProxy getMappedValue();
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
