#ifndef __sun_util_locale_BaseLocaleProxy_H
#define __sun_util_locale_BaseLocaleProxy_H


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
#include "sun\util\locale\BaseLocale_CacheProxyForward.h"

namespace sun
{
	namespace util
	{
		namespace locale
		{
			class BaseLocaleProxy
			{
			private:
				static std::string className;
				static jclass objectClass;
				jobject peerObject;

			protected:
				BaseLocaleProxy(void* unused);
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
				BaseLocaleProxy(jobject obj);

				virtual ~BaseLocaleProxy();
				BaseLocaleProxy& operator=(const BaseLocaleProxy& rhs);

				// methods
				/*
				 * boolean equals(Object);
				 */
				jboolean equals(::java::lang::ObjectProxy p0);
				/*
				 * int hashCode();
				 */
				jint hashCode();
				/*
				 * String getLanguage();
				 */
				::net::sourceforge::jnipp::JStringHelper getLanguage();
				/*
				 * String getRegion();
				 */
				::net::sourceforge::jnipp::JStringHelper getRegion();
				/*
				 * String getScript();
				 */
				::net::sourceforge::jnipp::JStringHelper getScript();
				/*
				 * String getVariant();
				 */
				::net::sourceforge::jnipp::JStringHelper getVariant();
				/*
				 * String toString();
				 */
				::net::sourceforge::jnipp::JStringHelper toString();
				/*
				 * static BaseLocale createInstance(String, String);
				 */
				static ::sun::util::locale::BaseLocaleProxy createInstance(::net::sourceforge::jnipp::JStringHelper p0, ::net::sourceforge::jnipp::JStringHelper p1);
				/*
				 * static BaseLocale getInstance(String, String, String, String);
				 */
				static ::sun::util::locale::BaseLocaleProxy getInstance(::net::sourceforge::jnipp::JStringHelper p0, ::net::sourceforge::jnipp::JStringHelper p1, ::net::sourceforge::jnipp::JStringHelper p2, ::net::sourceforge::jnipp::JStringHelper p3);

			};
		}
	}
}


#endif
