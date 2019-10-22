#ifndef __java_util_OptionalIntProxy_H
#define __java_util_OptionalIntProxy_H


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
#include "java\util\function\IntSupplierProxyForward.h"
#include "java\util\function\SupplierProxyForward.h"
#include "java\util\function\IntConsumerProxyForward.h"

namespace java
{
	namespace util
	{
		class OptionalIntProxy
		{
		private:
			static std::string className;
			static jclass objectClass;
			jobject peerObject;

		protected:
			OptionalIntProxy(void* unused);
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
			OptionalIntProxy(jobject obj);

			virtual ~OptionalIntProxy();
			OptionalIntProxy& operator=(const OptionalIntProxy& rhs);

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
			 * int getAsInt();
			 */
			jint getAsInt();
			/*
			 * int hashCode();
			 */
			jint hashCode();
			/*
			 * int orElse(int);
			 */
			jint orElse(jint p0);
			/*
			 * int orElseGet(IntSupplier);
			 */
			jint orElseGet(::java::util::function::IntSupplierProxy p0);
			/*
			 * int orElseThrow(Supplier);
			 */
			jint orElseThrow(::java::util::function::SupplierProxy p0);
			/*
			 * String toString();
			 */
			::net::sourceforge::jnipp::JStringHelper toString();
			/*
			 * static OptionalInt empty();
			 */
			static ::java::util::OptionalIntProxy empty();
			/*
			 * static OptionalInt of(int);
			 */
			static ::java::util::OptionalIntProxy of(jint p0);
			/*
			 * void ifPresent(IntConsumer);
			 */
			void ifPresent(::java::util::function::IntConsumerProxy p0);

		};
	}
}


#endif
