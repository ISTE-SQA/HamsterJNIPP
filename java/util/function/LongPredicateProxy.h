#ifndef __java_util_function_LongPredicateProxy_H
#define __java_util_function_LongPredicateProxy_H


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
			class LongPredicateProxy
			{
			private:
				static std::string className;
				static jclass objectClass;
				jobject peerObject;

			protected:
				LongPredicateProxy(void* unused);
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
				LongPredicateProxy(jobject obj);

				virtual ~LongPredicateProxy();
				LongPredicateProxy& operator=(const LongPredicateProxy& rhs);

				// methods
				/*
				 * boolean test(long);
				 */
				jboolean test(jlong p0);
				/*
				 * LongPredicate and(LongPredicate);
				 */
				::java::util::function::LongPredicateProxy _and(::java::util::function::LongPredicateProxy p0);
				/*
				 * LongPredicate negate();
				 */
				::java::util::function::LongPredicateProxy negate();
				/*
				 * LongPredicate or(LongPredicate);
				 */
				::java::util::function::LongPredicateProxy _or(::java::util::function::LongPredicateProxy p0);

			};
		}
	}
}


#endif
