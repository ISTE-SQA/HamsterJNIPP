#ifndef __java_net_URLStreamHandlerFactoryProxy_H
#define __java_net_URLStreamHandlerFactoryProxy_H


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
#include "java\net\URLStreamHandlerProxyForward.h"

namespace java
{
	namespace net
	{
		class URLStreamHandlerFactoryProxy
		{
		private:
			static std::string className;
			static jclass objectClass;
			jobject peerObject;

		protected:
			URLStreamHandlerFactoryProxy(void* unused);
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
			URLStreamHandlerFactoryProxy(jobject obj);

			virtual ~URLStreamHandlerFactoryProxy();
			URLStreamHandlerFactoryProxy& operator=(const URLStreamHandlerFactoryProxy& rhs);

			// methods
			/*
			 * URLStreamHandler createURLStreamHandler(String);
			 */
			::java::net::URLStreamHandlerProxy createURLStreamHandler(::net::sourceforge::jnipp::JStringHelper p0);

		};
	}
}


#endif
