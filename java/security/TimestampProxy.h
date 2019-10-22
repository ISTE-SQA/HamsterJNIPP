#ifndef __java_security_TimestampProxy_H
#define __java_security_TimestampProxy_H


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
#include "java\util\DateProxyForward.h"
#include "java\security\cert\CertPathProxyForward.h"
#include "java\lang\ObjectProxyForward.h"

namespace java
{
	namespace security
	{
		class TimestampProxy
		{
		private:
			static std::string className;
			static jclass objectClass;
			jobject peerObject;

		protected:
			TimestampProxy(void* unused);
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
			TimestampProxy(jobject obj);
			TimestampProxy(::java::util::DateProxy p0, ::java::security::cert::CertPathProxy p1);

			virtual ~TimestampProxy();
			TimestampProxy& operator=(const TimestampProxy& rhs);

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
			 * CertPath getSignerCertPath();
			 */
			::java::security::cert::CertPathProxy getSignerCertPath();
			/*
			 * Date getTimestamp();
			 */
			::java::util::DateProxy getTimestamp();

		};
	}
}


#endif
