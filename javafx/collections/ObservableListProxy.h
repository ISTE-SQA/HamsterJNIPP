#ifndef __javafx_collections_ObservableListProxy_H
#define __javafx_collections_ObservableListProxy_H


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
#include "javafx\collections\ListChangeListenerProxyForward.h"
#include "java\util\function\PredicateProxyForward.h"
#include "javafx\collections\transformation\FilteredListProxyForward.h"
#include "javafx\collections\transformation\SortedListProxyForward.h"
#include "java\util\ComparatorProxyForward.h"
#include "java\lang\ObjectProxy.h"

namespace javafx
{
	namespace collections
	{
		class ObservableListProxy
		{
		private:
			static std::string className;
			static jclass objectClass;
			jobject peerObject;

		protected:
			ObservableListProxy(void* unused);
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
			ObservableListProxy(jobject obj);

			virtual ~ObservableListProxy();
			ObservableListProxy& operator=(const ObservableListProxy& rhs);

			// methods
			/*
			 * boolean addAll(Object[]);
			 */
			jboolean addAll(::net::sourceforge::jnipp::PA<::java::lang::ObjectProxy>::ProxyArray<1> p0);
			/*
			 * boolean removeAll(Object[]);
			 */
			jboolean removeAll(::net::sourceforge::jnipp::PA<::java::lang::ObjectProxy>::ProxyArray<1> p0);
			/*
			 * boolean retainAll(Object[]);
			 */
			jboolean retainAll(::net::sourceforge::jnipp::PA<::java::lang::ObjectProxy>::ProxyArray<1> p0);
			/*
			 * boolean setAll(Object[]);
			 */
			jboolean setAll(::net::sourceforge::jnipp::PA<::java::lang::ObjectProxy>::ProxyArray<1> p0);
			/*
			 * boolean setAll(Collection);
			 */
			jboolean setAll(::java::util::CollectionProxy p0);
			/*
			 * void addListener(ListChangeListener);
			 */
			void addListener(::javafx::collections::ListChangeListenerProxy p0);
			/*
			 * void remove(int, int);
			 */
			void remove(jint p0, jint p1);
			/*
			 * void removeListener(ListChangeListener);
			 */
			void removeListener(::javafx::collections::ListChangeListenerProxy p0);
			/*
			 * FilteredList filtered(Predicate);
			 */
			::javafx::collections::transformation::FilteredListProxy filtered(::java::util::function::PredicateProxy p0);
			/*
			 * SortedList sorted();
			 */
			::javafx::collections::transformation::SortedListProxy sorted();
			/*
			 * SortedList sorted(Comparator);
			 */
			::javafx::collections::transformation::SortedListProxy sorted(::java::util::ComparatorProxy p0);

		};
	}
}


#endif
