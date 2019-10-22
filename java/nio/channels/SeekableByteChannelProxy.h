#ifndef __java_nio_channels_SeekableByteChannelProxy_H
#define __java_nio_channels_SeekableByteChannelProxy_H


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
#include "java\nio\ByteBufferProxyForward.h"

namespace java
{
	namespace nio
	{
		namespace channels
		{
			class SeekableByteChannelProxy
			{
			private:
				static std::string className;
				static jclass objectClass;
				jobject peerObject;

			protected:
				SeekableByteChannelProxy(void* unused);
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
				SeekableByteChannelProxy(jobject obj);

				virtual ~SeekableByteChannelProxy();
				SeekableByteChannelProxy& operator=(const SeekableByteChannelProxy& rhs);

				// methods
				/*
				 * int read(ByteBuffer);
				 */
				jint read(::java::nio::ByteBufferProxy p0);
				/*
				 * int write(ByteBuffer);
				 */
				jint write(::java::nio::ByteBufferProxy p0);
				/*
				 * SeekableByteChannel position(long);
				 */
				::java::nio::channels::SeekableByteChannelProxy position(jlong p0);
				/*
				 * SeekableByteChannel truncate(long);
				 */
				::java::nio::channels::SeekableByteChannelProxy truncate(jlong p0);
				/*
				 * long position();
				 */
				jlong position();
				/*
				 * long size();
				 */
				jlong size();

			};
		}
	}
}


#endif
