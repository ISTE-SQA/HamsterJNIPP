#ifndef __java_lang_ThreadProxy_H
#define __java_lang_ThreadProxy_H


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
#include "java\lang\RunnableProxyForward.h"
#include "java\lang\ThreadGroupProxyForward.h"
#include "java\lang\ThrowableProxyForward.h"
#include "java\lang\ClassLoaderProxyForward.h"
#include "java\lang\Thread_StateProxyForward.h"
#include "java\lang\Thread_UncaughtExceptionHandlerProxyForward.h"
#include "java\util\MapProxyForward.h"
#include "java\lang\ObjectProxyForward.h"
#include "java\lang\ThreadLocal_ThreadLocalMapProxyForward.h"
#include "java\security\AccessControlContextProxyForward.h"
#include "java\lang\RuntimePermissionProxyForward.h"
#include "sun\nio\ch\InterruptibleProxyForward.h"
#include "java\lang\StackTraceElementProxy.h"
#include "java\lang\ThreadProxy.h"

namespace java
{
	namespace lang
	{
		class ThreadProxy
		{
		private:
			static std::string className;
			static jclass objectClass;
			jobject peerObject;

		protected:
			ThreadProxy(void* unused);
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
			ThreadProxy(jobject obj);
			ThreadProxy();
			ThreadProxy(::java::lang::RunnableProxy p0);
			ThreadProxy(::java::lang::RunnableProxy p0, ::net::sourceforge::jnipp::JStringHelper p1);
			ThreadProxy(::net::sourceforge::jnipp::JStringHelper p0);
			ThreadProxy(::java::lang::ThreadGroupProxy p0, ::java::lang::RunnableProxy p1);
			ThreadProxy(::java::lang::ThreadGroupProxy p0, ::java::lang::RunnableProxy p1, ::net::sourceforge::jnipp::JStringHelper p2);
			ThreadProxy(::java::lang::ThreadGroupProxy p0, ::java::lang::RunnableProxy p1, ::net::sourceforge::jnipp::JStringHelper p2, jlong p3);
			ThreadProxy(::java::lang::ThreadGroupProxy p0, ::net::sourceforge::jnipp::JStringHelper p1);

			virtual ~ThreadProxy();
			ThreadProxy& operator=(const ThreadProxy& rhs);

			// methods
			/*
			 * boolean isInterrupted();
			 */
			jboolean isInterrupted();
			/*
			 * boolean isDaemon();
			 */
			jboolean isDaemon();
			/*
			 * int getPriority();
			 */
			jint getPriority();
			/*
			 * String getName();
			 */
			::net::sourceforge::jnipp::JStringHelper getName();
			/*
			 * ThreadGroup getThreadGroup();
			 */
			::java::lang::ThreadGroupProxy getThreadGroup();
			/*
			 * boolean isAlive();
			 */
			jboolean isAlive();
			/*
			 * void join(long);
			 */
			void join(jlong p0);
			/*
			 * void join(long, int);
			 */
			void join(jlong p0, jint p1);
			/*
			 * void setName(String);
			 */
			void setName(::net::sourceforge::jnipp::JStringHelper p0);
			/*
			 * void stop(Throwable);
			 */
			void stop(::java::lang::ThrowableProxy p0);
			/*
			 * void checkAccess();
			 */
			void checkAccess();
			/*
			 * void join();
			 */
			void join();
			/*
			 * void resume();
			 */
			void resume();
			/*
			 * void setDaemon(boolean);
			 */
			void setDaemon(jboolean p0);
			/*
			 * void setPriority(int);
			 */
			void setPriority(jint p0);
			/*
			 * void stop();
			 */
			void stop();
			/*
			 * void suspend();
			 */
			void suspend();
			/*
			 * ClassLoader getContextClassLoader();
			 */
			::java::lang::ClassLoaderProxy getContextClassLoader();
			/*
			 * StackTraceElement[] getStackTrace();
			 */
			::net::sourceforge::jnipp::PA<::java::lang::StackTraceElementProxy>::ProxyArray<1> getStackTrace();
			/*
			 * String toString();
			 */
			::net::sourceforge::jnipp::JStringHelper toString();
			/*
			 * Thread$State getState();
			 */
			::java::lang::Thread_StateProxy getState();
			/*
			 * Thread$UncaughtExceptionHandler getUncaughtExceptionHandler();
			 */
			::java::lang::Thread_UncaughtExceptionHandlerProxy getUncaughtExceptionHandler();
			/*
			 * long getId();
			 */
			jlong getId();
			/*
			 * int countStackFrames();
			 */
			jint countStackFrames();
			/*
			 * static boolean interrupted();
			 */
			static jboolean interrupted();
			/*
			 * static int activeCount();
			 */
			static jint activeCount();
			/*
			 * static int enumerate(Thread[]);
			 */
			static jint enumerate(::net::sourceforge::jnipp::PA<::java::lang::ThreadProxy>::ProxyArray<1> p0);
			/*
			 * static Thread$UncaughtExceptionHandler getDefaultUncaughtExceptionHandler();
			 */
			static ::java::lang::Thread_UncaughtExceptionHandlerProxy getDefaultUncaughtExceptionHandler();
			/*
			 * static Map getAllStackTraces();
			 */
			static ::java::util::MapProxy getAllStackTraces();
			/*
			 * static boolean holdsLock(Object);
			 */
			static jboolean holdsLock(::java::lang::ObjectProxy p0);
			/*
			 * static Thread currentThread();
			 */
			static ::java::lang::ThreadProxy currentThread();
			/*
			 * static void sleep(long);
			 */
			static void sleep(jlong p0);
			/*
			 * static void yield();
			 */
			static void yield();
			/*
			 * static void dumpStack();
			 */
			static void dumpStack();
			/*
			 * static void setDefaultUncaughtExceptionHandler(Thread$UncaughtExceptionHandler);
			 */
			static void setDefaultUncaughtExceptionHandler(::java::lang::Thread_UncaughtExceptionHandlerProxy p0);
			/*
			 * static void sleep(long, int);
			 */
			static void sleep(jlong p0, jint p1);
			/*
			 * void start();
			 */
			void start();
			/*
			 * void destroy();
			 */
			void destroy();
			/*
			 * void interrupt();
			 */
			void interrupt();
			/*
			 * void run();
			 */
			void run();
			/*
			 * void setContextClassLoader(ClassLoader);
			 */
			void setContextClassLoader(::java::lang::ClassLoaderProxy p0);
			/*
			 * void setUncaughtExceptionHandler(Thread$UncaughtExceptionHandler);
			 */
			void setUncaughtExceptionHandler(::java::lang::Thread_UncaughtExceptionHandlerProxy p0);

		};
	}
}


#endif
