#ifndef __java_nio_file_WatchableProxy_H
#define __java_nio_file_WatchableProxy_H


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
#include "java\nio\file\WatchServiceProxyForward.h"
#include "java\nio\file\WatchKeyProxyForward.h"
#include "java\nio\file\WatchEvent_KindProxy.h"
#include "java\nio\file\WatchEvent_ModifierProxy.h"

namespace java
{
	namespace nio
	{
		namespace file
		{
			class WatchableProxy
			{
			private:
				static std::string className;
				static jclass objectClass;
				jobject peerObject;

			protected:
				WatchableProxy(void* unused);
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
				WatchableProxy(jobject obj);

				virtual ~WatchableProxy();
				WatchableProxy& operator=(const WatchableProxy& rhs);

				// methods
				/*
				 * WatchKey register(WatchService, WatchEvent$Kind[]);
				 */
				::java::nio::file::WatchKeyProxy _register(::java::nio::file::WatchServiceProxy p0, ::net::sourceforge::jnipp::PA<::java::nio::file::WatchEvent_KindProxy>::ProxyArray<1> p1);
				/*
				 * WatchKey register(WatchService, WatchEvent$Kind[], WatchEvent$Modifier[]);
				 */
				::java::nio::file::WatchKeyProxy _register(::java::nio::file::WatchServiceProxy p0, ::net::sourceforge::jnipp::PA<::java::nio::file::WatchEvent_KindProxy>::ProxyArray<1> p1, ::net::sourceforge::jnipp::PA<::java::nio::file::WatchEvent_ModifierProxy>::ProxyArray<1> p2);

			};
		}
	}
}


#endif
