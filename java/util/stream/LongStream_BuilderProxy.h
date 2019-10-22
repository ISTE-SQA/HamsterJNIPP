#ifndef __java_util_stream_LongStream_BuilderProxy_H
#define __java_util_stream_LongStream_BuilderProxy_H


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
#include "java\util\stream\LongStreamProxyForward.h"

namespace java
{
	namespace util
	{
		namespace stream
		{
			class LongStream_BuilderProxy
			{
			private:
				static std::string className;
				static jclass objectClass;
				jobject peerObject;

			protected:
				LongStream_BuilderProxy(void* unused);
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
				LongStream_BuilderProxy(jobject obj);

				virtual ~LongStream_BuilderProxy();
				LongStream_BuilderProxy& operator=(const LongStream_BuilderProxy& rhs);

				// methods
				/*
				 * LongStream build();
				 */
				::java::util::stream::LongStreamProxy build();
				/*
				 * void accept(long);
				 */
				void accept(jlong p0);
				/*
				 * LongStream$Builder add(long);
				 */
				::java::util::stream::LongStream_BuilderProxy add(jlong p0);

			};
		}
	}
}


#endif
