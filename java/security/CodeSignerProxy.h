#ifndef __java_security_CodeSignerProxy_H
#define __java_security_CodeSignerProxy_H


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
#include "java\security\cert\CertPathProxyForward.h"
#include "java\security\TimestampProxyForward.h"
#include "java\lang\ObjectProxyForward.h"

namespace java
{
	namespace security
	{
		class CodeSignerProxy
		{
		private:
			static std::string className;
			static jclass objectClass;
			jobject peerObject;

		protected:
			CodeSignerProxy(void* unused);
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
			CodeSignerProxy(jobject obj);
			CodeSignerProxy(::java::security::cert::CertPathProxy p0, ::java::security::TimestampProxy p1);

			virtual ~CodeSignerProxy();
			CodeSignerProxy& operator=(const CodeSignerProxy& rhs);

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
			 * String toString();
			 */
			::net::sourceforge::jnipp::JStringHelper toString();
			/*
			 * Timestamp getTimestamp();
			 */
			::java::security::TimestampProxy getTimestamp();
			/*
			 * CertPath getSignerCertPath();
			 */
			::java::security::cert::CertPathProxy getSignerCertPath();

		};
	}
}


#endif
