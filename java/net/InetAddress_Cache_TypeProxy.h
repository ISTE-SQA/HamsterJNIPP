#ifndef __java_net_InetAddress_Cache_TypeProxy_H
#define __java_net_InetAddress_Cache_TypeProxy_H


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
#include "java\net\InetAddress_Cache_TypeProxy.h"

namespace java
{
	namespace net
	{
		class InetAddress_Cache_TypeProxy
		{
		private:
			static std::string className;
			static jclass objectClass;
			jobject peerObject;

		protected:
			InetAddress_Cache_TypeProxy(void* unused);
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
			InetAddress_Cache_TypeProxy(jobject obj);

			virtual ~InetAddress_Cache_TypeProxy();
			InetAddress_Cache_TypeProxy& operator=(const InetAddress_Cache_TypeProxy& rhs);

			// methods
			/*
			 * static InetAddress$Cache$Type valueOf(String);
			 */
			static ::java::net::InetAddress_Cache_TypeProxy valueOf(::net::sourceforge::jnipp::JStringHelper p0);
			/*
			 * static InetAddress$Cache$Type[] values();
			 */
			static ::net::sourceforge::jnipp::PA<::java::net::InetAddress_Cache_TypeProxy>::ProxyArray<1> values();

		};
	}
}


#endif
