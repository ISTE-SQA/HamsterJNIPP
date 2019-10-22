#ifndef __java_nio_ByteBufferProxy_H
#define __java_nio_ByteBufferProxy_H


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
#include "java\nio\CharBufferProxyForward.h"
#include "java\nio\DoubleBufferProxyForward.h"
#include "java\nio\FloatBufferProxyForward.h"
#include "java\nio\IntBufferProxyForward.h"
#include "java\nio\LongBufferProxyForward.h"
#include "java\nio\ShortBufferProxyForward.h"
#include "java\lang\ObjectProxyForward.h"
#include "java\nio\ByteOrderProxyForward.h"

namespace java
{
	namespace nio
	{
		class ByteBufferProxy
		{
		private:
			static std::string className;
			static jclass objectClass;
			jobject peerObject;

		protected:
			ByteBufferProxy(void* unused);
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
			ByteBufferProxy(jobject obj);

			virtual ~ByteBufferProxy();
			ByteBufferProxy& operator=(const ByteBufferProxy& rhs);

			// methods
			/*
			 * boolean isDirect();
			 */
			jboolean isDirect();
			/*
			 * byte get();
			 */
			jbyte get();
			/*
			 * byte get(int);
			 */
			jbyte get(jint p0);
			/*
			 * char getChar();
			 */
			jchar getChar();
			/*
			 * char getChar(int);
			 */
			jchar getChar(jint p0);
			/*
			 * double getDouble();
			 */
			jdouble getDouble();
			/*
			 * double getDouble(int);
			 */
			jdouble getDouble(jint p0);
			/*
			 * float getFloat();
			 */
			jfloat getFloat();
			/*
			 * float getFloat(int);
			 */
			jfloat getFloat(jint p0);
			/*
			 * int getInt();
			 */
			jint getInt();
			/*
			 * int getInt(int);
			 */
			jint getInt(jint p0);
			/*
			 * ByteBuffer asReadOnlyBuffer();
			 */
			::java::nio::ByteBufferProxy asReadOnlyBuffer();
			/*
			 * ByteBuffer compact();
			 */
			::java::nio::ByteBufferProxy compact();
			/*
			 * ByteBuffer duplicate();
			 */
			::java::nio::ByteBufferProxy duplicate();
			/*
			 * ByteBuffer put(byte);
			 */
			::java::nio::ByteBufferProxy put(jbyte p0);
			/*
			 * ByteBuffer put(int, byte);
			 */
			::java::nio::ByteBufferProxy put(jint p0, jbyte p1);
			/*
			 * ByteBuffer putChar(char);
			 */
			::java::nio::ByteBufferProxy putChar(jchar p0);
			/*
			 * ByteBuffer putChar(int, char);
			 */
			::java::nio::ByteBufferProxy putChar(jint p0, jchar p1);
			/*
			 * ByteBuffer putDouble(double);
			 */
			::java::nio::ByteBufferProxy putDouble(jdouble p0);
			/*
			 * ByteBuffer putDouble(int, double);
			 */
			::java::nio::ByteBufferProxy putDouble(jint p0, jdouble p1);
			/*
			 * ByteBuffer putFloat(float);
			 */
			::java::nio::ByteBufferProxy putFloat(jfloat p0);
			/*
			 * ByteBuffer putFloat(int, float);
			 */
			::java::nio::ByteBufferProxy putFloat(jint p0, jfloat p1);
			/*
			 * ByteBuffer putInt(int);
			 */
			::java::nio::ByteBufferProxy putInt(jint p0);
			/*
			 * ByteBuffer putInt(int, int);
			 */
			::java::nio::ByteBufferProxy putInt(jint p0, jint p1);
			/*
			 * ByteBuffer putLong(int, long);
			 */
			::java::nio::ByteBufferProxy putLong(jint p0, jlong p1);
			/*
			 * ByteBuffer putLong(long);
			 */
			::java::nio::ByteBufferProxy putLong(jlong p0);
			/*
			 * ByteBuffer putShort(int, short);
			 */
			::java::nio::ByteBufferProxy putShort(jint p0, jshort p1);
			/*
			 * ByteBuffer putShort(short);
			 */
			::java::nio::ByteBufferProxy putShort(jshort p0);
			/*
			 * ByteBuffer slice();
			 */
			::java::nio::ByteBufferProxy slice();
			/*
			 * CharBuffer asCharBuffer();
			 */
			::java::nio::CharBufferProxy asCharBuffer();
			/*
			 * DoubleBuffer asDoubleBuffer();
			 */
			::java::nio::DoubleBufferProxy asDoubleBuffer();
			/*
			 * FloatBuffer asFloatBuffer();
			 */
			::java::nio::FloatBufferProxy asFloatBuffer();
			/*
			 * IntBuffer asIntBuffer();
			 */
			::java::nio::IntBufferProxy asIntBuffer();
			/*
			 * LongBuffer asLongBuffer();
			 */
			::java::nio::LongBufferProxy asLongBuffer();
			/*
			 * ShortBuffer asShortBuffer();
			 */
			::java::nio::ShortBufferProxy asShortBuffer();
			/*
			 * long getLong();
			 */
			jlong getLong();
			/*
			 * long getLong(int);
			 */
			jlong getLong(jint p0);
			/*
			 * short getShort();
			 */
			jshort getShort();
			/*
			 * short getShort(int);
			 */
			jshort getShort(jint p0);
			/*
			 * boolean equals(Object);
			 */
			jboolean equals(::java::lang::ObjectProxy p0);
			/*
			 * boolean hasArray();
			 */
			jboolean hasArray();
			/*
			 * byte[] array();
			 */
			::net::sourceforge::jnipp::JByteArrayHelper<1> array();
			/*
			 * int arrayOffset();
			 */
			jint arrayOffset();
			/*
			 * ByteBuffer order(ByteOrder);
			 */
			::java::nio::ByteBufferProxy order(::java::nio::ByteOrderProxy p0);
			/*
			 * ByteBuffer put(byte[]);
			 */
			::java::nio::ByteBufferProxy put(::net::sourceforge::jnipp::JByteArrayHelper<1> p0);
			/*
			 * ByteOrder order();
			 */
			::java::nio::ByteOrderProxy order();
			/*
			 * int compareTo(ByteBuffer);
			 */
			jint compareTo(::java::nio::ByteBufferProxy p0);
			/*
			 * int hashCode();
			 */
			jint hashCode();
			/*
			 * String toString();
			 */
			::net::sourceforge::jnipp::JStringHelper toString();
			/*
			 * ByteBuffer get(byte[]);
			 */
			::java::nio::ByteBufferProxy get(::net::sourceforge::jnipp::JByteArrayHelper<1> p0);
			/*
			 * ByteBuffer get(byte[], int, int);
			 */
			::java::nio::ByteBufferProxy get(::net::sourceforge::jnipp::JByteArrayHelper<1> p0, jint p1, jint p2);
			/*
			 * ByteBuffer put(byte[], int, int);
			 */
			::java::nio::ByteBufferProxy put(::net::sourceforge::jnipp::JByteArrayHelper<1> p0, jint p1, jint p2);
			/*
			 * ByteBuffer put(ByteBuffer);
			 */
			::java::nio::ByteBufferProxy put(::java::nio::ByteBufferProxy p0);
			/*
			 * static ByteBuffer allocate(int);
			 */
			static ::java::nio::ByteBufferProxy allocate(jint p0);
			/*
			 * static ByteBuffer allocateDirect(int);
			 */
			static ::java::nio::ByteBufferProxy allocateDirect(jint p0);
			/*
			 * static ByteBuffer wrap(byte[]);
			 */
			static ::java::nio::ByteBufferProxy wrap(::net::sourceforge::jnipp::JByteArrayHelper<1> p0);
			/*
			 * static ByteBuffer wrap(byte[], int, int);
			 */
			static ::java::nio::ByteBufferProxy wrap(::net::sourceforge::jnipp::JByteArrayHelper<1> p0, jint p1, jint p2);

		};
	}
}


#endif
