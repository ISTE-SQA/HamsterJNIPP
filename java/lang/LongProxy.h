#ifndef __java_lang_LongProxy_H
#define __java_lang_LongProxy_H


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
#include "java\lang\ClassProxyForward.h"

namespace java
{
	namespace lang
	{
		class LongProxy
		{
		private:
			static std::string className;
			static jclass objectClass;
			jobject peerObject;

		protected:
			LongProxy(void* unused);
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
			LongProxy(jobject obj);
			LongProxy(::net::sourceforge::jnipp::JStringHelper p0);
			LongProxy(jlong p0);

			virtual ~LongProxy();
			LongProxy& operator=(const LongProxy& rhs);

			// methods
			/*
			 * boolean equals(Object);
			 */
			jboolean equals(::java::lang::ObjectProxy p0);
			/*
			 * byte byteValue();
			 */
			jbyte byteValue();
			/*
			 * double doubleValue();
			 */
			jdouble doubleValue();
			/*
			 * float floatValue();
			 */
			jfloat floatValue();
			/*
			 * int compareTo(Long);
			 */
			jint compareTo(::java::lang::LongProxy p0);
			/*
			 * int hashCode();
			 */
			jint hashCode();
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
			/*
			 * short shortValue();
			 */
			jshort shortValue();
			/*
			 * static int bitCount(long);
			 */
			static jint bitCount(jlong p0);
			/*
			 * static int compare(long, long);
			 */
			static jint compare(jlong p0, jlong p1);
			/*
			 * static int compareUnsigned(long, long);
			 */
			static jint compareUnsigned(jlong p0, jlong p1);
			/*
			 * static int hashCode(long);
			 */
			static jint hashCode(jlong p0);
			/*
			 * static int numberOfLeadingZeros(long);
			 */
			static jint numberOfLeadingZeros(jlong p0);
			/*
			 * static int numberOfTrailingZeros(long);
			 */
			static jint numberOfTrailingZeros(jlong p0);
			/*
			 * static int signum(long);
			 */
			static jint signum(jlong p0);
			/*
			 * static Long decode(String);
			 */
			static ::java::lang::LongProxy decode(::net::sourceforge::jnipp::JStringHelper p0);
			/*
			 * static Long getLong(String);
			 */
			static ::java::lang::LongProxy getLong(::net::sourceforge::jnipp::JStringHelper p0);
			/*
			 * static Long getLong(String, Long);
			 */
			static ::java::lang::LongProxy getLong(::net::sourceforge::jnipp::JStringHelper p0, ::java::lang::LongProxy p1);
			/*
			 * static Long getLong(String, long);
			 */
			static ::java::lang::LongProxy getLong(::net::sourceforge::jnipp::JStringHelper p0, jlong p1);
			/*
			 * static Long valueOf(String);
			 */
			static ::java::lang::LongProxy valueOf(::net::sourceforge::jnipp::JStringHelper p0);
			/*
			 * static Long valueOf(String, int);
			 */
			static ::java::lang::LongProxy valueOf(::net::sourceforge::jnipp::JStringHelper p0, jint p1);
			/*
			 * static Long valueOf(long);
			 */
			static ::java::lang::LongProxy valueOf(jlong p0);
			/*
			 * static String toBinaryString(long);
			 */
			static ::net::sourceforge::jnipp::JStringHelper toBinaryString(jlong p0);
			/*
			 * static String toHexString(long);
			 */
			static ::net::sourceforge::jnipp::JStringHelper toHexString(jlong p0);
			/*
			 * static String toOctalString(long);
			 */
			static ::net::sourceforge::jnipp::JStringHelper toOctalString(jlong p0);
			/*
			 * static String toString(long);
			 */
			static ::net::sourceforge::jnipp::JStringHelper toString(jlong p0);
			/*
			 * static String toString(long, int);
			 */
			static ::net::sourceforge::jnipp::JStringHelper toString(jlong p0, jint p1);
			/*
			 * static String toUnsignedString(long);
			 */
			static ::net::sourceforge::jnipp::JStringHelper toUnsignedString(jlong p0);
			/*
			 * static String toUnsignedString(long, int);
			 */
			static ::net::sourceforge::jnipp::JStringHelper toUnsignedString(jlong p0, jint p1);
			/*
			 * static long divideUnsigned(long, long);
			 */
			static jlong divideUnsigned(jlong p0, jlong p1);
			/*
			 * static long highestOneBit(long);
			 */
			static jlong highestOneBit(jlong p0);
			/*
			 * static long lowestOneBit(long);
			 */
			static jlong lowestOneBit(jlong p0);
			/*
			 * static long max(long, long);
			 */
			static jlong max(jlong p0, jlong p1);
			/*
			 * static long min(long, long);
			 */
			static jlong min(jlong p0, jlong p1);
			/*
			 * static long parseLong(String);
			 */
			static jlong parseLong(::net::sourceforge::jnipp::JStringHelper p0);
			/*
			 * static long parseLong(String, int);
			 */
			static jlong parseLong(::net::sourceforge::jnipp::JStringHelper p0, jint p1);
			/*
			 * static long parseUnsignedLong(String);
			 */
			static jlong parseUnsignedLong(::net::sourceforge::jnipp::JStringHelper p0);
			/*
			 * static long parseUnsignedLong(String, int);
			 */
			static jlong parseUnsignedLong(::net::sourceforge::jnipp::JStringHelper p0, jint p1);
			/*
			 * static long remainderUnsigned(long, long);
			 */
			static jlong remainderUnsigned(jlong p0, jlong p1);
			/*
			 * static long reverse(long);
			 */
			static jlong reverse(jlong p0);
			/*
			 * static long reverseBytes(long);
			 */
			static jlong reverseBytes(jlong p0);
			/*
			 * static long rotateLeft(long, int);
			 */
			static jlong rotateLeft(jlong p0, jint p1);
			/*
			 * static long rotateRight(long, int);
			 */
			static jlong rotateRight(jlong p0, jint p1);
			/*
			 * static long sum(long, long);
			 */
			static jlong sum(jlong p0, jlong p1);

		};
	}
}


#endif
