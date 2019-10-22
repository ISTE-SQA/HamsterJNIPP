#ifndef __java_time_format_DateTimeFormatterBuilder_DateTimePrinterParserProxy_H
#define __java_time_format_DateTimeFormatterBuilder_DateTimePrinterParserProxy_H


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
#include "java\time\format\DateTimePrintContextProxyForward.h"
#include "java\lang\StringBuilderProxyForward.h"
#include "java\time\format\DateTimeParseContextProxyForward.h"
#include "java\lang\CharSequenceProxyForward.h"

namespace java
{
	namespace time
	{
		namespace format
		{
			class DateTimeFormatterBuilder_DateTimePrinterParserProxy
			{
			private:
				static std::string className;
				static jclass objectClass;
				jobject peerObject;

			protected:
				DateTimeFormatterBuilder_DateTimePrinterParserProxy(void* unused);
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
				DateTimeFormatterBuilder_DateTimePrinterParserProxy(jobject obj);

				virtual ~DateTimeFormatterBuilder_DateTimePrinterParserProxy();
				DateTimeFormatterBuilder_DateTimePrinterParserProxy& operator=(const DateTimeFormatterBuilder_DateTimePrinterParserProxy& rhs);

				// methods
				/*
				 * boolean format(DateTimePrintContext, StringBuilder);
				 */
				jboolean format(::java::time::format::DateTimePrintContextProxy p0, ::java::lang::StringBuilderProxy p1);
				/*
				 * int parse(DateTimeParseContext, CharSequence, int);
				 */
				jint parse(::java::time::format::DateTimeParseContextProxy p0, ::java::lang::CharSequenceProxy p1, jint p2);

			};
		}
	}
}


#endif
