#ifndef __java_util_ArrayListProxy_H
#define __java_util_ArrayListProxy_H


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
#include "java\util\CollectionProxyForward.h"
#include "java\lang\ObjectProxyForward.h"
#include "java\util\function\PredicateProxyForward.h"
#include "java\util\IteratorProxyForward.h"
#include "java\util\ListProxyForward.h"
#include "java\util\ListIteratorProxyForward.h"
#include "java\util\SpliteratorProxyForward.h"
#include "java\util\function\ConsumerProxyForward.h"
#include "java\util\function\UnaryOperatorProxyForward.h"
#include "java\util\ComparatorProxyForward.h"
#include "java\lang\ObjectProxy.h"

namespace java
{
	namespace util
	{
		class ArrayListProxy
		{
		private:
			static std::string className;
			static jclass objectClass;
			jobject peerObject;

		protected:
			ArrayListProxy(void* unused);
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
			ArrayListProxy(jobject obj);
			ArrayListProxy();
			ArrayListProxy(jint p0);
			ArrayListProxy(::java::util::CollectionProxy p0);

			virtual ~ArrayListProxy();
			ArrayListProxy& operator=(const ArrayListProxy& rhs);

			// methods
			/*
			 * boolean add(Object);
			 */
			jboolean add(::java::lang::ObjectProxy p0);
			/*
			 * boolean addAll(int, Collection);
			 */
			jboolean addAll(jint p0, ::java::util::CollectionProxy p1);
			/*
			 * boolean addAll(Collection);
			 */
			jboolean addAll(::java::util::CollectionProxy p0);
			/*
			 * boolean contains(Object);
			 */
			jboolean contains(::java::lang::ObjectProxy p0);
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
			 * boolean removeIf(Predicate);
			 */
			jboolean removeIf(::java::util::function::PredicateProxy p0);
			/*
			 * boolean retainAll(Collection);
			 */
			jboolean retainAll(::java::util::CollectionProxy p0);
			/*
			 * int indexOf(Object);
			 */
			jint indexOf(::java::lang::ObjectProxy p0);
			/*
			 * int lastIndexOf(Object);
			 */
			jint lastIndexOf(::java::lang::ObjectProxy p0);
			/*
			 * int size();
			 */
			jint size();
			/*
			 * Object clone();
			 */
			::java::lang::ObjectProxy clone();
			/*
			 * Object get(int);
			 */
			::java::lang::ObjectProxy get(jint p0);
			/*
			 * Object remove(int);
			 */
			::java::lang::ObjectProxy remove(jint p0);
			/*
			 * Object set(int, Object);
			 */
			::java::lang::ObjectProxy set(jint p0, ::java::lang::ObjectProxy p1);
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
			 * List subList(int, int);
			 */
			::java::util::ListProxy subList(jint p0, jint p1);
			/*
			 * ListIterator listIterator();
			 */
			::java::util::ListIteratorProxy listIterator();
			/*
			 * ListIterator listIterator(int);
			 */
			::java::util::ListIteratorProxy listIterator(jint p0);
			/*
			 * Spliterator spliterator();
			 */
			::java::util::SpliteratorProxy spliterator();
			/*
			 * void add(int, Object);
			 */
			void add(jint p0, ::java::lang::ObjectProxy p1);
			/*
			 * void clear();
			 */
			void clear();
			/*
			 * void ensureCapacity(int);
			 */
			void ensureCapacity(jint p0);
			/*
			 * void forEach(Consumer);
			 */
			void forEach(::java::util::function::ConsumerProxy p0);
			/*
			 * void replaceAll(UnaryOperator);
			 */
			void replaceAll(::java::util::function::UnaryOperatorProxy p0);
			/*
			 * void sort(Comparator);
			 */
			void sort(::java::util::ComparatorProxy p0);
			/*
			 * void trimToSize();
			 */
			void trimToSize();

		};
	}
}


#endif
