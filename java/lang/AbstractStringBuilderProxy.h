#ifndef __java_lang_AbstractStringBuilderProxy_H
#define __java_lang_AbstractStringBuilderProxy_H


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
#include "java\lang\StringBufferProxyForward.h"
#include "java\lang\AppendableProxyForward.h"

namespace java
{
	namespace lang
	{
		class AbstractStringBuilderProxy
		{
		private:
			static std::string className;
			static jclass objectClass;
			jobject peerObject;

		protected:
			AbstractStringBuilderProxy(void* unused);
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
			AbstractStringBuilderProxy(jobject obj);

			virtual ~AbstractStringBuilderProxy();
			AbstractStringBuilderProxy& operator=(const AbstractStringBuilderProxy& rhs);

			// methods
			/*
			 * String toString();
			 */
			::net::sourceforge::jnipp::JStringHelper toString();
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
			 * int indexOf(String);
			 */
			jint indexOf(::net::sourceforge::jnipp::JStringHelper p0);
			/*
			 * int indexOf(String, int);
			 */
			jint indexOf(::net::sourceforge::jnipp::JStringHelper p0, jint p1);
			/*
			 * int lastIndexOf(String);
			 */
			jint lastIndexOf(::net::sourceforge::jnipp::JStringHelper p0);
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
			 * AbstractStringBuilder append(boolean);
			 */
			::java::lang::AbstractStringBuilderProxy append(jboolean p0);
			/*
			 * AbstractStringBuilder append(char);
			 */
			::java::lang::AbstractStringBuilderProxy append(jchar p0);
			/*
			 * AbstractStringBuilder append(char[]);
			 */
			::java::lang::AbstractStringBuilderProxy append(::net::sourceforge::jnipp::JCharArrayHelper<1> p0);
			/*
			 * AbstractStringBuilder append(char[], int, int);
			 */
			::java::lang::AbstractStringBuilderProxy append(::net::sourceforge::jnipp::JCharArrayHelper<1> p0, jint p1, jint p2);
			/*
			 * AbstractStringBuilder append(double);
			 */
			::java::lang::AbstractStringBuilderProxy append(jdouble p0);
			/*
			 * AbstractStringBuilder append(float);
			 */
			::java::lang::AbstractStringBuilderProxy append(jfloat p0);
			/*
			 * AbstractStringBuilder append(int);
			 */
			::java::lang::AbstractStringBuilderProxy append(jint p0);
			/*
			 * AbstractStringBuilder append(CharSequence);
			 */
			::java::lang::AbstractStringBuilderProxy append(::java::lang::CharSequenceProxy p0);
			/*
			 * AbstractStringBuilder append(CharSequence, int, int);
			 */
			::java::lang::AbstractStringBuilderProxy append(::java::lang::CharSequenceProxy p0, jint p1, jint p2);
			/*
			 * AbstractStringBuilder append(Object);
			 */
			::java::lang::AbstractStringBuilderProxy append(::java::lang::ObjectProxy p0);
			/*
			 * AbstractStringBuilder append(String);
			 */
			::java::lang::AbstractStringBuilderProxy append(::net::sourceforge::jnipp::JStringHelper p0);
			/*
			 * AbstractStringBuilder append(StringBuffer);
			 */
			::java::lang::AbstractStringBuilderProxy append(::java::lang::StringBufferProxy p0);
			/*
			 * AbstractStringBuilder append(long);
			 */
			::java::lang::AbstractStringBuilderProxy append(jlong p0);
			/*
			 * AbstractStringBuilder appendCodePoint(int);
			 */
			::java::lang::AbstractStringBuilderProxy appendCodePoint(jint p0);
			/*
			 * AbstractStringBuilder delete(int, int);
			 */
			::java::lang::AbstractStringBuilderProxy _delete(jint p0, jint p1);
			/*
			 * AbstractStringBuilder deleteCharAt(int);
			 */
			::java::lang::AbstractStringBuilderProxy deleteCharAt(jint p0);
			/*
			 * AbstractStringBuilder insert(int, boolean);
			 */
			::java::lang::AbstractStringBuilderProxy insert(jint p0, jboolean p1);
			/*
			 * AbstractStringBuilder insert(int, char);
			 */
			::java::lang::AbstractStringBuilderProxy insert(jint p0, jchar p1);
			/*
			 * AbstractStringBuilder insert(int, char[]);
			 */
			::java::lang::AbstractStringBuilderProxy insert(jint p0, ::net::sourceforge::jnipp::JCharArrayHelper<1> p1);
			/*
			 * AbstractStringBuilder insert(int, char[], int, int);
			 */
			::java::lang::AbstractStringBuilderProxy insert(jint p0, ::net::sourceforge::jnipp::JCharArrayHelper<1> p1, jint p2, jint p3);
			/*
			 * AbstractStringBuilder insert(int, double);
			 */
			::java::lang::AbstractStringBuilderProxy insert(jint p0, jdouble p1);
			/*
			 * AbstractStringBuilder insert(int, float);
			 */
			::java::lang::AbstractStringBuilderProxy insert(jint p0, jfloat p1);
			/*
			 * AbstractStringBuilder insert(int, int);
			 */
			::java::lang::AbstractStringBuilderProxy insert(jint p0, jint p1);
			/*
			 * AbstractStringBuilder insert(int, CharSequence);
			 */
			::java::lang::AbstractStringBuilderProxy insert(jint p0, ::java::lang::CharSequenceProxy p1);
			/*
			 * AbstractStringBuilder insert(int, CharSequence, int, int);
			 */
			::java::lang::AbstractStringBuilderProxy insert(jint p0, ::java::lang::CharSequenceProxy p1, jint p2, jint p3);
			/*
			 * AbstractStringBuilder insert(int, Object);
			 */
			::java::lang::AbstractStringBuilderProxy insert(jint p0, ::java::lang::ObjectProxy p1);
			/*
			 * AbstractStringBuilder insert(int, String);
			 */
			::java::lang::AbstractStringBuilderProxy insert(jint p0, ::net::sourceforge::jnipp::JStringHelper p1);
			/*
			 * AbstractStringBuilder insert(int, long);
			 */
			::java::lang::AbstractStringBuilderProxy insert(jint p0, jlong p1);
			/*
			 * AbstractStringBuilder replace(int, int, String);
			 */
			::java::lang::AbstractStringBuilderProxy replace(jint p0, jint p1, ::net::sourceforge::jnipp::JStringHelper p2);
			/*
			 * AbstractStringBuilder reverse();
			 */
			::java::lang::AbstractStringBuilderProxy reverse();
			/*
			 * Appendable append(char);
			 */
			::java::lang::AppendableProxy append(jchar p0);
			/*
			 * Appendable append(CharSequence);
			 */
			::java::lang::AppendableProxy append(::java::lang::CharSequenceProxy p0);
			/*
			 * Appendable append(CharSequence, int, int);
			 */
			::java::lang::AppendableProxy append(::java::lang::CharSequenceProxy p0, jint p1, jint p2);
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
