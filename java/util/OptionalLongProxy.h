#ifndef __java_util_OptionalLongProxy_H
#define __java_util_OptionalLongProxy_H


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
#include "java\util\function\LongSupplierProxyForward.h"
#include "java\util\function\SupplierProxyForward.h"
#include "java\util\function\LongConsumerProxyForward.h"

namespace java
{
	namespace util
	{
		class OptionalLongProxy
		{
		private:
			static std::string className;
			static jclass objectClass;
			jobject peerObject;

		protected:
			OptionalLongProxy(void* unused);
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
			OptionalLongProxy(jobject obj);

			virtual ~OptionalLongProxy();
			OptionalLongProxy& operator=(const OptionalLongProxy& rhs);

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
			 * String toString();
			 */
			::net::sourceforge::jnipp::JStringHelper toString();
			/*
			 * long getAsLong();
			 */
			jlong getAsLong();
			/*
			 * long orElse(long);
			 */
			jlong orElse(jlong p0);
			/*
			 * long orElseGet(LongSupplier);
			 */
			jlong orElseGet(::java::util::function::LongSupplierProxy p0);
			/*
			 * long orElseThrow(Supplier);
			 */
			jlong orElseThrow(::java::util::function::SupplierProxy p0);
			/*
			 * static OptionalLong empty();
			 */
			static ::java::util::OptionalLongProxy empty();
			/*
			 * static OptionalLong of(long);
			 */
			static ::java::util::OptionalLongProxy of(jlong p0);
			/*
			 * void ifPresent(LongConsumer);
			 */
			void ifPresent(::java::util::function::LongConsumerProxy p0);

		};
	}
}


#endif
