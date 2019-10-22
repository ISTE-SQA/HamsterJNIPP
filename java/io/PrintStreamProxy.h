#ifndef __java_io_PrintStreamProxy_H
#define __java_io_PrintStreamProxy_H


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
#include "java\io\FileProxyForward.h"
#include "java\io\OutputStreamProxyForward.h"
#include "java\lang\CharSequenceProxyForward.h"
#include "java\util\LocaleProxyForward.h"
#include "java\io\BufferedWriterProxyForward.h"
#include "java\io\OutputStreamWriterProxyForward.h"
#include "java\util\FormatterProxyForward.h"
#include "java\lang\ObjectProxy.h"

namespace java
{
	namespace io
	{
		class PrintStreamProxy
		{
		private:
			static std::string className;
			static jclass objectClass;
			jobject peerObject;

		protected:
			PrintStreamProxy(void* unused);
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
			PrintStreamProxy(jobject obj);
			PrintStreamProxy(::java::io::FileProxy p0);
			PrintStreamProxy(::java::io::FileProxy p0, ::net::sourceforge::jnipp::JStringHelper p1);
			PrintStreamProxy(::java::io::OutputStreamProxy p0);
			PrintStreamProxy(::java::io::OutputStreamProxy p0, jboolean p1);
			PrintStreamProxy(::java::io::OutputStreamProxy p0, jboolean p1, ::net::sourceforge::jnipp::JStringHelper p2);
			PrintStreamProxy(::net::sourceforge::jnipp::JStringHelper p0);
			PrintStreamProxy(::net::sourceforge::jnipp::JStringHelper p0, ::net::sourceforge::jnipp::JStringHelper p1);

			virtual ~PrintStreamProxy();
			PrintStreamProxy& operator=(const PrintStreamProxy& rhs);

			// methods
			/*
			 * boolean checkError();
			 */
			jboolean checkError();
			/*
			 * PrintStream append(char);
			 */
			::java::io::PrintStreamProxy append(jchar p0);
			/*
			 * PrintStream append(CharSequence);
			 */
			::java::io::PrintStreamProxy append(::java::lang::CharSequenceProxy p0);
			/*
			 * PrintStream append(CharSequence, int, int);
			 */
			::java::io::PrintStreamProxy append(::java::lang::CharSequenceProxy p0, jint p1, jint p2);
			/*
			 * PrintStream format(String, Object[]);
			 */
			::java::io::PrintStreamProxy format(::net::sourceforge::jnipp::JStringHelper p0, ::net::sourceforge::jnipp::PA<::java::lang::ObjectProxy>::ProxyArray<1> p1);
			/*
			 * PrintStream format(Locale, String, Object[]);
			 */
			::java::io::PrintStreamProxy format(::java::util::LocaleProxy p0, ::net::sourceforge::jnipp::JStringHelper p1, ::net::sourceforge::jnipp::PA<::java::lang::ObjectProxy>::ProxyArray<1> p2);
			/*
			 * PrintStream printf(String, Object[]);
			 */
			::java::io::PrintStreamProxy printf(::net::sourceforge::jnipp::JStringHelper p0, ::net::sourceforge::jnipp::PA<::java::lang::ObjectProxy>::ProxyArray<1> p1);
			/*
			 * PrintStream printf(Locale, String, Object[]);
			 */
			::java::io::PrintStreamProxy printf(::java::util::LocaleProxy p0, ::net::sourceforge::jnipp::JStringHelper p1, ::net::sourceforge::jnipp::PA<::java::lang::ObjectProxy>::ProxyArray<1> p2);
			/*
			 * void close();
			 */
			void close();
			/*
			 * void flush();
			 */
			void flush();
			/*
			 * void print(boolean);
			 */
			void print(jboolean p0);
			/*
			 * void print(char);
			 */
			void print(jchar p0);
			/*
			 * void print(char[]);
			 */
			void print(::net::sourceforge::jnipp::JCharArrayHelper<1> p0);
			/*
			 * void print(double);
			 */
			void print(jdouble p0);
			/*
			 * void print(float);
			 */
			void print(jfloat p0);
			/*
			 * void print(int);
			 */
			void print(jint p0);
			/*
			 * void print(Object);
			 */
			void print(::java::lang::ObjectProxy p0);
			/*
			 * void print(String);
			 */
			void print(::net::sourceforge::jnipp::JStringHelper p0);
			/*
			 * void print(long);
			 */
			void print(jlong p0);
			/*
			 * void println();
			 */
			void println();
			/*
			 * void println(boolean);
			 */
			void println(jboolean p0);
			/*
			 * void println(char);
			 */
			void println(jchar p0);
			/*
			 * void println(char[]);
			 */
			void println(::net::sourceforge::jnipp::JCharArrayHelper<1> p0);
			/*
			 * void println(double);
			 */
			void println(jdouble p0);
			/*
			 * void println(float);
			 */
			void println(jfloat p0);
			/*
			 * void println(int);
			 */
			void println(jint p0);
			/*
			 * void println(Object);
			 */
			void println(::java::lang::ObjectProxy p0);
			/*
			 * void println(String);
			 */
			void println(::net::sourceforge::jnipp::JStringHelper p0);
			/*
			 * void println(long);
			 */
			void println(jlong p0);
			/*
			 * void write(byte[], int, int);
			 */
			void write(::net::sourceforge::jnipp::JByteArrayHelper<1> p0, jint p1, jint p2);
			/*
			 * void write(int);
			 */
			void write(jint p0);

		};
	}
}


#endif
