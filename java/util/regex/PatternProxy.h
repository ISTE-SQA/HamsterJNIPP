#ifndef __java_util_regex_PatternProxy_H
#define __java_util_regex_PatternProxy_H


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
#include "java\lang\CharSequenceProxyForward.h"
#include "java\util\function\PredicateProxyForward.h"
#include "java\util\regex\MatcherProxyForward.h"
#include "java\util\stream\StreamProxyForward.h"
#include "java\util\regex\Pattern_NodeProxyForward.h"
#include "java\util\MapProxyForward.h"
#include "java\util\regex\Pattern_GroupHeadProxy.h"

namespace java
{
	namespace util
	{
		namespace regex
		{
			class PatternProxy
			{
			private:
				static std::string className;
				static jclass objectClass;
				jobject peerObject;

			protected:
				PatternProxy(void* unused);
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
				PatternProxy(jobject obj);

				virtual ~PatternProxy();
				PatternProxy& operator=(const PatternProxy& rhs);

				// methods
				/*
				 * int flags();
				 */
				jint flags();
				/*
				 * String pattern();
				 */
				::net::sourceforge::jnipp::JStringHelper pattern();
				/*
				 * String toString();
				 */
				::net::sourceforge::jnipp::JStringHelper toString();
				/*
				 * String[] split(CharSequence);
				 */
				::net::sourceforge::jnipp::JStringHelperArray<1> split(::java::lang::CharSequenceProxy p0);
				/*
				 * String[] split(CharSequence, int);
				 */
				::net::sourceforge::jnipp::JStringHelperArray<1> split(::java::lang::CharSequenceProxy p0, jint p1);
				/*
				 * Predicate asPredicate();
				 */
				::java::util::function::PredicateProxy asPredicate();
				/*
				 * Matcher matcher(CharSequence);
				 */
				::java::util::regex::MatcherProxy matcher(::java::lang::CharSequenceProxy p0);
				/*
				 * Stream splitAsStream(CharSequence);
				 */
				::java::util::stream::StreamProxy splitAsStream(::java::lang::CharSequenceProxy p0);
				/*
				 * static boolean matches(String, CharSequence);
				 */
				static jboolean matches(::net::sourceforge::jnipp::JStringHelper p0, ::java::lang::CharSequenceProxy p1);
				/*
				 * static String quote(String);
				 */
				static ::net::sourceforge::jnipp::JStringHelper quote(::net::sourceforge::jnipp::JStringHelper p0);
				/*
				 * static Pattern compile(String);
				 */
				static ::java::util::regex::PatternProxy compile(::net::sourceforge::jnipp::JStringHelper p0);
				/*
				 * static Pattern compile(String, int);
				 */
				static ::java::util::regex::PatternProxy compile(::net::sourceforge::jnipp::JStringHelper p0, jint p1);

			};
		}
	}
}


#endif
