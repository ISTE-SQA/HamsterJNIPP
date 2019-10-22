#ifndef __java_nio_channels_FileChannelProxy_H
#define __java_nio_channels_FileChannelProxy_H


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
#include "java\nio\channels\FileChannel_MapModeProxyForward.h"
#include "java\nio\MappedByteBufferProxyForward.h"
#include "java\nio\channels\FileLockProxyForward.h"
#include "java\nio\channels\ReadableByteChannelProxyForward.h"
#include "java\nio\channels\WritableByteChannelProxyForward.h"
#include "java\nio\file\PathProxyForward.h"
#include "java\util\SetProxyForward.h"
#include "java\nio\ByteBufferProxy.h"
#include "java\nio\file\OpenOptionProxy.h"
#include "java\nio\file\attribute\FileAttributeProxy.h"

namespace java
{
	namespace nio
	{
		namespace channels
		{
			class FileChannelProxy
			{
			private:
				static std::string className;
				static jclass objectClass;
				jobject peerObject;

			protected:
				FileChannelProxy(void* unused);
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
				FileChannelProxy(jobject obj);

				virtual ~FileChannelProxy();
				FileChannelProxy& operator=(const FileChannelProxy& rhs);

				// methods
				/*
				 * int read(ByteBuffer);
				 */
				jint read(::java::nio::ByteBufferProxy p0);
				/*
				 * int read(ByteBuffer, long);
				 */
				jint read(::java::nio::ByteBufferProxy p0, jlong p1);
				/*
				 * int write(ByteBuffer);
				 */
				jint write(::java::nio::ByteBufferProxy p0);
				/*
				 * int write(ByteBuffer, long);
				 */
				jint write(::java::nio::ByteBufferProxy p0, jlong p1);
				/*
				 * MappedByteBuffer map(FileChannel$MapMode, long, long);
				 */
				::java::nio::MappedByteBufferProxy map(::java::nio::channels::FileChannel_MapModeProxy p0, jlong p1, jlong p2);
				/*
				 * FileChannel position(long);
				 */
				::java::nio::channels::FileChannelProxy position(jlong p0);
				/*
				 * FileChannel truncate(long);
				 */
				::java::nio::channels::FileChannelProxy truncate(jlong p0);
				/*
				 * FileLock lock(long, long, boolean);
				 */
				::java::nio::channels::FileLockProxy lock(jlong p0, jlong p1, jboolean p2);
				/*
				 * FileLock tryLock(long, long, boolean);
				 */
				::java::nio::channels::FileLockProxy tryLock(jlong p0, jlong p1, jboolean p2);
				/*
				 * long position();
				 */
				jlong position();
				/*
				 * long read(ByteBuffer[], int, int);
				 */
				jlong read(::net::sourceforge::jnipp::PA<::java::nio::ByteBufferProxy>::ProxyArray<1> p0, jint p1, jint p2);
				/*
				 * long size();
				 */
				jlong size();
				/*
				 * long transferFrom(ReadableByteChannel, long, long);
				 */
				jlong transferFrom(::java::nio::channels::ReadableByteChannelProxy p0, jlong p1, jlong p2);
				/*
				 * long transferTo(long, long, WritableByteChannel);
				 */
				jlong transferTo(jlong p0, jlong p1, ::java::nio::channels::WritableByteChannelProxy p2);
				/*
				 * long write(ByteBuffer[], int, int);
				 */
				jlong write(::net::sourceforge::jnipp::PA<::java::nio::ByteBufferProxy>::ProxyArray<1> p0, jint p1, jint p2);
				/*
				 * void force(boolean);
				 */
				void force(jboolean p0);
				/*
				 * FileLock lock();
				 */
				::java::nio::channels::FileLockProxy lock();
				/*
				 * FileLock tryLock();
				 */
				::java::nio::channels::FileLockProxy tryLock();
				/*
				 * long read(ByteBuffer[]);
				 */
				jlong read(::net::sourceforge::jnipp::PA<::java::nio::ByteBufferProxy>::ProxyArray<1> p0);
				/*
				 * long write(ByteBuffer[]);
				 */
				jlong write(::net::sourceforge::jnipp::PA<::java::nio::ByteBufferProxy>::ProxyArray<1> p0);
				/*
				 * static FileChannel open(Path, OpenOption[]);
				 */
				static ::java::nio::channels::FileChannelProxy open(::java::nio::file::PathProxy p0, ::net::sourceforge::jnipp::PA<::java::nio::file::OpenOptionProxy>::ProxyArray<1> p1);
				/*
				 * static FileChannel open(Path, Set, FileAttribute[]);
				 */
				static ::java::nio::channels::FileChannelProxy open(::java::nio::file::PathProxy p0, ::java::util::SetProxy p1, ::net::sourceforge::jnipp::PA<::java::nio::file::attribute::FileAttributeProxy>::ProxyArray<1> p2);

			};
		}
	}
}


#endif
