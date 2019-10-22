#ifndef __java_lang_invoke_MethodType_ConcurrentWeakInternSetProxy_H
#define __java_lang_invoke_MethodType_ConcurrentWeakInternSetProxy_H


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
#include "java\lang\ref\ReferenceQueueProxyForward.h"
#include "java\util\concurrent\ConcurrentMapProxyForward.h"

namespace java
{
	namespace lang
	{
		namespace invoke
		{
			class MethodType_ConcurrentWeakInternSetProxy
			{
			private:
				static std::string className;
				static jclass objectClass;
				jobject peerObject;

			protected:
				MethodType_ConcurrentWeakInternSetProxy(void* unused);
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
				MethodType_ConcurrentWeakInternSetProxy(jobject obj);
				MethodType_ConcurrentWeakInternSetProxy();

				virtual ~MethodType_ConcurrentWeakInternSetProxy();
				MethodType_ConcurrentWeakInternSetProxy& operator=(const MethodType_ConcurrentWeakInternSetProxy& rhs);

				// methods
				/*
				 * Object add(Object);
				 */
				::java::lang::ObjectProxy add(::java::lang::ObjectProxy p0);
				/*
				 * Object get(Object);
				 */
				::java::lang::ObjectProxy get(::java::lang::ObjectProxy p0);

			};
		}
	}
}


#endif
