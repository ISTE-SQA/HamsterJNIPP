#ifndef __java_security_DomainCombinerProxy_H
#define __java_security_DomainCombinerProxy_H


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
#include "java\security\ProtectionDomainProxy.h"

namespace java
{
	namespace security
	{
		class DomainCombinerProxy
		{
		private:
			static std::string className;
			static jclass objectClass;
			jobject peerObject;

		protected:
			DomainCombinerProxy(void* unused);
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
			DomainCombinerProxy(jobject obj);

			virtual ~DomainCombinerProxy();
			DomainCombinerProxy& operator=(const DomainCombinerProxy& rhs);

			// methods
			/*
			 * ProtectionDomain[] combine(ProtectionDomain[], ProtectionDomain[]);
			 */
			::net::sourceforge::jnipp::PA<::java::security::ProtectionDomainProxy>::ProxyArray<1> combine(::net::sourceforge::jnipp::PA<::java::security::ProtectionDomainProxy>::ProxyArray<1> p0, ::net::sourceforge::jnipp::PA<::java::security::ProtectionDomainProxy>::ProxyArray<1> p1);

		};
	}
}


#endif
