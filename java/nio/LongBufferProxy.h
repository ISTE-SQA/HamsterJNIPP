#ifndef __java_nio_LongBufferProxy_H
#define __java_nio_LongBufferProxy_H


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
		class LongBufferProxy
		{
		private:
			static std::string className;
			static jclass objectClass;
			jobject peerObject;

		protected:
			LongBufferProxy(void* unused);
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
			LongBufferProxy(jobject obj);

			virtual ~LongBufferProxy();
			LongBufferProxy& operator=(const LongBufferProxy& rhs);

			// methods
			/*
			 * boolean isDirect();
			 */
			jboolean isDirect();
			/*
			 * ByteOrder order();
			 */
			::java::nio::ByteOrderProxy order();
			/*
			 * LongBuffer asReadOnlyBuffer();
			 */
			::java::nio::LongBufferProxy asReadOnlyBuffer();
			/*
			 * LongBuffer compact();
			 */
			::java::nio::LongBufferProxy compact();
			/*
			 * LongBuffer duplicate();
			 */
			::java::nio::LongBufferProxy duplicate();
			/*
			 * LongBuffer put(int, long);
			 */
			::java::nio::LongBufferProxy put(jint p0, jlong p1);
			/*
			 * LongBuffer put(long);
			 */
			::java::nio::LongBufferProxy put(jlong p0);
			/*
			 * LongBuffer slice();
			 */
			::java::nio::LongBufferProxy slice();
			/*
			 * long get();
			 */
			jlong get();
			/*
			 * long get(int);
			 */
			jlong get(jint p0);
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
			 * LongBuffer put(long[]);
			 */
			::java::nio::LongBufferProxy put(::net::sourceforge::jnipp::JLongArrayHelper<1> p0);
			/*
			 * long[] array();
			 */
			::net::sourceforge::jnipp::JLongArrayHelper<1> array();
			/*
			 * int compareTo(LongBuffer);
			 */
			jint compareTo(::java::nio::LongBufferProxy p0);
			/*
			 * int hashCode();
			 */
			jint hashCode();
			/*
			 * String toString();
			 */
			::net::sourceforge::jnipp::JStringHelper toString();
			/*
			 * LongBuffer get(long[]);
			 */
			::java::nio::LongBufferProxy get(::net::sourceforge::jnipp::JLongArrayHelper<1> p0);
			/*
			 * LongBuffer get(long[], int, int);
			 */
			::java::nio::LongBufferProxy get(::net::sourceforge::jnipp::JLongArrayHelper<1> p0, jint p1, jint p2);
			/*
			 * LongBuffer put(LongBuffer);
			 */
			::java::nio::LongBufferProxy put(::java::nio::LongBufferProxy p0);
			/*
			 * LongBuffer put(long[], int, int);
			 */
			::java::nio::LongBufferProxy put(::net::sourceforge::jnipp::JLongArrayHelper<1> p0, jint p1, jint p2);
			/*
			 * static LongBuffer allocate(int);
			 */
			static ::java::nio::LongBufferProxy allocate(jint p0);
			/*
			 * static LongBuffer wrap(long[]);
			 */
			static ::java::nio::LongBufferProxy wrap(::net::sourceforge::jnipp::JLongArrayHelper<1> p0);
			/*
			 * static LongBuffer wrap(long[], int, int);
			 */
			static ::java::nio::LongBufferProxy wrap(::net::sourceforge::jnipp::JLongArrayHelper<1> p0, jint p1, jint p2);

		};
	}
}


#endif
