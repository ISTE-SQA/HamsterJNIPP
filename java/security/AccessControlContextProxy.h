#ifndef __java_security_AccessControlContextProxy_H
#define __java_security_AccessControlContextProxy_H


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
#include "java\security\DomainCombinerProxyForward.h"
#include "java\lang\ObjectProxyForward.h"
#include "java\security\PermissionProxyForward.h"
#include "sun\security\util\DebugProxyForward.h"
#include "java\security\ProtectionDomainProxy.h"
#include "java\security\PermissionProxy.h"

namespace java
{
	namespace security
	{
		class AccessControlContextProxy
		{
		private:
			static std::string className;
			static jclass objectClass;
			jobject peerObject;

		protected:
			AccessControlContextProxy(void* unused);
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
			AccessControlContextProxy(jobject obj);
			AccessControlContextProxy(::java::security::AccessControlContextProxy p0, ::java::security::DomainCombinerProxy p1);
			AccessControlContextProxy(::net::sourceforge::jnipp::PA<::java::security::ProtectionDomainProxy>::ProxyArray<1> p0);

			virtual ~AccessControlContextProxy();
			AccessControlContextProxy& operator=(const AccessControlContextProxy& rhs);

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
			 * DomainCombiner getDomainCombiner();
			 */
			::java::security::DomainCombinerProxy getDomainCombiner();
			/*
			 * void checkPermission(Permission);
			 */
			void checkPermission(::java::security::PermissionProxy p0);

		};
	}
}


#endif
