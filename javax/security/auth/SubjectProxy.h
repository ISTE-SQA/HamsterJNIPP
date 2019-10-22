#ifndef __javax_security_auth_SubjectProxy_H
#define __javax_security_auth_SubjectProxy_H


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
#include "java\util\SetProxyForward.h"
#include "java\lang\ObjectProxyForward.h"
#include "java\lang\ClassProxyForward.h"
#include "java\security\PrivilegedActionProxyForward.h"
#include "java\security\PrivilegedExceptionActionProxyForward.h"
#include "java\security\AccessControlContextProxyForward.h"
#include "java\security\ProtectionDomainProxy.h"

namespace javax
{
	namespace security
	{
		namespace auth
		{
			class SubjectProxy
			{
			private:
				static std::string className;
				static jclass objectClass;
				jobject peerObject;

			protected:
				SubjectProxy(void* unused);
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
				SubjectProxy(jobject obj);
				SubjectProxy();
				SubjectProxy(jboolean p0, ::java::util::SetProxy p1, ::java::util::SetProxy p2, ::java::util::SetProxy p3);

				virtual ~SubjectProxy();
				SubjectProxy& operator=(const SubjectProxy& rhs);

				// methods
				/*
				 * boolean equals(Object);
				 */
				jboolean equals(::java::lang::ObjectProxy p0);
				/*
				 * boolean isReadOnly();
				 */
				jboolean isReadOnly();
				/*
				 * int hashCode();
				 */
				jint hashCode();
				/*
				 * String toString();
				 */
				::net::sourceforge::jnipp::JStringHelper toString();
				/*
				 * Set getPrincipals();
				 */
				::java::util::SetProxy getPrincipals();
				/*
				 * Set getPrincipals(Class);
				 */
				::java::util::SetProxy getPrincipals(::java::lang::ClassProxy p0);
				/*
				 * Set getPrivateCredentials();
				 */
				::java::util::SetProxy getPrivateCredentials();
				/*
				 * Set getPrivateCredentials(Class);
				 */
				::java::util::SetProxy getPrivateCredentials(::java::lang::ClassProxy p0);
				/*
				 * Set getPublicCredentials();
				 */
				::java::util::SetProxy getPublicCredentials();
				/*
				 * Set getPublicCredentials(Class);
				 */
				::java::util::SetProxy getPublicCredentials(::java::lang::ClassProxy p0);
				/*
				 * static Object doAs(Subject, PrivilegedAction);
				 */
				static ::java::lang::ObjectProxy doAs(::javax::security::auth::SubjectProxy p0, ::java::security::PrivilegedActionProxy p1);
				/*
				 * static Object doAs(Subject, PrivilegedExceptionAction);
				 */
				static ::java::lang::ObjectProxy doAs(::javax::security::auth::SubjectProxy p0, ::java::security::PrivilegedExceptionActionProxy p1);
				/*
				 * static Object doAsPrivileged(Subject, PrivilegedAction, AccessControlContext);
				 */
				static ::java::lang::ObjectProxy doAsPrivileged(::javax::security::auth::SubjectProxy p0, ::java::security::PrivilegedActionProxy p1, ::java::security::AccessControlContextProxy p2);
				/*
				 * static Object doAsPrivileged(Subject, PrivilegedExceptionAction, AccessControlContext);
				 */
				static ::java::lang::ObjectProxy doAsPrivileged(::javax::security::auth::SubjectProxy p0, ::java::security::PrivilegedExceptionActionProxy p1, ::java::security::AccessControlContextProxy p2);
				/*
				 * static Subject getSubject(AccessControlContext);
				 */
				static ::javax::security::auth::SubjectProxy getSubject(::java::security::AccessControlContextProxy p0);
				/*
				 * void setReadOnly();
				 */
				void setReadOnly();

			};
		}
	}
}


#endif
