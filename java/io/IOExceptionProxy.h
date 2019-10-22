#ifndef __java_io_IOExceptionProxy_H
#define __java_io_IOExceptionProxy_H


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
	namespace io
	{
		class IOExceptionProxy
		{
		private:
			static std::string className;
			static jclass objectClass;
			jobject peerObject;

		protected:
			IOExceptionProxy(void* unused);
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
			IOExceptionProxy(jobject obj);
			IOExceptionProxy();
			IOExceptionProxy(::net::sourceforge::jnipp::JStringHelper p0);
			IOExceptionProxy(::net::sourceforge::jnipp::JStringHelper p0, ::java::lang::ThrowableProxy p1);
			IOExceptionProxy(::java::lang::ThrowableProxy p0);

			virtual ~IOExceptionProxy();
			IOExceptionProxy& operator=(const IOExceptionProxy& rhs);

			// methods

		};
	}
}


#endif
