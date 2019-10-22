#ifndef __java_nio_channels_AsynchronousFileChannelProxy_H
#define __java_nio_channels_AsynchronousFileChannelProxy_H


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
#include "java\nio\channels\FileLockProxyForward.h"
#include "java\util\concurrent\FutureProxyForward.h"
#include "java\nio\ByteBufferProxyForward.h"
#include "java\lang\ObjectProxyForward.h"
#include "java\nio\channels\CompletionHandlerProxyForward.h"
#include "java\nio\file\PathProxyForward.h"
#include "java\util\SetProxyForward.h"
#include "java\util\concurrent\ExecutorServiceProxyForward.h"
#include "java\nio\file\OpenOptionProxy.h"
#include "java\nio\file\attribute\FileAttributeProxy.h"

namespace java
{
	namespace nio
	{
		namespace channels
		{
			class AsynchronousFileChannelProxy
			{
			private:
				static std::string className;
				static jclass objectClass;
				jobject peerObject;

			protected:
				AsynchronousFileChannelProxy(void* unused);
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
				AsynchronousFileChannelProxy(jobject obj);

				virtual ~AsynchronousFileChannelProxy();
				AsynchronousFileChannelProxy& operator=(const AsynchronousFileChannelProxy& rhs);

				// methods
				/*
				 * AsynchronousFileChannel truncate(long);
				 */
				::java::nio::channels::AsynchronousFileChannelProxy truncate(jlong p0);
				/*
				 * FileLock tryLock(long, long, boolean);
				 */
				::java::nio::channels::FileLockProxy tryLock(jlong p0, jlong p1, jboolean p2);
				/*
				 * Future lock(long, long, boolean);
				 */
				::java::util::concurrent::FutureProxy lock(jlong p0, jlong p1, jboolean p2);
				/*
				 * Future read(ByteBuffer, long);
				 */
				::java::util::concurrent::FutureProxy read(::java::nio::ByteBufferProxy p0, jlong p1);
				/*
				 * Future write(ByteBuffer, long);
				 */
				::java::util::concurrent::FutureProxy write(::java::nio::ByteBufferProxy p0, jlong p1);
				/*
				 * long size();
				 */
				jlong size();
				/*
				 * void force(boolean);
				 */
				void force(jboolean p0);
				/*
				 * void lock(long, long, boolean, Object, CompletionHandler);
				 */
				void lock(jlong p0, jlong p1, jboolean p2, ::java::lang::ObjectProxy p3, ::java::nio::channels::CompletionHandlerProxy p4);
				/*
				 * void read(ByteBuffer, long, Object, CompletionHandler);
				 */
				void read(::java::nio::ByteBufferProxy p0, jlong p1, ::java::lang::ObjectProxy p2, ::java::nio::channels::CompletionHandlerProxy p3);
				/*
				 * void write(ByteBuffer, long, Object, CompletionHandler);
				 */
				void write(::java::nio::ByteBufferProxy p0, jlong p1, ::java::lang::ObjectProxy p2, ::java::nio::channels::CompletionHandlerProxy p3);
				/*
				 * FileLock tryLock();
				 */
				::java::nio::channels::FileLockProxy tryLock();
				/*
				 * Future lock();
				 */
				::java::util::concurrent::FutureProxy lock();
				/*
				 * void lock(Object, CompletionHandler);
				 */
				void lock(::java::lang::ObjectProxy p0, ::java::nio::channels::CompletionHandlerProxy p1);
				/*
				 * static AsynchronousFileChannel open(Path, OpenOption[]);
				 */
				static ::java::nio::channels::AsynchronousFileChannelProxy open(::java::nio::file::PathProxy p0, ::net::sourceforge::jnipp::PA<::java::nio::file::OpenOptionProxy>::ProxyArray<1> p1);
				/*
				 * static AsynchronousFileChannel open(Path, Set, ExecutorService, FileAttribute[]);
				 */
				static ::java::nio::channels::AsynchronousFileChannelProxy open(::java::nio::file::PathProxy p0, ::java::util::SetProxy p1, ::java::util::concurrent::ExecutorServiceProxy p2, ::net::sourceforge::jnipp::PA<::java::nio::file::attribute::FileAttributeProxy>::ProxyArray<1> p3);

			};
		}
	}
}


#endif
