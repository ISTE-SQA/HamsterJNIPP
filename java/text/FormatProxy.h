#ifndef __java_text_FormatProxy_H
#define __java_text_FormatProxy_H


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
#include "java\text\ParsePositionProxyForward.h"
#include "java\lang\ObjectProxyForward.h"
#include "java\lang\StringBufferProxyForward.h"
#include "java\text\FieldPositionProxyForward.h"
#include "java\text\AttributedCharacterIteratorProxyForward.h"

namespace java
{
	namespace text
	{
		class FormatProxy
		{
		private:
			static std::string className;
			static jclass objectClass;
			jobject peerObject;

		protected:
			FormatProxy(void* unused);
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
			FormatProxy(jobject obj);

			virtual ~FormatProxy();
			FormatProxy& operator=(const FormatProxy& rhs);

			// methods
			/*
			 * Object parseObject(String, ParsePosition);
			 */
			::java::lang::ObjectProxy parseObject(::net::sourceforge::jnipp::JStringHelper p0, ::java::text::ParsePositionProxy p1);
			/*
			 * StringBuffer format(Object, StringBuffer, FieldPosition);
			 */
			::java::lang::StringBufferProxy format(::java::lang::ObjectProxy p0, ::java::lang::StringBufferProxy p1, ::java::text::FieldPositionProxy p2);
			/*
			 * String format(Object);
			 */
			::net::sourceforge::jnipp::JStringHelper format(::java::lang::ObjectProxy p0);
			/*
			 * Object clone();
			 */
			::java::lang::ObjectProxy clone();
			/*
			 * Object parseObject(String);
			 */
			::java::lang::ObjectProxy parseObject(::net::sourceforge::jnipp::JStringHelper p0);
			/*
			 * AttributedCharacterIterator formatToCharacterIterator(Object);
			 */
			::java::text::AttributedCharacterIteratorProxy formatToCharacterIterator(::java::lang::ObjectProxy p0);

		};
	}
}


#endif
