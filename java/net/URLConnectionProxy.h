#ifndef __java_net_URLConnectionProxy_H
#define __java_net_URLConnectionProxy_H


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
#include "java\io\OutputStreamProxyForward.h"
#include "java\lang\ObjectProxyForward.h"
#include "java\net\URLProxyForward.h"
#include "java\security\PermissionProxyForward.h"
#include "java\util\MapProxyForward.h"
#include "java\net\FileNameMapProxyForward.h"
#include "java\net\ContentHandlerFactoryProxyForward.h"
#include "java\util\HashtableProxyForward.h"
#include "sun\net\www\MessageHeaderProxyForward.h"
#include "java\lang\ClassProxy.h"

namespace java
{
	namespace net
	{
		class URLConnectionProxy
		{
		private:
			static std::string className;
			static jclass objectClass;
			jobject peerObject;

		protected:
			URLConnectionProxy(void* unused);
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
			URLConnectionProxy(jobject obj);

			virtual ~URLConnectionProxy();
			URLConnectionProxy& operator=(const URLConnectionProxy& rhs);

			// methods
			/*
			 * void connect();
			 */
			void connect();
			/*
			 * boolean getAllowUserInteraction();
			 */
			jboolean getAllowUserInteraction();
			/*
			 * boolean getDefaultUseCaches();
			 */
			jboolean getDefaultUseCaches();
			/*
			 * boolean getDoInput();
			 */
			jboolean getDoInput();
			/*
			 * boolean getDoOutput();
			 */
			jboolean getDoOutput();
			/*
			 * boolean getUseCaches();
			 */
			jboolean getUseCaches();
			/*
			 * int getConnectTimeout();
			 */
			jint getConnectTimeout();
			/*
			 * int getContentLength();
			 */
			jint getContentLength();
			/*
			 * int getHeaderFieldInt(String, int);
			 */
			jint getHeaderFieldInt(::net::sourceforge::jnipp::JStringHelper p0, jint p1);
			/*
			 * int getReadTimeout();
			 */
			jint getReadTimeout();
			/*
			 * InputStream getInputStream();
			 */
			::java::io::InputStreamProxy getInputStream();
			/*
			 * OutputStream getOutputStream();
			 */
			::java::io::OutputStreamProxy getOutputStream();
			/*
			 * Object getContent();
			 */
			::java::lang::ObjectProxy getContent();
			/*
			 * Object getContent(Class[]);
			 */
			::java::lang::ObjectProxy getContent(::net::sourceforge::jnipp::PA<::java::lang::ClassProxy>::ProxyArray<1> p0);
			/*
			 * String getContentEncoding();
			 */
			::net::sourceforge::jnipp::JStringHelper getContentEncoding();
			/*
			 * String getContentType();
			 */
			::net::sourceforge::jnipp::JStringHelper getContentType();
			/*
			 * String getHeaderField(int);
			 */
			::net::sourceforge::jnipp::JStringHelper getHeaderField(jint p0);
			/*
			 * String getHeaderField(String);
			 */
			::net::sourceforge::jnipp::JStringHelper getHeaderField(::net::sourceforge::jnipp::JStringHelper p0);
			/*
			 * String getHeaderFieldKey(int);
			 */
			::net::sourceforge::jnipp::JStringHelper getHeaderFieldKey(jint p0);
			/*
			 * String getRequestProperty(String);
			 */
			::net::sourceforge::jnipp::JStringHelper getRequestProperty(::net::sourceforge::jnipp::JStringHelper p0);
			/*
			 * String toString();
			 */
			::net::sourceforge::jnipp::JStringHelper toString();
			/*
			 * URL getURL();
			 */
			::java::net::URLProxy getURL();
			/*
			 * Permission getPermission();
			 */
			::java::security::PermissionProxy getPermission();
			/*
			 * Map getHeaderFields();
			 */
			::java::util::MapProxy getHeaderFields();
			/*
			 * Map getRequestProperties();
			 */
			::java::util::MapProxy getRequestProperties();
			/*
			 * long getContentLengthLong();
			 */
			jlong getContentLengthLong();
			/*
			 * long getDate();
			 */
			jlong getDate();
			/*
			 * long getExpiration();
			 */
			jlong getExpiration();
			/*
			 * long getHeaderFieldDate(String, long);
			 */
			jlong getHeaderFieldDate(::net::sourceforge::jnipp::JStringHelper p0, jlong p1);
			/*
			 * long getHeaderFieldLong(String, long);
			 */
			jlong getHeaderFieldLong(::net::sourceforge::jnipp::JStringHelper p0, jlong p1);
			/*
			 * long getIfModifiedSince();
			 */
			jlong getIfModifiedSince();
			/*
			 * long getLastModified();
			 */
			jlong getLastModified();
			/*
			 * static boolean getDefaultAllowUserInteraction();
			 */
			static jboolean getDefaultAllowUserInteraction();
			/*
			 * static String getDefaultRequestProperty(String);
			 */
			static ::net::sourceforge::jnipp::JStringHelper getDefaultRequestProperty(::net::sourceforge::jnipp::JStringHelper p0);
			/*
			 * static String guessContentTypeFromName(String);
			 */
			static ::net::sourceforge::jnipp::JStringHelper guessContentTypeFromName(::net::sourceforge::jnipp::JStringHelper p0);
			/*
			 * static String guessContentTypeFromStream(InputStream);
			 */
			static ::net::sourceforge::jnipp::JStringHelper guessContentTypeFromStream(::java::io::InputStreamProxy p0);
			/*
			 * static FileNameMap getFileNameMap();
			 */
			static ::java::net::FileNameMapProxy getFileNameMap();
			/*
			 * static void setContentHandlerFactory(ContentHandlerFactory);
			 */
			static void setContentHandlerFactory(::java::net::ContentHandlerFactoryProxy p0);
			/*
			 * static void setDefaultAllowUserInteraction(boolean);
			 */
			static void setDefaultAllowUserInteraction(jboolean p0);
			/*
			 * static void setDefaultRequestProperty(String, String);
			 */
			static void setDefaultRequestProperty(::net::sourceforge::jnipp::JStringHelper p0, ::net::sourceforge::jnipp::JStringHelper p1);
			/*
			 * static void setFileNameMap(FileNameMap);
			 */
			static void setFileNameMap(::java::net::FileNameMapProxy p0);
			/*
			 * void addRequestProperty(String, String);
			 */
			void addRequestProperty(::net::sourceforge::jnipp::JStringHelper p0, ::net::sourceforge::jnipp::JStringHelper p1);
			/*
			 * void setAllowUserInteraction(boolean);
			 */
			void setAllowUserInteraction(jboolean p0);
			/*
			 * void setConnectTimeout(int);
			 */
			void setConnectTimeout(jint p0);
			/*
			 * void setDefaultUseCaches(boolean);
			 */
			void setDefaultUseCaches(jboolean p0);
			/*
			 * void setDoInput(boolean);
			 */
			void setDoInput(jboolean p0);
			/*
			 * void setDoOutput(boolean);
			 */
			void setDoOutput(jboolean p0);
			/*
			 * void setIfModifiedSince(long);
			 */
			void setIfModifiedSince(jlong p0);
			/*
			 * void setReadTimeout(int);
			 */
			void setReadTimeout(jint p0);
			/*
			 * void setRequestProperty(String, String);
			 */
			void setRequestProperty(::net::sourceforge::jnipp::JStringHelper p0, ::net::sourceforge::jnipp::JStringHelper p1);
			/*
			 * void setUseCaches(boolean);
			 */
			void setUseCaches(jboolean p0);

		};
	}
}


#endif
