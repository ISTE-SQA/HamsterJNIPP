#ifndef __java_util_concurrent_ConcurrentHashMap_NodeProxy_H
#define __java_util_concurrent_ConcurrentHashMap_NodeProxy_H


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

namespace java
{
	namespace util
	{
		namespace concurrent
		{
			class ConcurrentHashMap_NodeProxy
			{
			private:
				static std::string className;
				static jclass objectClass;
				jobject peerObject;

			protected:
				ConcurrentHashMap_NodeProxy(void* unused);
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
				ConcurrentHashMap_NodeProxy(jobject obj);

				virtual ~ConcurrentHashMap_NodeProxy();
				ConcurrentHashMap_NodeProxy& operator=(const ConcurrentHashMap_NodeProxy& rhs);

				// methods
				/*
				 * boolean equals(Object);
				 */
				jboolean equals(::java::lang::ObjectProxy p0);
				/*
				 * int hashCode();
				 */
				jint hashCode();
				/*
				 * Object getKey();
				 */
				::java::lang::ObjectProxy getKey();
				/*
				 * Object getValue();
				 */
				::java::lang::ObjectProxy getValue();
				/*
				 * Object setValue(Object);
				 */
				::java::lang::ObjectProxy setValue(::java::lang::ObjectProxy p0);
				/*
				 * String toString();
				 */
				::net::sourceforge::jnipp::JStringHelper toString();

			};
		}
	}
}


#endif
