#ifndef __java_util_function_LongBinaryOperatorProxy_H
#define __java_util_function_LongBinaryOperatorProxy_H


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
			class LongBinaryOperatorProxy
			{
			private:
				static std::string className;
				static jclass objectClass;
				jobject peerObject;

			protected:
				LongBinaryOperatorProxy(void* unused);
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
				LongBinaryOperatorProxy(jobject obj);

				virtual ~LongBinaryOperatorProxy();
				LongBinaryOperatorProxy& operator=(const LongBinaryOperatorProxy& rhs);

				// methods
				/*
				 * long applyAsLong(long, long);
				 */
				jlong applyAsLong(jlong p0, jlong p1);

			};
		}
	}
}


#endif
