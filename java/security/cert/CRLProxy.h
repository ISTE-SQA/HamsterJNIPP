#ifndef __java_security_cert_CRLProxy_H
#define __java_security_cert_CRLProxy_H


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
#include "java\security\cert\CertificateProxyForward.h"

namespace java
{
	namespace security
	{
		namespace cert
		{
			class CRLProxy
			{
			private:
				static std::string className;
				static jclass objectClass;
				jobject peerObject;

			protected:
				CRLProxy(void* unused);
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
				CRLProxy(jobject obj);

				virtual ~CRLProxy();
				CRLProxy& operator=(const CRLProxy& rhs);

				// methods
				/*
				 * boolean isRevoked(Certificate);
				 */
				jboolean isRevoked(::java::security::cert::CertificateProxy p0);
				/*
				 * String toString();
				 */
				::net::sourceforge::jnipp::JStringHelper toString();
				/*
				 * String getType();
				 */
				::net::sourceforge::jnipp::JStringHelper getType();

			};
		}
	}
}


#endif
