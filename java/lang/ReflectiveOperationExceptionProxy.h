#ifndef __java_lang_ReflectiveOperationExceptionProxy_H
#define __java_lang_ReflectiveOperationExceptionProxy_H


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

namespace java
{
	namespace lang
	{
		class ReflectiveOperationExceptionProxy
		{
		private:
			static std::string className;
			static jclass objectClass;
			jobject peerObject;

		protected:
			ReflectiveOperationExceptionProxy(void* unused);
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
			ReflectiveOperationExceptionProxy(jobject obj);
			ReflectiveOperationExceptionProxy();
			ReflectiveOperationExceptionProxy(::net::sourceforge::jnipp::JStringHelper p0);
			ReflectiveOperationExceptionProxy(::net::sourceforge::jnipp::JStringHelper p0, ::java::lang::ThrowableProxy p1);
			ReflectiveOperationExceptionProxy(::java::lang::ThrowableProxy p0);

			virtual ~ReflectiveOperationExceptionProxy();
			ReflectiveOperationExceptionProxy& operator=(const ReflectiveOperationExceptionProxy& rhs);

			// methods

		};
	}
}


#endif
