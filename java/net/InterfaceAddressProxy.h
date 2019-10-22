#ifndef __java_net_InterfaceAddressProxy_H
#define __java_net_InterfaceAddressProxy_H


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
#include "java\net\InetAddressProxyForward.h"
#include "java\net\Inet4AddressProxyForward.h"

namespace java
{
	namespace net
	{
		class InterfaceAddressProxy
		{
		private:
			static std::string className;
			static jclass objectClass;
			jobject peerObject;

		protected:
			InterfaceAddressProxy(void* unused);
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
			InterfaceAddressProxy(jobject obj);

			virtual ~InterfaceAddressProxy();
			InterfaceAddressProxy& operator=(const InterfaceAddressProxy& rhs);

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
			 * InetAddress getAddress();
			 */
			::java::net::InetAddressProxy getAddress();
			/*
			 * InetAddress getBroadcast();
			 */
			::java::net::InetAddressProxy getBroadcast();
			/*
			 * short getNetworkPrefixLength();
			 */
			jshort getNetworkPrefixLength();

		};
	}
}


#endif
