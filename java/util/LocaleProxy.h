#ifndef __java_util_LocaleProxy_H
#define __java_util_LocaleProxy_H


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
#include "java\util\SetProxyForward.h"
#include "java\util\ListProxyForward.h"
#include "java\util\CollectionProxyForward.h"
#include "java\util\Locale_FilteringModeProxyForward.h"
#include "java\util\Locale_CategoryProxyForward.h"
#include "java\util\Locale_CacheProxyForward.h"
#include "sun\util\locale\BaseLocaleProxyForward.h"
#include "sun\util\locale\LocaleExtensionsProxyForward.h"
#include "java\util\LocaleProxy.h"
#include "java\io\ObjectStreamFieldProxy.h"

namespace java
{
	namespace util
	{
		class LocaleProxy
		{
		private:
			static std::string className;
			static jclass objectClass;
			jobject peerObject;

		protected:
			LocaleProxy(void* unused);
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
			LocaleProxy(jobject obj);
			LocaleProxy(::net::sourceforge::jnipp::JStringHelper p0);
			LocaleProxy(::net::sourceforge::jnipp::JStringHelper p0, ::net::sourceforge::jnipp::JStringHelper p1);
			LocaleProxy(::net::sourceforge::jnipp::JStringHelper p0, ::net::sourceforge::jnipp::JStringHelper p1, ::net::sourceforge::jnipp::JStringHelper p2);

			virtual ~LocaleProxy();
			LocaleProxy& operator=(const LocaleProxy& rhs);

