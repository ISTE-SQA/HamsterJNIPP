#ifndef __java_nio_charset_CharsetEncoderProxy_H
#define __java_nio_charset_CharsetEncoderProxy_H


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
#include "java\lang\CharSequenceProxyForward.h"
#include "java\nio\CharBufferProxyForward.h"
#include "java\nio\ByteBufferProxyForward.h"
#include "java\nio\charset\CharsetProxyForward.h"
#include "java\nio\charset\CodingErrorActionProxyForward.h"
#include "java\nio\charset\CoderResultProxyForward.h"
#include "java\lang\ref\WeakReferenceProxyForward.h"

namespace java
{
	namespace nio
	{
		namespace charset
		{
			class CharsetEncoderProxy
			{
			private:
				static std::string className;
				static jclass objectClass;
				jobject peerObject;

			protected:
				CharsetEncoderProxy(void* unused);
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
				CharsetEncoderProxy(jobject obj);

				virtual ~CharsetEncoderProxy();
				CharsetEncoderProxy& operator=(const CharsetEncoderProxy& rhs);

				// methods
				/*
				 * boolean canEncode(char);
				 */
				jboolean canEncode(jchar p0);
				/*
				 * boolean canEncode(CharSequence);
				 */
				jboolean canEncode(::java::lang::CharSequenceProxy p0);
				/*
				 * boolean isLegalReplacement(byte[]);
				 */
				jboolean isLegalReplacement(::net::sourceforge::jnipp::JByteArrayHelper<1> p0);
				/*
				 * byte[] replacement();
				 */
				::net::sourceforge::jnipp::JByteArrayHelper<1> replacement();
				/*
				 * float averageBytesPerChar();
				 */
				jfloat averageBytesPerChar();
				/*
				 * float maxBytesPerChar();
				 */
				jfloat maxBytesPerChar();
				/*
				 * ByteBuffer encode(CharBuffer);
				 */
				::java::nio::ByteBufferProxy encode(::java::nio::CharBufferProxy p0);
				/*
				 * Charset charset();
				 */
				::java::nio::charset::CharsetProxy charset();
				/*
				 * CharsetEncoder onMalformedInput(CodingErrorAction);
				 */
				::java::nio::charset::CharsetEncoderProxy onMalformedInput(::java::nio::charset::CodingErrorActionProxy p0);
				/*
				 * CharsetEncoder onUnmappableCharacter(CodingErrorAction);
				 */
				::java::nio::charset::CharsetEncoderProxy onUnmappableCharacter(::java::nio::charset::CodingErrorActionProxy p0);
				/*
				 * CharsetEncoder replaceWith(byte[]);
				 */
				::java::nio::charset::CharsetEncoderProxy replaceWith(::net::sourceforge::jnipp::JByteArrayHelper<1> p0);
				/*
				 * CharsetEncoder reset();
				 */
				::java::nio::charset::CharsetEncoderProxy reset();
				/*
				 * CoderResult encode(CharBuffer, ByteBuffer, boolean);
				 */
				::java::nio::charset::CoderResultProxy encode(::java::nio::CharBufferProxy p0, ::java::nio::ByteBufferProxy p1, jboolean p2);
				/*
				 * CoderResult flush(ByteBuffer);
				 */
				::java::nio::charset::CoderResultProxy flush(::java::nio::ByteBufferProxy p0);
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
