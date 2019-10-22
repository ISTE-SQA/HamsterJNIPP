#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "PathProxy.h"

// includes for parameter and return type proxy classes
#include "java\lang\ObjectProxy.h"
#include "java\io\FileProxy.h"
#include "java\net\URIProxy.h"
#include "java\nio\file\FileSystemProxy.h"
#include "java\nio\file\LinkOptionProxy.h"
#include "java\nio\file\WatchServiceProxy.h"
#include "java\nio\file\WatchEvent_KindProxy.h"
#include "java\nio\file\WatchKeyProxy.h"
#include "java\nio\file\WatchEvent_ModifierProxy.h"
#include "java\util\IteratorProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::nio::file;


std::string PathProxy::className = "java/nio/file/Path";
jclass PathProxy::objectClass = NULL;

jclass PathProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

PathProxy::PathProxy(void* unused)
{
}

jobject PathProxy::_getPeerObject() const
{
	return peerObject;
}

jclass PathProxy::getObjectClass()
{
	return _getObjectClass();
}

PathProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
PathProxy::PathProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

PathProxy::~PathProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

PathProxy& PathProxy::operator=(const PathProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
jboolean PathProxy::endsWith(::net::sourceforge::jnipp::JStringHelper p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "endsWith", "(Ljava/lang/String;)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, static_cast<jstring>( p0 ) );
}

jboolean PathProxy::endsWith(::java::nio::file::PathProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "endsWith", "(Ljava/nio/file/Path;)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

jboolean PathProxy::equals(::java::lang::ObjectProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "equals", "(Ljava/lang/Object;)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

jboolean PathProxy::isAbsolute()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "isAbsolute", "()Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid );
}

jboolean PathProxy::startsWith(::net::sourceforge::jnipp::JStringHelper p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "startsWith", "(Ljava/lang/String;)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, static_cast<jstring>( p0 ) );
}

jboolean PathProxy::startsWith(::java::nio::file::PathProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "startsWith", "(Ljava/nio/file/Path;)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

jint PathProxy::compareTo(::java::nio::file::PathProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "compareTo", "(Ljava/nio/file/Path;)I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

jint PathProxy::getNameCount()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getNameCount", "()I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid );
}

jint PathProxy::hashCode()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "hashCode", "()I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid );
}

::java::io::FileProxy PathProxy::toFile()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "toFile", "()Ljava/io/File;" );
	return ::java::io::FileProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::net::sourceforge::jnipp::JStringHelper PathProxy::toString()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "toString", "()Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::net::URIProxy PathProxy::toUri()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "toUri", "()Ljava/net/URI;" );
	return ::java::net::URIProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::nio::file::FileSystemProxy PathProxy::getFileSystem()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getFileSystem", "()Ljava/nio/file/FileSystem;" );
	return ::java::nio::file::FileSystemProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::nio::file::PathProxy PathProxy::getFileName()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getFileName", "()Ljava/nio/file/Path;" );
	return ::java::nio::file::PathProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::nio::file::PathProxy PathProxy::getName(jint p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getName", "(I)Ljava/nio/file/Path;" );
	return ::java::nio::file::PathProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0 )  );
}

::java::nio::file::PathProxy PathProxy::getParent()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getParent", "()Ljava/nio/file/Path;" );
	return ::java::nio::file::PathProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::nio::file::PathProxy PathProxy::getRoot()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getRoot", "()Ljava/nio/file/Path;" );
	return ::java::nio::file::PathProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::nio::file::PathProxy PathProxy::normalize()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "normalize", "()Ljava/nio/file/Path;" );
	return ::java::nio::file::PathProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::nio::file::PathProxy PathProxy::relativize(::java::nio::file::PathProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "relativize", "(Ljava/nio/file/Path;)Ljava/nio/file/Path;" );
	return ::java::nio::file::PathProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::java::nio::file::PathProxy PathProxy::resolve(::net::sourceforge::jnipp::JStringHelper p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "resolve", "(Ljava/lang/String;)Ljava/nio/file/Path;" );
	return ::java::nio::file::PathProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jstring>( p0 ) )  );
}

::java::nio::file::PathProxy PathProxy::resolve(::java::nio::file::PathProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "resolve", "(Ljava/nio/file/Path;)Ljava/nio/file/Path;" );
	return ::java::nio::file::PathProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::java::nio::file::PathProxy PathProxy::resolveSibling(::net::sourceforge::jnipp::JStringHelper p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "resolveSibling", "(Ljava/lang/String;)Ljava/nio/file/Path;" );
	return ::java::nio::file::PathProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jstring>( p0 ) )  );
}

::java::nio::file::PathProxy PathProxy::resolveSibling(::java::nio::file::PathProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "resolveSibling", "(Ljava/nio/file/Path;)Ljava/nio/file/Path;" );
	return ::java::nio::file::PathProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::java::nio::file::PathProxy PathProxy::subpath(jint p0, jint p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "subpath", "(II)Ljava/nio/file/Path;" );
	return ::java::nio::file::PathProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0, p1 )  );
}

::java::nio::file::PathProxy PathProxy::toAbsolutePath()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "toAbsolutePath", "()Ljava/nio/file/Path;" );
	return ::java::nio::file::PathProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::nio::file::PathProxy PathProxy::toRealPath(::net::sourceforge::jnipp::PA<::java::nio::file::LinkOptionProxy>::ProxyArray<1> p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "toRealPath", "([Ljava/nio/file/LinkOption;)Ljava/nio/file/Path;" );
	return ::java::nio::file::PathProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobjectArray>( p0 ) )  );
}

::java::nio::file::WatchKeyProxy PathProxy::_register(::java::nio::file::WatchServiceProxy p0, ::net::sourceforge::jnipp::PA<::java::nio::file::WatchEvent_KindProxy>::ProxyArray<1> p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "register", "(Ljava/nio/file/WatchService;[Ljava/nio/file/WatchEvent$Kind;)Ljava/nio/file/WatchKey;" );
	return ::java::nio::file::WatchKeyProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), static_cast<jobjectArray>( p1 ) )  );
}

::java::nio::file::WatchKeyProxy PathProxy::_register(::java::nio::file::WatchServiceProxy p0, ::net::sourceforge::jnipp::PA<::java::nio::file::WatchEvent_KindProxy>::ProxyArray<1> p1, ::net::sourceforge::jnipp::PA<::java::nio::file::WatchEvent_ModifierProxy>::ProxyArray<1> p2)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "register", "(Ljava/nio/file/WatchService;[Ljava/nio/file/WatchEvent$Kind;[Ljava/nio/file/WatchEvent$Modifier;)Ljava/nio/file/WatchKey;" );
	return ::java::nio::file::WatchKeyProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), static_cast<jobjectArray>( p1 ), static_cast<jobjectArray>( p2 ) )  );
}

::java::util::IteratorProxy PathProxy::iterator()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "iterator", "()Ljava/util/Iterator;" );
	return ::java::util::IteratorProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

