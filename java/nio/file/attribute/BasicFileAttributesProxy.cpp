#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "BasicFileAttributesProxy.h"

// includes for parameter and return type proxy classes
#include "java\lang\ObjectProxy.h"
#include "java\nio\file\attribute\FileTimeProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::nio::file::attribute;


std::string BasicFileAttributesProxy::className = "java/nio/file/attribute/BasicFileAttributes";
jclass BasicFileAttributesProxy::objectClass = NULL;

jclass BasicFileAttributesProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

BasicFileAttributesProxy::BasicFileAttributesProxy(void* unused)
{
}

jobject BasicFileAttributesProxy::_getPeerObject() const
{
	return peerObject;
}

jclass BasicFileAttributesProxy::getObjectClass()
{
	return _getObjectClass();
}

BasicFileAttributesProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
BasicFileAttributesProxy::BasicFileAttributesProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

BasicFileAttributesProxy::~BasicFileAttributesProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

BasicFileAttributesProxy& BasicFileAttributesProxy::operator=(const BasicFileAttributesProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
jboolean BasicFileAttributesProxy::isDirectory()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "isDirectory", "()Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid );
}

jboolean BasicFileAttributesProxy::isOther()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "isOther", "()Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid );
}

jboolean BasicFileAttributesProxy::isRegularFile()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "isRegularFile", "()Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid );
}

jboolean BasicFileAttributesProxy::isSymbolicLink()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "isSymbolicLink", "()Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid );
}

::java::lang::ObjectProxy BasicFileAttributesProxy::fileKey()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "fileKey", "()Ljava/lang/Object;" );
	return ::java::lang::ObjectProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::nio::file::attribute::FileTimeProxy BasicFileAttributesProxy::creationTime()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "creationTime", "()Ljava/nio/file/attribute/FileTime;" );
	return ::java::nio::file::attribute::FileTimeProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::nio::file::attribute::FileTimeProxy BasicFileAttributesProxy::lastAccessTime()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "lastAccessTime", "()Ljava/nio/file/attribute/FileTime;" );
	return ::java::nio::file::attribute::FileTimeProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::nio::file::attribute::FileTimeProxy BasicFileAttributesProxy::lastModifiedTime()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "lastModifiedTime", "()Ljava/nio/file/attribute/FileTime;" );
	return ::java::nio::file::attribute::FileTimeProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

jlong BasicFileAttributesProxy::size()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "size", "()J" );
	return JNIEnvHelper::CallLongMethod( _getPeerObject(), mid );
}

