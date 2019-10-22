#ifndef __java_util_stream_DoubleStream_BuilderProxy_H
#define __java_util_stream_DoubleStream_BuilderProxy_H


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
#include "java\util\stream\DoubleStreamProxyForward.h"

namespace java
{
	namespace util
	{
		namespace stream
		{
			class DoubleStream_BuilderProxy
			{
			private:
				static std::string className;
				static jclass objectClass;
				jobject peerObject;

			protected:
				DoubleStream_BuilderProxy(void* unused);
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
				DoubleStream_BuilderProxy(jobject obj);

				virtual ~DoubleStream_BuilderProxy();
				DoubleStream_BuilderProxy& operator=(const DoubleStream_BuilderProxy& rhs);

				// methods
				/*
				 * DoubleStream build();
				 */
				::java::util::stream::DoubleStreamProxy build();
				/*
				 * void accept(double);
				 */
				void accept(jdouble p0);
				/*
				 * DoubleStream$Builder add(double);
				 */
				::java::util::stream::DoubleStream_BuilderProxy add(jdouble p0);

			};
		}
	}
}


#endif
