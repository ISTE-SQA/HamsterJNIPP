#ifndef __java_io_ObjectStreamFieldProxy_H
#define __java_io_ObjectStreamFieldProxy_H


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
#include "java\lang\ClassProxyForward.h"
#include "java\lang\ObjectProxyForward.h"
#include "java\lang\reflect\FieldProxyForward.h"

namespace java
{
	namespace io
	{
		class ObjectStreamFieldProxy
		{
		private:
			static std::string className;
			static jclass objectClass;
			jobject peerObject;

		protected:
			ObjectStreamFieldProxy(void* unused);
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
			ObjectStreamFieldProxy(jobject obj);
			ObjectStreamFieldProxy(::net::sourceforge::jnipp::JStringHelper p0, ::java::lang::ClassProxy p1);
			ObjectStreamFieldProxy(::net::sourceforge::jnipp::JStringHelper p0, ::java::lang::ClassProxy p1, jboolean p2);

			virtual ~ObjectStreamFieldProxy();
			ObjectStreamFieldProxy& operator=(const ObjectStreamFieldProxy& rhs);

			// methods
			/*
			 * boolean isPrimitive();
			 */
			jboolean isPrimitive();
			/*
			 * boolean isUnshared();
			 */
			jboolean isUnshared();
			/*
			 * char getTypeCode();
			 */
			jchar getTypeCode();
			/*
			 * int compareTo(Object);
			 */
			jint compareTo(::java::lang::ObjectProxy p0);
			/*
			 * int getOffset();
			 */
			jint getOffset();
			/*
			 * Class getType();
			 */
			::java::lang::ClassProxy getType();
			/*
			 * String getName();
			 */
			::net::sourceforge::jnipp::JStringHelper getName();
			/*
			 * String getTypeString();
			 */
			::net::sourceforge::jnipp::JStringHelper getTypeString();
			/*
			 * String toString();
			 */
			::net::sourceforge::jnipp::JStringHelper toString();

		};
	}
}


#endif
