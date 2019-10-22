#ifndef __java_util_function_BiFunctionProxy_H
#define __java_util_function_BiFunctionProxy_H


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
#include "java\util\function\FunctionProxyForward.h"

namespace java
{
	namespace util
	{
		namespace function
		{
			class BiFunctionProxy
			{
			private:
				static std::string className;
				static jclass objectClass;
				jobject peerObject;

			protected:
				BiFunctionProxy(void* unused);
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
				BiFunctionProxy(jobject obj);

				virtual ~BiFunctionProxy();
				BiFunctionProxy& operator=(const BiFunctionProxy& rhs);

				// methods
				/*
				 * Object apply(Object, Object);
				 */
				::java::lang::ObjectProxy apply(::java::lang::ObjectProxy p0, ::java::lang::ObjectProxy p1);
				/*
				 * BiFunction andThen(Function);
				 */
				::java::util::function::BiFunctionProxy andThen(::java::util::function::FunctionProxy p0);

			};
		}
	}
}


#endif
