#ifndef __javafx_collections_transformation_FilteredListProxy_H
#define __javafx_collections_transformation_FilteredListProxy_H


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
#include "javafx\collections\ObservableListProxyForward.h"
#include "java\util\function\PredicateProxyForward.h"
#include "javafx\beans\property\ObjectPropertyProxyForward.h"
#include "java\lang\ObjectProxyForward.h"
#include "com\sun\javafx\collections\SortHelperProxyForward.h"

namespace javafx
{
	namespace collections
	{
		namespace transformation
		{
			class FilteredListProxy
			{
			private:
				static std::string className;
				static jclass objectClass;
				jobject peerObject;

			protected:
				FilteredListProxy(void* unused);
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
				FilteredListProxy(jobject obj);
				FilteredListProxy(::javafx::collections::ObservableListProxy p0);
				FilteredListProxy(::javafx::collections::ObservableListProxy p0, ::java::util::function::PredicateProxy p1);

				virtual ~FilteredListProxy();
				FilteredListProxy& operator=(const FilteredListProxy& rhs);

				// methods
				/*
				 * Predicate getPredicate();
				 */
				::java::util::function::PredicateProxy getPredicate();
				/*
				 * ObjectProperty predicateProperty();
				 */
				::javafx::beans::property::ObjectPropertyProxy predicateProperty();
				/*
				 * void setPredicate(Predicate);
				 */
				void setPredicate(::java::util::function::PredicateProxy p0);
				/*
				 * int getSourceIndex(int);
				 */
				jint getSourceIndex(jint p0);
				/*
				 * int size();
				 */
				jint size();
				/*
				 * Object get(int);
				 */
				::java::lang::ObjectProxy get(jint p0);

			};
		}
	}
}


#endif
