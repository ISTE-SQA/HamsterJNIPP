#ifndef __java_lang_AppendableProxy_H
#define __java_lang_AppendableProxy_H


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

namespace java
{
	namespace lang
	{
		class AppendableProxy
		{
		private:
			static std::string className;
			static jclass objectClass;
			jobject peerObject;

		protected:
			AppendableProxy(void* unused);
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
			AppendableProxy(jobject obj);

			virtual ~AppendableProxy();
			AppendableProxy& operator=(const AppendableProxy& rhs);

			// methods
			/*
			 * Appendable append(char);
			 */
			::java::lang::AppendableProxy append(jchar p0);
			/*
			 * Appendable append(CharSequence);
			 */
			::java::lang::AppendableProxy append(::java::lang::CharSequenceProxy p0);
			/*
			 * Appendable append(CharSequence, int, int);
			 */
			::java::lang::AppendableProxy append(::java::lang::CharSequenceProxy p0, jint p1, jint p2);

		};
	}
}


#endif
