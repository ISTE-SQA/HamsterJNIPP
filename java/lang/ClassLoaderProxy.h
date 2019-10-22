#ifndef __java_lang_ClassLoaderProxy_H
#define __java_lang_ClassLoaderProxy_H


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
#include "java\lang\ClassProxyForward.h"
#include "java\net\URLProxyForward.h"
#include "java\util\EnumerationProxyForward.h"
#include "java\lang\ObjectProxyForward.h"
#include "java\util\MapProxyForward.h"
#include "java\security\ProtectionDomainProxyForward.h"
#include "java\util\HashMapProxyForward.h"
#include "java\util\SetProxyForward.h"
#include "java\util\VectorProxyForward.h"
#include "java\util\concurrent\ConcurrentHashMapProxyForward.h"
#include "java\util\StackProxyForward.h"
#include "java\security\cert\CertificateProxy.h"

namespace java
{
	namespace lang
	{
		class ClassLoaderProxy
		{
		private:
			static std::string className;
			static jclass objectClass;
			jobject peerObject;

		protected:
			ClassLoaderProxy(void* unused);
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
			ClassLoaderProxy(jobject obj);

			virtual ~ClassLoaderProxy();
			ClassLoaderProxy& operator=(const ClassLoaderProxy& rhs);

			// methods
			/*
			 * ClassLoader getParent();
			 */
			::java::lang::ClassLoaderProxy getParent();
			/*
			 * InputStream getResourceAsStream(String);
			 */
			::java::io::InputStreamProxy getResourceAsStream(::net::sourceforge::jnipp::JStringHelper p0);
			/*
			 * Class loadClass(String);
			 */
			::java::lang::ClassProxy loadClass(::net::sourceforge::jnipp::JStringHelper p0);
			/*
			 * URL getResource(String);
			 */
			::java::net::URLProxy getResource(::net::sourceforge::jnipp::JStringHelper p0);
			/*
			 * Enumeration getResources(String);
			 */
			::java::util::EnumerationProxy getResources(::net::sourceforge::jnipp::JStringHelper p0);
			/*
			 * static InputStream getSystemResourceAsStream(String);
			 */
			static ::java::io::InputStreamProxy getSystemResourceAsStream(::net::sourceforge::jnipp::JStringHelper p0);
			/*
			 * static ClassLoader getSystemClassLoader();
			 */
			static ::java::lang::ClassLoaderProxy getSystemClassLoader();
			/*
			 * static URL getSystemResource(String);
			 */
			static ::java::net::URLProxy getSystemResource(::net::sourceforge::jnipp::JStringHelper p0);
			/*
			 * static Enumeration getSystemResources(String);
			 */
			static ::java::util::EnumerationProxy getSystemResources(::net::sourceforge::jnipp::JStringHelper p0);
			/*
			 * void clearAssertionStatus();
			 */
			void clearAssertionStatus();
			/*
			 * void setClassAssertionStatus(String, boolean);
			 */
			void setClassAssertionStatus(::net::sourceforge::jnipp::JStringHelper p0, jboolean p1);
			/*
			 * void setDefaultAssertionStatus(boolean);
			 */
			void setDefaultAssertionStatus(jboolean p0);
			/*
			 * void setPackageAssertionStatus(String, boolean);
			 */
			void setPackageAssertionStatus(::net::sourceforge::jnipp::JStringHelper p0, jboolean p1);

		};
	}
}


#endif
