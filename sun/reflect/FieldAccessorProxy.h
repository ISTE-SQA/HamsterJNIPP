#ifndef __sun_reflect_FieldAccessorProxy_H
#define __sun_reflect_FieldAccessorProxy_H


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

namespace sun
{
	namespace reflect
	{
		class FieldAccessorProxy
		{
		private:
			static std::string className;
			static jclass objectClass;
			jobject peerObject;

		protected:
			FieldAccessorProxy(void* unused);
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
			FieldAccessorProxy(jobject obj);

			virtual ~FieldAccessorProxy();
			FieldAccessorProxy& operator=(const FieldAccessorProxy& rhs);

			// methods
			/*
			 * boolean getBoolean(Object);
			 */
			jboolean getBoolean(::java::lang::ObjectProxy p0);
			/*
			 * byte getByte(Object);
			 */
			jbyte getByte(::java::lang::ObjectProxy p0);
			/*
			 * char getChar(Object);
			 */
			jchar getChar(::java::lang::ObjectProxy p0);
			/*
			 * double getDouble(Object);
			 */
			jdouble getDouble(::java::lang::ObjectProxy p0);
			/*
			 * float getFloat(Object);
			 */
			jfloat getFloat(::java::lang::ObjectProxy p0);
			/*
			 * int getInt(Object);
			 */
			jint getInt(::java::lang::ObjectProxy p0);
			/*
			 * Object get(Object);
			 */
			::java::lang::ObjectProxy get(::java::lang::ObjectProxy p0);
			/*
			 * long getLong(Object);
			 */
			jlong getLong(::java::lang::ObjectProxy p0);
			/*
			 * short getShort(Object);
			 */
			jshort getShort(::java::lang::ObjectProxy p0);
			/*
			 * void set(Object, Object);
			 */
			void set(::java::lang::ObjectProxy p0, ::java::lang::ObjectProxy p1);
			/*
			 * void setBoolean(Object, boolean);
			 */
			void setBoolean(::java::lang::ObjectProxy p0, jboolean p1);
			/*
			 * void setByte(Object, byte);
			 */
			void setByte(::java::lang::ObjectProxy p0, jbyte p1);
			/*
			 * void setChar(Object, char);
			 */
			void setChar(::java::lang::ObjectProxy p0, jchar p1);
			/*
			 * void setDouble(Object, double);
			 */
			void setDouble(::java::lang::ObjectProxy p0, jdouble p1);
			/*
			 * void setFloat(Object, float);
			 */
			void setFloat(::java::lang::ObjectProxy p0, jfloat p1);
			/*
			 * void setInt(Object, int);
			 */
			void setInt(::java::lang::ObjectProxy p0, jint p1);
			/*
			 * void setLong(Object, long);
			 */
			void setLong(::java::lang::ObjectProxy p0, jlong p1);
			/*
			 * void setShort(Object, short);
			 */
			void setShort(::java::lang::ObjectProxy p0, jshort p1);

		};
	}
}


#endif
