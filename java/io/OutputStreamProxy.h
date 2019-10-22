#ifndef __java_io_OutputStreamProxy_H
#define __java_io_OutputStreamProxy_H


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
		class OutputStreamProxy
		{
		private:
			static std::string className;
			static jclass objectClass;
			jobject peerObject;

		protected:
			OutputStreamProxy(void* unused);
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
			OutputStreamProxy(jobject obj);
			OutputStreamProxy();

			virtual ~OutputStreamProxy();
			OutputStreamProxy& operator=(const OutputStreamProxy& rhs);

			// methods
			/*
			 * void write(int);
			 */
			void write(jint p0);
			/*
			 * void close();
			 */
			void close();
			/*
			 * void flush();
			 */
			void flush();
			/*
			 * void write(byte[]);
			 */
			void write(::net::sourceforge::jnipp::JByteArrayHelper<1> p0);
			/*
			 * void write(byte[], int, int);
			 */
			void write(::net::sourceforge::jnipp::JByteArrayHelper<1> p0, jint p1, jint p2);

		};
	}
}


#endif
