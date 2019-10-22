#ifndef __java_util_Locale_CategoryProxy_H
#define __java_util_Locale_CategoryProxy_H


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
#include "java\util\Locale_CategoryProxy.h"

namespace java
{
	namespace util
	{
		class Locale_CategoryProxy
		{
		private:
			static std::string className;
			static jclass objectClass;
			jobject peerObject;

		protected:
			Locale_CategoryProxy(void* unused);
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
			Locale_CategoryProxy(jobject obj);

			virtual ~Locale_CategoryProxy();
			Locale_CategoryProxy& operator=(const Locale_CategoryProxy& rhs);

			// methods
			/*
			 * static Locale$Category valueOf(String);
			 */
			static ::java::util::Locale_CategoryProxy valueOf(::net::sourceforge::jnipp::JStringHelper p0);
			/*
			 * static Locale$Category[] values();
			 */
			static ::net::sourceforge::jnipp::PA<::java::util::Locale_CategoryProxy>::ProxyArray<1> values();

		};
	}
}


#endif
