#ifndef __java_security_Provider_ServiceProxy_H
#define __java_security_Provider_ServiceProxy_H


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
#include "java\security\ProviderProxyForward.h"
#include "java\util\ListProxyForward.h"
#include "java\util\MapProxyForward.h"
#include "java\lang\ObjectProxyForward.h"
#include "java\lang\BooleanProxyForward.h"
#include "java\lang\ref\ReferenceProxyForward.h"
#include "java\lang\ClassProxy.h"

namespace java
{
	namespace security
	{
		class Provider_ServiceProxy
		{
		private:
			static std::string className;
			static jclass objectClass;
			jobject peerObject;

		protected:
			Provider_ServiceProxy(void* unused);
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
			Provider_ServiceProxy(jobject obj);
			Provider_ServiceProxy(::java::security::ProviderProxy p0, ::net::sourceforge::jnipp::JStringHelper p1, ::net::sourceforge::jnipp::JStringHelper p2, ::net::sourceforge::jnipp::JStringHelper p3, ::java::util::ListProxy p4, ::java::util::MapProxy p5);

			virtual ~Provider_ServiceProxy();
			Provider_ServiceProxy& operator=(const Provider_ServiceProxy& rhs);

			// methods
			/*
			 * boolean supportsParameter(Object);
			 */
			jboolean supportsParameter(::java::lang::ObjectProxy p0);
			/*
			 * String getAlgorithm();
			 */
			::net::sourceforge::jnipp::JStringHelper getAlgorithm();
			/*
			 * String getAttribute(String);
			 */
			::net::sourceforge::jnipp::JStringHelper getAttribute(::net::sourceforge::jnipp::JStringHelper p0);
			/*
			 * String getClassName();
			 */
			::net::sourceforge::jnipp::JStringHelper getClassName();
			/*
			 * String getType();
			 */
			::net::sourceforge::jnipp::JStringHelper getType();
			/*
			 * Provider getProvider();
			 */
			::java::security::ProviderProxy getProvider();
			/*
			 * Object newInstance(Object);
			 */
			::java::lang::ObjectProxy newInstance(::java::lang::ObjectProxy p0);
			/*
			 * String toString();
			 */
			::net::sourceforge::jnipp::JStringHelper toString();

		};
	}
}


#endif
