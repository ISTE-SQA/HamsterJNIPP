#ifndef __java_lang_StringBufferProxy_H
#define __java_lang_StringBufferProxy_H


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
#include "java\lang\CharSequenceProxyForward.h"
#include "java\lang\ObjectProxyForward.h"
#include "java\io\ObjectStreamFieldProxy.h"

namespace java
{
	namespace lang
	{
		class StringBufferProxy
		{
		private:
			static std::string className;
			static jclass objectClass;
			jobject peerObject;

		protected:
			StringBufferProxy(void* unused);
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
			StringBufferProxy(jobject obj);
			StringBufferProxy();
			StringBufferProxy(jint p0);
			StringBufferProxy(::java::lang::CharSequenceProxy p0);
			StringBufferProxy(::net::sourceforge::jnipp::JStringHelper p0);

			virtual ~StringBufferProxy();
			StringBufferProxy& operator=(const StringBufferProxy& rhs);

			// methods
			/*
			 * int indexOf(String);
			 */
			jint indexOf(::net::sourceforge::jnipp::JStringHelper p0);
			/*
			 * int lastIndexOf(String);
			 */
			jint lastIndexOf(::net::sourceforge::jnipp::JStringHelper p0);
			/*
			 * StringBuffer insert(int, boolean);
			 */
			::java::lang::StringBufferProxy insert(jint p0, jboolean p1);
			/*
			 * StringBuffer insert(int, double);
			 */
			::java::lang::StringBufferProxy insert(jint p0, jdouble p1);
			/*
			 * StringBuffer insert(int, float);
			 */
			::java::lang::StringBufferProxy insert(jint p0, jfloat p1);
			/*
			 * StringBuffer insert(int, int);
			 */
			::java::lang::StringBufferProxy insert(jint p0, jint p1);
			/*
			 * StringBuffer insert(int, CharSequence);
			 */
			::java::lang::StringBufferProxy insert(jint p0, ::java::lang::CharSequenceProxy p1);
			/*
			 * StringBuffer insert(int, long);
			 */
			::java::lang::StringBufferProxy insert(jint p0, jlong p1);
			/*
			 * char charAt(int);
			 */
			jchar charAt(jint p0);
			/*
			 * int capacity();
			 */
			jint capacity();
			/*
			 * int codePointAt(int);
			 */
			jint codePointAt(jint p0);
			/*
			 * int codePointBefore(int);
			 */
			jint codePointBefore(jint p0);
			/*
			 * int codePointCount(int, int);
			 */
			jint codePointCount(jint p0, jint p1);
			/*
			 * int indexOf(String, int);
			 */
			jint indexOf(::net::sourceforge::jnipp::JStringHelper p0, jint p1);
			/*
			 * int lastIndexOf(String, int);
			 */
			jint lastIndexOf(::net::sourceforge::jnipp::JStringHelper p0, jint p1);
			/*
			 * int length();
			 */
			jint length();
			/*
			 * int offsetByCodePoints(int, int);
			 */
			jint offsetByCodePoints(jint p0, jint p1);
			/*
			 * CharSequence subSequence(int, int);
			 */
			::java::lang::CharSequenceProxy subSequence(jint p0, jint p1);
			/*
			 * String substring(int);
			 */
			::net::sourceforge::jnipp::JStringHelper substring(jint p0);
			/*
			 * String substring(int, int);
			 */
			::net::sourceforge::jnipp::JStringHelper substring(jint p0, jint p1);
			/*
			 * String toString();
			 */
			::net::sourceforge::jnipp::JStringHelper toString();
			/*
			 * StringBuffer append(boolean);
			 */
			::java::lang::StringBufferProxy append(jboolean p0);
			/*
			 * StringBuffer append(char);
			 */
			::java::lang::StringBufferProxy append(jchar p0);
			/*
			 * StringBuffer append(char[]);
			 */
			::java::lang::StringBufferProxy append(::net::sourceforge::jnipp::JCharArrayHelper<1> p0);
			/*
			 * StringBuffer append(char[], int, int);
			 */
			::java::lang::StringBufferProxy append(::net::sourceforge::jnipp::JCharArrayHelper<1> p0, jint p1, jint p2);
			/*
			 * StringBuffer append(double);
			 */
			::java::lang::StringBufferProxy append(jdouble p0);
			/*
			 * StringBuffer append(float);
			 */
			::java::lang::StringBufferProxy append(jfloat p0);
			/*
			 * StringBuffer append(int);
			 */
			::java::lang::StringBufferProxy append(jint p0);
			/*
			 * StringBuffer append(CharSequence);
			 */
			::java::lang::StringBufferProxy append(::java::lang::CharSequenceProxy p0);
			/*
			 * StringBuffer append(CharSequence, int, int);
			 */
			::java::lang::StringBufferProxy append(::java::lang::CharSequenceProxy p0, jint p1, jint p2);
			/*
			 * StringBuffer append(Object);
			 */
			::java::lang::StringBufferProxy append(::java::lang::ObjectProxy p0);
			/*
			 * StringBuffer append(String);
			 */
			::java::lang::StringBufferProxy append(::net::sourceforge::jnipp::JStringHelper p0);
			/*
			 * StringBuffer append(StringBuffer);
			 */
			::java::lang::StringBufferProxy append(::java::lang::StringBufferProxy p0);
			/*
			 * StringBuffer append(long);
			 */
			::java::lang::StringBufferProxy append(jlong p0);
			/*
			 * StringBuffer appendCodePoint(int);
			 */
			::java::lang::StringBufferProxy appendCodePoint(jint p0);
			/*
			 * StringBuffer delete(int, int);
			 */
			::java::lang::StringBufferProxy _delete(jint p0, jint p1);
			/*
			 * StringBuffer deleteCharAt(int);
			 */
			::java::lang::StringBufferProxy deleteCharAt(jint p0);
			/*
			 * StringBuffer insert(int, char);
			 */
			::java::lang::StringBufferProxy insert(jint p0, jchar p1);
			/*
			 * StringBuffer insert(int, char[]);
			 */
			::java::lang::StringBufferProxy insert(jint p0, ::net::sourceforge::jnipp::JCharArrayHelper<1> p1);
			/*
			 * StringBuffer insert(int, char[], int, int);
			 */
			::java::lang::StringBufferProxy insert(jint p0, ::net::sourceforge::jnipp::JCharArrayHelper<1> p1, jint p2, jint p3);
			/*
			 * StringBuffer insert(int, CharSequence, int, int);
			 */
			::java::lang::StringBufferProxy insert(jint p0, ::java::lang::CharSequenceProxy p1, jint p2, jint p3);
			/*
			 * StringBuffer insert(int, Object);
			 */
			::java::lang::StringBufferProxy insert(jint p0, ::java::lang::ObjectProxy p1);
			/*
			 * StringBuffer insert(int, String);
			 */
			::java::lang::StringBufferProxy insert(jint p0, ::net::sourceforge::jnipp::JStringHelper p1);
			/*
			 * StringBuffer replace(int, int, String);
			 */
			::java::lang::StringBufferProxy replace(jint p0, jint p1, ::net::sourceforge::jnipp::JStringHelper p2);
			/*
			 * StringBuffer reverse();
			 */
			::java::lang::StringBufferProxy reverse();
			/*
			 * void ensureCapacity(int);
			 */
			void ensureCapacity(jint p0);
			/*
			 * void getChars(int, int, char[], int);
			 */
			void getChars(jint p0, jint p1, ::net::sourceforge::jnipp::JCharArrayHelper<1> p2, jint p3);
			/*
			 * void setCharAt(int, char);
			 */
			void setCharAt(jint p0, jchar p1);
			/*
			 * void setLength(int);
			 */
			void setLength(jint p0);
			/*
			 * void trimToSize();
			 */
			void trimToSize();

		};
	}
}


#endif
