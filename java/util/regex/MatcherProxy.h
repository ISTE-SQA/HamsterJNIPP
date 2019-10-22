#ifndef __java_util_regex_MatcherProxy_H
#define __java_util_regex_MatcherProxy_H


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
#include "java\lang\StringBufferProxyForward.h"
#include "java\util\regex\MatchResultProxyForward.h"
#include "java\lang\CharSequenceProxyForward.h"
#include "java\util\regex\PatternProxyForward.h"

namespace java
{
	namespace util
	{
		namespace regex
		{
			class MatcherProxy
			{
			private:
				static std::string className;
				static jclass objectClass;
				jobject peerObject;

			protected:
				MatcherProxy(void* unused);
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
				MatcherProxy(jobject obj);

				virtual ~MatcherProxy();
				MatcherProxy& operator=(const MatcherProxy& rhs);

				// methods
				/*
				 * boolean find();
				 */
				jboolean find();
				/*
				 * boolean find(int);
				 */
				jboolean find(jint p0);
				/*
				 * boolean hasAnchoringBounds();
				 */
				jboolean hasAnchoringBounds();
				/*
				 * boolean hasTransparentBounds();
				 */
				jboolean hasTransparentBounds();
				/*
				 * boolean hitEnd();
				 */
				jboolean hitEnd();
				/*
				 * boolean lookingAt();
				 */
				jboolean lookingAt();
				/*
				 * boolean matches();
				 */
				jboolean matches();
				/*
				 * boolean requireEnd();
				 */
				jboolean requireEnd();
				/*
				 * int end();
				 */
				jint end();
				/*
				 * int end(int);
				 */
				jint end(jint p0);
				/*
				 * int end(String);
				 */
				jint end(::net::sourceforge::jnipp::JStringHelper p0);
				/*
				 * int groupCount();
				 */
				jint groupCount();
				/*
				 * int regionEnd();
				 */
				jint regionEnd();
				/*
				 * int regionStart();
				 */
				jint regionStart();
				/*
				 * int start();
				 */
				jint start();
				/*
				 * int start(int);
				 */
				jint start(jint p0);
				/*
				 * int start(String);
				 */
				jint start(::net::sourceforge::jnipp::JStringHelper p0);
				/*
				 * String group();
				 */
				::net::sourceforge::jnipp::JStringHelper group();
				/*
				 * String group(int);
				 */
				::net::sourceforge::jnipp::JStringHelper group(jint p0);
				/*
				 * String group(String);
				 */
				::net::sourceforge::jnipp::JStringHelper group(::net::sourceforge::jnipp::JStringHelper p0);
				/*
				 * String replaceAll(String);
				 */
				::net::sourceforge::jnipp::JStringHelper replaceAll(::net::sourceforge::jnipp::JStringHelper p0);
				/*
				 * String replaceFirst(String);
				 */
				::net::sourceforge::jnipp::JStringHelper replaceFirst(::net::sourceforge::jnipp::JStringHelper p0);
				/*
				 * String toString();
				 */
				::net::sourceforge::jnipp::JStringHelper toString();
				/*
				 * StringBuffer appendTail(StringBuffer);
				 */
				::java::lang::StringBufferProxy appendTail(::java::lang::StringBufferProxy p0);
				/*
				 * MatchResult toMatchResult();
				 */
				::java::util::regex::MatchResultProxy toMatchResult();
				/*
				 * Matcher appendReplacement(StringBuffer, String);
				 */
				::java::util::regex::MatcherProxy appendReplacement(::java::lang::StringBufferProxy p0, ::net::sourceforge::jnipp::JStringHelper p1);
				/*
				 * Matcher region(int, int);
				 */
				::java::util::regex::MatcherProxy region(jint p0, jint p1);
				/*
				 * Matcher reset();
				 */
				::java::util::regex::MatcherProxy reset();
				/*
				 * Matcher reset(CharSequence);
				 */
				::java::util::regex::MatcherProxy reset(::java::lang::CharSequenceProxy p0);
				/*
				 * Matcher useAnchoringBounds(boolean);
				 */
				::java::util::regex::MatcherProxy useAnchoringBounds(jboolean p0);
				/*
				 * Matcher usePattern(Pattern);
				 */
				::java::util::regex::MatcherProxy usePattern(::java::util::regex::PatternProxy p0);
				/*
				 * Matcher useTransparentBounds(boolean);
				 */
				::java::util::regex::MatcherProxy useTransparentBounds(jboolean p0);
				/*
				 * Pattern pattern();
				 */
				::java::util::regex::PatternProxy pattern();
				/*
				 * static String quoteReplacement(String);
				 */
				static ::net::sourceforge::jnipp::JStringHelper quoteReplacement(::net::sourceforge::jnipp::JStringHelper p0);

			};
		}
	}
}


#endif
