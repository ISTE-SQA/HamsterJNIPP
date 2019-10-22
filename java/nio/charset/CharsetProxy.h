#ifndef __java_nio_charset_CharsetProxy_H
#define __java_nio_charset_CharsetProxy_H


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
#include "java\nio\charset\CharsetDecoderProxyForward.h"
#include "java\nio\charset\CharsetEncoderProxyForward.h"
#include "java\lang\ObjectProxyForward.h"
#include "java\nio\ByteBufferProxyForward.h"
#include "java\nio\CharBufferProxyForward.h"
#include "java\util\SetProxyForward.h"
#include "java\util\LocaleProxyForward.h"
#include "java\util\SortedMapProxyForward.h"
#include "java\lang\ThreadLocalProxyForward.h"
#include "java\nio\charset\spi\CharsetProviderProxyForward.h"
#include "java\lang\ObjectProxy.h"

namespace java
{
	namespace nio
	{
		namespace charset
		{
			class CharsetProxy
			{
			private:
				static std::string className;
				static jclass objectClass;
				jobject peerObject;

			protected:
				CharsetProxy(void* unused);
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
				CharsetProxy(jobject obj);

				virtual ~CharsetProxy();
				CharsetProxy& operator=(const CharsetProxy& rhs);

				// methods
				/*
				 * boolean contains(Charset);
				 */
				jboolean contains(::java::nio::charset::CharsetProxy p0);
				/*
				 * CharsetDecoder newDecoder();
				 */
				::java::nio::charset::CharsetDecoderProxy newDecoder();
				/*
				 * CharsetEncoder newEncoder();
				 */
				::java::nio::charset::CharsetEncoderProxy newEncoder();
				/*
				 * boolean canEncode();
				 */
				jboolean canEncode();
				/*
				 * boolean equals(Object);
				 */
				jboolean equals(::java::lang::ObjectProxy p0);
				/*
				 * boolean isRegistered();
				 */
				jboolean isRegistered();
				/*
				 * int compareTo(Charset);
				 */
				jint compareTo(::java::nio::charset::CharsetProxy p0);
				/*
				 * int hashCode();
				 */
				jint hashCode();
				/*
				 * String name();
				 */
				::net::sourceforge::jnipp::JStringHelper name();
				/*
				 * String toString();
				 */
				::net::sourceforge::jnipp::JStringHelper toString();
				/*
				 * ByteBuffer encode(String);
				 */
				::java::nio::ByteBufferProxy encode(::net::sourceforge::jnipp::JStringHelper p0);
				/*
				 * ByteBuffer encode(CharBuffer);
				 */
				::java::nio::ByteBufferProxy encode(::java::nio::CharBufferProxy p0);
				/*
				 * CharBuffer decode(ByteBuffer);
				 */
				::java::nio::CharBufferProxy decode(::java::nio::ByteBufferProxy p0);
				/*
				 * Set aliases();
				 */
				::java::util::SetProxy aliases();
				/*
				 * String displayName();
				 */
				::net::sourceforge::jnipp::JStringHelper displayName();
				/*
				 * String displayName(Locale);
				 */
				::net::sourceforge::jnipp::JStringHelper displayName(::java::util::LocaleProxy p0);
				/*
				 * static boolean isSupported(String);
				 */
				static jboolean isSupported(::net::sourceforge::jnipp::JStringHelper p0);
				/*
				 * static Charset defaultCharset();
				 */
				static ::java::nio::charset::CharsetProxy defaultCharset();
				/*
				 * static Charset forName(String);
				 */
				static ::java::nio::charset::CharsetProxy forName(::net::sourceforge::jnipp::JStringHelper p0);
				/*
				 * static SortedMap availableCharsets();
				 */
				static ::java::util::SortedMapProxy availableCharsets();

			};
		}
	}
}


#endif
