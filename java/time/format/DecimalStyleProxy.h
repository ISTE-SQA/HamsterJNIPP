#ifndef __java_time_format_DecimalStyleProxy_H
#define __java_time_format_DecimalStyleProxy_H


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
#include "java\util\LocaleProxyForward.h"
#include "java\util\SetProxyForward.h"
#include "java\util\concurrent\ConcurrentMapProxyForward.h"

namespace java
{
	namespace time
	{
		namespace format
		{
			class DecimalStyleProxy
			{
			private:
				static std::string className;
				static jclass objectClass;
				jobject peerObject;

			protected:
				DecimalStyleProxy(void* unused);
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
				DecimalStyleProxy(jobject obj);

				virtual ~DecimalStyleProxy();
				DecimalStyleProxy& operator=(const DecimalStyleProxy& rhs);

				// methods
				/*
				 * boolean equals(Object);
				 */
				jboolean equals(::java::lang::ObjectProxy p0);
				/*
				 * char getDecimalSeparator();
				 */
				jchar getDecimalSeparator();
				/*
				 * char getNegativeSign();
				 */
				jchar getNegativeSign();
				/*
				 * char getPositiveSign();
				 */
				jchar getPositiveSign();
				/*
				 * char getZeroDigit();
				 */
				jchar getZeroDigit();
				/*
				 * int hashCode();
				 */
				jint hashCode();
				/*
				 * String toString();
				 */
				::net::sourceforge::jnipp::JStringHelper toString();
				/*
				 * DecimalStyle withDecimalSeparator(char);
				 */
				::java::time::format::DecimalStyleProxy withDecimalSeparator(jchar p0);
				/*
				 * DecimalStyle withNegativeSign(char);
				 */
				::java::time::format::DecimalStyleProxy withNegativeSign(jchar p0);
				/*
				 * DecimalStyle withPositiveSign(char);
				 */
				::java::time::format::DecimalStyleProxy withPositiveSign(jchar p0);
				/*
				 * DecimalStyle withZeroDigit(char);
				 */
				::java::time::format::DecimalStyleProxy withZeroDigit(jchar p0);
				/*
				 * static DecimalStyle of(Locale);
				 */
				static ::java::time::format::DecimalStyleProxy of(::java::util::LocaleProxy p0);
				/*
				 * static DecimalStyle ofDefaultLocale();
				 */
				static ::java::time::format::DecimalStyleProxy ofDefaultLocale();
				/*
				 * static Set getAvailableLocales();
				 */
				static ::java::util::SetProxy getAvailableLocales();

			};
		}
	}
}


#endif