			// methods
			/*
			 * boolean equals(Object);
			 */
			jboolean equals(::java::lang::ObjectProxy p0);
			/*
			 * boolean hasExtensions();
			 */
			jboolean hasExtensions();
			/*
			 * String getDisplayCountry();
			 */
			::net::sourceforge::jnipp::JStringHelper getDisplayCountry();
			/*
			 * String getDisplayLanguage();
			 */
			::net::sourceforge::jnipp::JStringHelper getDisplayLanguage();
			/*
			 * String getDisplayName();
			 */
			::net::sourceforge::jnipp::JStringHelper getDisplayName();
			/*
			 * String getDisplayVariant();
			 */
			::net::sourceforge::jnipp::JStringHelper getDisplayVariant();
			/*
			 * String toString();
			 */
			::net::sourceforge::jnipp::JStringHelper toString();
			/*
			 * int hashCode();
			 */
			jint hashCode();
			/*
			 * Object clone();
			 */
			::java::lang::ObjectProxy clone();
			/*
			 * String getCountry();
			 */
			::net::sourceforge::jnipp::JStringHelper getCountry();
			/*
			 * String getDisplayCountry(Locale);
			 */
			::net::sourceforge::jnipp::JStringHelper getDisplayCountry(::java::util::LocaleProxy p0);
			/*
			 * String getDisplayLanguage(Locale);
			 */
			::net::sourceforge::jnipp::JStringHelper getDisplayLanguage(::java::util::LocaleProxy p0);
			/*
			 * String getDisplayName(Locale);
			 */
			::net::sourceforge::jnipp::JStringHelper getDisplayName(::java::util::LocaleProxy p0);
			/*
			 * String getDisplayScript();
			 */
			::net::sourceforge::jnipp::JStringHelper getDisplayScript();
			/*
			 * String getDisplayScript(Locale);
			 */
			::net::sourceforge::jnipp::JStringHelper getDisplayScript(::java::util::LocaleProxy p0);
			/*
			 * String getDisplayVariant(Locale);
			 */
			::net::sourceforge::jnipp::JStringHelper getDisplayVariant(::java::util::LocaleProxy p0);
			/*
			 * String getExtension(char);
			 */
			::net::sourceforge::jnipp::JStringHelper getExtension(jchar p0);
			/*
			 * String getISO3Country();
			 */
			::net::sourceforge::jnipp::JStringHelper getISO3Country();
			/*
			 * String getISO3Language();
			 */
			::net::sourceforge::jnipp::JStringHelper getISO3Language();
			/*
			 * String getLanguage();
			 */
			::net::sourceforge::jnipp::JStringHelper getLanguage();
			/*
			 * String getScript();
			 */
			::net::sourceforge::jnipp::JStringHelper getScript();
			/*
			 * String getUnicodeLocaleType(String);
			 */
			::net::sourceforge::jnipp::JStringHelper getUnicodeLocaleType(::net::sourceforge::jnipp::JStringHelper p0);
			/*
			 * String getVariant();
			 */
			::net::sourceforge::jnipp::JStringHelper getVariant();
			/*
			 * String toLanguageTag();
			 */
			::net::sourceforge::jnipp::JStringHelper toLanguageTag();
			/*
			 * Locale stripExtensions();
			 */
			::java::util::LocaleProxy stripExtensions();
			/*
			 * Set getExtensionKeys();
			 */
			::java::util::SetProxy getExtensionKeys();
			/*
			 * Set getUnicodeLocaleAttributes();
			 */
			::java::util::SetProxy getUnicodeLocaleAttributes();
			/*
			 * Set getUnicodeLocaleKeys();
			 */
			::java::util::SetProxy getUnicodeLocaleKeys();
			/*
			 * static String lookupTag(List, Collection);
			 */
			static ::net::sourceforge::jnipp::JStringHelper lookupTag(::java::util::ListProxy p0, ::java::util::CollectionProxy p1);
			/*
			 * static String[] getISOCountries();
			 */
			static ::net::sourceforge::jnipp::JStringHelperArray<1> getISOCountries();
			/*
			 * static String[] getISOLanguages();
			 */
			static ::net::sourceforge::jnipp::JStringHelperArray<1> getISOLanguages();
			/*
			 * static List filter(List, Collection);
			 */
			static ::java::util::ListProxy filter(::java::util::ListProxy p0, ::java::util::CollectionProxy p1);
			/*
			 * static List filter(List, Collection, Locale$FilteringMode);
			 */
			static ::java::util::ListProxy filter(::java::util::ListProxy p0, ::java::util::CollectionProxy p1, ::java::util::Locale_FilteringModeProxy p2);
			/*
			 * static List filterTags(List, Collection);
			 */
			static ::java::util::ListProxy filterTags(::java::util::ListProxy p0, ::java::util::CollectionProxy p1);
			/*
			 * static List filterTags(List, Collection, Locale$FilteringMode);
			 */
			static ::java::util::ListProxy filterTags(::java::util::ListProxy p0, ::java::util::CollectionProxy p1, ::java::util::Locale_FilteringModeProxy p2);
			/*
			 * static Locale forLanguageTag(String);
			 */
			static ::java::util::LocaleProxy forLanguageTag(::net::sourceforge::jnipp::JStringHelper p0);
			/*
			 * static Locale getDefault();
			 */
			static ::java::util::LocaleProxy getDefault();
			/*
			 * static Locale getDefault(Locale$Category);
			 */
			static ::java::util::LocaleProxy getDefault(::java::util::Locale_CategoryProxy p0);
			/*
			 * static Locale lookup(List, Collection);
			 */
			static ::java::util::LocaleProxy lookup(::java::util::ListProxy p0, ::java::util::CollectionProxy p1);
			/*
			 * static Locale[] getAvailableLocales();
			 */
			static ::net::sourceforge::jnipp::PA<::java::util::LocaleProxy>::ProxyArray<1> getAvailableLocales();
			/*
			 * static void setDefault(Locale$Category, Locale);
			 */
			static void setDefault(::java::util::Locale_CategoryProxy p0, ::java::util::LocaleProxy p1);
			/*
			 * static void setDefault(Locale);
			 */
			static void setDefault(::java::util::LocaleProxy p0);

		};
	}
}


#endif
