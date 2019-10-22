#ifndef __java_nio_file_spi_FileSystemProviderProxy_H
#define __java_nio_file_spi_FileSystemProviderProxy_H


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
#include "java\nio\file\PathProxyForward.h"
#include "java\util\SetProxyForward.h"
#include "java\nio\channels\SeekableByteChannelProxyForward.h"
#include "java\nio\file\DirectoryStream_FilterProxyForward.h"
#include "java\nio\file\DirectoryStreamProxyForward.h"
#include "java\nio\file\FileStoreProxyForward.h"
#include "java\net\URIProxyForward.h"
#include "java\nio\file\FileSystemProxyForward.h"
#include "java\util\MapProxyForward.h"
#include "java\lang\ClassProxyForward.h"
#include "java\nio\file\attribute\BasicFileAttributesProxyForward.h"
#include "java\nio\file\attribute\FileAttributeViewProxyForward.h"
#include "java\lang\ObjectProxyForward.h"
#include "java\io\InputStreamProxyForward.h"
#include "java\io\OutputStreamProxyForward.h"
#include "java\util\concurrent\ExecutorServiceProxyForward.h"
#include "java\nio\channels\AsynchronousFileChannelProxyForward.h"
#include "java\nio\channels\FileChannelProxyForward.h"
#include "java\util\ListProxyForward.h"
#include "java\nio\file\attribute\FileAttributeProxy.h"
#include "java\nio\file\LinkOptionProxy.h"
#include "java\nio\file\AccessModeProxy.h"
#include "java\nio\file\CopyOptionProxy.h"
#include "java\nio\file\OpenOptionProxy.h"

namespace java
{
	namespace nio
	{
		namespace file
		{
			namespace spi
			{
				class FileSystemProviderProxy
				{
				private:
					static std::string className;
					static jclass objectClass;
					jobject peerObject;

				protected:
					FileSystemProviderProxy(void* unused);
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
					FileSystemProviderProxy(jobject obj);

					virtual ~FileSystemProviderProxy();
					FileSystemProviderProxy& operator=(const FileSystemProviderProxy& rhs);

