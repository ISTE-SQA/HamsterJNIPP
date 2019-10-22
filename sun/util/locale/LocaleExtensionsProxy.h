#ifndef __sun_util_locale_LocaleExtensionsProxy_H
#define __sun_util_locale_LocaleExtensionsProxy_H


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
#include "java\lang\CharacterProxyForward.h"
#include "java\util\SetProxyForward.h"
#include "sun\util\locale\ExtensionProxyForward.h"
#include "java\util\MapProxyForward.h"

namespace sun
{
	namespace util
	{
		namespace locale
		{
			class LocaleExtensionsProxy
			{
			private:
				static std::string className;
				static jclass objectClass;
				jobject peerObject;

			protected:
				LocaleExtensionsProxy(void* unused);
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
				LocaleExtensionsProxy(jobject obj);

				virtual ~LocaleExtensionsProxy();
				LocaleExtensionsProxy& operator=(const LocaleExtensionsProxy& rhs);

				// methods
				/*
				 * boolean equals(Object);
				 */
				jboolean equals(::java::lang::ObjectProxy p0);
				/*
				 * boolean isEmpty();
				 */
				jboolean isEmpty();
				/*
				 * int hashCode();
				 */
				jint hashCode();
				/*
				 * String getExtensionValue(Character);
				 */
				::net::sourceforge::jnipp::JStringHelper getExtensionValue(::java::lang::CharacterProxy p0);
				/*
				 * String getID();
				 */
				::net::sourceforge::jnipp::JStringHelper getID();
				/*
				 * String getUnicodeLocaleType(String);
				 */
				::net::sourceforge::jnipp::JStringHelper getUnicodeLocaleType(::net::sourceforge::jnipp::JStringHelper p0);
				/*
				 * String toString();
				 */
				::net::sourceforge::jnipp::JStringHelper toString();
				/*
				 * Set getKeys();
				 */
				::java::util::SetProxy getKeys();
				/*
				 * Set getUnicodeLocaleAttributes();
				 */
				::java::util::SetProxy getUnicodeLocaleAttributes();
				/*
				 * Set getUnicodeLocaleKeys();
				 */
				::java::util::SetProxy getUnicodeLocaleKeys();
				/*
				 * static boolean isValidKey(char);
				 */
				static jboolean isValidKey(jchar p0);
				/*
				 * static boolean isValidUnicodeLocaleKey(String);
				 */
				static jboolean isValidUnicodeLocaleKey(::net::sourceforge::jnipp::JStringHelper p0);
				/*
				 * Extension getExtension(Character);
				 */
				::sun::util::locale::ExtensionProxy getExtension(::java::lang::CharacterProxy p0);

			};
		}
	}
}


#endif
