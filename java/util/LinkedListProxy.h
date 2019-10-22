#ifndef __java_util_LinkedListProxy_H
#define __java_util_LinkedListProxy_H


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
#include "java\util\IteratorProxyForward.h"
#include "java\util\ListIteratorProxyForward.h"
#include "java\util\SpliteratorProxyForward.h"
#include "java\util\LinkedList_NodeProxyForward.h"
#include "java\lang\ObjectProxy.h"

namespace java
{
	namespace util
	{
		class LinkedListProxy
		{
		private:
			static std::string className;
			static jclass objectClass;
			jobject peerObject;

		protected:
			LinkedListProxy(void* unused);
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
			LinkedListProxy(jobject obj);
			LinkedListProxy();
			LinkedListProxy(::java::util::CollectionProxy p0);

			virtual ~LinkedListProxy();
			LinkedListProxy& operator=(const LinkedListProxy& rhs);

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
			 * boolean offer(Object);
			 */
			jboolean offer(::java::lang::ObjectProxy p0);
			/*
			 * boolean offerFirst(Object);
			 */
			jboolean offerFirst(::java::lang::ObjectProxy p0);
			/*
			 * boolean offerLast(Object);
			 */
			jboolean offerLast(::java::lang::ObjectProxy p0);
			/*
			 * boolean remove(Object);
			 */
			jboolean remove(::java::lang::ObjectProxy p0);
			/*
			 * boolean removeFirstOccurrence(Object);
			 */
			jboolean removeFirstOccurrence(::java::lang::ObjectProxy p0);
			/*
			 * boolean removeLastOccurrence(Object);
			 */
			jboolean removeLastOccurrence(::java::lang::ObjectProxy p0);
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
			 * Object element();
			 */
			::java::lang::ObjectProxy element();
			/*
			 * Object get(int);
			 */
			::java::lang::ObjectProxy get(jint p0);
			/*
			 * Object getFirst();
			 */
			::java::lang::ObjectProxy getFirst();
			/*
			 * Object getLast();
			 */
			::java::lang::ObjectProxy getLast();
			/*
			 * Object peek();
			 */
			::java::lang::ObjectProxy peek();
			/*
			 * Object peekFirst();
			 */
			::java::lang::ObjectProxy peekFirst();
			/*
			 * Object peekLast();
			 */
			::java::lang::ObjectProxy peekLast();
			/*
			 * Object poll();
			 */
			::java::lang::ObjectProxy poll();
			/*
			 * Object pollFirst();
			 */
			::java::lang::ObjectProxy pollFirst();
			/*
			 * Object pollLast();
			 */
			::java::lang::ObjectProxy pollLast();
			/*
			 * Object pop();
			 */
			::java::lang::ObjectProxy pop();
			/*
			 * Object remove();
			 */
			::java::lang::ObjectProxy remove();
			/*
			 * Object remove(int);
			 */
			::java::lang::ObjectProxy remove(jint p0);
			/*
			 * Object removeFirst();
			 */
			::java::lang::ObjectProxy removeFirst();
			/*
			 * Object removeLast();
			 */
			::java::lang::ObjectProxy removeLast();
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
			 * Iterator descendingIterator();
			 */
			::java::util::IteratorProxy descendingIterator();
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
			 * void addFirst(Object);
			 */
			void addFirst(::java::lang::ObjectProxy p0);
			/*
			 * void addLast(Object);
			 */
			void addLast(::java::lang::ObjectProxy p0);
			/*
			 * void clear();
			 */
			void clear();
			/*
			 * void push(Object);
			 */
			void push(::java::lang::ObjectProxy p0);

		};
	}
}


#endif
