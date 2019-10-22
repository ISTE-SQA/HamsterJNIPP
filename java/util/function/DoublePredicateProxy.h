#ifndef __java_util_function_DoublePredicateProxy_H
#define __java_util_function_DoublePredicateProxy_H


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

namespace java
{
	namespace util
	{
		namespace function
		{
			class DoublePredicateProxy
			{
			private:
				static std::string className;
				static jclass objectClass;
				jobject peerObject;

			protected:
				DoublePredicateProxy(void* unused);
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
				DoublePredicateProxy(jobject obj);

				virtual ~DoublePredicateProxy();
				DoublePredicateProxy& operator=(const DoublePredicateProxy& rhs);

				// methods
				/*
				 * boolean test(double);
				 */
				jboolean test(jdouble p0);
				/*
				 * DoublePredicate and(DoublePredicate);
				 */
				::java::util::function::DoublePredicateProxy _and(::java::util::function::DoublePredicateProxy p0);
				/*
				 * DoublePredicate negate();
				 */
				::java::util::function::DoublePredicateProxy negate();
				/*
				 * DoublePredicate or(DoublePredicate);
				 */
				::java::util::function::DoublePredicateProxy _or(::java::util::function::DoublePredicateProxy p0);

			};
		}
	}
}


#endif
