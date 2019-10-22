#ifndef __java_security_PermissionProxy_H
#define __java_security_PermissionProxy_H


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
#include "java\security\PermissionCollectionProxyForward.h"

namespace java
{
	namespace security
	{
		class PermissionProxy
		{
		private:
			static std::string className;
			static jclass objectClass;
			jobject peerObject;

		protected:
			PermissionProxy(void* unused);
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
			PermissionProxy(jobject obj);
			PermissionProxy(::net::sourceforge::jnipp::JStringHelper p0);

			virtual ~PermissionProxy();
			PermissionProxy& operator=(const PermissionProxy& rhs);

			// methods
			/*
			 * boolean equals(Object);
			 */
			jboolean equals(::java::lang::ObjectProxy p0);
			/*
			 * boolean implies(Permission);
			 */
			jboolean implies(::java::security::PermissionProxy p0);
			/*
			 * int hashCode();
			 */
			jint hashCode();
			/*
			 * String getActions();
			 */
			::net::sourceforge::jnipp::JStringHelper getActions();
			/*
			 * String getName();
			 */
			::net::sourceforge::jnipp::JStringHelper getName();
			/*
			 * String toString();
			 */
			::net::sourceforge::jnipp::JStringHelper toString();
			/*
			 * PermissionCollection newPermissionCollection();
			 */
			::java::security::PermissionCollectionProxy newPermissionCollection();
			/*
			 * void checkGuard(Object);
			 */
			void checkGuard(::java::lang::ObjectProxy p0);

		};
	}
}


#endif
