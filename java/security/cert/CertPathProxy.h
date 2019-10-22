#ifndef __java_security_cert_CertPathProxy_H
#define __java_security_cert_CertPathProxy_H


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
#include "java\util\IteratorProxyForward.h"
#include "java\util\ListProxyForward.h"
#include "java\lang\ObjectProxyForward.h"

namespace java
{
	namespace security
	{
		namespace cert
		{
			class CertPathProxy
			{
			private:
				static std::string className;
				static jclass objectClass;
				jobject peerObject;

			protected:
				CertPathProxy(void* unused);
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
				CertPathProxy(jobject obj);

				virtual ~CertPathProxy();
				CertPathProxy& operator=(const CertPathProxy& rhs);

				// methods
				/*
				 * byte[] getEncoded();
				 */
				::net::sourceforge::jnipp::JByteArrayHelper<1> getEncoded();
				/*
				 * byte[] getEncoded(String);
				 */
				::net::sourceforge::jnipp::JByteArrayHelper<1> getEncoded(::net::sourceforge::jnipp::JStringHelper p0);
				/*
				 * Iterator getEncodings();
				 */
				::java::util::IteratorProxy getEncodings();
				/*
				 * List getCertificates();
				 */
				::java::util::ListProxy getCertificates();
				/*
				 * boolean equals(Object);
				 */
				jboolean equals(::java::lang::ObjectProxy p0);
				/*
				 * int hashCode();
				 */
				jint hashCode();
				/*
				 * String getType();
				 */
				::net::sourceforge::jnipp::JStringHelper getType();
				/*
				 * String toString();
				 */
				::net::sourceforge::jnipp::JStringHelper toString();

			};
		}
	}
}


#endif
