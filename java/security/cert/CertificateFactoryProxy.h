#ifndef __java_security_cert_CertificateFactoryProxy_H
#define __java_security_cert_CertificateFactoryProxy_H


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
#include "java\security\ProviderProxyForward.h"
#include "java\io\InputStreamProxyForward.h"
#include "java\security\cert\CRLProxyForward.h"
#include "java\security\cert\CertPathProxyForward.h"
#include "java\util\ListProxyForward.h"
#include "java\security\cert\CertificateProxyForward.h"
#include "java\util\CollectionProxyForward.h"
#include "java\util\IteratorProxyForward.h"
#include "java\security\cert\CertificateFactorySpiProxyForward.h"

namespace java
{
	namespace security
	{
		namespace cert
		{
			class CertificateFactoryProxy
			{
			private:
				static std::string className;
				static jclass objectClass;
				jobject peerObject;

			protected:
				CertificateFactoryProxy(void* unused);
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
				CertificateFactoryProxy(jobject obj);

				virtual ~CertificateFactoryProxy();
				CertificateFactoryProxy& operator=(const CertificateFactoryProxy& rhs);

				// methods
				/*
				 * String getType();
				 */
				::net::sourceforge::jnipp::JStringHelper getType();
				/*
				 * Provider getProvider();
				 */
				::java::security::ProviderProxy getProvider();
				/*
				 * CRL generateCRL(InputStream);
				 */
				::java::security::cert::CRLProxy generateCRL(::java::io::InputStreamProxy p0);
				/*
				 * CertPath generateCertPath(InputStream);
				 */
				::java::security::cert::CertPathProxy generateCertPath(::java::io::InputStreamProxy p0);
				/*
				 * CertPath generateCertPath(InputStream, String);
				 */
				::java::security::cert::CertPathProxy generateCertPath(::java::io::InputStreamProxy p0, ::net::sourceforge::jnipp::JStringHelper p1);
				/*
				 * CertPath generateCertPath(List);
				 */
				::java::security::cert::CertPathProxy generateCertPath(::java::util::ListProxy p0);
				/*
				 * Certificate generateCertificate(InputStream);
				 */
				::java::security::cert::CertificateProxy generateCertificate(::java::io::InputStreamProxy p0);
				/*
				 * Collection generateCRLs(InputStream);
				 */
				::java::util::CollectionProxy generateCRLs(::java::io::InputStreamProxy p0);
				/*
				 * Collection generateCertificates(InputStream);
				 */
				::java::util::CollectionProxy generateCertificates(::java::io::InputStreamProxy p0);
				/*
				 * Iterator getCertPathEncodings();
				 */
				::java::util::IteratorProxy getCertPathEncodings();
				/*
				 * static CertificateFactory getInstance(String);
				 */
				static ::java::security::cert::CertificateFactoryProxy getInstance(::net::sourceforge::jnipp::JStringHelper p0);
				/*
				 * static CertificateFactory getInstance(String, String);
				 */
				static ::java::security::cert::CertificateFactoryProxy getInstance(::net::sourceforge::jnipp::JStringHelper p0, ::net::sourceforge::jnipp::JStringHelper p1);
				/*
				 * static CertificateFactory getInstance(String, Provider);
				 */
				static ::java::security::cert::CertificateFactoryProxy getInstance(::net::sourceforge::jnipp::JStringHelper p0, ::java::security::ProviderProxy p1);

			};
		}
	}
}


#endif
