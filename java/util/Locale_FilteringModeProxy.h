#ifndef __java_util_Locale_FilteringModeProxy_H
#define __java_util_Locale_FilteringModeProxy_H


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
#include "java\util\Locale_FilteringModeProxy.h"

namespace java
{
	namespace util
	{
		class Locale_FilteringModeProxy
		{
		private:
			static std::string className;
			static jclass objectClass;
			jobject peerObject;

		protected:
			Locale_FilteringModeProxy(void* unused);
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
			Locale_FilteringModeProxy(jobject obj);

			virtual ~Locale_FilteringModeProxy();
			Locale_FilteringModeProxy& operator=(const Locale_FilteringModeProxy& rhs);

			// methods
			/*
			 * static Locale$FilteringMode valueOf(String);
			 */
			static ::java::util::Locale_FilteringModeProxy valueOf(::net::sourceforge::jnipp::JStringHelper p0);
			/*
			 * static Locale$FilteringMode[] values();
			 */
			static ::net::sourceforge::jnipp::PA<::java::util::Locale_FilteringModeProxy>::ProxyArray<1> values();

		};
	}
}


#endif
