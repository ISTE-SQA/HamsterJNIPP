#ifndef __java_lang_Thread_UncaughtExceptionHandlerProxy_H
#define __java_lang_Thread_UncaughtExceptionHandlerProxy_H


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
#include "java\lang\ThreadProxyForward.h"
#include "java\lang\ThrowableProxyForward.h"

namespace java
{
	namespace lang
	{
		class Thread_UncaughtExceptionHandlerProxy
		{
		private:
			static std::string className;
			static jclass objectClass;
			jobject peerObject;

		protected:
			Thread_UncaughtExceptionHandlerProxy(void* unused);
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
			Thread_UncaughtExceptionHandlerProxy(jobject obj);

			virtual ~Thread_UncaughtExceptionHandlerProxy();
			Thread_UncaughtExceptionHandlerProxy& operator=(const Thread_UncaughtExceptionHandlerProxy& rhs);

			// methods
			/*
			 * void uncaughtException(Thread, Throwable);
			 */
			void uncaughtException(::java::lang::ThreadProxy p0, ::java::lang::ThrowableProxy p1);

		};
	}
}


#endif
