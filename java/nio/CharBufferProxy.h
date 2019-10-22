#ifndef __java_nio_CharBufferProxy_H
#define __java_nio_CharBufferProxy_H


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
#include "java\nio\ByteOrderProxyForward.h"
#include "java\lang\ObjectProxyForward.h"
#include "java\lang\CharSequenceProxyForward.h"
#include "java\util\stream\IntStreamProxyForward.h"

namespace java
{
	namespace nio
	{
		class CharBufferProxy
		{
		private:
			static std::string className;
			static jclass objectClass;
			jobject peerObject;

		protected:
			CharBufferProxy(void* unused);
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
			CharBufferProxy(jobject obj);

			virtual ~CharBufferProxy();
			CharBufferProxy& operator=(const CharBufferProxy& rhs);

			// methods
			/*
			 * boolean isDirect();
			 */
			jboolean isDirect();
			/*
			 * char get();
			 */
			jchar get();
			/*
			 * char get(int);
			 */
			jchar get(jint p0);
			/*
			 * ByteOrder order();
			 */
			::java::nio::ByteOrderProxy order();
			/*
			 * CharBuffer asReadOnlyBuffer();
			 */
			::java::nio::CharBufferProxy asReadOnlyBuffer();
			/*
			 * CharBuffer compact();
			 */
			::java::nio::CharBufferProxy compact();
			/*
			 * CharBuffer duplicate();
			 */
			::java::nio::CharBufferProxy duplicate();
			/*
			 * CharBuffer put(char);
			 */
			::java::nio::CharBufferProxy put(jchar p0);
			/*
			 * CharBuffer put(int, char);
			 */
			::java::nio::CharBufferProxy put(jint p0, jchar p1);
			/*
			 * CharBuffer slice();
			 */
			::java::nio::CharBufferProxy slice();
			/*
			 * CharBuffer subSequence(int, int);
			 */
			::java::nio::CharBufferProxy subSequence(jint p0, jint p1);
			/*
			 * boolean equals(Object);
			 */
			jboolean equals(::java::lang::ObjectProxy p0);
			/*
			 * boolean hasArray();
			 */
			jboolean hasArray();
			/*
			 * char charAt(int);
			 */
			jchar charAt(jint p0);
			/*
			 * char[] array();
			 */
			::net::sourceforge::jnipp::JCharArrayHelper<1> array();
			/*
			 * int arrayOffset();
			 */
			jint arrayOffset();
			/*
			 * int length();
			 */
			jint length();
			/*
			 * CharBuffer put(char[]);
			 */
			::java::nio::CharBufferProxy put(::net::sourceforge::jnipp::JCharArrayHelper<1> p0);
			/*
			 * CharBuffer put(String);
			 */
			::java::nio::CharBufferProxy put(::net::sourceforge::jnipp::JStringHelper p0);
			/*
			 * int compareTo(CharBuffer);
			 */
			jint compareTo(::java::nio::CharBufferProxy p0);
			/*
			 * int hashCode();
			 */
			jint hashCode();
			/*
			 * int read(CharBuffer);
			 */
			jint read(::java::nio::CharBufferProxy p0);
			/*
			 * String toString();
			 */
			::net::sourceforge::jnipp::JStringHelper toString();
			/*
			 * CharBuffer append(char);
			 */
			::java::nio::CharBufferProxy append(jchar p0);
			/*
			 * CharBuffer append(CharSequence);
			 */
			::java::nio::CharBufferProxy append(::java::lang::CharSequenceProxy p0);
			/*
			 * CharBuffer append(CharSequence, int, int);
			 */
			::java::nio::CharBufferProxy append(::java::lang::CharSequenceProxy p0, jint p1, jint p2);
			/*
			 * CharBuffer get(char[]);
			 */
			::java::nio::CharBufferProxy get(::net::sourceforge::jnipp::JCharArrayHelper<1> p0);
			/*
			 * CharBuffer get(char[], int, int);
			 */
			::java::nio::CharBufferProxy get(::net::sourceforge::jnipp::JCharArrayHelper<1> p0, jint p1, jint p2);
			/*
			 * CharBuffer put(char[], int, int);
			 */
			::java::nio::CharBufferProxy put(::net::sourceforge::jnipp::JCharArrayHelper<1> p0, jint p1, jint p2);
			/*
			 * CharBuffer put(String, int, int);
			 */
			::java::nio::CharBufferProxy put(::net::sourceforge::jnipp::JStringHelper p0, jint p1, jint p2);
			/*
			 * CharBuffer put(CharBuffer);
			 */
			::java::nio::CharBufferProxy put(::java::nio::CharBufferProxy p0);
			/*
			 * IntStream chars();
			 */
			::java::util::stream::IntStreamProxy chars();
			/*
			 * static CharBuffer allocate(int);
			 */
			static ::java::nio::CharBufferProxy allocate(jint p0);
			/*
			 * static CharBuffer wrap(char[]);
			 */
			static ::java::nio::CharBufferProxy wrap(::net::sourceforge::jnipp::JCharArrayHelper<1> p0);
			/*
			 * static CharBuffer wrap(char[], int, int);
			 */
			static ::java::nio::CharBufferProxy wrap(::net::sourceforge::jnipp::JCharArrayHelper<1> p0, jint p1, jint p2);
			/*
			 * static CharBuffer wrap(CharSequence);
			 */
			static ::java::nio::CharBufferProxy wrap(::java::lang::CharSequenceProxy p0);
			/*
			 * static CharBuffer wrap(CharSequence, int, int);
			 */
			static ::java::nio::CharBufferProxy wrap(::java::lang::CharSequenceProxy p0, jint p1, jint p2);

		};
	}
}


#endif
