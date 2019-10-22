#ifndef __java_nio_channels_CompletionHandlerProxy_H
#define __java_nio_channels_CompletionHandlerProxy_H


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
#include "java\lang\ObjectProxyForward.h"
#include "java\lang\ThrowableProxyForward.h"

namespace java
{
	namespace nio
	{
		namespace channels
		{
			class CompletionHandlerProxy
			{
			private:
				static std::string className;
				static jclass objectClass;
				jobject peerObject;

			protected:
				CompletionHandlerProxy(void* unused);
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
				CompletionHandlerProxy(jobject obj);

				virtual ~CompletionHandlerProxy();
				CompletionHandlerProxy& operator=(const CompletionHandlerProxy& rhs);

				// methods
				/*
				 * void completed(Object, Object);
				 */
				void completed(::java::lang::ObjectProxy p0, ::java::lang::ObjectProxy p1);
				/*
				 * void failed(Throwable, Object);
				 */
				void failed(::java::lang::ThrowableProxy p0, ::java::lang::ObjectProxy p1);

			};
		}
	}
}


#endif
