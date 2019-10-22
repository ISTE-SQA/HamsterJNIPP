#ifndef __java_lang_ref_ReferenceQueueProxy_H
#define __java_lang_ref_ReferenceQueueProxy_H


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
#include "java\lang\ref\ReferenceProxyForward.h"
#include "java\lang\ref\ReferenceQueue_LockProxyForward.h"

namespace java
{
	namespace lang
	{
		namespace ref
		{
			class ReferenceQueueProxy
			{
			private:
				static std::string className;
				static jclass objectClass;
				jobject peerObject;

			protected:
				ReferenceQueueProxy(void* unused);
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
				ReferenceQueueProxy(jobject obj);
				ReferenceQueueProxy();

				virtual ~ReferenceQueueProxy();
				ReferenceQueueProxy& operator=(const ReferenceQueueProxy& rhs);

				// methods
				/*
				 * Reference poll();
				 */
				::java::lang::ref::ReferenceProxy poll();
				/*
				 * Reference remove();
				 */
				::java::lang::ref::ReferenceProxy remove();
				/*
				 * Reference remove(long);
				 */
				::java::lang::ref::ReferenceProxy remove(jlong p0);

			};
		}
	}
}


#endif
