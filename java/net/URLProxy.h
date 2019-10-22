#ifndef __java_net_URLProxy_H
#define __java_net_URLProxy_H


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
#include "java\net\URLStreamHandlerProxyForward.h"
#include "java\lang\ObjectProxyForward.h"
#include "java\io\InputStreamProxyForward.h"
#include "java\net\URIProxyForward.h"
#include "java\net\URLConnectionProxyForward.h"
#include "java\net\ProxyProxyForward.h"
#include "java\net\URLStreamHandlerFactoryProxyForward.h"
#include "java\net\UrlDeserializedStateProxyForward.h"
#include "java\util\HashtableProxyForward.h"
#include "java\net\InetAddressProxyForward.h"
#include "java\lang\ClassProxy.h"
#include "java\io\ObjectStreamFieldProxy.h"

namespace java
{
	namespace net
	{
		class URLProxy
		{
		private:
			static std::string className;
			static jclass objectClass;
			jobject peerObject;

		protected:
			URLProxy(void* unused);
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
			URLProxy(jobject obj);
			URLProxy(::net::sourceforge::jnipp::JStringHelper p0);
			URLProxy(::net::sourceforge::jnipp::JStringHelper p0, ::net::sourceforge::jnipp::JStringHelper p1, jint p2, ::net::sourceforge::jnipp::JStringHelper p3);
			URLProxy(::net::sourceforge::jnipp::JStringHelper p0, ::net::sourceforge::jnipp::JStringHelper p1, jint p2, ::net::sourceforge::jnipp::JStringHelper p3, ::java::net::URLStreamHandlerProxy p4);
			URLProxy(::net::sourceforge::jnipp::JStringHelper p0, ::net::sourceforge::jnipp::JStringHelper p1, ::net::sourceforge::jnipp::JStringHelper p2);
			URLProxy(::java::net::URLProxy p0, ::net::sourceforge::jnipp::JStringHelper p1);
			URLProxy(::java::net::URLProxy p0, ::net::sourceforge::jnipp::JStringHelper p1, ::java::net::URLStreamHandlerProxy p2);

			virtual ~URLProxy();
			URLProxy& operator=(const URLProxy& rhs);

			// methods
			/*
			 * boolean equals(Object);
			 */
			jboolean equals(::java::lang::ObjectProxy p0);
			/*
			 * boolean sameFile(URL);
			 */
			jboolean sameFile(::java::net::URLProxy p0);
			/*
			 * InputStream openStream();
			 */
			::java::io::InputStreamProxy openStream();
			/*
			 * Object getContent();
			 */
			::java::lang::ObjectProxy getContent();
			/*
			 * Object getContent(Class[]);
			 */
			::java::lang::ObjectProxy getContent(::net::sourceforge::jnipp::PA<::java::lang::ClassProxy>::ProxyArray<1> p0);
			/*
			 * int getDefaultPort();
			 */
			jint getDefaultPort();
			/*
			 * int getPort();
			 */
			jint getPort();
			/*
			 * String getAuthority();
			 */
			::net::sourceforge::jnipp::JStringHelper getAuthority();
			/*
			 * String getFile();
			 */
			::net::sourceforge::jnipp::JStringHelper getFile();
			/*
			 * String getHost();
			 */
			::net::sourceforge::jnipp::JStringHelper getHost();
			/*
			 * String getPath();
			 */
			::net::sourceforge::jnipp::JStringHelper getPath();
			/*
			 * String getProtocol();
			 */
			::net::sourceforge::jnipp::JStringHelper getProtocol();
			/*
			 * String getQuery();
			 */
			::net::sourceforge::jnipp::JStringHelper getQuery();
			/*
			 * String getRef();
			 */
			::net::sourceforge::jnipp::JStringHelper getRef();
			/*
			 * String getUserInfo();
			 */
			::net::sourceforge::jnipp::JStringHelper getUserInfo();
			/*
			 * String toExternalForm();
			 */
			::net::sourceforge::jnipp::JStringHelper toExternalForm();
			/*
			 * String toString();
			 */
			::net::sourceforge::jnipp::JStringHelper toString();
			/*
			 * URI toURI();
			 */
			::java::net::URIProxy toURI();
			/*
			 * URLConnection openConnection();
			 */
			::java::net::URLConnectionProxy openConnection();
			/*
			 * URLConnection openConnection(Proxy);
			 */
			::java::net::URLConnectionProxy openConnection(::java::net::ProxyProxy p0);
			/*
			 * static void setURLStreamHandlerFactory(URLStreamHandlerFactory);
			 */
			static void setURLStreamHandlerFactory(::java::net::URLStreamHandlerFactoryProxy p0);
			/*
			 * int hashCode();
			 */
			jint hashCode();

		};
	}
}


#endif
