#ifndef __java_io_OutputStreamWriterProxy_H
#define __java_io_OutputStreamWriterProxy_H


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
#include "java\io\OutputStreamProxyForward.h"
#include "java\nio\charset\CharsetProxyForward.h"
#include "java\nio\charset\CharsetEncoderProxyForward.h"
#include "sun\nio\cs\StreamEncoderProxyForward.h"

namespace java
{
	namespace io
	{
		class OutputStreamWriterProxy
		{
		private:
			static std::string className;
			static jclass objectClass;
			jobject peerObject;

		protected:
			OutputStreamWriterProxy(void* unused);
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
			OutputStreamWriterProxy(jobject obj);
			OutputStreamWriterProxy(::java::io::OutputStreamProxy p0);
			OutputStreamWriterProxy(::java::io::OutputStreamProxy p0, ::net::sourceforge::jnipp::JStringHelper p1);
			OutputStreamWriterProxy(::java::io::OutputStreamProxy p0, ::java::nio::charset::CharsetProxy p1);
			OutputStreamWriterProxy(::java::io::OutputStreamProxy p0, ::java::nio::charset::CharsetEncoderProxy p1);

			virtual ~OutputStreamWriterProxy();
			OutputStreamWriterProxy& operator=(const OutputStreamWriterProxy& rhs);

			// methods
			/*
			 * String getEncoding();
			 */
			::net::sourceforge::jnipp::JStringHelper getEncoding();
			/*
			 * void close();
			 */
			void close();
			/*
			 * void flush();
			 */
			void flush();
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


#endif
