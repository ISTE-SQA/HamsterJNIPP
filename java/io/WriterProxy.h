#ifndef __java_io_WriterProxy_H
#define __java_io_WriterProxy_H


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
#include "java\lang\ObjectProxyForward.h"

namespace java
{
	namespace io
	{
		class WriterProxy
		{
		private:
			static std::string className;
			static jclass objectClass;
			jobject peerObject;

		protected:
			WriterProxy(void* unused);
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
			WriterProxy(jobject obj);

			virtual ~WriterProxy();
			WriterProxy& operator=(const WriterProxy& rhs);

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
			 * void write(char[], int, int);
			 */
			void write(::net::sourceforge::jnipp::JCharArrayHelper<1> p0, jint p1, jint p2);
			/*
			 * Writer append(char);
			 */
			::java::io::WriterProxy append(jchar p0);
			/*
			 * Writer append(CharSequence);
			 */
			::java::io::WriterProxy append(::java::lang::CharSequenceProxy p0);
			/*
			 * Writer append(CharSequence, int, int);
			 */
			::java::io::WriterProxy append(::java::lang::CharSequenceProxy p0, jint p1, jint p2);
			/*
			 * void write(char[]);
			 */
			void write(::net::sourceforge::jnipp::JCharArrayHelper<1> p0);
			/*
			 * void write(int);
			 */
			void write(jint p0);
			/*
			 * void write(String);
			 */
			void write(::net::sourceforge::jnipp::JStringHelper p0);
			/*
			 * void write(String, int, int);
			 */
			void write(::net::sourceforge::jnipp::JStringHelper p0, jint p1, jint p2);

		};
	}
}


#endif
