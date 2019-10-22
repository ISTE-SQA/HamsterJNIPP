#ifndef __java_util_CollectionProxy_H
#define __java_util_CollectionProxy_H


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
#include "java\util\IteratorProxyForward.h"
#include "java\util\function\PredicateProxyForward.h"
#include "java\util\SpliteratorProxyForward.h"
#include "java\util\stream\StreamProxyForward.h"
#include "java\lang\ObjectProxy.h"

namespace java
{
	namespace util
	{
		class CollectionProxy
		{
		private:
			static std::string className;
			static jclass objectClass;
			jobject peerObject;

		protected:
			CollectionProxy(void* unused);
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
			CollectionProxy(jobject obj);

			virtual ~CollectionProxy();
			CollectionProxy& operator=(const CollectionProxy& rhs);

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
			 * boolean containsAll(Collection);
			 */
			jboolean containsAll(::java::util::CollectionProxy p0);
			/*
			 * boolean equals(Object);
			 */
			jboolean equals(::java::lang::ObjectProxy p0);
			/*
			 * boolean isEmpty();
			 */
			jboolean isEmpty();
			/*
			 * boolean remove(Object);
			 */
			jboolean remove(::java::lang::ObjectProxy p0);
			/*
			 * boolean removeAll(Collection);
			 */
			jboolean removeAll(::java::util::CollectionProxy p0);
			/*
			 * boolean retainAll(Collection);
			 */
			jboolean retainAll(::java::util::CollectionProxy p0);
			/*
			 * int hashCode();
			 */
			jint hashCode();
			/*
			 * int size();
			 */
			jint size();
			/*
			 * Object[] toArray();
			 */
			::net::sourceforge::jnipp::PA<::java::lang::ObjectProxy>::ProxyArray<1> toArray();
			/*
			 * Object[] toArray(Object[]);
			 */
			::net::sourceforge::jnipp::PA<::java::lang::ObjectProxy>::ProxyArray<1> toArray(::net::sourceforge::jnipp::PA<::java::lang::ObjectProxy>::ProxyArray<1> p0);
			/*
			 * Iterator iterator();
			 */
			::java::util::IteratorProxy iterator();
			/*
			 * void clear();
			 */
			void clear();
			/*
			 * boolean removeIf(Predicate);
			 */
			jboolean removeIf(::java::util::function::PredicateProxy p0);
			/*
			 * Spliterator spliterator();
			 */
			::java::util::SpliteratorProxy spliterator();
			/*
			 * Stream parallelStream();
			 */
			::java::util::stream::StreamProxy parallelStream();
			/*
			 * Stream stream();
			 */
			::java::util::stream::StreamProxy stream();

		};
	}
}


#endif
