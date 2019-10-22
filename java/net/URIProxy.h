#ifndef __java_net_URIProxy_H
#define __java_net_URIProxy_H


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
#include "java\lang\ObjectProxyForward.h"
#include "java\net\URLProxyForward.h"

namespace java
{
	namespace net
	{
		class URIProxy
		{
		private:
			static std::string className;
			static jclass objectClass;
			jobject peerObject;

		protected:
			URIProxy(void* unused);
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
			URIProxy(jobject obj);
			URIProxy(::net::sourceforge::jnipp::JStringHelper p0);
			URIProxy(::net::sourceforge::jnipp::JStringHelper p0, ::net::sourceforge::jnipp::JStringHelper p1, ::net::sourceforge::jnipp::JStringHelper p2);
			URIProxy(::net::sourceforge::jnipp::JStringHelper p0, ::net::sourceforge::jnipp::JStringHelper p1, ::net::sourceforge::jnipp::JStringHelper p2, jint p3, ::net::sourceforge::jnipp::JStringHelper p4, ::net::sourceforge::jnipp::JStringHelper p5, ::net::sourceforge::jnipp::JStringHelper p6);
			URIProxy(::net::sourceforge::jnipp::JStringHelper p0, ::net::sourceforge::jnipp::JStringHelper p1, ::net::sourceforge::jnipp::JStringHelper p2, ::net::sourceforge::jnipp::JStringHelper p3);
			URIProxy(::net::sourceforge::jnipp::JStringHelper p0, ::net::sourceforge::jnipp::JStringHelper p1, ::net::sourceforge::jnipp::JStringHelper p2, ::net::sourceforge::jnipp::JStringHelper p3, ::net::sourceforge::jnipp::JStringHelper p4);

			virtual ~URIProxy();
			URIProxy& operator=(const URIProxy& rhs);

			// methods
			/*
			 * boolean equals(Object);
			 */
			jboolean equals(::java::lang::ObjectProxy p0);
			/*
			 * boolean isAbsolute();
			 */
			jboolean isAbsolute();
			/*
			 * boolean isOpaque();
			 */
			jboolean isOpaque();
			/*
			 * int compareTo(URI);
			 */
			jint compareTo(::java::net::URIProxy p0);
			/*
			 * int getPort();
			 */
			jint getPort();
			/*
			 * int hashCode();
			 */
			jint hashCode();
			/*
			 * String getAuthority();
			 */
			::net::sourceforge::jnipp::JStringHelper getAuthority();
			/*
			 * String getFragment();
			 */
			::net::sourceforge::jnipp::JStringHelper getFragment();
			/*
			 * String getHost();
			 */
			::net::sourceforge::jnipp::JStringHelper getHost();
			/*
			 * String getPath();
			 */
			::net::sourceforge::jnipp::JStringHelper getPath();
			/*
			 * String getQuery();
			 */
			::net::sourceforge::jnipp::JStringHelper getQuery();
			/*
			 * String getRawAuthority();
			 */
			::net::sourceforge::jnipp::JStringHelper getRawAuthority();
			/*
			 * String getRawFragment();
			 */
			::net::sourceforge::jnipp::JStringHelper getRawFragment();
			/*
			 * String getRawPath();
			 */
			::net::sourceforge::jnipp::JStringHelper getRawPath();
			/*
			 * String getRawQuery();
			 */
			::net::sourceforge::jnipp::JStringHelper getRawQuery();
			/*
			 * String getRawSchemeSpecificPart();
			 */
			::net::sourceforge::jnipp::JStringHelper getRawSchemeSpecificPart();
			/*
			 * String getRawUserInfo();
			 */
			::net::sourceforge::jnipp::JStringHelper getRawUserInfo();
			/*
			 * String getScheme();
			 */
			::net::sourceforge::jnipp::JStringHelper getScheme();
			/*
			 * String getSchemeSpecificPart();
			 */
			::net::sourceforge::jnipp::JStringHelper getSchemeSpecificPart();
			/*
			 * String getUserInfo();
			 */
			::net::sourceforge::jnipp::JStringHelper getUserInfo();
			/*
			 * String toASCIIString();
			 */
			::net::sourceforge::jnipp::JStringHelper toASCIIString();
			/*
			 * String toString();
			 */
			::net::sourceforge::jnipp::JStringHelper toString();
			/*
			 * URI normalize();
			 */
			::java::net::URIProxy normalize();
			/*
			 * URI parseServerAuthority();
			 */
			::java::net::URIProxy parseServerAuthority();
			/*
			 * URI relativize(URI);
			 */
			::java::net::URIProxy relativize(::java::net::URIProxy p0);
			/*
			 * URI resolve(String);
			 */
			::java::net::URIProxy resolve(::net::sourceforge::jnipp::JStringHelper p0);
			/*
			 * URI resolve(URI);
			 */
			::java::net::URIProxy resolve(::java::net::URIProxy p0);
			/*
			 * URL toURL();
			 */
			::java::net::URLProxy toURL();
			/*
			 * static URI create(String);
			 */
			static ::java::net::URIProxy create(::net::sourceforge::jnipp::JStringHelper p0);

		};
	}
}


#endif
