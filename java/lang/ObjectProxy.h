#ifndef __java_lang_ObjectProxy_H
#define __java_lang_ObjectProxy_H


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

namespace java
{
	namespace lang
	{
		class ObjectProxy
		{
		private:
			static std::string className;
			static jclass objectClass;
			jobject peerObject;

		protected:
			ObjectProxy(void* unused);
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
			ObjectProxy(jobject obj);
			ObjectProxy();

			virtual ~ObjectProxy();
			ObjectProxy& operator=(const ObjectProxy& rhs);

			// methods
			/*
			 * boolean equals(Object);
			 */
			jboolean equals(::java::lang::ObjectProxy p0);
			/*
			 * Class getClass();
			 */
			::java::lang::ClassProxy getClass();
			/*
			 * void notify();
			 */
			void notify();
			/*
			 * void notifyAll();
			 */
			void notifyAll();
			/*
			 * void wait(long);
			 */
			void wait(jlong p0);
			/*
			 * void wait();
			 */
			void wait();
			/*
			 * void wait(long, int);
			 */
			void wait(jlong p0, jint p1);
			/*
			 * String toString();
			 */
			::net::sourceforge::jnipp::JStringHelper toString();
			/*
			 * int hashCode();
			 */
			jint hashCode();

		};
	}
}


#endif
