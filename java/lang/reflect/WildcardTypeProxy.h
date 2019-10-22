#ifndef __java_lang_reflect_WildcardTypeProxy_H
#define __java_lang_reflect_WildcardTypeProxy_H


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
#include "java\lang\reflect\TypeProxy.h"

namespace java
{
	namespace lang
	{
		namespace reflect
		{
			class WildcardTypeProxy
			{
			private:
				static std::string className;
				static jclass objectClass;
				jobject peerObject;

			protected:
				WildcardTypeProxy(void* unused);
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
				WildcardTypeProxy(jobject obj);

				virtual ~WildcardTypeProxy();
				WildcardTypeProxy& operator=(const WildcardTypeProxy& rhs);

				// methods
				/*
				 * Type[] getLowerBounds();
				 */
				::net::sourceforge::jnipp::PA<::java::lang::reflect::TypeProxy>::ProxyArray<1> getLowerBounds();
				/*
				 * Type[] getUpperBounds();
				 */
				::net::sourceforge::jnipp::PA<::java::lang::reflect::TypeProxy>::ProxyArray<1> getUpperBounds();

			};
		}
	}
}


#endif
