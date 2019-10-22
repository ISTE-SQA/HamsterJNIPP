#ifndef __java_lang_StackTraceElementProxy_H
#define __java_lang_StackTraceElementProxy_H


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

namespace java
{
	namespace lang
	{
		class StackTraceElementProxy
		{
		private:
			static std::string className;
			static jclass objectClass;
			jobject peerObject;

		protected:
			StackTraceElementProxy(void* unused);
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
			StackTraceElementProxy(jobject obj);
			StackTraceElementProxy(::net::sourceforge::jnipp::JStringHelper p0, ::net::sourceforge::jnipp::JStringHelper p1, ::net::sourceforge::jnipp::JStringHelper p2, jint p3);

			virtual ~StackTraceElementProxy();
			StackTraceElementProxy& operator=(const StackTraceElementProxy& rhs);

			// methods
			/*
			 * boolean equals(Object);
			 */
			jboolean equals(::java::lang::ObjectProxy p0);
			/*
			 * boolean isNativeMethod();
			 */
			jboolean isNativeMethod();
			/*
			 * int getLineNumber();
			 */
			jint getLineNumber();
			/*
			 * int hashCode();
			 */
			jint hashCode();
			/*
			 * String getClassName();
			 */
			::net::sourceforge::jnipp::JStringHelper getClassName();
			/*
			 * String getFileName();
			 */
			::net::sourceforge::jnipp::JStringHelper getFileName();
			/*
			 * String getMethodName();
			 */
			::net::sourceforge::jnipp::JStringHelper getMethodName();
			/*
			 * String toString();
			 */
			::net::sourceforge::jnipp::JStringHelper toString();

		};
	}
}


#endif
