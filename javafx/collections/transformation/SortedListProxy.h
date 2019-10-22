#ifndef __javafx_collections_transformation_SortedListProxy_H
#define __javafx_collections_transformation_SortedListProxy_H


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
#include "java\util\ComparatorProxyForward.h"
#include "javafx\beans\property\ObjectPropertyProxyForward.h"
#include "java\lang\ObjectProxyForward.h"
#include "com\sun\javafx\collections\SortHelperProxyForward.h"
#include "javafx\collections\transformation\SortedList_ElementProxyForward.h"
#include "javafx\collections\transformation\SortedList_ElementProxy.h"

namespace javafx
{
	namespace collections
	{
		namespace transformation
		{
			class SortedListProxy
			{
			private:
				static std::string className;
				static jclass objectClass;
				jobject peerObject;

			protected:
				SortedListProxy(void* unused);
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
				SortedListProxy(jobject obj);
				SortedListProxy(::javafx::collections::ObservableListProxy p0);
				SortedListProxy(::javafx::collections::ObservableListProxy p0, ::java::util::ComparatorProxy p1);

				virtual ~SortedListProxy();
				SortedListProxy& operator=(const SortedListProxy& rhs);

				// methods
				/*
				 * Comparator getComparator();
				 */
				::java::util::ComparatorProxy getComparator();
				/*
				 * ObjectProperty comparatorProperty();
				 */
				::javafx::beans::property::ObjectPropertyProxy comparatorProperty();
				/*
				 * void setComparator(Comparator);
				 */
				void setComparator(::java::util::ComparatorProxy p0);
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
