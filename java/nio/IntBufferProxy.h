#ifndef __java_nio_IntBufferProxy_H
#define __java_nio_IntBufferProxy_H


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

namespace java
{
	namespace nio
	{
		class IntBufferProxy
		{
		private:
			static std::string className;
			static jclass objectClass;
			jobject peerObject;

		protected:
			IntBufferProxy(void* unused);
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
			IntBufferProxy(jobject obj);

			virtual ~IntBufferProxy();
			IntBufferProxy& operator=(const IntBufferProxy& rhs);

			// methods
			/*
			 * boolean isDirect();
			 */
			jboolean isDirect();
			/*
			 * int get();
			 */
			jint get();
			/*
			 * int get(int);
			 */
			jint get(jint p0);
			/*
			 * ByteOrder order();
			 */
			::java::nio::ByteOrderProxy order();
			/*
			 * IntBuffer asReadOnlyBuffer();
			 */
			::java::nio::IntBufferProxy asReadOnlyBuffer();
			/*
			 * IntBuffer compact();
			 */
			::java::nio::IntBufferProxy compact();
			/*
			 * IntBuffer duplicate();
			 */
			::java::nio::IntBufferProxy duplicate();
			/*
			 * IntBuffer put(int);
			 */
			::java::nio::IntBufferProxy put(jint p0);
			/*
			 * IntBuffer put(int, int);
			 */
			::java::nio::IntBufferProxy put(jint p0, jint p1);
			/*
			 * IntBuffer slice();
			 */
			::java::nio::IntBufferProxy slice();
			/*
			 * boolean equals(Object);
			 */
			jboolean equals(::java::lang::ObjectProxy p0);
			/*
			 * boolean hasArray();
			 */
			jboolean hasArray();
			/*
			 * int arrayOffset();
			 */
			jint arrayOffset();
			/*
			 * int[] array();
			 */
			::net::sourceforge::jnipp::JIntArrayHelper<1> array();
			/*
			 * IntBuffer put(int[]);
			 */
			::java::nio::IntBufferProxy put(::net::sourceforge::jnipp::JIntArrayHelper<1> p0);
			/*
			 * int compareTo(IntBuffer);
			 */
			jint compareTo(::java::nio::IntBufferProxy p0);
			/*
			 * int hashCode();
			 */
			jint hashCode();
			/*
			 * String toString();
			 */
			::net::sourceforge::jnipp::JStringHelper toString();
			/*
			 * IntBuffer get(int[]);
			 */
			::java::nio::IntBufferProxy get(::net::sourceforge::jnipp::JIntArrayHelper<1> p0);
			/*
			 * IntBuffer get(int[], int, int);
			 */
			::java::nio::IntBufferProxy get(::net::sourceforge::jnipp::JIntArrayHelper<1> p0, jint p1, jint p2);
			/*
			 * IntBuffer put(int[], int, int);
			 */
			::java::nio::IntBufferProxy put(::net::sourceforge::jnipp::JIntArrayHelper<1> p0, jint p1, jint p2);
			/*
			 * IntBuffer put(IntBuffer);
			 */
			::java::nio::IntBufferProxy put(::java::nio::IntBufferProxy p0);
			/*
			 * static IntBuffer allocate(int);
			 */
			static ::java::nio::IntBufferProxy allocate(jint p0);
			/*
			 * static IntBuffer wrap(int[]);
			 */
			static ::java::nio::IntBufferProxy wrap(::net::sourceforge::jnipp::JIntArrayHelper<1> p0);
			/*
			 * static IntBuffer wrap(int[], int, int);
			 */
			static ::java::nio::IntBufferProxy wrap(::net::sourceforge::jnipp::JIntArrayHelper<1> p0, jint p1, jint p2);

		};
	}
}


#endif
