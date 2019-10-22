#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "FileStoreProxy.h"

// includes for parameter and return type proxy classes
#include "java\lang\ClassProxy.h"
#include "java\lang\ObjectProxy.h"
#include "java\nio\file\attribute\FileStoreAttributeViewProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::nio::file;


std::string FileStoreProxy::className = "java/nio/file/FileStore";
jclass FileStoreProxy::objectClass = NULL;

jclass FileStoreProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

FileStoreProxy::FileStoreProxy(void* unused)
{
}

jobject FileStoreProxy::_getPeerObject() const
{
	return peerObject;
}

jclass FileStoreProxy::getObjectClass()
{
	return _getObjectClass();
}

FileStoreProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
FileStoreProxy::FileStoreProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

FileStoreProxy::~FileStoreProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

FileStoreProxy& FileStoreProxy::operator=(const FileStoreProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
jboolean FileStoreProxy::isReadOnly()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "isReadOnly", "()Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid );
}

jboolean FileStoreProxy::supportsFileAttributeView(::java::lang::ClassProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "supportsFileAttributeView", "(Ljava/lang/Class;)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, static_cast<jclass>( p0 ) );
}

jboolean FileStoreProxy::supportsFileAttributeView(::net::sourceforge::jnipp::JStringHelper p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "supportsFileAttributeView", "(Ljava/lang/String;)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, static_cast<jstring>( p0 ) );
}

::java::lang::ObjectProxy FileStoreProxy::getAttribute(::net::sourceforge::jnipp::JStringHelper p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getAttribute", "(Ljava/lang/String;)Ljava/lang/Object;" );
	return ::java::lang::ObjectProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jstring>( p0 ) )  );
}

::net::sourceforge::jnipp::JStringHelper FileStoreProxy::name()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "name", "()Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::net::sourceforge::jnipp::JStringHelper FileStoreProxy::type()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "type", "()Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::nio::file::attribute::FileStoreAttributeViewProxy FileStoreProxy::getFileStoreAttributeView(::java::lang::ClassProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getFileStoreAttributeView", "(Ljava/lang/Class;)Ljava/nio/file/attribute/FileStoreAttributeView;" );
	return ::java::nio::file::attribute::FileStoreAttributeViewProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jclass>( p0 ) )  );
}

jlong FileStoreProxy::getTotalSpace()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getTotalSpace", "()J" );
	return JNIEnvHelper::CallLongMethod( _getPeerObject(), mid );
}

jlong FileStoreProxy::getUnallocatedSpace()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getUnallocatedSpace", "()J" );
	return JNIEnvHelper::CallLongMethod( _getPeerObject(), mid );
}

jlong FileStoreProxy::getUsableSpace()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getUsableSpace", "()J" );
	return JNIEnvHelper::CallLongMethod( _getPeerObject(), mid );
}

