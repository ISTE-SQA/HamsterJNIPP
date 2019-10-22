#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "FileSystemProviderProxy.h"

// includes for parameter and return type proxy classes
#include "java\nio\file\PathProxy.h"
#include "java\util\SetProxy.h"
#include "java\nio\file\attribute\FileAttributeProxy.h"
#include "java\nio\channels\SeekableByteChannelProxy.h"
#include "java\nio\file\DirectoryStream_FilterProxy.h"
#include "java\nio\file\DirectoryStreamProxy.h"
#include "java\nio\file\FileStoreProxy.h"
#include "java\net\URIProxy.h"
#include "java\nio\file\FileSystemProxy.h"
#include "java\util\MapProxy.h"
#include "java\lang\ClassProxy.h"
#include "java\nio\file\LinkOptionProxy.h"
#include "java\nio\file\attribute\BasicFileAttributesProxy.h"
#include "java\nio\file\attribute\FileAttributeViewProxy.h"
#include "java\nio\file\AccessModeProxy.h"
#include "java\nio\file\CopyOptionProxy.h"
#include "java\lang\ObjectProxy.h"
#include "java\nio\file\OpenOptionProxy.h"
#include "java\io\InputStreamProxy.h"
#include "java\io\OutputStreamProxy.h"
#include "java\util\concurrent\ExecutorServiceProxy.h"
#include "java\nio\channels\AsynchronousFileChannelProxy.h"
#include "java\nio\channels\FileChannelProxy.h"
#include "java\util\ListProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::nio::file::spi;


std::string FileSystemProviderProxy::className = "java/nio/file/spi/FileSystemProvider";
jclass FileSystemProviderProxy::objectClass = NULL;

jclass FileSystemProviderProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

FileSystemProviderProxy::FileSystemProviderProxy(void* unused)
{
}

jobject FileSystemProviderProxy::_getPeerObject() const
{
	return peerObject;
}

jclass FileSystemProviderProxy::getObjectClass()
{
	return _getObjectClass();
}

FileSystemProviderProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
FileSystemProviderProxy::FileSystemProviderProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

FileSystemProviderProxy::~FileSystemProviderProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

FileSystemProviderProxy& FileSystemProviderProxy::operator=(const FileSystemProviderProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
jboolean FileSystemProviderProxy::isHidden(::java::nio::file::PathProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "isHidden", "(Ljava/nio/file/Path;)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

jboolean FileSystemProviderProxy::isSameFile(::java::nio::file::PathProxy p0, ::java::nio::file::PathProxy p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "isSameFile", "(Ljava/nio/file/Path;Ljava/nio/file/Path;)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), static_cast<jobject>( p1 ) );
}

::net::sourceforge::jnipp::JStringHelper FileSystemProviderProxy::getScheme()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getScheme", "()Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::nio::channels::SeekableByteChannelProxy FileSystemProviderProxy::newByteChannel(::java::nio::file::PathProxy p0, ::java::util::SetProxy p1, ::net::sourceforge::jnipp::PA<::java::nio::file::attribute::FileAttributeProxy>::ProxyArray<1> p2)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "newByteChannel", "(Ljava/nio/file/Path;Ljava/util/Set;[Ljava/nio/file/attribute/FileAttribute;)Ljava/nio/channels/SeekableByteChannel;" );
	return ::java::nio::channels::SeekableByteChannelProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), static_cast<jobject>( p1 ), static_cast<jobjectArray>( p2 ) )  );
}

::java::nio::file::DirectoryStreamProxy FileSystemProviderProxy::newDirectoryStream(::java::nio::file::PathProxy p0, ::java::nio::file::DirectoryStream_FilterProxy p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "newDirectoryStream", "(Ljava/nio/file/Path;Ljava/nio/file/DirectoryStream$Filter;)Ljava/nio/file/DirectoryStream;" );
	return ::java::nio::file::DirectoryStreamProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), static_cast<jobject>( p1 ) )  );
}

::java::nio::file::FileStoreProxy FileSystemProviderProxy::getFileStore(::java::nio::file::PathProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getFileStore", "(Ljava/nio/file/Path;)Ljava/nio/file/FileStore;" );
	return ::java::nio::file::FileStoreProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::java::nio::file::FileSystemProxy FileSystemProviderProxy::getFileSystem(::java::net::URIProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getFileSystem", "(Ljava/net/URI;)Ljava/nio/file/FileSystem;" );
	return ::java::nio::file::FileSystemProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::java::nio::file::FileSystemProxy FileSystemProviderProxy::newFileSystem(::java::net::URIProxy p0, ::java::util::MapProxy p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "newFileSystem", "(Ljava/net/URI;Ljava/util/Map;)Ljava/nio/file/FileSystem;" );
	return ::java::nio::file::FileSystemProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), static_cast<jobject>( p1 ) )  );
}

