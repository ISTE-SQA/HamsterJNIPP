#ifndef __java_lang_ThreadGroupProxy_H
#define __java_lang_ThreadGroupProxy_H


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
#include "java\lang\ThrowableProxyForward.h"
#include "java\lang\ThreadGroupProxy.h"
#include "java\lang\ThreadProxy.h"

namespace java
{
	namespace lang
	{
		class ThreadGroupProxy
		{
		private:
			static std::string className;
			static jclass objectClass;
			jobject peerObject;

		protected:
			ThreadGroupProxy(void* unused);
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
			ThreadGroupProxy(jobject obj);
			ThreadGroupProxy(::net::sourceforge::jnipp::JStringHelper p0);
			ThreadGroupProxy(::java::lang::ThreadGroupProxy p0, ::net::sourceforge::jnipp::JStringHelper p1);

			virtual ~ThreadGroupProxy();
			ThreadGroupProxy& operator=(const ThreadGroupProxy& rhs);

			// methods
			/*
			 * boolean allowThreadSuspension(boolean);
			 */
			jboolean allowThreadSuspension(jboolean p0);
			/*
			 * boolean isDaemon();
			 */
			jboolean isDaemon();
			/*
			 * boolean parentOf(ThreadGroup);
			 */
			jboolean parentOf(::java::lang::ThreadGroupProxy p0);
			/*
			 * int getMaxPriority();
			 */
			jint getMaxPriority();
			/*
			 * String getName();
			 */
			::net::sourceforge::jnipp::JStringHelper getName();
			/*
			 * ThreadGroup getParent();
			 */
			::java::lang::ThreadGroupProxy getParent();
			/*
			 * void checkAccess();
			 */
			void checkAccess();
			/*
			 * void destroy();
			 */
			void destroy();
			/*
			 * void interrupt();
			 */
			void interrupt();
			/*
			 * void resume();
			 */
			void resume();
			/*
			 * void setDaemon(boolean);
			 */
			void setDaemon(jboolean p0);
			/*
			 * void setMaxPriority(int);
			 */
			void setMaxPriority(jint p0);
			/*
			 * void stop();
			 */
			void stop();
			/*
			 * void suspend();
			 */
			void suspend();
			/*
			 * int activeCount();
			 */
			jint activeCount();
			/*
			 * int activeGroupCount();
			 */
			jint activeGroupCount();
			/*
			 * int enumerate(ThreadGroup[]);
			 */
			jint enumerate(::net::sourceforge::jnipp::PA<::java::lang::ThreadGroupProxy>::ProxyArray<1> p0);
			/*
			 * int enumerate(ThreadGroup[], boolean);
			 */
			jint enumerate(::net::sourceforge::jnipp::PA<::java::lang::ThreadGroupProxy>::ProxyArray<1> p0, jboolean p1);
			/*
			 * int enumerate(Thread[]);
			 */
			jint enumerate(::net::sourceforge::jnipp::PA<::java::lang::ThreadProxy>::ProxyArray<1> p0);
			/*
			 * int enumerate(Thread[], boolean);
			 */
			jint enumerate(::net::sourceforge::jnipp::PA<::java::lang::ThreadProxy>::ProxyArray<1> p0, jboolean p1);
			/*
			 * String toString();
			 */
			::net::sourceforge::jnipp::JStringHelper toString();
			/*
			 * boolean isDestroyed();
			 */
			jboolean isDestroyed();
			/*
			 * void list();
			 */
			void list();
			/*
			 * void uncaughtException(Thread, Throwable);
			 */
			void uncaughtException(::java::lang::ThreadProxy p0, ::java::lang::ThrowableProxy p1);

		};
	}
}


#endif
