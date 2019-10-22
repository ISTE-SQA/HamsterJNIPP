#ifndef __java_util_concurrent_atomic_AtomicIntegerProxy_H
#define __java_util_concurrent_atomic_AtomicIntegerProxy_H


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
#include "java\util\function\IntBinaryOperatorProxyForward.h"
#include "java\util\function\IntUnaryOperatorProxyForward.h"
#include "sun\misc\UnsafeProxyForward.h"

namespace java
{
	namespace util
	{
		namespace concurrent
		{
			namespace atomic
			{
				class AtomicIntegerProxy
				{
				private:
					static std::string className;
					static jclass objectClass;
					jobject peerObject;

				protected:
					AtomicIntegerProxy(void* unused);
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
					AtomicIntegerProxy(jobject obj);
					AtomicIntegerProxy();
					AtomicIntegerProxy(jint p0);

					virtual ~AtomicIntegerProxy();
					AtomicIntegerProxy& operator=(const AtomicIntegerProxy& rhs);

					// methods
					/*
					 * double doubleValue();
					 */
					jdouble doubleValue();
					/*
					 * boolean compareAndSet(int, int);
					 */
					jboolean compareAndSet(jint p0, jint p1);
					/*
					 * boolean weakCompareAndSet(int, int);
					 */
					jboolean weakCompareAndSet(jint p0, jint p1);
					/*
					 * int accumulateAndGet(int, IntBinaryOperator);
					 */
					jint accumulateAndGet(jint p0, ::java::util::function::IntBinaryOperatorProxy p1);
					/*
					 * int addAndGet(int);
					 */
					jint addAndGet(jint p0);
					/*
					 * int decrementAndGet();
					 */
					jint decrementAndGet();
					/*
					 * int get();
					 */
					jint get();
					/*
					 * int getAndAccumulate(int, IntBinaryOperator);
					 */
					jint getAndAccumulate(jint p0, ::java::util::function::IntBinaryOperatorProxy p1);
					/*
					 * int getAndAdd(int);
					 */
					jint getAndAdd(jint p0);
					/*
					 * int getAndDecrement();
					 */
					jint getAndDecrement();
					/*
					 * int getAndIncrement();
					 */
					jint getAndIncrement();
					/*
					 * int getAndSet(int);
					 */
					jint getAndSet(jint p0);
					/*
					 * int getAndUpdate(IntUnaryOperator);
					 */
					jint getAndUpdate(::java::util::function::IntUnaryOperatorProxy p0);
					/*
					 * int incrementAndGet();
					 */
					jint incrementAndGet();
					/*
					 * int updateAndGet(IntUnaryOperator);
					 */
					jint updateAndGet(::java::util::function::IntUnaryOperatorProxy p0);
					/*
					 * void lazySet(int);
					 */
					void lazySet(jint p0);
					/*
					 * void set(int);
					 */
					void set(jint p0);
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
