#ifndef __java_util_function_PredicateProxy_H
#define __java_util_function_PredicateProxy_H


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

namespace java
{
	namespace util
	{
		namespace function
		{
			class PredicateProxy
			{
			private:
				static std::string className;
				static jclass objectClass;
				jobject peerObject;

			protected:
				PredicateProxy(void* unused);
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
				PredicateProxy(jobject obj);

				virtual ~PredicateProxy();
				PredicateProxy& operator=(const PredicateProxy& rhs);

				// methods
				/*
				 * boolean test(Object);
				 */
				jboolean test(::java::lang::ObjectProxy p0);
				/*
				 * Predicate and(Predicate);
				 */
				::java::util::function::PredicateProxy _and(::java::util::function::PredicateProxy p0);
				/*
				 * Predicate negate();
				 */
				::java::util::function::PredicateProxy negate();
				/*
				 * Predicate or(Predicate);
				 */
				::java::util::function::PredicateProxy _or(::java::util::function::PredicateProxy p0);
				/*
				 * static Predicate isEqual(Object);
				 */
				static ::java::util::function::PredicateProxy isEqual(::java::lang::ObjectProxy p0);

			};
		}
	}
}


#endif
