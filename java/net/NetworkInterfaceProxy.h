#ifndef __java_net_NetworkInterfaceProxy_H
#define __java_net_NetworkInterfaceProxy_H


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
#include "java\util\EnumerationProxyForward.h"
#include "java\util\ListProxyForward.h"
#include "java\net\InetAddressProxyForward.h"
#include "java\net\InetAddressProxy.h"
#include "java\net\InterfaceAddressProxy.h"
#include "java\net\NetworkInterfaceProxy.h"

namespace java
{
	namespace net
	{
		class NetworkInterfaceProxy
		{
		private:
			static std::string className;
			static jclass objectClass;
			jobject peerObject;

		protected:
			NetworkInterfaceProxy(void* unused);
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
			NetworkInterfaceProxy(jobject obj);

			virtual ~NetworkInterfaceProxy();
			NetworkInterfaceProxy& operator=(const NetworkInterfaceProxy& rhs);

			// methods
			/*
			 * boolean equals(Object);
			 */
			jboolean equals(::java::lang::ObjectProxy p0);
			/*
			 * boolean isLoopback();
			 */
			jboolean isLoopback();
			/*
			 * boolean isPointToPoint();
			 */
			jboolean isPointToPoint();
			/*
			 * boolean isUp();
			 */
			jboolean isUp();
			/*
			 * boolean isVirtual();
			 */
			jboolean isVirtual();
			/*
			 * boolean supportsMulticast();
			 */
			jboolean supportsMulticast();
			/*
			 * byte[] getHardwareAddress();
			 */
			::net::sourceforge::jnipp::JByteArrayHelper<1> getHardwareAddress();
			/*
			 * int getIndex();
			 */
			jint getIndex();
			/*
			 * int getMTU();
			 */
			jint getMTU();
			/*
			 * int hashCode();
			 */
			jint hashCode();
			/*
			 * String getDisplayName();
			 */
			::net::sourceforge::jnipp::JStringHelper getDisplayName();
			/*
			 * String getName();
			 */
			::net::sourceforge::jnipp::JStringHelper getName();
			/*
			 * String toString();
			 */
			::net::sourceforge::jnipp::JStringHelper toString();
			/*
			 * NetworkInterface getParent();
			 */
			::java::net::NetworkInterfaceProxy getParent();
			/*
			 * Enumeration getInetAddresses();
			 */
			::java::util::EnumerationProxy getInetAddresses();
			/*
			 * Enumeration getSubInterfaces();
			 */
			::java::util::EnumerationProxy getSubInterfaces();
			/*
			 * List getInterfaceAddresses();
			 */
			::java::util::ListProxy getInterfaceAddresses();
			/*
			 * static NetworkInterface getByIndex(int);
			 */
			static ::java::net::NetworkInterfaceProxy getByIndex(jint p0);
			/*
			 * static NetworkInterface getByInetAddress(InetAddress);
			 */
			static ::java::net::NetworkInterfaceProxy getByInetAddress(::java::net::InetAddressProxy p0);
			/*
			 * static NetworkInterface getByName(String);
			 */
			static ::java::net::NetworkInterfaceProxy getByName(::net::sourceforge::jnipp::JStringHelper p0);
			/*
			 * static Enumeration getNetworkInterfaces();
			 */
			static ::java::util::EnumerationProxy getNetworkInterfaces();

		};
	}
}


#endif
