#ifndef __java_time_format_FormatStyleProxy_H
#define __java_time_format_FormatStyleProxy_H


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
#include "java\time\format\FormatStyleProxy.h"

namespace java
{
	namespace time
	{
		namespace format
		{
			class FormatStyleProxy
			{
			private:
				static std::string className;
				static jclass objectClass;
				jobject peerObject;

			protected:
				FormatStyleProxy(void* unused);
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
				FormatStyleProxy(jobject obj);

				virtual ~FormatStyleProxy();
				FormatStyleProxy& operator=(const FormatStyleProxy& rhs);

				// methods
				/*
				 * static FormatStyle valueOf(String);
				 */
				static ::java::time::format::FormatStyleProxy valueOf(::net::sourceforge::jnipp::JStringHelper p0);
				/*
				 * static FormatStyle[] values();
				 */
				static ::net::sourceforge::jnipp::PA<::java::time::format::FormatStyleProxy>::ProxyArray<1> values();

			};
		}
	}
}


#endif
