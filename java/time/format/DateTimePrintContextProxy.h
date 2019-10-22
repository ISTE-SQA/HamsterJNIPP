#ifndef __java_time_format_DateTimePrintContextProxy_H
#define __java_time_format_DateTimePrintContextProxy_H


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
#include "java\time\format\DateTimeFormatterProxyForward.h"
#include "java\time\temporal\TemporalAccessorProxyForward.h"

namespace java
{
	namespace time
	{
		namespace format
		{
			class DateTimePrintContextProxy
			{
			private:
				static std::string className;
				static jclass objectClass;
				jobject peerObject;

			protected:
				DateTimePrintContextProxy(void* unused);
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
				DateTimePrintContextProxy(jobject obj);

				virtual ~DateTimePrintContextProxy();
				DateTimePrintContextProxy& operator=(const DateTimePrintContextProxy& rhs);

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
