#ifndef __java_net_Inet4AddressProxy_H
#define __java_net_Inet4AddressProxy_H


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

namespace java
{
	namespace net
	{
		class Inet4AddressProxy
		{
		private:
			static std::string className;
			static jclass objectClass;
			jobject peerObject;

		protected:
			Inet4AddressProxy(void* unused);
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
			Inet4AddressProxy(jobject obj);

			virtual ~Inet4AddressProxy();
			Inet4AddressProxy& operator=(const Inet4AddressProxy& rhs);

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
			 * String getHostAddress();
			 */
			::net::sourceforge::jnipp::JStringHelper getHostAddress();

		};
	}
}


#endif
