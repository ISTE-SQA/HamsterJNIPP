#ifndef __java_lang_DoubleProxy_H
#define __java_lang_DoubleProxy_H


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
		class DoubleProxy
		{
		private:
			static std::string className;
			static jclass objectClass;
			jobject peerObject;

		protected:
			DoubleProxy(void* unused);
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
			DoubleProxy(jobject obj);
			DoubleProxy(jdouble p0);
			DoubleProxy(::net::sourceforge::jnipp::JStringHelper p0);

			virtual ~DoubleProxy();
			DoubleProxy& operator=(const DoubleProxy& rhs);

			// methods
			/*
			 * boolean equals(Object);
			 */
			jboolean equals(::java::lang::ObjectProxy p0);
			/*
			 * boolean isInfinite();
			 */
			jboolean isInfinite();
			/*
			 * boolean isNaN();
			 */
			jboolean isNaN();
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
			 * int compareTo(Double);
			 */
			jint compareTo(::java::lang::DoubleProxy p0);
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
			 * static boolean isFinite(double);
			 */
			static jboolean isFinite(jdouble p0);
			/*
			 * static boolean isInfinite(double);
			 */
			static jboolean isInfinite(jdouble p0);
			/*
			 * static boolean isNaN(double);
			 */
			static jboolean isNaN(jdouble p0);
			/*
			 * static double max(double, double);
			 */
			static jdouble max(jdouble p0, jdouble p1);
			/*
			 * static double min(double, double);
			 */
			static jdouble min(jdouble p0, jdouble p1);
			/*
			 * static double parseDouble(String);
			 */
			static jdouble parseDouble(::net::sourceforge::jnipp::JStringHelper p0);
			/*
			 * static double sum(double, double);
			 */
			static jdouble sum(jdouble p0, jdouble p1);
			/*
			 * static int compare(double, double);
			 */
			static jint compare(jdouble p0, jdouble p1);
			/*
			 * static int hashCode(double);
			 */
			static jint hashCode(jdouble p0);
			/*
			 * static Double valueOf(double);
			 */
			static ::java::lang::DoubleProxy valueOf(jdouble p0);
			/*
			 * static Double valueOf(String);
			 */
			static ::java::lang::DoubleProxy valueOf(::net::sourceforge::jnipp::JStringHelper p0);
			/*
			 * static String toHexString(double);
			 */
			static ::net::sourceforge::jnipp::JStringHelper toHexString(jdouble p0);
			/*
			 * static String toString(double);
			 */
			static ::net::sourceforge::jnipp::JStringHelper toString(jdouble p0);
			/*
			 * static long doubleToLongBits(double);
			 */
			static jlong doubleToLongBits(jdouble p0);
			/*
			 * static double longBitsToDouble(long);
			 */
			static jdouble longBitsToDouble(jlong p0);
			/*
			 * static long doubleToRawLongBits(double);
			 */
			static jlong doubleToRawLongBits(jdouble p0);

		};
	}
}


#endif
