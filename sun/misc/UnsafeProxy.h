#ifndef __sun_misc_UnsafeProxy_H
#define __sun_misc_UnsafeProxy_H


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
#include "java\lang\ObjectProxyForward.h"
#include "java\lang\reflect\FieldProxyForward.h"
#include "java\lang\ClassProxyForward.h"
#include "java\lang\ClassLoaderProxyForward.h"
#include "java\security\ProtectionDomainProxyForward.h"
#include "java\lang\ThrowableProxyForward.h"
#include "java\lang\ObjectProxy.h"

namespace sun
{
	namespace misc
	{
		class UnsafeProxy
		{
		private:
			static std::string className;
			static jclass objectClass;
			jobject peerObject;

		protected:
			UnsafeProxy(void* unused);
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
			UnsafeProxy(jobject obj);

			virtual ~UnsafeProxy();
			UnsafeProxy& operator=(const UnsafeProxy& rhs);

			// methods
			/*
			 * boolean getBoolean(Object, int);
			 */
			jboolean getBoolean(::java::lang::ObjectProxy p0, jint p1);
			/*
			 * byte getByte(Object, int);
			 */
			jbyte getByte(::java::lang::ObjectProxy p0, jint p1);
			/*
			 * char getChar(Object, int);
			 */
			jchar getChar(::java::lang::ObjectProxy p0, jint p1);
			/*
			 * double getDouble(Object, int);
			 */
			jdouble getDouble(::java::lang::ObjectProxy p0, jint p1);
			/*
			 * int getAndAddInt(Object, long, int);
			 */
			jint getAndAddInt(::java::lang::ObjectProxy p0, jlong p1, jint p2);
			/*
			 * int getAndSetInt(Object, long, int);
			 */
			jint getAndSetInt(::java::lang::ObjectProxy p0, jlong p1, jint p2);
			/*
			 * Object getAndSetObject(Object, long, Object);
			 */
			::java::lang::ObjectProxy getAndSetObject(::java::lang::ObjectProxy p0, jlong p1, ::java::lang::ObjectProxy p2);
			/*
			 * long getAndAddLong(Object, long, long);
			 */
			jlong getAndAddLong(::java::lang::ObjectProxy p0, jlong p1, jlong p2);
			/*
			 * long getAndSetLong(Object, long, long);
			 */
			jlong getAndSetLong(::java::lang::ObjectProxy p0, jlong p1, jlong p2);
			/*
			 * boolean compareAndSwapInt(Object, long, int, int);
			 */
			jboolean compareAndSwapInt(::java::lang::ObjectProxy p0, jlong p1, jint p2, jint p3);
			/*
			 * boolean compareAndSwapLong(Object, long, long, long);
			 */
			jboolean compareAndSwapLong(::java::lang::ObjectProxy p0, jlong p1, jlong p2, jlong p3);
			/*
			 * boolean compareAndSwapObject(Object, long, Object, Object);
			 */
			jboolean compareAndSwapObject(::java::lang::ObjectProxy p0, jlong p1, ::java::lang::ObjectProxy p2, ::java::lang::ObjectProxy p3);
			/*
			 * float getFloat(Object, int);
			 */
			jfloat getFloat(::java::lang::ObjectProxy p0, jint p1);
			/*
			 * int fieldOffset(Field);
			 */
			jint fieldOffset(::java::lang::reflect::FieldProxy p0);
			/*
			 * int getInt(Object, int);
			 */
			jint getInt(::java::lang::ObjectProxy p0, jint p1);
			/*
			 * Object getObject(Object, int);
			 */
			::java::lang::ObjectProxy getObject(::java::lang::ObjectProxy p0, jint p1);
			/*
			 * Object staticFieldBase(Class);
			 */
			::java::lang::ObjectProxy staticFieldBase(::java::lang::ClassProxy p0);
			/*
			 * long getLong(Object, int);
			 */
			jlong getLong(::java::lang::ObjectProxy p0, jint p1);
			/*
			 * boolean getBoolean(Object, long);
			 */
			jboolean getBoolean(::java::lang::ObjectProxy p0, jlong p1);
			/*
			 * boolean getBooleanVolatile(Object, long);
			 */
			jboolean getBooleanVolatile(::java::lang::ObjectProxy p0, jlong p1);
			/*
			 * boolean shouldBeInitialized(Class);
			 */
			jboolean shouldBeInitialized(::java::lang::ClassProxy p0);
			/*
			 * boolean tryMonitorEnter(Object);
			 */
			jboolean tryMonitorEnter(::java::lang::ObjectProxy p0);
			/*
			 * byte getByte(Object, long);
			 */
			jbyte getByte(::java::lang::ObjectProxy p0, jlong p1);
			/*
			 * byte getByte(long);
			 */
			jbyte getByte(jlong p0);
			/*
			 * byte getByteVolatile(Object, long);
			 */
			jbyte getByteVolatile(::java::lang::ObjectProxy p0, jlong p1);
			/*
			 * char getChar(Object, long);
			 */
			jchar getChar(::java::lang::ObjectProxy p0, jlong p1);
			/*
			 * char getChar(long);
			 */
			jchar getChar(jlong p0);
			/*
			 * char getCharVolatile(Object, long);
			 */
			jchar getCharVolatile(::java::lang::ObjectProxy p0, jlong p1);
			/*
			 * double getDouble(Object, long);
			 */
			jdouble getDouble(::java::lang::ObjectProxy p0, jlong p1);
			/*
			 * double getDouble(long);
			 */
			jdouble getDouble(jlong p0);
			/*
			 * double getDoubleVolatile(Object, long);
			 */
			jdouble getDoubleVolatile(::java::lang::ObjectProxy p0, jlong p1);
			/*
			 * float getFloat(Object, long);
			 */
			jfloat getFloat(::java::lang::ObjectProxy p0, jlong p1);
			/*
			 * float getFloat(long);
			 */
			jfloat getFloat(jlong p0);
			/*
			 * float getFloatVolatile(Object, long);
			 */
			jfloat getFloatVolatile(::java::lang::ObjectProxy p0, jlong p1);
			/*
			 * int addressSize();
			 */
			jint addressSize();
			/*
			 * int arrayBaseOffset(Class);
			 */
			jint arrayBaseOffset(::java::lang::ClassProxy p0);
			/*
			 * int arrayIndexScale(Class);
			 */
			jint arrayIndexScale(::java::lang::ClassProxy p0);
			/*
			 * int getInt(Object, long);
			 */
			jint getInt(::java::lang::ObjectProxy p0, jlong p1);
			/*
			 * int getInt(long);
			 */
			jint getInt(jlong p0);
			/*
			 * int getIntVolatile(Object, long);
			 */
			jint getIntVolatile(::java::lang::ObjectProxy p0, jlong p1);
			/*
			 * int getLoadAverage(double[], int);
			 */
			jint getLoadAverage(::net::sourceforge::jnipp::JDoubleArrayHelper<1> p0, jint p1);
			/*
			 * int pageSize();
			 */
			jint pageSize();
			/*
			 * Class defineAnonymousClass(Class, byte[], Object[]);
			 */
			::java::lang::ClassProxy defineAnonymousClass(::java::lang::ClassProxy p0, ::net::sourceforge::jnipp::JByteArrayHelper<1> p1, ::net::sourceforge::jnipp::PA<::java::lang::ObjectProxy>::ProxyArray<1> p2);
			/*
			 * Class defineClass(String, byte[], int, int, ClassLoader, ProtectionDomain);
			 */
			::java::lang::ClassProxy defineClass(::net::sourceforge::jnipp::JStringHelper p0, ::net::sourceforge::jnipp::JByteArrayHelper<1> p1, jint p2, jint p3, ::java::lang::ClassLoaderProxy p4, ::java::security::ProtectionDomainProxy p5);
			/*
			 * Object allocateInstance(Class);
			 */
			::java::lang::ObjectProxy allocateInstance(::java::lang::ClassProxy p0);
			/*
			 * Object getObject(Object, long);
			 */
			::java::lang::ObjectProxy getObject(::java::lang::ObjectProxy p0, jlong p1);
			/*
			 * Object getObjectVolatile(Object, long);
			 */
			::java::lang::ObjectProxy getObjectVolatile(::java::lang::ObjectProxy p0, jlong p1);
			/*
			 * Object staticFieldBase(Field);
			 */
			::java::lang::ObjectProxy staticFieldBase(::java::lang::reflect::FieldProxy p0);
			/*
			 * long allocateMemory(long);
			 */
			jlong allocateMemory(jlong p0);
			/*
			 * long getAddress(long);
			 */
			jlong getAddress(jlong p0);
			/*
			 * long getLong(Object, long);
			 */
			jlong getLong(::java::lang::ObjectProxy p0, jlong p1);
			/*
			 * long getLong(long);
			 */
			jlong getLong(jlong p0);
			/*
			 * long getLongVolatile(Object, long);
			 */
			jlong getLongVolatile(::java::lang::ObjectProxy p0, jlong p1);
			/*
			 * long objectFieldOffset(Field);
			 */
			jlong objectFieldOffset(::java::lang::reflect::FieldProxy p0);
			/*
			 * long reallocateMemory(long, long);
			 */
			jlong reallocateMemory(jlong p0, jlong p1);
			/*
			 * long staticFieldOffset(Field);
			 */
			jlong staticFieldOffset(::java::lang::reflect::FieldProxy p0);
			/*
			 * short getShort(Object, long);
			 */
			jshort getShort(::java::lang::ObjectProxy p0, jlong p1);
			/*
			 * short getShort(long);
			 */
			jshort getShort(jlong p0);
			/*
			 * short getShortVolatile(Object, long);
			 */
			jshort getShortVolatile(::java::lang::ObjectProxy p0, jlong p1);
			/*
			 * void copyMemory(Object, long, Object, long, long);
			 */
			void copyMemory(::java::lang::ObjectProxy p0, jlong p1, ::java::lang::ObjectProxy p2, jlong p3, jlong p4);
			/*
			 * void ensureClassInitialized(Class);
			 */
			void ensureClassInitialized(::java::lang::ClassProxy p0);
			/*
			 * void freeMemory(long);
			 */
			void freeMemory(jlong p0);
			/*
			 * void fullFence();
			 */
			void fullFence();
			/*
			 * void loadFence();
			 */
			void loadFence();
			/*
			 * void monitorEnter(Object);
			 */
			void monitorEnter(::java::lang::ObjectProxy p0);
			/*
			 * void monitorExit(Object);
			 */
			void monitorExit(::java::lang::ObjectProxy p0);
			/*
			 * void park(boolean, long);
			 */
			void park(jboolean p0, jlong p1);
			/*
			 * void putAddress(long, long);
			 */
			void putAddress(jlong p0, jlong p1);
			/*
			 * void putBoolean(Object, long, boolean);
			 */
			void putBoolean(::java::lang::ObjectProxy p0, jlong p1, jboolean p2);
			/*
			 * void putBooleanVolatile(Object, long, boolean);
			 */
			void putBooleanVolatile(::java::lang::ObjectProxy p0, jlong p1, jboolean p2);
			/*
			 * void putByte(Object, long, byte);
			 */
			void putByte(::java::lang::ObjectProxy p0, jlong p1, jbyte p2);
			/*
			 * void putByte(long, byte);
			 */
			void putByte(jlong p0, jbyte p1);
			/*
			 * void putByteVolatile(Object, long, byte);
			 */
			void putByteVolatile(::java::lang::ObjectProxy p0, jlong p1, jbyte p2);
			/*
			 * void putChar(Object, long, char);
			 */
			void putChar(::java::lang::ObjectProxy p0, jlong p1, jchar p2);
			/*
			 * void putChar(long, char);
			 */
			void putChar(jlong p0, jchar p1);
			/*
			 * void putCharVolatile(Object, long, char);
			 */
			void putCharVolatile(::java::lang::ObjectProxy p0, jlong p1, jchar p2);
			/*
			 * void putDouble(Object, long, double);
			 */
			void putDouble(::java::lang::ObjectProxy p0, jlong p1, jdouble p2);
			/*
			 * void putDouble(long, double);
			 */
			void putDouble(jlong p0, jdouble p1);
			/*
			 * void putDoubleVolatile(Object, long, double);
			 */
			void putDoubleVolatile(::java::lang::ObjectProxy p0, jlong p1, jdouble p2);
			/*
			 * void putFloat(Object, long, float);
			 */
			void putFloat(::java::lang::ObjectProxy p0, jlong p1, jfloat p2);
			/*
			 * void putFloat(long, float);
			 */
			void putFloat(jlong p0, jfloat p1);
			/*
			 * void putFloatVolatile(Object, long, float);
			 */
			void putFloatVolatile(::java::lang::ObjectProxy p0, jlong p1, jfloat p2);
			/*
			 * void putInt(Object, long, int);
			 */
			void putInt(::java::lang::ObjectProxy p0, jlong p1, jint p2);
			/*
			 * void putInt(long, int);
			 */
			void putInt(jlong p0, jint p1);
			/*
			 * void putIntVolatile(Object, long, int);
			 */
			void putIntVolatile(::java::lang::ObjectProxy p0, jlong p1, jint p2);
			/*
			 * void putLong(Object, long, long);
			 */
			void putLong(::java::lang::ObjectProxy p0, jlong p1, jlong p2);
			/*
			 * void putLong(long, long);
			 */
			void putLong(jlong p0, jlong p1);
			/*
			 * void putLongVolatile(Object, long, long);
			 */
			void putLongVolatile(::java::lang::ObjectProxy p0, jlong p1, jlong p2);
			/*
			 * void putObject(Object, long, Object);
			 */
			void putObject(::java::lang::ObjectProxy p0, jlong p1, ::java::lang::ObjectProxy p2);
			/*
			 * void putObjectVolatile(Object, long, Object);
			 */
			void putObjectVolatile(::java::lang::ObjectProxy p0, jlong p1, ::java::lang::ObjectProxy p2);
			/*
			 * void putOrderedInt(Object, long, int);
			 */
			void putOrderedInt(::java::lang::ObjectProxy p0, jlong p1, jint p2);
			/*
			 * void putOrderedLong(Object, long, long);
			 */
			void putOrderedLong(::java::lang::ObjectProxy p0, jlong p1, jlong p2);
			/*
			 * void putOrderedObject(Object, long, Object);
			 */
			void putOrderedObject(::java::lang::ObjectProxy p0, jlong p1, ::java::lang::ObjectProxy p2);
			/*
			 * void putShort(Object, long, short);
			 */
			void putShort(::java::lang::ObjectProxy p0, jlong p1, jshort p2);
			/*
			 * void putShort(long, short);
			 */
			void putShort(jlong p0, jshort p1);
			/*
			 * void putShortVolatile(Object, long, short);
			 */
			void putShortVolatile(::java::lang::ObjectProxy p0, jlong p1, jshort p2);
			/*
			 * void setMemory(Object, long, long, byte);
			 */
			void setMemory(::java::lang::ObjectProxy p0, jlong p1, jlong p2, jbyte p3);
			/*
			 * void storeFence();
			 */
			void storeFence();
			/*
			 * void throwException(Throwable);
			 */
			void throwException(::java::lang::ThrowableProxy p0);
			/*
			 * void unpark(Object);
			 */
			void unpark(::java::lang::ObjectProxy p0);
			/*
			 * short getShort(Object, int);
			 */
			jshort getShort(::java::lang::ObjectProxy p0, jint p1);
			/*
			 * void copyMemory(long, long, long);
			 */
			void copyMemory(jlong p0, jlong p1, jlong p2);
			/*
			 * void putBoolean(Object, int, boolean);
			 */
			void putBoolean(::java::lang::ObjectProxy p0, jint p1, jboolean p2);
			/*
			 * void putByte(Object, int, byte);
			 */
			void putByte(::java::lang::ObjectProxy p0, jint p1, jbyte p2);
			/*
			 * void putChar(Object, int, char);
			 */
			void putChar(::java::lang::ObjectProxy p0, jint p1, jchar p2);
			/*
			 * void putDouble(Object, int, double);
			 */
			void putDouble(::java::lang::ObjectProxy p0, jint p1, jdouble p2);
			/*
			 * void putFloat(Object, int, float);
			 */
			void putFloat(::java::lang::ObjectProxy p0, jint p1, jfloat p2);
			/*
			 * void putInt(Object, int, int);
			 */
			void putInt(::java::lang::ObjectProxy p0, jint p1, jint p2);
			/*
			 * void putLong(Object, int, long);
			 */
			void putLong(::java::lang::ObjectProxy p0, jint p1, jlong p2);
			/*
			 * void putObject(Object, int, Object);
			 */
			void putObject(::java::lang::ObjectProxy p0, jint p1, ::java::lang::ObjectProxy p2);
			/*
			 * void putShort(Object, int, short);
			 */
			void putShort(::java::lang::ObjectProxy p0, jint p1, jshort p2);
			/*
			 * void setMemory(long, long, byte);
			 */
			void setMemory(jlong p0, jlong p1, jbyte p2);

		};
	}
}


#endif
