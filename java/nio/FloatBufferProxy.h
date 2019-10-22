#ifndef __java_nio_FloatBufferProxy_H
#define __java_nio_FloatBufferProxy_H


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
		class FloatBufferProxy
		{
		private:
			static std::string className;
			static jclass objectClass;
			jobject peerObject;

		protected:
			FloatBufferProxy(void* unused);
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
			FloatBufferProxy(jobject obj);

			virtual ~FloatBufferProxy();
			FloatBufferProxy& operator=(const FloatBufferProxy& rhs);

			// methods
			/*
			 * boolean isDirect();
			 */
			jboolean isDirect();
			/*
			 * float get();
			 */
			jfloat get();
			/*
			 * float get(int);
			 */
			jfloat get(jint p0);
			/*
			 * ByteOrder order();
			 */
			::java::nio::ByteOrderProxy order();
			/*
			 * FloatBuffer asReadOnlyBuffer();
			 */
			::java::nio::FloatBufferProxy asReadOnlyBuffer();
			/*
			 * FloatBuffer compact();
			 */
			::java::nio::FloatBufferProxy compact();
			/*
			 * FloatBuffer duplicate();
			 */
			::java::nio::FloatBufferProxy duplicate();
			/*
			 * FloatBuffer put(float);
			 */
			::java::nio::FloatBufferProxy put(jfloat p0);
			/*
			 * FloatBuffer put(int, float);
			 */
			::java::nio::FloatBufferProxy put(jint p0, jfloat p1);
			/*
			 * FloatBuffer slice();
			 */
			::java::nio::FloatBufferProxy slice();
			/*
			 * boolean equals(Object);
			 */
			jboolean equals(::java::lang::ObjectProxy p0);
			/*
			 * boolean hasArray();
			 */
			jboolean hasArray();
			/*
			 * float[] array();
			 */
			::net::sourceforge::jnipp::JFloatArrayHelper<1> array();
			/*
			 * int arrayOffset();
			 */
			jint arrayOffset();
			/*
			 * FloatBuffer put(float[]);
			 */
			::java::nio::FloatBufferProxy put(::net::sourceforge::jnipp::JFloatArrayHelper<1> p0);
			/*
			 * int compareTo(FloatBuffer);
			 */
			jint compareTo(::java::nio::FloatBufferProxy p0);
			/*
			 * int hashCode();
			 */
			jint hashCode();
			/*
			 * String toString();
			 */
			::net::sourceforge::jnipp::JStringHelper toString();
			/*
			 * FloatBuffer get(float[]);
			 */
			::java::nio::FloatBufferProxy get(::net::sourceforge::jnipp::JFloatArrayHelper<1> p0);
			/*
			 * FloatBuffer get(float[], int, int);
			 */
			::java::nio::FloatBufferProxy get(::net::sourceforge::jnipp::JFloatArrayHelper<1> p0, jint p1, jint p2);
			/*
			 * FloatBuffer put(float[], int, int);
			 */
			::java::nio::FloatBufferProxy put(::net::sourceforge::jnipp::JFloatArrayHelper<1> p0, jint p1, jint p2);
			/*
			 * FloatBuffer put(FloatBuffer);
			 */
			::java::nio::FloatBufferProxy put(::java::nio::FloatBufferProxy p0);
			/*
			 * static FloatBuffer allocate(int);
			 */
			static ::java::nio::FloatBufferProxy allocate(jint p0);
			/*
			 * static FloatBuffer wrap(float[]);
			 */
			static ::java::nio::FloatBufferProxy wrap(::net::sourceforge::jnipp::JFloatArrayHelper<1> p0);
			/*
			 * static FloatBuffer wrap(float[], int, int);
			 */
			static ::java::nio::FloatBufferProxy wrap(::net::sourceforge::jnipp::JFloatArrayHelper<1> p0, jint p1, jint p2);

		};
	}
}


#endif
