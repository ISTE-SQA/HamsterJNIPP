#ifndef __java_util_RandomProxy_H
#define __java_util_RandomProxy_H


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
#include "java\util\stream\DoubleStreamProxyForward.h"
#include "java\util\stream\IntStreamProxyForward.h"
#include "java\util\stream\LongStreamProxyForward.h"
#include "java\util\concurrent\atomic\AtomicLongProxyForward.h"
#include "sun\misc\UnsafeProxyForward.h"
#include "java\io\ObjectStreamFieldProxy.h"

namespace java
{
	namespace util
	{
		class RandomProxy
		{
		private:
			static std::string className;
			static jclass objectClass;
			jobject peerObject;

		protected:
			RandomProxy(void* unused);
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
			RandomProxy(jobject obj);
			RandomProxy();
			RandomProxy(jlong p0);

			virtual ~RandomProxy();
			RandomProxy& operator=(const RandomProxy& rhs);

			// methods
			/*
			 * boolean nextBoolean();
			 */
			jboolean nextBoolean();
			/*
			 * double nextDouble();
			 */
			jdouble nextDouble();
			/*
			 * float nextFloat();
			 */
			jfloat nextFloat();
			/*
			 * int nextInt();
			 */
			jint nextInt();
			/*
			 * int nextInt(int);
			 */
			jint nextInt(jint p0);
			/*
			 * DoubleStream doubles();
			 */
			::java::util::stream::DoubleStreamProxy doubles();
			/*
			 * DoubleStream doubles(double, double);
			 */
			::java::util::stream::DoubleStreamProxy doubles(jdouble p0, jdouble p1);
			/*
			 * DoubleStream doubles(long);
			 */
			::java::util::stream::DoubleStreamProxy doubles(jlong p0);
			/*
			 * DoubleStream doubles(long, double, double);
			 */
			::java::util::stream::DoubleStreamProxy doubles(jlong p0, jdouble p1, jdouble p2);
			/*
			 * IntStream ints();
			 */
			::java::util::stream::IntStreamProxy ints();
			/*
			 * IntStream ints(int, int);
			 */
			::java::util::stream::IntStreamProxy ints(jint p0, jint p1);
			/*
			 * IntStream ints(long);
			 */
			::java::util::stream::IntStreamProxy ints(jlong p0);
			/*
			 * IntStream ints(long, int, int);
			 */
			::java::util::stream::IntStreamProxy ints(jlong p0, jint p1, jint p2);
			/*
			 * LongStream longs();
			 */
			::java::util::stream::LongStreamProxy longs();
			/*
			 * LongStream longs(long);
			 */
			::java::util::stream::LongStreamProxy longs(jlong p0);
			/*
			 * LongStream longs(long, long);
			 */
			::java::util::stream::LongStreamProxy longs(jlong p0, jlong p1);
			/*
			 * LongStream longs(long, long, long);
			 */
			::java::util::stream::LongStreamProxy longs(jlong p0, jlong p1, jlong p2);
			/*
			 * long nextLong();
			 */
			jlong nextLong();
			/*
			 * double nextGaussian();
			 */
			jdouble nextGaussian();
			/*
			 * void setSeed(long);
			 */
			void setSeed(jlong p0);
			/*
			 * void nextBytes(byte[]);
			 */
			void nextBytes(::net::sourceforge::jnipp::JByteArrayHelper<1> p0);

		};
	}
}


#endif
