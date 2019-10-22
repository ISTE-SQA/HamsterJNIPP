#ifndef __sun_net_www_MessageHeaderProxy_H
#define __sun_net_www_MessageHeaderProxy_H


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
#include "java\util\IteratorProxyForward.h"
#include "java\util\MapProxyForward.h"
#include "java\io\PrintStreamProxyForward.h"

namespace sun
{
	namespace net
	{
		namespace www
		{
			class MessageHeaderProxy
			{
			private:
				static std::string className;
				static jclass objectClass;
				jobject peerObject;

			protected:
				MessageHeaderProxy(void* unused);
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
				MessageHeaderProxy(jobject obj);
				MessageHeaderProxy();
				MessageHeaderProxy(::java::io::InputStreamProxy p0);

				virtual ~MessageHeaderProxy();
				MessageHeaderProxy& operator=(const MessageHeaderProxy& rhs);

				// methods
				/*
				 * boolean filterNTLMResponses(String);
				 */
				jboolean filterNTLMResponses(::net::sourceforge::jnipp::JStringHelper p0);
				/*
				 * Iterator multiValueIterator(String);
				 */
				::java::util::IteratorProxy multiValueIterator(::net::sourceforge::jnipp::JStringHelper p0);
				/*
				 * static String canonicalID(String);
				 */
				static ::net::sourceforge::jnipp::JStringHelper canonicalID(::net::sourceforge::jnipp::JStringHelper p0);
				/*
				 * int getKey(String);
				 */
				jint getKey(::net::sourceforge::jnipp::JStringHelper p0);
				/*
				 * String findNextValue(String, String);
				 */
				::net::sourceforge::jnipp::JStringHelper findNextValue(::net::sourceforge::jnipp::JStringHelper p0, ::net::sourceforge::jnipp::JStringHelper p1);
				/*
				 * String findValue(String);
				 */
				::net::sourceforge::jnipp::JStringHelper findValue(::net::sourceforge::jnipp::JStringHelper p0);
				/*
				 * String getHeaderNamesInList();
				 */
				::net::sourceforge::jnipp::JStringHelper getHeaderNamesInList();
				/*
				 * String getKey(int);
				 */
				::net::sourceforge::jnipp::JStringHelper getKey(jint p0);
				/*
				 * String getValue(int);
				 */
				::net::sourceforge::jnipp::JStringHelper getValue(jint p0);
				/*
				 * String toString();
				 */
				::net::sourceforge::jnipp::JStringHelper toString();
				/*
				 * Map filterAndAddHeaders(String[], Map);
				 */
				::java::util::MapProxy filterAndAddHeaders(::net::sourceforge::jnipp::JStringHelperArray<1> p0, ::java::util::MapProxy p1);
				/*
				 * Map getHeaders();
				 */
				::java::util::MapProxy getHeaders();
				/*
				 * Map getHeaders(String[]);
				 */
				::java::util::MapProxy getHeaders(::net::sourceforge::jnipp::JStringHelperArray<1> p0);
				/*
				 * void add(String, String);
				 */
				void add(::net::sourceforge::jnipp::JStringHelper p0, ::net::sourceforge::jnipp::JStringHelper p1);
				/*
				 * void prepend(String, String);
				 */
				void prepend(::net::sourceforge::jnipp::JStringHelper p0, ::net::sourceforge::jnipp::JStringHelper p1);
				/*
				 * void print(PrintStream);
				 */
				void print(::java::io::PrintStreamProxy p0);
				/*
				 * void remove(String);
				 */
				void remove(::net::sourceforge::jnipp::JStringHelper p0);
				/*
				 * void reset();
				 */
				void reset();
				/*
				 * void set(int, String, String);
				 */
				void set(jint p0, ::net::sourceforge::jnipp::JStringHelper p1, ::net::sourceforge::jnipp::JStringHelper p2);
				/*
				 * void set(String, String);
				 */
				void set(::net::sourceforge::jnipp::JStringHelper p0, ::net::sourceforge::jnipp::JStringHelper p1);
				/*
				 * void setIfNotSet(String, String);
				 */
				void setIfNotSet(::net::sourceforge::jnipp::JStringHelper p0, ::net::sourceforge::jnipp::JStringHelper p1);
				/*
				 * void mergeHeader(InputStream);
				 */
				void mergeHeader(::java::io::InputStreamProxy p0);
				/*
				 * void parseHeader(InputStream);
				 */
				void parseHeader(::java::io::InputStreamProxy p0);

			};
		}
	}
}


#endif
