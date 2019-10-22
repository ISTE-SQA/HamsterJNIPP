#ifndef __java_net_InetAddressImplProxy_H
#define __java_net_InetAddressImplProxy_H


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
#include "java\net\InetAddressProxyForward.h"
#include "java\net\NetworkInterfaceProxyForward.h"
#include "java\net\InetAddressProxy.h"

namespace java
{
	namespace net
	{
		class InetAddressImplProxy
		{
		private:
			static std::string className;
			static jclass objectClass;
			jobject peerObject;

		protected:
			InetAddressImplProxy(void* unused);
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
			InetAddressImplProxy(jobject obj);

			virtual ~InetAddressImplProxy();
			InetAddressImplProxy& operator=(const InetAddressImplProxy& rhs);

			// methods
			/*
			 * boolean isReachable(InetAddress, int, NetworkInterface, int);
			 */
			jboolean isReachable(::java::net::InetAddressProxy p0, jint p1, ::java::net::NetworkInterfaceProxy p2, jint p3);
			/*
			 * String getHostByAddr(byte[]);
			 */
			::net::sourceforge::jnipp::JStringHelper getHostByAddr(::net::sourceforge::jnipp::JByteArrayHelper<1> p0);
			/*
			 * String getLocalHostName();
			 */
			::net::sourceforge::jnipp::JStringHelper getLocalHostName();
			/*
			 * InetAddress anyLocalAddress();
			 */
			::java::net::InetAddressProxy anyLocalAddress();
			/*
			 * InetAddress loopbackAddress();
			 */
			::java::net::InetAddressProxy loopbackAddress();
			/*
			 * InetAddress[] lookupAllHostAddr(String);
			 */
			::net::sourceforge::jnipp::PA<::java::net::InetAddressProxy>::ProxyArray<1> lookupAllHostAddr(::net::sourceforge::jnipp::JStringHelper p0);

		};
	}
}


#endif
