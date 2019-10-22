#ifndef __java_net_ContentHandlerProxy_H
#define __java_net_ContentHandlerProxy_H


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
#include "java\net\URLConnectionProxyForward.h"
#include "java\lang\ObjectProxyForward.h"
#include "java\lang\ClassProxy.h"

namespace java
{
	namespace net
	{
		class ContentHandlerProxy
		{
		private:
			static std::string className;
			static jclass objectClass;
			jobject peerObject;

		protected:
			ContentHandlerProxy(void* unused);
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
			ContentHandlerProxy(jobject obj);
			ContentHandlerProxy();

			virtual ~ContentHandlerProxy();
			ContentHandlerProxy& operator=(const ContentHandlerProxy& rhs);

			// methods
			/*
			 * Object getContent(URLConnection);
			 */
			::java::lang::ObjectProxy getContent(::java::net::URLConnectionProxy p0);
			/*
			 * Object getContent(URLConnection, Class[]);
			 */
			::java::lang::ObjectProxy getContent(::java::net::URLConnectionProxy p0, ::net::sourceforge::jnipp::PA<::java::lang::ClassProxy>::ProxyArray<1> p1);

		};
	}
}


#endif
