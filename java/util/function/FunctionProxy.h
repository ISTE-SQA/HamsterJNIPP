#ifndef __java_util_function_FunctionProxy_H
#define __java_util_function_FunctionProxy_H


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
			class FunctionProxy
			{
			private:
				static std::string className;
				static jclass objectClass;
				jobject peerObject;

			protected:
				FunctionProxy(void* unused);
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
				FunctionProxy(jobject obj);

				virtual ~FunctionProxy();
				FunctionProxy& operator=(const FunctionProxy& rhs);

				// methods
				/*
				 * Object apply(Object);
				 */
				::java::lang::ObjectProxy apply(::java::lang::ObjectProxy p0);
				/*
				 * Function andThen(Function);
				 */
				::java::util::function::FunctionProxy andThen(::java::util::function::FunctionProxy p0);
				/*
				 * Function compose(Function);
				 */
				::java::util::function::FunctionProxy compose(::java::util::function::FunctionProxy p0);
				/*
				 * static Function identity();
				 */
				static ::java::util::function::FunctionProxy identity();

			};
		}
	}
}


#endif
