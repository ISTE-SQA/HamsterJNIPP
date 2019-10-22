#ifndef __java_util_Map_EntryProxy_H
#define __java_util_Map_EntryProxy_H


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
#include "java\util\ComparatorProxyForward.h"

namespace java
{
	namespace util
	{
		class Map_EntryProxy
		{
		private:
			static std::string className;
			static jclass objectClass;
			jobject peerObject;

		protected:
			Map_EntryProxy(void* unused);
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
			Map_EntryProxy(jobject obj);

			virtual ~Map_EntryProxy();
			Map_EntryProxy& operator=(const Map_EntryProxy& rhs);

			// methods
			/*
			 * boolean equals(Object);
			 */
			jboolean equals(::java::lang::ObjectProxy p0);
			/*
			 * int hashCode();
			 */
			jint hashCode();
			/*
			 * Object getKey();
			 */
			::java::lang::ObjectProxy getKey();
			/*
			 * Object getValue();
			 */
			::java::lang::ObjectProxy getValue();
			/*
			 * Object setValue(Object);
			 */
			::java::lang::ObjectProxy setValue(::java::lang::ObjectProxy p0);
			/*
			 * static Comparator comparingByKey();
			 */
			static ::java::util::ComparatorProxy comparingByKey();
			/*
			 * static Comparator comparingByKey(Comparator);
			 */
			static ::java::util::ComparatorProxy comparingByKey(::java::util::ComparatorProxy p0);
			/*
			 * static Comparator comparingByValue();
			 */
			static ::java::util::ComparatorProxy comparingByValue();
			/*
			 * static Comparator comparingByValue(Comparator);
			 */
			static ::java::util::ComparatorProxy comparingByValue(::java::util::ComparatorProxy p0);

		};
	}
}


#endif