					// methods
					/*
					 * boolean isHidden(Path);
					 */
					jboolean isHidden(::java::nio::file::PathProxy p0);
					/*
					 * boolean isSameFile(Path, Path);
					 */
					jboolean isSameFile(::java::nio::file::PathProxy p0, ::java::nio::file::PathProxy p1);
					/*
					 * String getScheme();
					 */
					::net::sourceforge::jnipp::JStringHelper getScheme();
					/*
					 * SeekableByteChannel newByteChannel(Path, Set, FileAttribute[]);
					 */
					::java::nio::channels::SeekableByteChannelProxy newByteChannel(::java::nio::file::PathProxy p0, ::java::util::SetProxy p1, ::net::sourceforge::jnipp::PA<::java::nio::file::attribute::FileAttributeProxy>::ProxyArray<1> p2);
					/*
					 * DirectoryStream newDirectoryStream(Path, DirectoryStream$Filter);
					 */
					::java::nio::file::DirectoryStreamProxy newDirectoryStream(::java::nio::file::PathProxy p0, ::java::nio::file::DirectoryStream_FilterProxy p1);
					/*
					 * FileStore getFileStore(Path);
					 */
					::java::nio::file::FileStoreProxy getFileStore(::java::nio::file::PathProxy p0);
					/*
					 * FileSystem getFileSystem(URI);
					 */
					::java::nio::file::FileSystemProxy getFileSystem(::java::net::URIProxy p0);
					/*
					 * FileSystem newFileSystem(URI, Map);
					 */
					::java::nio::file::FileSystemProxy newFileSystem(::java::net::URIProxy p0, ::java::util::MapProxy p1);
					/*
					 * Path getPath(URI);
					 */
					::java::nio::file::PathProxy getPath(::java::net::URIProxy p0);
					/*
					 * BasicFileAttributes readAttributes(Path, Class, LinkOption[]);
					 */
					::java::nio::file::attribute::BasicFileAttributesProxy readAttributes(::java::nio::file::PathProxy p0, ::java::lang::ClassProxy p1, ::net::sourceforge::jnipp::PA<::java::nio::file::LinkOptionProxy>::ProxyArray<1> p2);
					/*
					 * FileAttributeView getFileAttributeView(Path, Class, LinkOption[]);
					 */
					::java::nio::file::attribute::FileAttributeViewProxy getFileAttributeView(::java::nio::file::PathProxy p0, ::java::lang::ClassProxy p1, ::net::sourceforge::jnipp::PA<::java::nio::file::LinkOptionProxy>::ProxyArray<1> p2);
					/*
					 * Map readAttributes(Path, String, LinkOption[]);
					 */
					::java::util::MapProxy readAttributes(::java::nio::file::PathProxy p0, ::net::sourceforge::jnipp::JStringHelper p1, ::net::sourceforge::jnipp::PA<::java::nio::file::LinkOptionProxy>::ProxyArray<1> p2);
					/*
					 * void checkAccess(Path, AccessMode[]);
					 */
					void checkAccess(::java::nio::file::PathProxy p0, ::net::sourceforge::jnipp::PA<::java::nio::file::AccessModeProxy>::ProxyArray<1> p1);
					/*
					 * void copy(Path, Path, CopyOption[]);
					 */
					void copy(::java::nio::file::PathProxy p0, ::java::nio::file::PathProxy p1, ::net::sourceforge::jnipp::PA<::java::nio::file::CopyOptionProxy>::ProxyArray<1> p2);
					/*
					 * void createDirectory(Path, FileAttribute[]);
					 */
					void createDirectory(::java::nio::file::PathProxy p0, ::net::sourceforge::jnipp::PA<::java::nio::file::attribute::FileAttributeProxy>::ProxyArray<1> p1);
					/*
					 * void delete(Path);
					 */
					void _delete(::java::nio::file::PathProxy p0);
					/*
					 * void move(Path, Path, CopyOption[]);
					 */
					void move(::java::nio::file::PathProxy p0, ::java::nio::file::PathProxy p1, ::net::sourceforge::jnipp::PA<::java::nio::file::CopyOptionProxy>::ProxyArray<1> p2);
					/*
					 * void setAttribute(Path, String, Object, LinkOption[]);
					 */
					void setAttribute(::java::nio::file::PathProxy p0, ::net::sourceforge::jnipp::JStringHelper p1, ::java::lang::ObjectProxy p2, ::net::sourceforge::jnipp::PA<::java::nio::file::LinkOptionProxy>::ProxyArray<1> p3);
					/*
					 * boolean deleteIfExists(Path);
					 */
					jboolean deleteIfExists(::java::nio::file::PathProxy p0);
					/*
					 * InputStream newInputStream(Path, OpenOption[]);
					 */
					::java::io::InputStreamProxy newInputStream(::java::nio::file::PathProxy p0, ::net::sourceforge::jnipp::PA<::java::nio::file::OpenOptionProxy>::ProxyArray<1> p1);
					/*
					 * OutputStream newOutputStream(Path, OpenOption[]);
					 */
					::java::io::OutputStreamProxy newOutputStream(::java::nio::file::PathProxy p0, ::net::sourceforge::jnipp::PA<::java::nio::file::OpenOptionProxy>::ProxyArray<1> p1);
					/*
					 * AsynchronousFileChannel newAsynchronousFileChannel(Path, Set, ExecutorService, FileAttribute[]);
					 */
					::java::nio::channels::AsynchronousFileChannelProxy newAsynchronousFileChannel(::java::nio::file::PathProxy p0, ::java::util::SetProxy p1, ::java::util::concurrent::ExecutorServiceProxy p2, ::net::sourceforge::jnipp::PA<::java::nio::file::attribute::FileAttributeProxy>::ProxyArray<1> p3);
					/*
					 * FileChannel newFileChannel(Path, Set, FileAttribute[]);
					 */
					::java::nio::channels::FileChannelProxy newFileChannel(::java::nio::file::PathProxy p0, ::java::util::SetProxy p1, ::net::sourceforge::jnipp::PA<::java::nio::file::attribute::FileAttributeProxy>::ProxyArray<1> p2);
					/*
					 * FileSystem newFileSystem(Path, Map);
					 */
					::java::nio::file::FileSystemProxy newFileSystem(::java::nio::file::PathProxy p0, ::java::util::MapProxy p1);
					/*
					 * Path readSymbolicLink(Path);
					 */
					::java::nio::file::PathProxy readSymbolicLink(::java::nio::file::PathProxy p0);
					/*
					 * static List installedProviders();
					 */
					static ::java::util::ListProxy installedProviders();
					/*
					 * void createLink(Path, Path);
					 */
					void createLink(::java::nio::file::PathProxy p0, ::java::nio::file::PathProxy p1);
					/*
					 * void createSymbolicLink(Path, Path, FileAttribute[]);
					 */
					void createSymbolicLink(::java::nio::file::PathProxy p0, ::java::nio::file::PathProxy p1, ::net::sourceforge::jnipp::PA<::java::nio::file::attribute::FileAttributeProxy>::ProxyArray<1> p2);

				};
			}
		}
	}
}


#endif
