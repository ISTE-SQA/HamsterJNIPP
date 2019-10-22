#ifndef __java_nio_charset_CharsetDecoderProxy_H
#define __java_nio_charset_CharsetDecoderProxy_H


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
#include "java\nio\ByteBufferProxyForward.h"
#include "java\nio\CharBufferProxyForward.h"
#include "java\nio\charset\CharsetProxyForward.h"
#include "java\nio\charset\CodingErrorActionProxyForward.h"
#include "java\nio\charset\CoderResultProxyForward.h"

namespace java
{
	namespace nio
	{
		namespace charset
		{
			class CharsetDecoderProxy
			{
			private:
				static std::string className;
				static jclass objectClass;
				jobject peerObject;

			protected:
				CharsetDecoderProxy(void* unused);
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
				CharsetDecoderProxy(jobject obj);

				virtual ~CharsetDecoderProxy();
				CharsetDecoderProxy& operator=(const CharsetDecoderProxy& rhs);

				// methods
				/*
				 * boolean isAutoDetecting();
				 */
				jboolean isAutoDetecting();
				/*
				 * boolean isCharsetDetected();
				 */
				jboolean isCharsetDetected();
				/*
				 * float averageCharsPerByte();
				 */
				jfloat averageCharsPerByte();
				/*
				 * float maxCharsPerByte();
				 */
				jfloat maxCharsPerByte();
				/*
				 * String replacement();
				 */
				::net::sourceforge::jnipp::JStringHelper replacement();
				/*
				 * CharBuffer decode(ByteBuffer);
				 */
				::java::nio::CharBufferProxy decode(::java::nio::ByteBufferProxy p0);
				/*
				 * Charset charset();
				 */
				::java::nio::charset::CharsetProxy charset();
				/*
				 * CharsetDecoder onMalformedInput(CodingErrorAction);
				 */
				::java::nio::charset::CharsetDecoderProxy onMalformedInput(::java::nio::charset::CodingErrorActionProxy p0);
				/*
				 * CharsetDecoder onUnmappableCharacter(CodingErrorAction);
				 */
				::java::nio::charset::CharsetDecoderProxy onUnmappableCharacter(::java::nio::charset::CodingErrorActionProxy p0);
				/*
				 * CharsetDecoder replaceWith(String);
				 */
				::java::nio::charset::CharsetDecoderProxy replaceWith(::net::sourceforge::jnipp::JStringHelper p0);
				/*
				 * CharsetDecoder reset();
				 */
				::java::nio::charset::CharsetDecoderProxy reset();
				/*
				 * CoderResult decode(ByteBuffer, CharBuffer, boolean);
				 */
				::java::nio::charset::CoderResultProxy decode(::java::nio::ByteBufferProxy p0, ::java::nio::CharBufferProxy p1, jboolean p2);
				/*
				 * CoderResult flush(CharBuffer);
				 */
				::java::nio::charset::CoderResultProxy flush(::java::nio::CharBufferProxy p0);
				/*
				 * Charset detectedCharset();
				 */
				::java::nio::charset::CharsetProxy detectedCharset();
				/*
				 * CodingErrorAction malformedInputAction();
				 */
				::java::nio::charset::CodingErrorActionProxy malformedInputAction();
				/*
				 * CodingErrorAction unmappableCharacterAction();
				 */
				::java::nio::charset::CodingErrorActionProxy unmappableCharacterAction();

			};
		}
	}
}


#endif
