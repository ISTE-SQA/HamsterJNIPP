#ifndef __java_util_ListProxy_H
#define __java_util_ListProxy_H


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
#include "java\util\ListIteratorProxyForward.h"
#include "java\util\SpliteratorProxyForward.h"
#include "java\util\function\UnaryOperatorProxyForward.h"
#include "java\util\ComparatorProxyForward.h"
#include "java\lang\ObjectProxy.h"

namespace java
{
	namespace util
	{
		class ListProxy
		{
		private:
			static std::string className;
			static jclass objectClass;
			jobject peerObject;

		protected:
			ListProxy(void* unused);
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
			ListProxy(jobject obj);

			virtual ~ListProxy();
			ListProxy& operator=(const ListProxy& rhs);

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
			 * void add(int, Object);
			 */
			void add(jint p0, ::java::lang::ObjectProxy p1);
			/*
			 * void clear();
			 */
			void clear();
			/*
			 * Spliterator spliterator();
			 */
			::java::util::SpliteratorProxy spliterator();
			/*
			 * void replaceAll(UnaryOperator);
			 */
			void replaceAll(::java::util::function::UnaryOperatorProxy p0);
			/*
			 * void sort(Comparator);
			 */
			void sort(::java::util::ComparatorProxy p0);

		};
	}
}


#endif
