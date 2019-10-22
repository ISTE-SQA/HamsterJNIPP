#ifndef __java_net_ProxyProxy_H
#define __java_net_ProxyProxy_H


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
#include "java\net\Proxy_TypeProxyForward.h"
#include "java\net\SocketAddressProxyForward.h"
#include "java\lang\ObjectProxyForward.h"

namespace java
{
	namespace net
	{
		class ProxyProxy
		{
		private:
			static std::string className;
			static jclass objectClass;
			jobject peerObject;

		protected:
			ProxyProxy(void* unused);
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
			ProxyProxy(jobject obj);
			ProxyProxy(::java::net::Proxy_TypeProxy p0, ::java::net::SocketAddressProxy p1);

			virtual ~ProxyProxy();
			ProxyProxy& operator=(const ProxyProxy& rhs);

			// methods
			/*
			 * boolean equals(Object);
			 */
			jboolean equals(::java::lang::ObjectProxy p0);
			/*
			 * int hashCode();
			 */
			jint hashCode();
			/*
			 * String toString();
			 */
			::net::sourceforge::jnipp::JStringHelper toString();
			/*
			 * Proxy$Type type();
			 */
			::java::net::Proxy_TypeProxy type();
			/*
			 * SocketAddress address();
			 */
			::java::net::SocketAddressProxy address();

		};
	}
}


#endif
