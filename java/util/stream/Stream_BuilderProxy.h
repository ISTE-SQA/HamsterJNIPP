#ifndef __java_util_stream_Stream_BuilderProxy_H
#define __java_util_stream_Stream_BuilderProxy_H


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
#include "java\util\stream\StreamProxyForward.h"
#include "java\lang\ObjectProxyForward.h"

namespace java
{
	namespace util
	{
		namespace stream
		{
			class Stream_BuilderProxy
			{
			private:
				static std::string className;
				static jclass objectClass;
				jobject peerObject;

			protected:
				Stream_BuilderProxy(void* unused);
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
				Stream_BuilderProxy(jobject obj);

				virtual ~Stream_BuilderProxy();
				Stream_BuilderProxy& operator=(const Stream_BuilderProxy& rhs);

				// methods
				/*
				 * Stream build();
				 */
				::java::util::stream::StreamProxy build();
				/*
				 * void accept(Object);
				 */
				void accept(::java::lang::ObjectProxy p0);
				/*
				 * Stream$Builder add(Object);
				 */
				::java::util::stream::Stream_BuilderProxy add(::java::lang::ObjectProxy p0);

			};
		}
	}
}


#endif
