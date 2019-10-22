#ifndef __java_util_FormatterProxy_H
#define __java_util_FormatterProxy_H


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
#include "java\io\FileProxyForward.h"
#include "java\util\LocaleProxyForward.h"
#include "java\io\OutputStreamProxyForward.h"
#include "java\io\PrintStreamProxyForward.h"
#include "java\lang\AppendableProxyForward.h"
#include "java\io\IOExceptionProxyForward.h"
#include "java\util\regex\PatternProxyForward.h"
#include "java\lang\ObjectProxy.h"

namespace java
{
	namespace util
	{
		class FormatterProxy
		{
		private:
			static std::string className;
			static jclass objectClass;
			jobject peerObject;

		protected:
			FormatterProxy(void* unused);
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
			FormatterProxy(jobject obj);
			FormatterProxy();
			FormatterProxy(::java::io::FileProxy p0);
			FormatterProxy(::java::io::FileProxy p0, ::net::sourceforge::jnipp::JStringHelper p1);
			FormatterProxy(::java::io::FileProxy p0, ::net::sourceforge::jnipp::JStringHelper p1, ::java::util::LocaleProxy p2);
			FormatterProxy(::java::io::OutputStreamProxy p0);
			FormatterProxy(::java::io::OutputStreamProxy p0, ::net::sourceforge::jnipp::JStringHelper p1);
			FormatterProxy(::java::io::OutputStreamProxy p0, ::net::sourceforge::jnipp::JStringHelper p1, ::java::util::LocaleProxy p2);
			FormatterProxy(::java::io::PrintStreamProxy p0);
			FormatterProxy(::java::lang::AppendableProxy p0);
			FormatterProxy(::java::lang::AppendableProxy p0, ::java::util::LocaleProxy p1);
			FormatterProxy(::net::sourceforge::jnipp::JStringHelper p0);
			FormatterProxy(::net::sourceforge::jnipp::JStringHelper p0, ::net::sourceforge::jnipp::JStringHelper p1);
			FormatterProxy(::net::sourceforge::jnipp::JStringHelper p0, ::net::sourceforge::jnipp::JStringHelper p1, ::java::util::LocaleProxy p2);
			FormatterProxy(::java::util::LocaleProxy p0);

			virtual ~FormatterProxy();
			FormatterProxy& operator=(const FormatterProxy& rhs);

			// methods
			/*
			 * IOException ioException();
			 */
			::java::io::IOExceptionProxy ioException();
			/*
			 * Appendable out();
			 */
			::java::lang::AppendableProxy out();
			/*
			 * String toString();
			 */
			::net::sourceforge::jnipp::JStringHelper toString();
			/*
			 * Formatter format(String, Object[]);
			 */
			::java::util::FormatterProxy format(::net::sourceforge::jnipp::JStringHelper p0, ::net::sourceforge::jnipp::PA<::java::lang::ObjectProxy>::ProxyArray<1> p1);
			/*
			 * Formatter format(Locale, String, Object[]);
			 */
			::java::util::FormatterProxy format(::java::util::LocaleProxy p0, ::net::sourceforge::jnipp::JStringHelper p1, ::net::sourceforge::jnipp::PA<::java::lang::ObjectProxy>::ProxyArray<1> p2);
			/*
			 * Locale locale();
			 */
			::java::util::LocaleProxy locale();
			/*
			 * void close();
			 */
			void close();
			/*
			 * void flush();
			 */
			void flush();

		};
	}
}


#endif
