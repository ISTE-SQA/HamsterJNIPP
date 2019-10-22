#ifndef __java_security_ProtectionDomainProxy_H
#define __java_security_ProtectionDomainProxy_H


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
#include "java\security\CodeSourceProxyForward.h"
#include "java\security\PermissionCollectionProxyForward.h"
#include "java\lang\ClassLoaderProxyForward.h"
#include "java\security\PermissionProxyForward.h"
#include "java\security\ProtectionDomain_KeyProxyForward.h"
#include "sun\security\util\DebugProxyForward.h"
#include "java\security\PrincipalProxy.h"

namespace java
{
	namespace security
	{
		class ProtectionDomainProxy
		{
		private:
			static std::string className;
			static jclass objectClass;
			jobject peerObject;

		protected:
			ProtectionDomainProxy(void* unused);
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
			ProtectionDomainProxy(jobject obj);
			ProtectionDomainProxy(::java::security::CodeSourceProxy p0, ::java::security::PermissionCollectionProxy p1);
			ProtectionDomainProxy(::java::security::CodeSourceProxy p0, ::java::security::PermissionCollectionProxy p1, ::java::lang::ClassLoaderProxy p2, ::net::sourceforge::jnipp::PA<::java::security::PrincipalProxy>::ProxyArray<1> p3);

			virtual ~ProtectionDomainProxy();
			ProtectionDomainProxy& operator=(const ProtectionDomainProxy& rhs);

			// methods
			/*
			 * boolean implies(Permission);
			 */
			jboolean implies(::java::security::PermissionProxy p0);
			/*
			 * ClassLoader getClassLoader();
			 */
			::java::lang::ClassLoaderProxy getClassLoader();
			/*
			 * CodeSource getCodeSource();
			 */
			::java::security::CodeSourceProxy getCodeSource();
			/*
			 * PermissionCollection getPermissions();
			 */
			::java::security::PermissionCollectionProxy getPermissions();
			/*
			 * Principal[] getPrincipals();
			 */
			::net::sourceforge::jnipp::PA<::java::security::PrincipalProxy>::ProxyArray<1> getPrincipals();
			/*
			 * String toString();
			 */
			::net::sourceforge::jnipp::JStringHelper toString();

		};
	}
}


#endif
