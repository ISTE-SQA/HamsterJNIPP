#ifndef __java_security_cert_CertificateProxy_H
#define __java_security_cert_CertificateProxy_H


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
#include "java\security\PublicKeyProxyForward.h"
#include "java\lang\ObjectProxyForward.h"
#include "java\security\ProviderProxyForward.h"

namespace java
{
	namespace security
	{
		namespace cert
		{
			class CertificateProxy
			{
			private:
				static std::string className;
				static jclass objectClass;
				jobject peerObject;

			protected:
				CertificateProxy(void* unused);
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
				CertificateProxy(jobject obj);

				virtual ~CertificateProxy();
				CertificateProxy& operator=(const CertificateProxy& rhs);

				// methods
				/*
				 * byte[] getEncoded();
				 */
				::net::sourceforge::jnipp::JByteArrayHelper<1> getEncoded();
				/*
				 * String toString();
				 */
				::net::sourceforge::jnipp::JStringHelper toString();
				/*
				 * PublicKey getPublicKey();
				 */
				::java::security::PublicKeyProxy getPublicKey();
				/*
				 * void verify(PublicKey);
				 */
				void verify(::java::security::PublicKeyProxy p0);
				/*
				 * void verify(PublicKey, String);
				 */
				void verify(::java::security::PublicKeyProxy p0, ::net::sourceforge::jnipp::JStringHelper p1);
				/*
				 * boolean equals(Object);
				 */
				jboolean equals(::java::lang::ObjectProxy p0);
				/*
				 * String getType();
				 */
				::net::sourceforge::jnipp::JStringHelper getType();
				/*
				 * int hashCode();
				 */
				jint hashCode();
				/*
				 * void verify(PublicKey, Provider);
				 */
				void verify(::java::security::PublicKeyProxy p0, ::java::security::ProviderProxy p1);

			};
		}
	}
}


#endif
