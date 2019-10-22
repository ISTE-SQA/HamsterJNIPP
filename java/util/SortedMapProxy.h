#ifndef __java_util_SortedMapProxy_H
#define __java_util_SortedMapProxy_H


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
#include "java\util\ComparatorProxyForward.h"
#include "java\util\SetProxyForward.h"

namespace java
{
	namespace util
	{
		class SortedMapProxy
		{
		private:
			static std::string className;
			static jclass objectClass;
			jobject peerObject;

		protected:
			SortedMapProxy(void* unused);
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
			SortedMapProxy(jobject obj);

			virtual ~SortedMapProxy();
			SortedMapProxy& operator=(const SortedMapProxy& rhs);

			// methods
			/*
			 * Object firstKey();
			 */
			::java::lang::ObjectProxy firstKey();
			/*
			 * Object lastKey();
			 */
			::java::lang::ObjectProxy lastKey();
			/*
			 * Collection values();
			 */
			::java::util::CollectionProxy values();
			/*
			 * Comparator comparator();
			 */
			::java::util::ComparatorProxy comparator();
			/*
			 * Set entrySet();
			 */
			::java::util::SetProxy entrySet();
			/*
			 * Set keySet();
			 */
			::java::util::SetProxy keySet();
			/*
			 * SortedMap headMap(Object);
			 */
			::java::util::SortedMapProxy headMap(::java::lang::ObjectProxy p0);
			/*
			 * SortedMap subMap(Object, Object);
			 */
			::java::util::SortedMapProxy subMap(::java::lang::ObjectProxy p0, ::java::lang::ObjectProxy p1);
			/*
			 * SortedMap tailMap(Object);
			 */
			::java::util::SortedMapProxy tailMap(::java::lang::ObjectProxy p0);

		};
	}
}


#endif
