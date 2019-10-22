#ifndef __java_util_OptionalDoubleProxy_H
#define __java_util_OptionalDoubleProxy_H


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
#include "java\util\function\DoubleSupplierProxyForward.h"
#include "java\util\function\SupplierProxyForward.h"
#include "java\util\function\DoubleConsumerProxyForward.h"

namespace java
{
	namespace util
	{
		class OptionalDoubleProxy
		{
		private:
			static std::string className;
			static jclass objectClass;
			jobject peerObject;

		protected:
			OptionalDoubleProxy(void* unused);
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
			OptionalDoubleProxy(jobject obj);

			virtual ~OptionalDoubleProxy();
			OptionalDoubleProxy& operator=(const OptionalDoubleProxy& rhs);

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
			 * double getAsDouble();
			 */
			jdouble getAsDouble();
			/*
			 * double orElse(double);
			 */
			jdouble orElse(jdouble p0);
			/*
			 * double orElseGet(DoubleSupplier);
			 */
			jdouble orElseGet(::java::util::function::DoubleSupplierProxy p0);
			/*
			 * double orElseThrow(Supplier);
			 */
			jdouble orElseThrow(::java::util::function::SupplierProxy p0);
			/*
			 * int hashCode();
			 */
			jint hashCode();
			/*
			 * String toString();
			 */
			::net::sourceforge::jnipp::JStringHelper toString();
			/*
			 * static OptionalDouble empty();
			 */
			static ::java::util::OptionalDoubleProxy empty();
			/*
			 * static OptionalDouble of(double);
			 */
			static ::java::util::OptionalDoubleProxy of(jdouble p0);
			/*
			 * void ifPresent(DoubleConsumer);
			 */
			void ifPresent(::java::util::function::DoubleConsumerProxy p0);

		};
	}
}


#endif
