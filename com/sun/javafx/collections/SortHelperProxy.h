#ifndef __com_sun_javafx_collections_SortHelperProxy_H
#define __com_sun_javafx_collections_SortHelperProxy_H


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
#include "java\util\ComparatorProxyForward.h"
#include "java\util\ListProxyForward.h"
#include "java\lang\ComparableProxy.h"
#include "java\lang\ObjectProxy.h"

namespace com
{
	namespace sun
	{
		namespace javafx
		{
			namespace collections
			{
				class SortHelperProxy
				{
				private:
					static std::string className;
					static jclass objectClass;
					jobject peerObject;

				protected:
					SortHelperProxy(void* unused);
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
					SortHelperProxy(jobject obj);
					SortHelperProxy();

					virtual ~SortHelperProxy();
					SortHelperProxy& operator=(const SortHelperProxy& rhs);

					// methods
					/*
					 * int[] sort(int[], int, int);
					 */
					::net::sourceforge::jnipp::JIntArrayHelper<1> sort(::net::sourceforge::jnipp::JIntArrayHelper<1> p0, jint p1, jint p2);
					/*
					 * int[] sort(Comparable[]);
					 */
					::net::sourceforge::jnipp::JIntArrayHelper<1> sort(::net::sourceforge::jnipp::PA<::java::lang::ComparableProxy>::ProxyArray<1> p0);
					/*
					 * int[] sort(Object[], int, int, Comparator);
					 */
					::net::sourceforge::jnipp::JIntArrayHelper<1> sort(::net::sourceforge::jnipp::PA<::java::lang::ObjectProxy>::ProxyArray<1> p0, jint p1, jint p2, ::java::util::ComparatorProxy p3);
					/*
					 * int[] sort(Object[], Comparator);
					 */
					::net::sourceforge::jnipp::JIntArrayHelper<1> sort(::net::sourceforge::jnipp::PA<::java::lang::ObjectProxy>::ProxyArray<1> p0, ::java::util::ComparatorProxy p1);
					/*
					 * int[] sort(List);
					 */
					::net::sourceforge::jnipp::JIntArrayHelper<1> sort(::java::util::ListProxy p0);
					/*
					 * int[] sort(List, Comparator);
					 */
					::net::sourceforge::jnipp::JIntArrayHelper<1> sort(::java::util::ListProxy p0, ::java::util::ComparatorProxy p1);

				};
			}
		}
	}
}


#endif
