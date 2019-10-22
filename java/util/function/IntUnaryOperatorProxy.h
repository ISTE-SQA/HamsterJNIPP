#ifndef __java_util_function_IntUnaryOperatorProxy_H
#define __java_util_function_IntUnaryOperatorProxy_H


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
			class IntUnaryOperatorProxy
			{
			private:
				static std::string className;
				static jclass objectClass;
				jobject peerObject;

			protected:
				IntUnaryOperatorProxy(void* unused);
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
				IntUnaryOperatorProxy(jobject obj);

				virtual ~IntUnaryOperatorProxy();
				IntUnaryOperatorProxy& operator=(const IntUnaryOperatorProxy& rhs);

				// methods
				/*
				 * int applyAsInt(int);
				 */
				jint applyAsInt(jint p0);
				/*
				 * IntUnaryOperator andThen(IntUnaryOperator);
				 */
				::java::util::function::IntUnaryOperatorProxy andThen(::java::util::function::IntUnaryOperatorProxy p0);
				/*
				 * IntUnaryOperator compose(IntUnaryOperator);
				 */
				::java::util::function::IntUnaryOperatorProxy compose(::java::util::function::IntUnaryOperatorProxy p0);
				/*
				 * static IntUnaryOperator identity();
				 */
				static ::java::util::function::IntUnaryOperatorProxy identity();

			};
		}
	}
}


#endif
