#ifndef __java_io_BufferedWriterProxy_H
#define __java_io_BufferedWriterProxy_H


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
#include "java\io\WriterProxyForward.h"

namespace java
{
	namespace io
	{
		class BufferedWriterProxy
		{
		private:
			static std::string className;
			static jclass objectClass;
			jobject peerObject;

		protected:
			BufferedWriterProxy(void* unused);
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
			BufferedWriterProxy(jobject obj);
			BufferedWriterProxy(::java::io::WriterProxy p0);
			BufferedWriterProxy(::java::io::WriterProxy p0, jint p1);

			virtual ~BufferedWriterProxy();
			BufferedWriterProxy& operator=(const BufferedWriterProxy& rhs);

			// methods
			/*
			 * void close();
			 */
			void close();
			/*
			 * void flush();
			 */
			void flush();
			/*
			 * void newLine();
			 */
			void newLine();
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
