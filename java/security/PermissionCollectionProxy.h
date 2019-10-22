#ifndef __java_security_PermissionCollectionProxy_H
#define __java_security_PermissionCollectionProxy_H


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
#include "java\security\PermissionProxyForward.h"
#include "java\util\EnumerationProxyForward.h"

namespace java
{
	namespace security
	{
		class PermissionCollectionProxy
		{
		private:
			static std::string className;
			static jclass objectClass;
			jobject peerObject;

		protected:
			PermissionCollectionProxy(void* unused);
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
			PermissionCollectionProxy(jobject obj);
			PermissionCollectionProxy();

			virtual ~PermissionCollectionProxy();
			PermissionCollectionProxy& operator=(const PermissionCollectionProxy& rhs);

			// methods
			/*
			 * boolean implies(Permission);
			 */
			jboolean implies(::java::security::PermissionProxy p0);
			/*
			 * Enumeration elements();
			 */
			::java::util::EnumerationProxy elements();
			/*
			 * void add(Permission);
			 */
			void add(::java::security::PermissionProxy p0);
			/*
			 * boolean isReadOnly();
			 */
			jboolean isReadOnly();
			/*
			 * String toString();
			 */
			::net::sourceforge::jnipp::JStringHelper toString();
			/*
			 * void setReadOnly();
			 */
			void setReadOnly();

		};
	}
}


#endif
