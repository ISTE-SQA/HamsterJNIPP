#ifndef __java_math_BigIntegerProxy_H
#define __java_math_BigIntegerProxy_H


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
#include "java\util\RandomProxyForward.h"
#include "java\lang\ObjectProxyForward.h"
#include "java\math\BigIntegerProxy.h"
#include "java\io\ObjectStreamFieldProxy.h"
#include "java\math\BigIntegerProxy.h"

namespace java
{
	namespace math
	{
		class BigIntegerProxy
		{
		private:
			static std::string className;
			static jclass objectClass;
			jobject peerObject;

		protected:
			BigIntegerProxy(void* unused);
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
			BigIntegerProxy(jobject obj);
			BigIntegerProxy(::net::sourceforge::jnipp::JByteArrayHelper<1> p0);
			BigIntegerProxy(jint p0, ::net::sourceforge::jnipp::JByteArrayHelper<1> p1);
			BigIntegerProxy(jint p0, jint p1, ::java::util::RandomProxy p2);
			BigIntegerProxy(jint p0, ::java::util::RandomProxy p1);
			BigIntegerProxy(::net::sourceforge::jnipp::JStringHelper p0);
			BigIntegerProxy(::net::sourceforge::jnipp::JStringHelper p0, jint p1);

			virtual ~BigIntegerProxy();
			BigIntegerProxy& operator=(const BigIntegerProxy& rhs);

			// methods
			/*
			 * boolean equals(Object);
			 */
			jboolean equals(::java::lang::ObjectProxy p0);
			/*
			 * boolean isProbablePrime(int);
			 */
			jboolean isProbablePrime(jint p0);
			/*
			 * boolean testBit(int);
			 */
			jboolean testBit(jint p0);
			/*
			 * byte byteValueExact();
			 */
			jbyte byteValueExact();
			/*
			 * byte[] toByteArray();
			 */
			::net::sourceforge::jnipp::JByteArrayHelper<1> toByteArray();
			/*
			 * double doubleValue();
			 */
			jdouble doubleValue();
			/*
			 * float floatValue();
			 */
			jfloat floatValue();
			/*
			 * int bitCount();
			 */
			jint bitCount();
			/*
			 * int bitLength();
			 */
			jint bitLength();
			/*
			 * int compareTo(BigInteger);
			 */
			jint compareTo(::java::math::BigIntegerProxy p0);
			/*
			 * int getLowestSetBit();
			 */
			jint getLowestSetBit();
			/*
			 * int hashCode();
			 */
			jint hashCode();
			/*
			 * int intValue();
			 */
			jint intValue();
			/*
			 * int intValueExact();
			 */
			jint intValueExact();
			/*
			 * int signum();
			 */
			jint signum();
			/*
			 * String toString();
			 */
			::net::sourceforge::jnipp::JStringHelper toString();
			/*
			 * String toString(int);
			 */
			::net::sourceforge::jnipp::JStringHelper toString(jint p0);
			/*
			 * BigInteger abs();
			 */
			::java::math::BigIntegerProxy abs();
			/*
			 * BigInteger add(BigInteger);
			 */
			::java::math::BigIntegerProxy add(::java::math::BigIntegerProxy p0);
			/*
			 * BigInteger and(BigInteger);
			 */
			::java::math::BigIntegerProxy _and(::java::math::BigIntegerProxy p0);
			/*
			 * BigInteger andNot(BigInteger);
			 */
			::java::math::BigIntegerProxy andNot(::java::math::BigIntegerProxy p0);
			/*
			 * BigInteger clearBit(int);
			 */
			::java::math::BigIntegerProxy clearBit(jint p0);
			/*
			 * BigInteger divide(BigInteger);
			 */
			::java::math::BigIntegerProxy divide(::java::math::BigIntegerProxy p0);
			/*
			 * BigInteger flipBit(int);
			 */
			::java::math::BigIntegerProxy flipBit(jint p0);
			/*
			 * BigInteger gcd(BigInteger);
			 */
			::java::math::BigIntegerProxy gcd(::java::math::BigIntegerProxy p0);
			/*
			 * BigInteger max(BigInteger);
			 */
			::java::math::BigIntegerProxy max(::java::math::BigIntegerProxy p0);
			/*
			 * BigInteger min(BigInteger);
			 */
			::java::math::BigIntegerProxy min(::java::math::BigIntegerProxy p0);
			/*
			 * BigInteger mod(BigInteger);
			 */
			::java::math::BigIntegerProxy mod(::java::math::BigIntegerProxy p0);
			/*
			 * BigInteger modInverse(BigInteger);
			 */
			::java::math::BigIntegerProxy modInverse(::java::math::BigIntegerProxy p0);
			/*
			 * BigInteger modPow(BigInteger, BigInteger);
			 */
			::java::math::BigIntegerProxy modPow(::java::math::BigIntegerProxy p0, ::java::math::BigIntegerProxy p1);
			/*
			 * BigInteger multiply(BigInteger);
			 */
			::java::math::BigIntegerProxy multiply(::java::math::BigIntegerProxy p0);
			/*
			 * BigInteger negate();
			 */
			::java::math::BigIntegerProxy negate();
			/*
			 * BigInteger nextProbablePrime();
			 */
			::java::math::BigIntegerProxy nextProbablePrime();
			/*
			 * BigInteger not();
			 */
			::java::math::BigIntegerProxy _not();
			/*
			 * BigInteger or(BigInteger);
			 */
			::java::math::BigIntegerProxy _or(::java::math::BigIntegerProxy p0);
			/*
			 * BigInteger pow(int);
			 */
			::java::math::BigIntegerProxy pow(jint p0);
			/*
			 * BigInteger remainder(BigInteger);
			 */
			::java::math::BigIntegerProxy remainder(::java::math::BigIntegerProxy p0);
			/*
			 * BigInteger setBit(int);
			 */
			::java::math::BigIntegerProxy setBit(jint p0);
			/*
			 * BigInteger shiftLeft(int);
			 */
			::java::math::BigIntegerProxy shiftLeft(jint p0);
			/*
			 * BigInteger shiftRight(int);
			 */
			::java::math::BigIntegerProxy shiftRight(jint p0);
			/*
			 * BigInteger subtract(BigInteger);
			 */
			::java::math::BigIntegerProxy subtract(::java::math::BigIntegerProxy p0);
			/*
			 * BigInteger xor(BigInteger);
			 */
			::java::math::BigIntegerProxy _xor(::java::math::BigIntegerProxy p0);
			/*
			 * BigInteger[] divideAndRemainder(BigInteger);
			 */
			::net::sourceforge::jnipp::PA<::java::math::BigIntegerProxy>::ProxyArray<1> divideAndRemainder(::java::math::BigIntegerProxy p0);
			/*
			 * long longValue();
			 */
			jlong longValue();
			/*
			 * long longValueExact();
			 */
			jlong longValueExact();
			/*
			 * short shortValueExact();
			 */
			jshort shortValueExact();
			/*
			 * static BigInteger probablePrime(int, Random);
			 */
			static ::java::math::BigIntegerProxy probablePrime(jint p0, ::java::util::RandomProxy p1);
			/*
			 * static BigInteger valueOf(long);
			 */
			static ::java::math::BigIntegerProxy valueOf(jlong p0);

		};
	}
}


#endif
