#ifndef __java_util_concurrent_ExecutorServiceProxy_H
#define __java_util_concurrent_ExecutorServiceProxy_H


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
#include "java\util\concurrent\TimeUnitProxyForward.h"
#include "java\util\CollectionProxyForward.h"
#include "java\lang\ObjectProxyForward.h"
#include "java\util\ListProxyForward.h"
#include "java\lang\RunnableProxyForward.h"
#include "java\util\concurrent\FutureProxyForward.h"
#include "java\util\concurrent\CallableProxyForward.h"

namespace java
{
	namespace util
	{
		namespace concurrent
		{
			class ExecutorServiceProxy
			{
			private:
				static std::string className;
				static jclass objectClass;
				jobject peerObject;

			protected:
				ExecutorServiceProxy(void* unused);
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
				ExecutorServiceProxy(jobject obj);

				virtual ~ExecutorServiceProxy();
				ExecutorServiceProxy& operator=(const ExecutorServiceProxy& rhs);

				// methods
				/*
				 * boolean awaitTermination(long, TimeUnit);
				 */
				jboolean awaitTermination(jlong p0, ::java::util::concurrent::TimeUnitProxy p1);
				/*
				 * boolean isShutdown();
				 */
				jboolean isShutdown();
				/*
				 * boolean isTerminated();
				 */
				jboolean isTerminated();
				/*
				 * Object invokeAny(Collection);
				 */
				::java::lang::ObjectProxy invokeAny(::java::util::CollectionProxy p0);
				/*
				 * Object invokeAny(Collection, long, TimeUnit);
				 */
				::java::lang::ObjectProxy invokeAny(::java::util::CollectionProxy p0, jlong p1, ::java::util::concurrent::TimeUnitProxy p2);
				/*
				 * List invokeAll(Collection);
				 */
				::java::util::ListProxy invokeAll(::java::util::CollectionProxy p0);
				/*
				 * List invokeAll(Collection, long, TimeUnit);
				 */
				::java::util::ListProxy invokeAll(::java::util::CollectionProxy p0, jlong p1, ::java::util::concurrent::TimeUnitProxy p2);
				/*
				 * List shutdownNow();
				 */
				::java::util::ListProxy shutdownNow();
				/*
				 * Future submit(Runnable);
				 */
				::java::util::concurrent::FutureProxy submit(::java::lang::RunnableProxy p0);
				/*
				 * Future submit(Runnable, Object);
				 */
				::java::util::concurrent::FutureProxy submit(::java::lang::RunnableProxy p0, ::java::lang::ObjectProxy p1);
				/*
				 * Future submit(Callable);
				 */
				::java::util::concurrent::FutureProxy submit(::java::util::concurrent::CallableProxy p0);
				/*
				 * void shutdown();
				 */
				void shutdown();

			};
		}
	}
}


#endif
