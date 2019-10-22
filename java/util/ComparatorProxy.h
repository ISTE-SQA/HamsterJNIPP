#ifndef __java_util_ComparatorProxy_H
#define __java_util_ComparatorProxy_H


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
#include "java\util\function\FunctionProxyForward.h"
#include "java\util\function\ToDoubleFunctionProxyForward.h"
#include "java\util\function\ToIntFunctionProxyForward.h"
#include "java\util\function\ToLongFunctionProxyForward.h"

namespace java
{
	namespace util
	{
		class ComparatorProxy
		{
		private:
			static std::string className;
			static jclass objectClass;
			jobject peerObject;

		protected:
			ComparatorProxy(void* unused);
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
			ComparatorProxy(jobject obj);

			virtual ~ComparatorProxy();
			ComparatorProxy& operator=(const ComparatorProxy& rhs);

			// methods
			/*
			 * boolean equals(Object);
			 */
			jboolean equals(::java::lang::ObjectProxy p0);
			/*
			 * int compare(Object, Object);
			 */
			jint compare(::java::lang::ObjectProxy p0, ::java::lang::ObjectProxy p1);
			/*
			 * Comparator reversed();
			 */
			::java::util::ComparatorProxy reversed();
			/*
			 * Comparator thenComparing(Comparator);
			 */
			::java::util::ComparatorProxy thenComparing(::java::util::ComparatorProxy p0);
			/*
			 * Comparator thenComparing(Function);
			 */
			::java::util::ComparatorProxy thenComparing(::java::util::function::FunctionProxy p0);
			/*
			 * Comparator thenComparing(Function, Comparator);
			 */
			::java::util::ComparatorProxy thenComparing(::java::util::function::FunctionProxy p0, ::java::util::ComparatorProxy p1);
			/*
			 * Comparator thenComparingDouble(ToDoubleFunction);
			 */
			::java::util::ComparatorProxy thenComparingDouble(::java::util::function::ToDoubleFunctionProxy p0);
			/*
			 * Comparator thenComparingInt(ToIntFunction);
			 */
			::java::util::ComparatorProxy thenComparingInt(::java::util::function::ToIntFunctionProxy p0);
			/*
			 * Comparator thenComparingLong(ToLongFunction);
			 */
			::java::util::ComparatorProxy thenComparingLong(::java::util::function::ToLongFunctionProxy p0);
			/*
			 * static Comparator comparing(Function);
			 */
			static ::java::util::ComparatorProxy comparing(::java::util::function::FunctionProxy p0);
			/*
			 * static Comparator comparing(Function, Comparator);
			 */
			static ::java::util::ComparatorProxy comparing(::java::util::function::FunctionProxy p0, ::java::util::ComparatorProxy p1);
			/*
			 * static Comparator comparingDouble(ToDoubleFunction);
			 */
			static ::java::util::ComparatorProxy comparingDouble(::java::util::function::ToDoubleFunctionProxy p0);
			/*
			 * static Comparator comparingInt(ToIntFunction);
			 */
			static ::java::util::ComparatorProxy comparingInt(::java::util::function::ToIntFunctionProxy p0);
			/*
			 * static Comparator comparingLong(ToLongFunction);
			 */
			static ::java::util::ComparatorProxy comparingLong(::java::util::function::ToLongFunctionProxy p0);
			/*
			 * static Comparator naturalOrder();
			 */
			static ::java::util::ComparatorProxy naturalOrder();
			/*
			 * static Comparator nullsFirst(Comparator);
			 */
			static ::java::util::ComparatorProxy nullsFirst(::java::util::ComparatorProxy p0);
			/*
			 * static Comparator nullsLast(Comparator);
			 */
			static ::java::util::ComparatorProxy nullsLast(::java::util::ComparatorProxy p0);
			/*
			 * static Comparator reverseOrder();
			 */
			static ::java::util::ComparatorProxy reverseOrder();

		};
	}
}


#endif
