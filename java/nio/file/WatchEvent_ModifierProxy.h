#ifndef __java_nio_file_WatchEvent_ModifierProxy_H
#define __java_nio_file_WatchEvent_ModifierProxy_H


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

namespace java
{
	namespace nio
	{
		namespace file
		{
			class WatchEvent_ModifierProxy
			{
			private:
				static std::string className;
				static jclass objectClass;
				jobject peerObject;

			protected:
				WatchEvent_ModifierProxy(void* unused);
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
				WatchEvent_ModifierProxy(jobject obj);

				virtual ~WatchEvent_ModifierProxy();
				WatchEvent_ModifierProxy& operator=(const WatchEvent_ModifierProxy& rhs);

				// methods
				/*
				 * String name();
				 */
				::net::sourceforge::jnipp::JStringHelper name();

			};
		}
	}
}


#endif
