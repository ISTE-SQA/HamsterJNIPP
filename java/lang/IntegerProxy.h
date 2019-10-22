#ifndef __java_lang_IntegerProxy_H
#define __java_lang_IntegerProxy_H


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
		class IntegerProxy
		{
		private:
			static std::string className;
			static jclass objectClass;
			jobject peerObject;

		protected:
			IntegerProxy(void* unused);
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
			IntegerProxy(jobject obj);
			IntegerProxy(jint p0);
			IntegerProxy(::net::sourceforge::jnipp::JStringHelper p0);

			virtual ~IntegerProxy();
			IntegerProxy& operator=(const IntegerProxy& rhs);

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
			 * int compareTo(Integer);
			 */
			jint compareTo(::java::lang::IntegerProxy p0);
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
			 * static int bitCount(int);
			 */
			static jint bitCount(jint p0);
			/*
			 * static int compare(int, int);
			 */
			static jint compare(jint p0, jint p1);
			/*
			 * static int compareUnsigned(int, int);
			 */
			static jint compareUnsigned(jint p0, jint p1);
			/*
			 * static int divideUnsigned(int, int);
			 */
			static jint divideUnsigned(jint p0, jint p1);
			/*
			 * static int hashCode(int);
			 */
			static jint hashCode(jint p0);
			/*
			 * static int highestOneBit(int);
			 */
			static jint highestOneBit(jint p0);
			/*
			 * static int lowestOneBit(int);
			 */
			static jint lowestOneBit(jint p0);
			/*
			 * static int max(int, int);
			 */
			static jint max(jint p0, jint p1);
			/*
			 * static int min(int, int);
			 */
			static jint min(jint p0, jint p1);
			/*
			 * static int numberOfLeadingZeros(int);
			 */
			static jint numberOfLeadingZeros(jint p0);
			/*
			 * static int numberOfTrailingZeros(int);
			 */
			static jint numberOfTrailingZeros(jint p0);
			/*
			 * static int parseInt(String);
			 */
			static jint parseInt(::net::sourceforge::jnipp::JStringHelper p0);
			/*
			 * static int parseInt(String, int);
			 */
			static jint parseInt(::net::sourceforge::jnipp::JStringHelper p0, jint p1);
			/*
			 * static int parseUnsignedInt(String);
			 */
			static jint parseUnsignedInt(::net::sourceforge::jnipp::JStringHelper p0);
			/*
			 * static int parseUnsignedInt(String, int);
			 */
			static jint parseUnsignedInt(::net::sourceforge::jnipp::JStringHelper p0, jint p1);
			/*
			 * static int remainderUnsigned(int, int);
			 */
			static jint remainderUnsigned(jint p0, jint p1);
			/*
			 * static int reverse(int);
			 */
			static jint reverse(jint p0);
			/*
			 * static int reverseBytes(int);
			 */
			static jint reverseBytes(jint p0);
			/*
			 * static int rotateLeft(int, int);
			 */
			static jint rotateLeft(jint p0, jint p1);
			/*
			 * static int rotateRight(int, int);
			 */
			static jint rotateRight(jint p0, jint p1);
			/*
			 * static int signum(int);
			 */
			static jint signum(jint p0);
			/*
			 * static int sum(int, int);
			 */
			static jint sum(jint p0, jint p1);
			/*
			 * static Integer decode(String);
			 */
			static ::java::lang::IntegerProxy decode(::net::sourceforge::jnipp::JStringHelper p0);
			/*
			 * static Integer getInteger(String);
			 */
			static ::java::lang::IntegerProxy getInteger(::net::sourceforge::jnipp::JStringHelper p0);
			/*
			 * static Integer getInteger(String, int);
			 */
			static ::java::lang::IntegerProxy getInteger(::net::sourceforge::jnipp::JStringHelper p0, jint p1);
			/*
			 * static Integer getInteger(String, Integer);
			 */
			static ::java::lang::IntegerProxy getInteger(::net::sourceforge::jnipp::JStringHelper p0, ::java::lang::IntegerProxy p1);
			/*
			 * static Integer valueOf(int);
			 */
			static ::java::lang::IntegerProxy valueOf(jint p0);
			/*
			 * static Integer valueOf(String);
			 */
			static ::java::lang::IntegerProxy valueOf(::net::sourceforge::jnipp::JStringHelper p0);
			/*
			 * static Integer valueOf(String, int);
			 */
			static ::java::lang::IntegerProxy valueOf(::net::sourceforge::jnipp::JStringHelper p0, jint p1);
			/*
			 * static String toBinaryString(int);
			 */
			static ::net::sourceforge::jnipp::JStringHelper toBinaryString(jint p0);
			/*
			 * static String toHexString(int);
			 */
			static ::net::sourceforge::jnipp::JStringHelper toHexString(jint p0);
			/*
			 * static String toOctalString(int);
			 */
			static ::net::sourceforge::jnipp::JStringHelper toOctalString(jint p0);
			/*
			 * static String toString(int);
			 */
			static ::net::sourceforge::jnipp::JStringHelper toString(jint p0);
			/*
			 * static String toString(int, int);
			 */
			static ::net::sourceforge::jnipp::JStringHelper toString(jint p0, jint p1);
			/*
			 * static String toUnsignedString(int);
			 */
			static ::net::sourceforge::jnipp::JStringHelper toUnsignedString(jint p0);
			/*
			 * static String toUnsignedString(int, int);
			 */
			static ::net::sourceforge::jnipp::JStringHelper toUnsignedString(jint p0, jint p1);
			/*
			 * static long toUnsignedLong(int);
			 */
			static jlong toUnsignedLong(jint p0);

		};
	}
}


#endif
