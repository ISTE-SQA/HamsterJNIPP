#ifndef __java_util_function_DoubleConsumerProxy_H
#define __java_util_function_DoubleConsumerProxy_H


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
			class DoubleConsumerProxy
			{
			private:
				static std::string className;
				static jclass objectClass;
				jobject peerObject;

			protected:
				DoubleConsumerProxy(void* unused);
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
				DoubleConsumerProxy(jobject obj);

				virtual ~DoubleConsumerProxy();
				DoubleConsumerProxy& operator=(const DoubleConsumerProxy& rhs);

				// methods
				/*
				 * void accept(double);
				 */
				void accept(jdouble p0);
				/*
				 * DoubleConsumer andThen(DoubleConsumer);
				 */
				::java::util::function::DoubleConsumerProxy andThen(::java::util::function::DoubleConsumerProxy p0);

			};
		}
	}
}


#endif
