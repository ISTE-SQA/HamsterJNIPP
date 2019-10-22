#ifndef __java_net_InetAddress_CacheProxy_H
#define __java_net_InetAddress_CacheProxy_H


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
#include "java\net\InetAddress_Cache_TypeProxyForward.h"
#include "java\net\InetAddress_CacheEntryProxyForward.h"
#include "java\util\LinkedHashMapProxyForward.h"
#include "java\net\InetAddressProxy.h"

namespace java
{
	namespace net
	{
		class InetAddress_CacheProxy
		{
		private:
			static std::string className;
			static jclass objectClass;
			jobject peerObject;

		protected:
			InetAddress_CacheProxy(void* unused);
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
			InetAddress_CacheProxy(jobject obj);
			InetAddress_CacheProxy(::java::net::InetAddress_Cache_TypeProxy p0);

			virtual ~InetAddress_CacheProxy();
			InetAddress_CacheProxy& operator=(const InetAddress_CacheProxy& rhs);

			// methods
			/*
			 * InetAddress$Cache put(String, InetAddress[]);
			 */
			::java::net::InetAddress_CacheProxy put(::net::sourceforge::jnipp::JStringHelper p0, ::net::sourceforge::jnipp::PA<::java::net::InetAddressProxy>::ProxyArray<1> p1);
			/*
			 * InetAddress$CacheEntry get(String);
			 */
			::java::net::InetAddress_CacheEntryProxy get(::net::sourceforge::jnipp::JStringHelper p0);

		};
	}
}


#endif
