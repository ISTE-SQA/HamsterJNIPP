#ifndef __sun_util_locale_ExtensionProxy_H
#define __sun_util_locale_ExtensionProxy_H


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

namespace sun
{
	namespace util
	{
		namespace locale
		{
			class ExtensionProxy
			{
			private:
				static std::string className;
				static jclass objectClass;
				jobject peerObject;

			protected:
				ExtensionProxy(void* unused);
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
				ExtensionProxy(jobject obj);

				virtual ~ExtensionProxy();
				ExtensionProxy& operator=(const ExtensionProxy& rhs);

				// methods
				/*
				 * char getKey();
				 */
				jchar getKey();
				/*
				 * String getID();
				 */
				::net::sourceforge::jnipp::JStringHelper getID();
				/*
				 * String getValue();
				 */
				::net::sourceforge::jnipp::JStringHelper getValue();
				/*
				 * String toString();
				 */
				::net::sourceforge::jnipp::JStringHelper toString();

			};
		}
	}
}


#endif
