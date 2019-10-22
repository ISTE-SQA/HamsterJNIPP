#ifndef __sun_nio_cs_StreamEncoderProxy_H
#define __sun_nio_cs_StreamEncoderProxy_H


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
#include "java\nio\channels\WritableByteChannelProxyForward.h"
#include "java\nio\charset\CharsetEncoderProxyForward.h"
#include "java\io\OutputStreamProxyForward.h"
#include "java\lang\ObjectProxyForward.h"
#include "java\nio\charset\CharsetProxyForward.h"
#include "java\nio\ByteBufferProxyForward.h"
#include "java\nio\CharBufferProxyForward.h"

namespace sun
{
	namespace nio
	{
		namespace cs
		{
			class StreamEncoderProxy
			{
			private:
				static std::string className;
				static jclass objectClass;
				jobject peerObject;

			protected:
				StreamEncoderProxy(void* unused);
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
				StreamEncoderProxy(jobject obj);

				virtual ~StreamEncoderProxy();
				StreamEncoderProxy& operator=(const StreamEncoderProxy& rhs);

				// methods
				/*
				 * String getEncoding();
				 */
				::net::sourceforge::jnipp::JStringHelper getEncoding();
				/*
				 * static StreamEncoder forEncoder(WritableByteChannel, CharsetEncoder, int);
				 */
				static ::sun::nio::cs::StreamEncoderProxy forEncoder(::java::nio::channels::WritableByteChannelProxy p0, ::java::nio::charset::CharsetEncoderProxy p1, jint p2);
				/*
				 * static StreamEncoder forOutputStreamWriter(OutputStream, Object, String);
				 */
				static ::sun::nio::cs::StreamEncoderProxy forOutputStreamWriter(::java::io::OutputStreamProxy p0, ::java::lang::ObjectProxy p1, ::net::sourceforge::jnipp::JStringHelper p2);
				/*
				 * static StreamEncoder forOutputStreamWriter(OutputStream, Object, Charset);
				 */
				static ::sun::nio::cs::StreamEncoderProxy forOutputStreamWriter(::java::io::OutputStreamProxy p0, ::java::lang::ObjectProxy p1, ::java::nio::charset::CharsetProxy p2);
				/*
				 * static StreamEncoder forOutputStreamWriter(OutputStream, Object, CharsetEncoder);
				 */
				static ::sun::nio::cs::StreamEncoderProxy forOutputStreamWriter(::java::io::OutputStreamProxy p0, ::java::lang::ObjectProxy p1, ::java::nio::charset::CharsetEncoderProxy p2);
				/*
				 * void close();
				 */
				void close();
				/*
				 * void flush();
				 */
				void flush();
				/*
				 * void flushBuffer();
				 */
				void flushBuffer();
				/*
				 * void write(char[], int, int);
				 */
				void write(::net::sourceforge::jnipp::JCharArrayHelper<1> p0, jint p1, jint p2);
				/*
				 * void write(int);
				 */
				void write(jint p0);
				/*
				 * void write(String, int, int);
				 */
				void write(::net::sourceforge::jnipp::JStringHelper p0, jint p1, jint p2);

			};
		}
	}
}


#endif
