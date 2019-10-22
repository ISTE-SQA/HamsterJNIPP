#ifndef __java_nio_file_WatchServiceProxy_H
#define __java_nio_file_WatchServiceProxy_H


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
#include "java\nio\file\WatchKeyProxyForward.h"
#include "java\util\concurrent\TimeUnitProxyForward.h"

namespace java
{
	namespace nio
	{
		namespace file
		{
			class WatchServiceProxy
			{
			private:
				static std::string className;
				static jclass objectClass;
				jobject peerObject;

			protected:
				WatchServiceProxy(void* unused);
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
				WatchServiceProxy(jobject obj);

				virtual ~WatchServiceProxy();
				WatchServiceProxy& operator=(const WatchServiceProxy& rhs);

				// methods
				/*
				 * WatchKey poll();
				 */
				::java::nio::file::WatchKeyProxy poll();
				/*
				 * WatchKey poll(long, TimeUnit);
				 */
				::java::nio::file::WatchKeyProxy poll(jlong p0, ::java::util::concurrent::TimeUnitProxy p1);
				/*
				 * WatchKey take();
				 */
				::java::nio::file::WatchKeyProxy take();
				/*
				 * void close();
				 */
				void close();

			};
		}
	}
}


#endif
