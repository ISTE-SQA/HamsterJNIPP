#ifndef __java_nio_ShortBufferProxy_H
#define __java_nio_ShortBufferProxy_H


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
		class ShortBufferProxy
		{
		private:
			static std::string className;
			static jclass objectClass;
			jobject peerObject;

		protected:
			ShortBufferProxy(void* unused);
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
			ShortBufferProxy(jobject obj);

			virtual ~ShortBufferProxy();
			ShortBufferProxy& operator=(const ShortBufferProxy& rhs);

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
			 * ShortBuffer asReadOnlyBuffer();
			 */
			::java::nio::ShortBufferProxy asReadOnlyBuffer();
			/*
			 * ShortBuffer compact();
			 */
			::java::nio::ShortBufferProxy compact();
			/*
			 * ShortBuffer duplicate();
			 */
			::java::nio::ShortBufferProxy duplicate();
			/*
			 * ShortBuffer put(int, short);
			 */
			::java::nio::ShortBufferProxy put(jint p0, jshort p1);
			/*
			 * ShortBuffer put(short);
			 */
			::java::nio::ShortBufferProxy put(jshort p0);
			/*
			 * ShortBuffer slice();
			 */
			::java::nio::ShortBufferProxy slice();
			/*
			 * short get();
			 */
			jshort get();
			/*
			 * short get(int);
			 */
			jshort get(jint p0);
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
			 * ShortBuffer put(short[]);
			 */
			::java::nio::ShortBufferProxy put(::net::sourceforge::jnipp::JShortArrayHelper<1> p0);
			/*
			 * short[] array();
			 */
			::net::sourceforge::jnipp::JShortArrayHelper<1> array();
			/*
			 * int compareTo(ShortBuffer);
			 */
			jint compareTo(::java::nio::ShortBufferProxy p0);
			/*
			 * int hashCode();
			 */
			jint hashCode();
			/*
			 * String toString();
			 */
			::net::sourceforge::jnipp::JStringHelper toString();
			/*
			 * ShortBuffer get(short[]);
			 */
			::java::nio::ShortBufferProxy get(::net::sourceforge::jnipp::JShortArrayHelper<1> p0);
			/*
			 * ShortBuffer get(short[], int, int);
			 */
			::java::nio::ShortBufferProxy get(::net::sourceforge::jnipp::JShortArrayHelper<1> p0, jint p1, jint p2);
			/*
			 * ShortBuffer put(ShortBuffer);
			 */
			::java::nio::ShortBufferProxy put(::java::nio::ShortBufferProxy p0);
			/*
			 * ShortBuffer put(short[], int, int);
			 */
			::java::nio::ShortBufferProxy put(::net::sourceforge::jnipp::JShortArrayHelper<1> p0, jint p1, jint p2);
			/*
			 * static ShortBuffer allocate(int);
			 */
			static ::java::nio::ShortBufferProxy allocate(jint p0);
			/*
			 * static ShortBuffer wrap(short[]);
			 */
			static ::java::nio::ShortBufferProxy wrap(::net::sourceforge::jnipp::JShortArrayHelper<1> p0);
			/*
			 * static ShortBuffer wrap(short[], int, int);
			 */
			static ::java::nio::ShortBufferProxy wrap(::net::sourceforge::jnipp::JShortArrayHelper<1> p0, jint p1, jint p2);

		};
	}
}


#endif
