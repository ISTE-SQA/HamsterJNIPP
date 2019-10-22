#ifndef __java_util_concurrent_atomic_AtomicLongProxy_H
#define __java_util_concurrent_atomic_AtomicLongProxy_H


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
#include "java\util\function\LongBinaryOperatorProxyForward.h"
#include "java\util\function\LongUnaryOperatorProxyForward.h"
#include "sun\misc\UnsafeProxyForward.h"

namespace java
{
	namespace util
	{
		namespace concurrent
		{
			namespace atomic
			{
				class AtomicLongProxy
				{
				private:
					static std::string className;
					static jclass objectClass;
					jobject peerObject;

				protected:
					AtomicLongProxy(void* unused);
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
					AtomicLongProxy(jobject obj);
					AtomicLongProxy();
					AtomicLongProxy(jlong p0);

					virtual ~AtomicLongProxy();
					AtomicLongProxy& operator=(const AtomicLongProxy& rhs);

					// methods
					/*
					 * double doubleValue();
					 */
					jdouble doubleValue();
					/*
					 * boolean compareAndSet(long, long);
					 */
					jboolean compareAndSet(jlong p0, jlong p1);
					/*
					 * boolean weakCompareAndSet(long, long);
					 */
					jboolean weakCompareAndSet(jlong p0, jlong p1);
					/*
					 * long accumulateAndGet(long, LongBinaryOperator);
					 */
					jlong accumulateAndGet(jlong p0, ::java::util::function::LongBinaryOperatorProxy p1);
					/*
					 * long addAndGet(long);
					 */
					jlong addAndGet(jlong p0);
					/*
					 * long decrementAndGet();
					 */
					jlong decrementAndGet();
					/*
					 * long get();
					 */
					jlong get();
					/*
					 * long getAndAccumulate(long, LongBinaryOperator);
					 */
					jlong getAndAccumulate(jlong p0, ::java::util::function::LongBinaryOperatorProxy p1);
					/*
					 * long getAndAdd(long);
					 */
					jlong getAndAdd(jlong p0);
					/*
					 * long getAndDecrement();
					 */
					jlong getAndDecrement();
					/*
					 * long getAndIncrement();
					 */
					jlong getAndIncrement();
					/*
					 * long getAndSet(long);
					 */
					jlong getAndSet(jlong p0);
					/*
					 * long getAndUpdate(LongUnaryOperator);
					 */
					jlong getAndUpdate(::java::util::function::LongUnaryOperatorProxy p0);
					/*
					 * long incrementAndGet();
					 */
					jlong incrementAndGet();
					/*
					 * long updateAndGet(LongUnaryOperator);
					 */
					jlong updateAndGet(::java::util::function::LongUnaryOperatorProxy p0);
					/*
					 * void lazySet(long);
					 */
					void lazySet(jlong p0);
					/*
					 * void set(long);
					 */
					void set(jlong p0);
					/*
					 * float floatValue();
					 */
					jfloat floatValue();
					/*
					 * int intValue();
					 */
					jint intValue();
					/*
					 * String toString();
					 */
					::net::sourceforge::jnipp::JStringHelper toString();
					/*
					 * long longValue();
					 */
					jlong longValue();

				};
			}
		}
	}
}


#endif