::java::nio::file::PathProxy FileSystemProviderProxy::getPath(::java::net::URIProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getPath", "(Ljava/net/URI;)Ljava/nio/file/Path;" );
	return ::java::nio::file::PathProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::java::nio::file::attribute::BasicFileAttributesProxy FileSystemProviderProxy::readAttributes(::java::nio::file::PathProxy p0, ::java::lang::ClassProxy p1, ::net::sourceforge::jnipp::PA<::java::nio::file::LinkOptionProxy>::ProxyArray<1> p2)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "readAttributes", "(Ljava/nio/file/Path;Ljava/lang/Class;[Ljava/nio/file/LinkOption;)Ljava/nio/file/attribute/BasicFileAttributes;" );
	return ::java::nio::file::attribute::BasicFileAttributesProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), static_cast<jclass>( p1 ), static_cast<jobjectArray>( p2 ) )  );
}

::java::nio::file::attribute::FileAttributeViewProxy FileSystemProviderProxy::getFileAttributeView(::java::nio::file::PathProxy p0, ::java::lang::ClassProxy p1, ::net::sourceforge::jnipp::PA<::java::nio::file::LinkOptionProxy>::ProxyArray<1> p2)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getFileAttributeView", "(Ljava/nio/file/Path;Ljava/lang/Class;[Ljava/nio/file/LinkOption;)Ljava/nio/file/attribute/FileAttributeView;" );
	return ::java::nio::file::attribute::FileAttributeViewProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), static_cast<jclass>( p1 ), static_cast<jobjectArray>( p2 ) )  );
}

::java::util::MapProxy FileSystemProviderProxy::readAttributes(::java::nio::file::PathProxy p0, ::net::sourceforge::jnipp::JStringHelper p1, ::net::sourceforge::jnipp::PA<::java::nio::file::LinkOptionProxy>::ProxyArray<1> p2)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "readAttributes", "(Ljava/nio/file/Path;Ljava/lang/String;[Ljava/nio/file/LinkOption;)Ljava/util/Map;" );
	return ::java::util::MapProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), static_cast<jstring>( p1 ), static_cast<jobjectArray>( p2 ) )  );
}

void FileSystemProviderProxy::checkAccess(::java::nio::file::PathProxy p0, ::net::sourceforge::jnipp::PA<::java::nio::file::AccessModeProxy>::ProxyArray<1> p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "checkAccess", "(Ljava/nio/file/Path;[Ljava/nio/file/AccessMode;)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), static_cast<jobjectArray>( p1 ) );
}

void FileSystemProviderProxy::copy(::java::nio::file::PathProxy p0, ::java::nio::file::PathProxy p1, ::net::sourceforge::jnipp::PA<::java::nio::file::CopyOptionProxy>::ProxyArray<1> p2)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "copy", "(Ljava/nio/file/Path;Ljava/nio/file/Path;[Ljava/nio/file/CopyOption;)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), static_cast<jobject>( p1 ), static_cast<jobjectArray>( p2 ) );
}

void FileSystemProviderProxy::createDirectory(::java::nio::file::PathProxy p0, ::net::sourceforge::jnipp::PA<::java::nio::file::attribute::FileAttributeProxy>::ProxyArray<1> p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "createDirectory", "(Ljava/nio/file/Path;[Ljava/nio/file/attribute/FileAttribute;)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), static_cast<jobjectArray>( p1 ) );
}

void FileSystemProviderProxy::_delete(::java::nio::file::PathProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "delete", "(Ljava/nio/file/Path;)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

void FileSystemProviderProxy::move(::java::nio::file::PathProxy p0, ::java::nio::file::PathProxy p1, ::net::sourceforge::jnipp::PA<::java::nio::file::CopyOptionProxy>::ProxyArray<1> p2)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "move", "(Ljava/nio/file/Path;Ljava/nio/file/Path;[Ljava/nio/file/CopyOption;)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), static_cast<jobject>( p1 ), static_cast<jobjectArray>( p2 ) );
}

