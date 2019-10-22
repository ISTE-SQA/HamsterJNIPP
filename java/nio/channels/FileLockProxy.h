#ifndef __java_nio_channels_FileLockProxy_H
#define __java_nio_channels_FileLockProxy_H


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
#include "java\nio\channels\FileChannelProxyForward.h"
#include "java\nio\channels\ChannelProxyForward.h"

namespace java
{
	namespace nio
	{
		namespace channels
		{
			class FileLockProxy
			{
			private:
				static std::string className;
				static jclass objectClass;
				jobject peerObject;

			protected:
				FileLockProxy(void* unused);
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
				FileLockProxy(jobject obj);

				virtual ~FileLockProxy();
				FileLockProxy& operator=(const FileLockProxy& rhs);

				// methods
				/*
				 * boolean isValid();
				 */
				jboolean isValid();
				/*
				 * void release();
				 */
				void release();
				/*
				 * boolean isShared();
				 */
				jboolean isShared();
				/*
				 * boolean overlaps(long, long);
				 */
				jboolean overlaps(jlong p0, jlong p1);
				/*
				 * String toString();
				 */
				::net::sourceforge::jnipp::JStringHelper toString();
				/*
				 * FileChannel channel();
				 */
				::java::nio::channels::FileChannelProxy channel();
				/*
				 * long position();
				 */
				jlong position();
				/*
				 * long size();
				 */
				jlong size();
				/*
				 * void close();
				 */
				void close();
				/*
				 * Channel acquiredBy();
				 */
				::java::nio::channels::ChannelProxy acquiredBy();

			};
		}
	}
}


#endif
