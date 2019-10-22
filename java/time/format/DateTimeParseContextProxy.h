#ifndef __java_time_format_DateTimeParseContextProxy_H
#define __java_time_format_DateTimeParseContextProxy_H


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
#include "java\util\ArrayListProxyForward.h"
#include "java\time\format\DateTimeFormatterProxyForward.h"

namespace java
{
	namespace time
	{
		namespace format
		{
			class DateTimeParseContextProxy
			{
			private:
				static std::string className;
				static jclass objectClass;
				jobject peerObject;

			protected:
				DateTimeParseContextProxy(void* unused);
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
				DateTimeParseContextProxy(jobject obj);

				virtual ~DateTimeParseContextProxy();
				DateTimeParseContextProxy& operator=(const DateTimeParseContextProxy& rhs);

				// methods
				/*
				 * String toString();
				 */
				::net::sourceforge::jnipp::JStringHelper toString();

			};
		}
	}
}


#endif
