#ifndef __java_lang_ref_ReferenceProxy_H
#define __java_lang_ref_ReferenceProxy_H


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
#include "java\lang\ref\Reference_LockProxyForward.h"
#include "java\lang\ref\ReferenceQueueProxyForward.h"

namespace java
{
	namespace lang
	{
		namespace ref
		{
			class ReferenceProxy
			{
			private:
				static std::string className;
				static jclass objectClass;
				jobject peerObject;

			protected:
				ReferenceProxy(void* unused);
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
				ReferenceProxy(jobject obj);

				virtual ~ReferenceProxy();
				ReferenceProxy& operator=(const ReferenceProxy& rhs);

				// methods
				/*
				 * boolean enqueue();
				 */
				jboolean enqueue();
				/*
				 * boolean isEnqueued();
				 */
				jboolean isEnqueued();
				/*
				 * Object get();
				 */
				::java::lang::ObjectProxy get();
				/*
				 * void clear();
				 */
				void clear();

			};
		}
	}
}


#endif
