#ifndef __java_lang_StringBuilderProxy_H
#define __java_lang_StringBuilderProxy_H


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

namespace java
{
	namespace lang
	{
		class StringBuilderProxy
		{
		private:
			static std::string className;
			static jclass objectClass;
			jobject peerObject;

		protected:
			StringBuilderProxy(void* unused);
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
			StringBuilderProxy(jobject obj);
			StringBuilderProxy();
			StringBuilderProxy(jint p0);
			StringBuilderProxy(::java::lang::CharSequenceProxy p0);
			StringBuilderProxy(::net::sourceforge::jnipp::JStringHelper p0);

			virtual ~StringBuilderProxy();
			StringBuilderProxy& operator=(const StringBuilderProxy& rhs);

			// methods
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
			 * String toString();
			 */
			::net::sourceforge::jnipp::JStringHelper toString();
			/*
			 * StringBuilder append(boolean);
			 */
			::java::lang::StringBuilderProxy append(jboolean p0);
			/*
			 * StringBuilder append(char);
			 */
			::java::lang::StringBuilderProxy append(jchar p0);
			/*
			 * StringBuilder append(char[]);
			 */
			::java::lang::StringBuilderProxy append(::net::sourceforge::jnipp::JCharArrayHelper<1> p0);
			/*
			 * StringBuilder append(char[], int, int);
			 */
			::java::lang::StringBuilderProxy append(::net::sourceforge::jnipp::JCharArrayHelper<1> p0, jint p1, jint p2);
			/*
			 * StringBuilder append(double);
			 */
			::java::lang::StringBuilderProxy append(jdouble p0);
			/*
			 * StringBuilder append(float);
			 */
			::java::lang::StringBuilderProxy append(jfloat p0);
			/*
			 * StringBuilder append(int);
			 */
			::java::lang::StringBuilderProxy append(jint p0);
			/*
			 * StringBuilder append(CharSequence);
			 */
			::java::lang::StringBuilderProxy append(::java::lang::CharSequenceProxy p0);
			/*
			 * StringBuilder append(CharSequence, int, int);
			 */
			::java::lang::StringBuilderProxy append(::java::lang::CharSequenceProxy p0, jint p1, jint p2);
			/*
			 * StringBuilder append(Object);
			 */
			::java::lang::StringBuilderProxy append(::java::lang::ObjectProxy p0);
			/*
			 * StringBuilder append(String);
			 */
			::java::lang::StringBuilderProxy append(::net::sourceforge::jnipp::JStringHelper p0);
			/*
			 * StringBuilder append(StringBuffer);
			 */
			::java::lang::StringBuilderProxy append(::java::lang::StringBufferProxy p0);
			/*
			 * StringBuilder append(long);
			 */
			::java::lang::StringBuilderProxy append(jlong p0);
			/*
			 * StringBuilder appendCodePoint(int);
			 */
			::java::lang::StringBuilderProxy appendCodePoint(jint p0);
			/*
			 * StringBuilder delete(int, int);
			 */
			::java::lang::StringBuilderProxy _delete(jint p0, jint p1);
			/*
			 * StringBuilder deleteCharAt(int);
			 */
			::java::lang::StringBuilderProxy deleteCharAt(jint p0);
			/*
			 * StringBuilder insert(int, boolean);
			 */
			::java::lang::StringBuilderProxy insert(jint p0, jboolean p1);
			/*
			 * StringBuilder insert(int, char);
			 */
			::java::lang::StringBuilderProxy insert(jint p0, jchar p1);
			/*
			 * StringBuilder insert(int, char[]);
			 */
			::java::lang::StringBuilderProxy insert(jint p0, ::net::sourceforge::jnipp::JCharArrayHelper<1> p1);
			/*
			 * StringBuilder insert(int, char[], int, int);
			 */
			::java::lang::StringBuilderProxy insert(jint p0, ::net::sourceforge::jnipp::JCharArrayHelper<1> p1, jint p2, jint p3);
			/*
			 * StringBuilder insert(int, double);
			 */
			::java::lang::StringBuilderProxy insert(jint p0, jdouble p1);
			/*
			 * StringBuilder insert(int, float);
			 */
			::java::lang::StringBuilderProxy insert(jint p0, jfloat p1);
			/*
			 * StringBuilder insert(int, int);
			 */
			::java::lang::StringBuilderProxy insert(jint p0, jint p1);
			/*
			 * StringBuilder insert(int, CharSequence);
			 */
			::java::lang::StringBuilderProxy insert(jint p0, ::java::lang::CharSequenceProxy p1);
			/*
			 * StringBuilder insert(int, CharSequence, int, int);
			 */
			::java::lang::StringBuilderProxy insert(jint p0, ::java::lang::CharSequenceProxy p1, jint p2, jint p3);
			/*
			 * StringBuilder insert(int, Object);
			 */
			::java::lang::StringBuilderProxy insert(jint p0, ::java::lang::ObjectProxy p1);
			/*
			 * StringBuilder insert(int, String);
			 */
			::java::lang::StringBuilderProxy insert(jint p0, ::net::sourceforge::jnipp::JStringHelper p1);
			/*
			 * StringBuilder insert(int, long);
			 */
			::java::lang::StringBuilderProxy insert(jint p0, jlong p1);
			/*
			 * StringBuilder replace(int, int, String);
			 */
			::java::lang::StringBuilderProxy replace(jint p0, jint p1, ::net::sourceforge::jnipp::JStringHelper p2);
			/*
			 * StringBuilder reverse();
			 */
			::java::lang::StringBuilderProxy reverse();

		};
	}
}


#endif
