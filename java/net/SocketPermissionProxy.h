#ifndef __java_net_SocketPermissionProxy_H
#define __java_net_SocketPermissionProxy_H


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
#include "java\security\PermissionProxyForward.h"
#include "java\security\PermissionCollectionProxyForward.h"
#include "sun\security\util\DebugProxyForward.h"
#include "java\net\InetAddressProxy.h"

namespace java
{
	namespace net
	{
		class SocketPermissionProxy
		{
		private:
			static std::string className;
			static jclass objectClass;
			jobject peerObject;

		protected:
			SocketPermissionProxy(void* unused);
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
			SocketPermissionProxy(jobject obj);
			SocketPermissionProxy(::net::sourceforge::jnipp::JStringHelper p0, ::net::sourceforge::jnipp::JStringHelper p1);

			virtual ~SocketPermissionProxy();
			SocketPermissionProxy& operator=(const SocketPermissionProxy& rhs);

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
			 * PermissionCollection newPermissionCollection();
			 */
			::java::security::PermissionCollectionProxy newPermissionCollection();

		};
	}
}


#endif
