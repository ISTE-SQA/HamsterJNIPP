#ifndef __java_io_InputStreamProxy_H
#define __java_io_InputStreamProxy_H


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

namespace java
{
	namespace io
	{
		class InputStreamProxy
		{
		private:
			static std::string className;
			static jclass objectClass;
			jobject peerObject;

		protected:
			InputStreamProxy(void* unused);
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
			InputStreamProxy(jobject obj);
			InputStreamProxy();

			virtual ~InputStreamProxy();
			InputStreamProxy& operator=(const InputStreamProxy& rhs);

			// methods
			/*
			 * int read();
			 */
			jint read();
			/*
			 * boolean markSupported();
			 */
			jboolean markSupported();
			/*
			 * int available();
			 */
			jint available();
			/*
			 * int read(byte[]);
			 */
			jint read(::net::sourceforge::jnipp::JByteArrayHelper<1> p0);
			/*
			 * int read(byte[], int, int);
			 */
			jint read(::net::sourceforge::jnipp::JByteArrayHelper<1> p0, jint p1, jint p2);
			/*
			 * long skip(long);
			 */
			jlong skip(jlong p0);
			/*
			 * void mark(int);
			 */
			void mark(jint p0);
			/*
			 * void reset();
			 */
			void reset();
			/*
			 * void close();
			 */
			void close();

		};
	}
}


#endif
