#ifndef __java_util_concurrent_SemaphoreProxy_H
#define __java_util_concurrent_SemaphoreProxy_H


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
#include "java\util\concurrent\Semaphore_SyncProxyForward.h"

namespace java
{
	namespace util
	{
		namespace concurrent
		{
			class SemaphoreProxy
			{
			private:
				static std::string className;
				static jclass objectClass;
				jobject peerObject;

			protected:
				SemaphoreProxy(void* unused);
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
				SemaphoreProxy(jobject obj);
				SemaphoreProxy(jint p0);
				SemaphoreProxy(jint p0, jboolean p1);

				virtual ~SemaphoreProxy();
				SemaphoreProxy& operator=(const SemaphoreProxy& rhs);

				// methods
				/*
				 * boolean isFair();
				 */
				jboolean isFair();
				/*
				 * boolean tryAcquire();
				 */
				jboolean tryAcquire();
				/*
				 * boolean tryAcquire(int);
				 */
				jboolean tryAcquire(jint p0);
				/*
				 * boolean tryAcquire(int, long, TimeUnit);
				 */
				jboolean tryAcquire(jint p0, jlong p1, ::java::util::concurrent::TimeUnitProxy p2);
				/*
				 * boolean tryAcquire(long, TimeUnit);
				 */
				jboolean tryAcquire(jlong p0, ::java::util::concurrent::TimeUnitProxy p1);
				/*
				 * boolean hasQueuedThreads();
				 */
				jboolean hasQueuedThreads();
				/*
				 * int getQueueLength();
				 */
				jint getQueueLength();
				/*
				 * int availablePermits();
				 */
				jint availablePermits();
				/*
				 * int drainPermits();
				 */
				jint drainPermits();
				/*
				 * String toString();
				 */
				::net::sourceforge::jnipp::JStringHelper toString();
				/*
				 * void acquire();
				 */
				void acquire();
				/*
				 * void acquire(int);
				 */
				void acquire(jint p0);
				/*
				 * void acquireUninterruptibly();
				 */
				void acquireUninterruptibly();
				/*
				 * void acquireUninterruptibly(int);
				 */
				void acquireUninterruptibly(jint p0);
				/*
				 * void release();
				 */
				void release();
				/*
				 * void release(int);
				 */
				void release(jint p0);

			};
		}
	}
}


#endif
