#ifndef __java_util_concurrent_FutureProxy_H
#define __java_util_concurrent_FutureProxy_H


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
#include "java\util\concurrent\TimeUnitProxyForward.h"

namespace java
{
	namespace util
	{
		namespace concurrent
		{
			class FutureProxy
			{
			private:
				static std::string className;
				static jclass objectClass;
				jobject peerObject;

			protected:
				FutureProxy(void* unused);
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
				FutureProxy(jobject obj);

				virtual ~FutureProxy();
				FutureProxy& operator=(const FutureProxy& rhs);

				// methods
				/*
				 * boolean cancel(boolean);
				 */
				jboolean cancel(jboolean p0);
				/*
				 * boolean isCancelled();
				 */
				jboolean isCancelled();
				/*
				 * boolean isDone();
				 */
				jboolean isDone();
				/*
				 * Object get();
				 */
				::java::lang::ObjectProxy get();
				/*
				 * Object get(long, TimeUnit);
				 */
				::java::lang::ObjectProxy get(jlong p0, ::java::util::concurrent::TimeUnitProxy p1);

			};
		}
	}
}


#endif
