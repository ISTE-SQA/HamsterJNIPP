#ifndef __java_lang_Thread_StateProxy_H
#define __java_lang_Thread_StateProxy_H


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
#include "java\lang\Thread_StateProxy.h"

namespace java
{
	namespace lang
	{
		class Thread_StateProxy
		{
		private:
			static std::string className;
			static jclass objectClass;
			jobject peerObject;

		protected:
			Thread_StateProxy(void* unused);
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
			Thread_StateProxy(jobject obj);

			virtual ~Thread_StateProxy();
			Thread_StateProxy& operator=(const Thread_StateProxy& rhs);

			// methods
			/*
			 * static Thread$State valueOf(String);
			 */
			static ::java::lang::Thread_StateProxy valueOf(::net::sourceforge::jnipp::JStringHelper p0);
			/*
			 * static Thread$State[] values();
			 */
			static ::net::sourceforge::jnipp::PA<::java::lang::Thread_StateProxy>::ProxyArray<1> values();

		};
	}
}


#endif
