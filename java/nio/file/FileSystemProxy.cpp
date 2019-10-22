#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "FileSystemProxy.h"

// includes for parameter and return type proxy classes
#include "java\lang\IterableProxy.h"
#include "java\nio\file\PathProxy.h"
#include "java\nio\file\PathMatcherProxy.h"
#include "java\nio\file\WatchServiceProxy.h"
#include "java\nio\file\attribute\UserPrincipalLookupServiceProxy.h"
#include "java\nio\file\spi\FileSystemProviderProxy.h"
#include "java\util\SetProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::nio::file;


std::string FileSystemProxy::className = "java/nio/file/FileSystem";
jclass FileSystemProxy::objectClass = NULL;

jclass FileSystemProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

FileSystemProxy::FileSystemProxy(void* unused)
{
}

jobject FileSystemProxy::_getPeerObject() const
{
	return peerObject;
}

jclass FileSystemProxy::getObjectClass()
{
	return _getObjectClass();
}

FileSystemProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
FileSystemProxy::FileSystemProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

FileSystemProxy::~FileSystemProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

FileSystemProxy& FileSystemProxy::operator=(const FileSystemProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
jboolean FileSystemProxy::isOpen()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "isOpen", "()Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid );
}

jboolean FileSystemProxy::isReadOnly()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "isReadOnly", "()Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid );
}

::java::lang::IterableProxy FileSystemProxy::getFileStores()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getFileStores", "()Ljava/lang/Iterable;" );
	return ::java::lang::IterableProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::lang::IterableProxy FileSystemProxy::getRootDirectories()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getRootDirectories", "()Ljava/lang/Iterable;" );
	return ::java::lang::IterableProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::net::sourceforge::jnipp::JStringHelper FileSystemProxy::getSeparator()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getSeparator", "()Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::nio::file::PathProxy FileSystemProxy::getPath(::net::sourceforge::jnipp::JStringHelper p0, ::net::sourceforge::jnipp::JStringHelperArray<1> p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getPath", "(Ljava/lang/String;[Ljava/lang/String;)Ljava/nio/file/Path;" );
	return ::java::nio::file::PathProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jstring>( p0 ), static_cast<jobjectArray>( p1 ) )  );
}

::java::nio::file::PathMatcherProxy FileSystemProxy::getPathMatcher(::net::sourceforge::jnipp::JStringHelper p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getPathMatcher", "(Ljava/lang/String;)Ljava/nio/file/PathMatcher;" );
	return ::java::nio::file::PathMatcherProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jstring>( p0 ) )  );
}

::java::nio::file::WatchServiceProxy FileSystemProxy::newWatchService()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "newWatchService", "()Ljava/nio/file/WatchService;" );
	return ::java::nio::file::WatchServiceProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::nio::file::attribute::UserPrincipalLookupServiceProxy FileSystemProxy::getUserPrincipalLookupService()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getUserPrincipalLookupService", "()Ljava/nio/file/attribute/UserPrincipalLookupService;" );
	return ::java::nio::file::attribute::UserPrincipalLookupServiceProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::nio::file::spi::FileSystemProviderProxy FileSystemProxy::provider()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "provider", "()Ljava/nio/file/spi/FileSystemProvider;" );
	return ::java::nio::file::spi::FileSystemProviderProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::util::SetProxy FileSystemProxy::supportedFileAttributeViews()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "supportedFileAttributeViews", "()Ljava/util/Set;" );
	return ::java::util::SetProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

void FileSystemProxy::close()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "close", "()V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid );
}