void FileSystemProviderProxy::setAttribute(::java::nio::file::PathProxy p0, ::net::sourceforge::jnipp::JStringHelper p1, ::java::lang::ObjectProxy p2, ::net::sourceforge::jnipp::PA<::java::nio::file::LinkOptionProxy>::ProxyArray<1> p3)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "setAttribute", "(Ljava/nio/file/Path;Ljava/lang/String;Ljava/lang/Object;[Ljava/nio/file/LinkOption;)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), static_cast<jstring>( p1 ), static_cast<jobject>( p2 ), static_cast<jobjectArray>( p3 ) );
}

jboolean FileSystemProviderProxy::deleteIfExists(::java::nio::file::PathProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "deleteIfExists", "(Ljava/nio/file/Path;)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

::java::io::InputStreamProxy FileSystemProviderProxy::newInputStream(::java::nio::file::PathProxy p0, ::net::sourceforge::jnipp::PA<::java::nio::file::OpenOptionProxy>::ProxyArray<1> p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "newInputStream", "(Ljava/nio/file/Path;[Ljava/nio/file/OpenOption;)Ljava/io/InputStream;" );
	return ::java::io::InputStreamProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), static_cast<jobjectArray>( p1 ) )  );
}

::java::io::OutputStreamProxy FileSystemProviderProxy::newOutputStream(::java::nio::file::PathProxy p0, ::net::sourceforge::jnipp::PA<::java::nio::file::OpenOptionProxy>::ProxyArray<1> p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "newOutputStream", "(Ljava/nio/file/Path;[Ljava/nio/file/OpenOption;)Ljava/io/OutputStream;" );
	return ::java::io::OutputStreamProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), static_cast<jobjectArray>( p1 ) )  );
}

::java::nio::channels::AsynchronousFileChannelProxy FileSystemProviderProxy::newAsynchronousFileChannel(::java::nio::file::PathProxy p0, ::java::util::SetProxy p1, ::java::util::concurrent::ExecutorServiceProxy p2, ::net::sourceforge::jnipp::PA<::java::nio::file::attribute::FileAttributeProxy>::ProxyArray<1> p3)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "newAsynchronousFileChannel", "(Ljava/nio/file/Path;Ljava/util/Set;Ljava/util/concurrent/ExecutorService;[Ljava/nio/file/attribute/FileAttribute;)Ljava/nio/channels/AsynchronousFileChannel;" );
	return ::java::nio::channels::AsynchronousFileChannelProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), static_cast<jobject>( p1 ), static_cast<jobject>( p2 ), static_cast<jobjectArray>( p3 ) )  );
}

::java::nio::channels::FileChannelProxy FileSystemProviderProxy::newFileChannel(::java::nio::file::PathProxy p0, ::java::util::SetProxy p1, ::net::sourceforge::jnipp::PA<::java::nio::file::attribute::FileAttributeProxy>::ProxyArray<1> p2)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "newFileChannel", "(Ljava/nio/file/Path;Ljava/util/Set;[Ljava/nio/file/attribute/FileAttribute;)Ljava/nio/channels/FileChannel;" );
	return ::java::nio::channels::FileChannelProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), static_cast<jobject>( p1 ), static_cast<jobjectArray>( p2 ) )  );
}

::java::nio::file::FileSystemProxy FileSystemProviderProxy::newFileSystem(::java::nio::file::PathProxy p0, ::java::util::MapProxy p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "newFileSystem", "(Ljava/nio/file/Path;Ljava/util/Map;)Ljava/nio/file/FileSystem;" );
	return ::java::nio::file::FileSystemProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), static_cast<jobject>( p1 ) )  );
}

::java::nio::file::PathProxy FileSystemProviderProxy::readSymbolicLink(::java::nio::file::PathProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "readSymbolicLink", "(Ljava/nio/file/Path;)Ljava/nio/file/Path;" );
	return ::java::nio::file::PathProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::java::util::ListProxy FileSystemProviderProxy::installedProviders()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "installedProviders", "()Ljava/util/List;" );
	return ::java::util::ListProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid )  );
}

void FileSystemProviderProxy::createLink(::java::nio::file::PathProxy p0, ::java::nio::file::PathProxy p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "createLink", "(Ljava/nio/file/Path;Ljava/nio/file/Path;)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), static_cast<jobject>( p1 ) );
}

void FileSystemProviderProxy::createSymbolicLink(::java::nio::file::PathProxy p0, ::java::nio::file::PathProxy p1, ::net::sourceforge::jnipp::PA<::java::nio::file::attribute::FileAttributeProxy>::ProxyArray<1> p2)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "createSymbolicLink", "(Ljava/nio/file/Path;Ljava/nio/file/Path;[Ljava/nio/file/attribute/FileAttribute;)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), static_cast<jobject>( p1 ), static_cast<jobjectArray>( p2 ) );
}

