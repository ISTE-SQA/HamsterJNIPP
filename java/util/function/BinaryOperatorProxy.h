#ifndef __java_util_function_BinaryOperatorProxy_H
#define __java_util_function_BinaryOperatorProxy_H


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
#include "java\util\ComparatorProxyForward.h"

namespace java
{
	namespace util
	{
		namespace function
		{
			class BinaryOperatorProxy
			{
			private:
				static std::string className;
				static jclass objectClass;
				jobject peerObject;

			protected:
				BinaryOperatorProxy(void* unused);
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
				BinaryOperatorProxy(jobject obj);

				virtual ~BinaryOperatorProxy();
				BinaryOperatorProxy& operator=(const BinaryOperatorProxy& rhs);

				// methods
				/*
				 * static BinaryOperator maxBy(Comparator);
				 */
				static ::java::util::function::BinaryOperatorProxy maxBy(::java::util::ComparatorProxy p0);
				/*
				 * static BinaryOperator minBy(Comparator);
				 */
				static ::java::util::function::BinaryOperatorProxy minBy(::java::util::ComparatorProxy p0);

			};
		}
	}
}


#endif
