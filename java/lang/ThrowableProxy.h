#ifndef __java_lang_ThrowableProxy_H
#define __java_lang_ThrowableProxy_H


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
#include "java\io\PrintStreamProxyForward.h"
#include "java\io\PrintWriterProxyForward.h"
#include "java\util\ListProxyForward.h"
#include "java\lang\ThrowableProxy.h"
#include "java\lang\StackTraceElementProxy.h"

namespace java
{
	namespace lang
	{
		class ThrowableProxy
		{
		private:
			static std::string className;
			static jclass objectClass;
			jobject peerObject;

		protected:
			ThrowableProxy(void* unused);
			virtual jobject _getPeerObject() const;

		public:
			static jclass _getObjectClass();
			static inline std::string _getClassName()
			{
				return className;
			}

			jclass getObjectClass();
			operator jobject();
			operator jthrowable();
			// constructors
			ThrowableProxy(jobject obj);
			ThrowableProxy();
			ThrowableProxy(::net::sourceforge::jnipp::JStringHelper p0);
			ThrowableProxy(::net::sourceforge::jnipp::JStringHelper p0, ::java::lang::ThrowableProxy p1);
			ThrowableProxy(::java::lang::ThrowableProxy& p0);

			virtual ~ThrowableProxy();
			ThrowableProxy& operator=(const ThrowableProxy& rhs);

			// methods
			/*
			 * Throwable[] getSuppressed();
			 */
			::net::sourceforge::jnipp::PA<::java::lang::ThrowableProxy>::ProxyArray<1> getSuppressed();
			/*
			 * void addSuppressed(Throwable);
			 */
			void addSuppressed(::java::lang::ThrowableProxy p0);
			/*
			 * StackTraceElement[] getStackTrace();
			 */
			::net::sourceforge::jnipp::PA<::java::lang::StackTraceElementProxy>::ProxyArray<1> getStackTrace();
			/*
			 * String getLocalizedMessage();
			 */
			::net::sourceforge::jnipp::JStringHelper getLocalizedMessage();
			/*
			 * String getMessage();
			 */
			::net::sourceforge::jnipp::JStringHelper getMessage();
			/*
			 * String toString();
			 */
			::net::sourceforge::jnipp::JStringHelper toString();
			/*
			 * Throwable fillInStackTrace();
			 */
			::java::lang::ThrowableProxy fillInStackTrace();
			/*
			 * Throwable getCause();
			 */
			::java::lang::ThrowableProxy getCause();
			/*
			 * Throwable initCause(Throwable);
			 */
			::java::lang::ThrowableProxy initCause(::java::lang::ThrowableProxy p0);
			/*
			 * void printStackTrace();
			 */
			void printStackTrace();
			/*
			 * void printStackTrace(PrintStream);
			 */
			void printStackTrace(::java::io::PrintStreamProxy p0);
			/*
			 * void printStackTrace(PrintWriter);
			 */
			void printStackTrace(::java::io::PrintWriterProxy p0);
			/*
			 * void setStackTrace(StackTraceElement[]);
			 */
			void setStackTrace(::net::sourceforge::jnipp::PA<::java::lang::StackTraceElementProxy>::ProxyArray<1> p0);

		};
	}
}


#endif
