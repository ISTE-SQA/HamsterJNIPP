#ifndef __java_lang_CharSequenceProxy_H
#define __java_lang_CharSequenceProxy_H


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
#include "java\util\stream\IntStreamProxyForward.h"

namespace java
{
	namespace lang
	{
		class CharSequenceProxy
		{
		private:
			static std::string className;
			static jclass objectClass;
			jobject peerObject;

		protected:
			CharSequenceProxy(void* unused);
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
			CharSequenceProxy(jobject obj);

			virtual ~CharSequenceProxy();
			CharSequenceProxy& operator=(const CharSequenceProxy& rhs);

			// methods
			/*
			 * char charAt(int);
			 */
			jchar charAt(jint p0);
			/*
			 * int length();
			 */
			jint length();
			/*
			 * CharSequence subSequence(int, int);
			 */
			::java::lang::CharSequenceProxy subSequence(jint p0, jint p1);
			/*
			 * String toString();
			 */
			::net::sourceforge::jnipp::JStringHelper toString();
			/*
			 * IntStream chars();
			 */
			::java::util::stream::IntStreamProxy chars();
			/*
			 * IntStream codePoints();
			 */
			::java::util::stream::IntStreamProxy codePoints();

		};
	}
}


#endif
