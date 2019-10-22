#ifndef __java_net_InetAddressProxy_H
#define __java_net_InetAddressProxy_H


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
#include "java\lang\ObjectProxyForward.h"
#include "java\net\NetworkInterfaceProxyForward.h"
#include "java\net\InetAddress_InetAddressHolderProxyForward.h"
#include "java\util\HashMapProxyForward.h"
#include "sun\misc\UnsafeProxyForward.h"
#include "java\net\InetAddress_CacheProxyForward.h"
#include "java\util\ListProxyForward.h"
#include "java\net\InetAddressImplProxyForward.h"
#include "java\net\InetAddressProxy.h"
#include "java\io\ObjectStreamFieldProxy.h"

namespace java
{
	namespace net
	{
		class InetAddressProxy
		{
		private:
			static std::string className;
			static jclass objectClass;
			jobject peerObject;

		protected:
			InetAddressProxy(void* unused);
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
			InetAddressProxy(jobject obj);

			virtual ~InetAddressProxy();
			InetAddressProxy& operator=(const InetAddressProxy& rhs);

			// methods
			/*
			 * boolean equals(Object);
			 */
			jboolean equals(::java::lang::ObjectProxy p0);
			/*
			 * boolean isAnyLocalAddress();
			 */
			jboolean isAnyLocalAddress();
			/*
			 * boolean isLinkLocalAddress();
			 */
			jboolean isLinkLocalAddress();
			/*
			 * boolean isLoopbackAddress();
			 */
			jboolean isLoopbackAddress();
			/*
			 * boolean isMCGlobal();
			 */
			jboolean isMCGlobal();
			/*
			 * boolean isMCLinkLocal();
			 */
			jboolean isMCLinkLocal();
			/*
			 * boolean isMCNodeLocal();
			 */
			jboolean isMCNodeLocal();
			/*
			 * boolean isMCOrgLocal();
			 */
			jboolean isMCOrgLocal();
			/*
			 * boolean isMCSiteLocal();
			 */
			jboolean isMCSiteLocal();
			/*
			 * boolean isMulticastAddress();
			 */
			jboolean isMulticastAddress();
			/*
			 * boolean isReachable(int);
			 */
			jboolean isReachable(jint p0);
			/*
			 * boolean isReachable(NetworkInterface, int, int);
			 */
			jboolean isReachable(::java::net::NetworkInterfaceProxy p0, jint p1, jint p2);
			/*
			 * boolean isSiteLocalAddress();
			 */
			jboolean isSiteLocalAddress();
			/*
			 * byte[] getAddress();
			 */
			::net::sourceforge::jnipp::JByteArrayHelper<1> getAddress();
			/*
			 * int hashCode();
			 */
			jint hashCode();
			/*
			 * String getCanonicalHostName();
			 */
			::net::sourceforge::jnipp::JStringHelper getCanonicalHostName();
			/*
			 * String getHostAddress();
			 */
			::net::sourceforge::jnipp::JStringHelper getHostAddress();
			/*
			 * String getHostName();
			 */
			::net::sourceforge::jnipp::JStringHelper getHostName();
			/*
			 * String toString();
			 */
			::net::sourceforge::jnipp::JStringHelper toString();
			/*
			 * static InetAddress getByAddress(byte[]);
			 */
			static ::java::net::InetAddressProxy getByAddress(::net::sourceforge::jnipp::JByteArrayHelper<1> p0);
			/*
			 * static InetAddress getByAddress(String, byte[]);
			 */
			static ::java::net::InetAddressProxy getByAddress(::net::sourceforge::jnipp::JStringHelper p0, ::net::sourceforge::jnipp::JByteArrayHelper<1> p1);
			/*
			 * static InetAddress getByName(String);
			 */
			static ::java::net::InetAddressProxy getByName(::net::sourceforge::jnipp::JStringHelper p0);
			/*
			 * static InetAddress getLocalHost();
			 */
			static ::java::net::InetAddressProxy getLocalHost();
			/*
			 * static InetAddress getLoopbackAddress();
			 */
			static ::java::net::InetAddressProxy getLoopbackAddress();
			/*
			 * static InetAddress[] getAllByName(String);
			 */
			static ::net::sourceforge::jnipp::PA<::java::net::InetAddressProxy>::ProxyArray<1> getAllByName(::net::sourceforge::jnipp::JStringHelper p0);

		};
	}
}


#endif
