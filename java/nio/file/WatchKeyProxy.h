#ifndef __java_nio_file_WatchKeyProxy_H
#define __java_nio_file_WatchKeyProxy_H


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
#include "java\nio\file\WatchableProxyForward.h"
#include "java\util\ListProxyForward.h"

namespace java
{
	namespace nio
	{
		namespace file
		{
			class WatchKeyProxy
			{
			private:
				static std::string className;
				static jclass objectClass;
				jobject peerObject;

			protected:
				WatchKeyProxy(void* unused);
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
				WatchKeyProxy(jobject obj);

				virtual ~WatchKeyProxy();
				WatchKeyProxy& operator=(const WatchKeyProxy& rhs);

				// methods
				/*
				 * boolean isValid();
				 */
				jboolean isValid();
				/*
				 * boolean reset();
				 */
				jboolean reset();
				/*
				 * Watchable watchable();
				 */
				::java::nio::file::WatchableProxy watchable();
				/*
				 * List pollEvents();
				 */
				::java::util::ListProxy pollEvents();
				/*
				 * void cancel();
				 */
				void cancel();

			};
		}
	}
}


#endif
