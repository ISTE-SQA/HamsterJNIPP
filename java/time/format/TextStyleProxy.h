#ifndef __java_time_format_TextStyleProxy_H
#define __java_time_format_TextStyleProxy_H


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
#include "java\time\format\TextStyleProxy.h"

namespace java
{
	namespace time
	{
		namespace format
		{
			class TextStyleProxy
			{
			private:
				static std::string className;
				static jclass objectClass;
				jobject peerObject;

			protected:
				TextStyleProxy(void* unused);
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
				TextStyleProxy(jobject obj);

				virtual ~TextStyleProxy();
				TextStyleProxy& operator=(const TextStyleProxy& rhs);

				// methods
				/*
				 * boolean isStandalone();
				 */
				jboolean isStandalone();
				/*
				 * TextStyle asNormal();
				 */
				::java::time::format::TextStyleProxy asNormal();
				/*
				 * TextStyle asStandalone();
				 */
				::java::time::format::TextStyleProxy asStandalone();
				/*
				 * static TextStyle valueOf(String);
				 */
				static ::java::time::format::TextStyleProxy valueOf(::net::sourceforge::jnipp::JStringHelper p0);
				/*
				 * static TextStyle[] values();
				 */
				static ::net::sourceforge::jnipp::PA<::java::time::format::TextStyleProxy>::ProxyArray<1> values();

			};
		}
	}
}


#endif
