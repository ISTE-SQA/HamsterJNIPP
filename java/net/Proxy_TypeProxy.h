#ifndef __java_net_Proxy_TypeProxy_H
#define __java_net_Proxy_TypeProxy_H


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
#include "java\net\Proxy_TypeProxy.h"

namespace java
{
	namespace net
	{
		class Proxy_TypeProxy
		{
		private:
			static std::string className;
			static jclass objectClass;
			jobject peerObject;

		protected:
			Proxy_TypeProxy(void* unused);
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
			Proxy_TypeProxy(jobject obj);

			virtual ~Proxy_TypeProxy();
			Proxy_TypeProxy& operator=(const Proxy_TypeProxy& rhs);

			// methods
			/*
			 * static Proxy$Type valueOf(String);
			 */
			static ::java::net::Proxy_TypeProxy valueOf(::net::sourceforge::jnipp::JStringHelper p0);
			/*
			 * static Proxy$Type[] values();
			 */
			static ::net::sourceforge::jnipp::PA<::java::net::Proxy_TypeProxy>::ProxyArray<1> values();

		};
	}
}


#endif
