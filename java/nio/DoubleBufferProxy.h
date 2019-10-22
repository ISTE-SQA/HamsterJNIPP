#ifndef __java_nio_DoubleBufferProxy_H
#define __java_nio_DoubleBufferProxy_H


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
		class DoubleBufferProxy
		{
		private:
			static std::string className;
			static jclass objectClass;
			jobject peerObject;

		protected:
			DoubleBufferProxy(void* unused);
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
			DoubleBufferProxy(jobject obj);

			virtual ~DoubleBufferProxy();
			DoubleBufferProxy& operator=(const DoubleBufferProxy& rhs);

			// methods
			/*
			 * boolean isDirect();
			 */
			jboolean isDirect();
			/*
			 * double get();
			 */
			jdouble get();
			/*
			 * double get(int);
			 */
			jdouble get(jint p0);
			/*
			 * ByteOrder order();
			 */
			::java::nio::ByteOrderProxy order();
			/*
			 * DoubleBuffer asReadOnlyBuffer();
			 */
			::java::nio::DoubleBufferProxy asReadOnlyBuffer();
			/*
			 * DoubleBuffer compact();
			 */
			::java::nio::DoubleBufferProxy compact();
			/*
			 * DoubleBuffer duplicate();
			 */
			::java::nio::DoubleBufferProxy duplicate();
			/*
			 * DoubleBuffer put(double);
			 */
			::java::nio::DoubleBufferProxy put(jdouble p0);
			/*
			 * DoubleBuffer put(int, double);
			 */
			::java::nio::DoubleBufferProxy put(jint p0, jdouble p1);
			/*
			 * DoubleBuffer slice();
			 */
			::java::nio::DoubleBufferProxy slice();
			/*
			 * boolean equals(Object);
			 */
			jboolean equals(::java::lang::ObjectProxy p0);
			/*
			 * boolean hasArray();
			 */
			jboolean hasArray();
			/*
			 * double[] array();
			 */
			::net::sourceforge::jnipp::JDoubleArrayHelper<1> array();
			/*
			 * int arrayOffset();
			 */
			jint arrayOffset();
			/*
			 * DoubleBuffer put(double[]);
			 */
			::java::nio::DoubleBufferProxy put(::net::sourceforge::jnipp::JDoubleArrayHelper<1> p0);
			/*
			 * int compareTo(DoubleBuffer);
			 */
			jint compareTo(::java::nio::DoubleBufferProxy p0);
			/*
			 * int hashCode();
			 */
			jint hashCode();
			/*
			 * String toString();
			 */
			::net::sourceforge::jnipp::JStringHelper toString();
			/*
			 * DoubleBuffer get(double[]);
			 */
			::java::nio::DoubleBufferProxy get(::net::sourceforge::jnipp::JDoubleArrayHelper<1> p0);
			/*
			 * DoubleBuffer get(double[], int, int);
			 */
			::java::nio::DoubleBufferProxy get(::net::sourceforge::jnipp::JDoubleArrayHelper<1> p0, jint p1, jint p2);
			/*
			 * DoubleBuffer put(double[], int, int);
			 */
			::java::nio::DoubleBufferProxy put(::net::sourceforge::jnipp::JDoubleArrayHelper<1> p0, jint p1, jint p2);
			/*
			 * DoubleBuffer put(DoubleBuffer);
			 */
			::java::nio::DoubleBufferProxy put(::java::nio::DoubleBufferProxy p0);
			/*
			 * static DoubleBuffer allocate(int);
			 */
			static ::java::nio::DoubleBufferProxy allocate(jint p0);
			/*
			 * static DoubleBuffer wrap(double[]);
			 */
			static ::java::nio::DoubleBufferProxy wrap(::net::sourceforge::jnipp::JDoubleArrayHelper<1> p0);
			/*
			 * static DoubleBuffer wrap(double[], int, int);
			 */
			static ::java::nio::DoubleBufferProxy wrap(::net::sourceforge::jnipp::JDoubleArrayHelper<1> p0, jint p1, jint p2);

		};
	}
}


#endif
