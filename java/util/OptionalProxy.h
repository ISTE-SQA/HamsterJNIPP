#ifndef __java_util_OptionalProxy_H
#define __java_util_OptionalProxy_H


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
#include "java\util\function\SupplierProxyForward.h"
#include "java\util\function\PredicateProxyForward.h"
#include "java\util\function\FunctionProxyForward.h"
#include "java\util\function\ConsumerProxyForward.h"

namespace java
{
	namespace util
	{
		class OptionalProxy
		{
		private:
			static std::string className;
			static jclass objectClass;
			jobject peerObject;

		protected:
			OptionalProxy(void* unused);
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
			OptionalProxy(jobject obj);

			virtual ~OptionalProxy();
			OptionalProxy& operator=(const OptionalProxy& rhs);

			// methods
			/*
			 * boolean equals(Object);
			 */
			jboolean equals(::java::lang::ObjectProxy p0);
			/*
			 * boolean isPresent();
			 */
			jboolean isPresent();
			/*
			 * int hashCode();
			 */
			jint hashCode();
			/*
			 * Object get();
			 */
			::java::lang::ObjectProxy get();
			/*
			 * Object orElse(Object);
			 */
			::java::lang::ObjectProxy orElse(::java::lang::ObjectProxy p0);
			/*
			 * Object orElseGet(Supplier);
			 */
			::java::lang::ObjectProxy orElseGet(::java::util::function::SupplierProxy p0);
			/*
			 * Object orElseThrow(Supplier);
			 */
			::java::lang::ObjectProxy orElseThrow(::java::util::function::SupplierProxy p0);
			/*
			 * String toString();
			 */
			::net::sourceforge::jnipp::JStringHelper toString();
			/*
			 * Optional filter(Predicate);
			 */
			::java::util::OptionalProxy filter(::java::util::function::PredicateProxy p0);
			/*
			 * Optional flatMap(Function);
			 */
			::java::util::OptionalProxy flatMap(::java::util::function::FunctionProxy p0);
			/*
			 * Optional map(Function);
			 */
			::java::util::OptionalProxy map(::java::util::function::FunctionProxy p0);
			/*
			 * static Optional empty();
			 */
			static ::java::util::OptionalProxy empty();
			/*
			 * static Optional of(Object);
			 */
			static ::java::util::OptionalProxy of(::java::lang::ObjectProxy p0);
			/*
			 * static Optional ofNullable(Object);
			 */
			static ::java::util::OptionalProxy ofNullable(::java::lang::ObjectProxy p0);
			/*
			 * void ifPresent(Consumer);
			 */
			void ifPresent(::java::util::function::ConsumerProxy p0);

		};
	}
}


#endif
