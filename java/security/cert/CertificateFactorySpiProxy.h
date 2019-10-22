#ifndef __java_security_cert_CertificateFactorySpiProxy_H
#define __java_security_cert_CertificateFactorySpiProxy_H


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
#include "java\io\InputStreamProxyForward.h"
#include "java\security\cert\CRLProxyForward.h"
#include "java\security\cert\CertificateProxyForward.h"
#include "java\util\CollectionProxyForward.h"
#include "java\security\cert\CertPathProxyForward.h"
#include "java\util\ListProxyForward.h"
#include "java\util\IteratorProxyForward.h"

namespace java
{
	namespace security
	{
		namespace cert
		{
			class CertificateFactorySpiProxy
			{
			private:
				static std::string className;
				static jclass objectClass;
				jobject peerObject;

			protected:
				CertificateFactorySpiProxy(void* unused);
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
				CertificateFactorySpiProxy(jobject obj);
				CertificateFactorySpiProxy();

				virtual ~CertificateFactorySpiProxy();
				CertificateFactorySpiProxy& operator=(const CertificateFactorySpiProxy& rhs);

				// methods
				/*
				 * CRL engineGenerateCRL(InputStream);
				 */
				::java::security::cert::CRLProxy engineGenerateCRL(::java::io::InputStreamProxy p0);
				/*
				 * Certificate engineGenerateCertificate(InputStream);
				 */
				::java::security::cert::CertificateProxy engineGenerateCertificate(::java::io::InputStreamProxy p0);
				/*
				 * Collection engineGenerateCRLs(InputStream);
				 */
				::java::util::CollectionProxy engineGenerateCRLs(::java::io::InputStreamProxy p0);
				/*
				 * Collection engineGenerateCertificates(InputStream);
				 */
				::java::util::CollectionProxy engineGenerateCertificates(::java::io::InputStreamProxy p0);
				/*
				 * CertPath engineGenerateCertPath(InputStream);
				 */
				::java::security::cert::CertPathProxy engineGenerateCertPath(::java::io::InputStreamProxy p0);
				/*
				 * CertPath engineGenerateCertPath(InputStream, String);
				 */
				::java::security::cert::CertPathProxy engineGenerateCertPath(::java::io::InputStreamProxy p0, ::net::sourceforge::jnipp::JStringHelper p1);
				/*
				 * CertPath engineGenerateCertPath(List);
				 */
				::java::security::cert::CertPathProxy engineGenerateCertPath(::java::util::ListProxy p0);
				/*
				 * Iterator engineGetCertPathEncodings();
				 */
				::java::util::IteratorProxy engineGetCertPathEncodings();

			};
		}
	}
}


#endif
