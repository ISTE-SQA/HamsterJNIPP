#ifndef __java_security_CodeSourceProxy_H
#define __java_security_CodeSourceProxy_H


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
#include "java\net\URLProxyForward.h"
#include "java\lang\ObjectProxyForward.h"
#include "java\net\SocketPermissionProxyForward.h"
#include "java\security\cert\CertificateFactoryProxyForward.h"
#include "java\security\CodeSignerProxy.h"
#include "java\security\cert\CertificateProxy.h"

namespace java
{
	namespace security
	{
		class CodeSourceProxy
		{
		private:
			static std::string className;
			static jclass objectClass;
			jobject peerObject;

		protected:
			CodeSourceProxy(void* unused);
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
			CodeSourceProxy(jobject obj);
			CodeSourceProxy(::java::net::URLProxy p0, ::net::sourceforge::jnipp::PA<::java::security::CodeSignerProxy>::ProxyArray<1> p1);
			CodeSourceProxy(::java::net::URLProxy p0, ::net::sourceforge::jnipp::PA<::java::security::cert::CertificateProxy>::ProxyArray<1> p1);

			virtual ~CodeSourceProxy();
			CodeSourceProxy& operator=(const CodeSourceProxy& rhs);

			// methods
			/*
			 * boolean equals(Object);
			 */
			jboolean equals(::java::lang::ObjectProxy p0);
			/*
			 * boolean implies(CodeSource);
			 */
			jboolean implies(::java::security::CodeSourceProxy p0);
			/*
			 * URL getLocation();
			 */
			::java::net::URLProxy getLocation();
			/*
			 * CodeSigner[] getCodeSigners();
			 */
			::net::sourceforge::jnipp::PA<::java::security::CodeSignerProxy>::ProxyArray<1> getCodeSigners();
			/*
			 * Certificate[] getCertificates();
			 */
			::net::sourceforge::jnipp::PA<::java::security::cert::CertificateProxy>::ProxyArray<1> getCertificates();
			/*
			 * int hashCode();
			 */
			jint hashCode();
			/*
			 * String toString();
			 */
			::net::sourceforge::jnipp::JStringHelper toString();

		};
	}
}


#endif
