#ifndef __java_lang_ref_SoftReferenceProxy_H
#define __java_lang_ref_SoftReferenceProxy_H


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

namespace java
{
	namespace lang
	{
		namespace ref
		{
			class SoftReferenceProxy
			{
			private:
				static std::string className;
				static jclass objectClass;
				jobject peerObject;

			protected:
				SoftReferenceProxy(void* unused);
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
				SoftReferenceProxy(jobject obj);
				SoftReferenceProxy(::java::lang::ObjectProxy p0);
				SoftReferenceProxy(::java::lang::ObjectProxy p0, ::java::lang::ref::ReferenceQueueProxy p1);

				virtual ~SoftReferenceProxy();
				SoftReferenceProxy& operator=(const SoftReferenceProxy& rhs);

				// methods
				/*
				 * Object get();
				 */
				::java::lang::ObjectProxy get();

			};
		}
	}
}


#endif
