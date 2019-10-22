#ifndef __java_util_function_IntPredicateProxy_H
#define __java_util_function_IntPredicateProxy_H


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
			class IntPredicateProxy
			{
			private:
				static std::string className;
				static jclass objectClass;
				jobject peerObject;

			protected:
				IntPredicateProxy(void* unused);
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
				IntPredicateProxy(jobject obj);

				virtual ~IntPredicateProxy();
				IntPredicateProxy& operator=(const IntPredicateProxy& rhs);

				// methods
				/*
				 * boolean test(int);
				 */
				jboolean test(jint p0);
				/*
				 * IntPredicate and(IntPredicate);
				 */
				::java::util::function::IntPredicateProxy _and(::java::util::function::IntPredicateProxy p0);
				/*
				 * IntPredicate negate();
				 */
				::java::util::function::IntPredicateProxy negate();
				/*
				 * IntPredicate or(IntPredicate);
				 */
				::java::util::function::IntPredicateProxy _or(::java::util::function::IntPredicateProxy p0);

			};
		}
	}
}


#endif
