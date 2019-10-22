#ifndef __java_util_function_DoubleUnaryOperatorProxy_H
#define __java_util_function_DoubleUnaryOperatorProxy_H


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
			class DoubleUnaryOperatorProxy
			{
			private:
				static std::string className;
				static jclass objectClass;
				jobject peerObject;

			protected:
				DoubleUnaryOperatorProxy(void* unused);
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
				DoubleUnaryOperatorProxy(jobject obj);

				virtual ~DoubleUnaryOperatorProxy();
				DoubleUnaryOperatorProxy& operator=(const DoubleUnaryOperatorProxy& rhs);

				// methods
				/*
				 * double applyAsDouble(double);
				 */
				jdouble applyAsDouble(jdouble p0);
				/*
				 * DoubleUnaryOperator andThen(DoubleUnaryOperator);
				 */
				::java::util::function::DoubleUnaryOperatorProxy andThen(::java::util::function::DoubleUnaryOperatorProxy p0);
				/*
				 * DoubleUnaryOperator compose(DoubleUnaryOperator);
				 */
				::java::util::function::DoubleUnaryOperatorProxy compose(::java::util::function::DoubleUnaryOperatorProxy p0);
				/*
				 * static DoubleUnaryOperator identity();
				 */
				static ::java::util::function::DoubleUnaryOperatorProxy identity();

			};
		}
	}
}


#endif
