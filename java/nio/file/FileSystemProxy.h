#ifndef __java_nio_file_FileSystemProxy_H
#define __java_nio_file_FileSystemProxy_H


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
#include "java\lang\IterableProxyForward.h"
#include "java\nio\file\PathProxyForward.h"
#include "java\nio\file\PathMatcherProxyForward.h"
#include "java\nio\file\WatchServiceProxyForward.h"
#include "java\nio\file\attribute\UserPrincipalLookupServiceProxyForward.h"
#include "java\nio\file\spi\FileSystemProviderProxyForward.h"
#include "java\util\SetProxyForward.h"

namespace java
{
	namespace nio
	{
		namespace file
		{
			class FileSystemProxy
			{
			private:
				static std::string className;
				static jclass objectClass;
				jobject peerObject;

			protected:
				FileSystemProxy(void* unused);
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
				FileSystemProxy(jobject obj);

				virtual ~FileSystemProxy();
				FileSystemProxy& operator=(const FileSystemProxy& rhs);

				// methods
				/*
				 * boolean isOpen();
				 */
				jboolean isOpen();
				/*
				 * boolean isReadOnly();
				 */
				jboolean isReadOnly();
				/*
				 * Iterable getFileStores();
				 */
				::java::lang::IterableProxy getFileStores();
				/*
				 * Iterable getRootDirectories();
				 */
				::java::lang::IterableProxy getRootDirectories();
				/*
				 * String getSeparator();
				 */
				::net::sourceforge::jnipp::JStringHelper getSeparator();
				/*
				 * Path getPath(String, String[]);
				 */
				::java::nio::file::PathProxy getPath(::net::sourceforge::jnipp::JStringHelper p0, ::net::sourceforge::jnipp::JStringHelperArray<1> p1);
				/*
				 * PathMatcher getPathMatcher(String);
				 */
				::java::nio::file::PathMatcherProxy getPathMatcher(::net::sourceforge::jnipp::JStringHelper p0);
				/*
				 * WatchService newWatchService();
				 */
				::java::nio::file::WatchServiceProxy newWatchService();
				/*
				 * UserPrincipalLookupService getUserPrincipalLookupService();
				 */
				::java::nio::file::attribute::UserPrincipalLookupServiceProxy getUserPrincipalLookupService();
				/*
				 * FileSystemProvider provider();
				 */
				::java::nio::file::spi::FileSystemProviderProxy provider();
				/*
				 * Set supportedFileAttributeViews();
				 */
				::java::util::SetProxy supportedFileAttributeViews();
				/*
				 * void close();
				 */
				void close();

			};
		}
	}
}


#endif
