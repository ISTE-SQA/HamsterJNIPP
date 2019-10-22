#ifndef __java_util_stream_IntStream_BuilderProxy_H
#define __java_util_stream_IntStream_BuilderProxy_H


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
#include "java\util\stream\IntStreamProxyForward.h"

namespace java
{
	namespace util
	{
		namespace stream
		{
			class IntStream_BuilderProxy
			{
			private:
				static std::string className;
				static jclass objectClass;
				jobject peerObject;

			protected:
				IntStream_BuilderProxy(void* unused);
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
				IntStream_BuilderProxy(jobject obj);

				virtual ~IntStream_BuilderProxy();
				IntStream_BuilderProxy& operator=(const IntStream_BuilderProxy& rhs);

				// methods
				/*
				 * IntStream build();
				 */
				::java::util::stream::IntStreamProxy build();
				/*
				 * void accept(int);
				 */
				void accept(jint p0);
				/*
				 * IntStream$Builder add(int);
				 */
				::java::util::stream::IntStream_BuilderProxy add(jint p0);

			};
		}
	}
}


#endif
