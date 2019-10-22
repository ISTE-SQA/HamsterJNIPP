#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "FileLockProxy.h"

// includes for parameter and return type proxy classes
#include "java\nio\channels\FileChannelProxy.h"
#include "java\nio\channels\ChannelProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::nio::channels;


std::string FileLockProxy::className = "java/nio/channels/FileLock";
jclass FileLockProxy::objectClass = NULL;

jclass FileLockProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

FileLockProxy::FileLockProxy(void* unused)
{
}

jobject FileLockProxy::_getPeerObject() const
{
	return peerObject;
}

jclass FileLockProxy::getObjectClass()
{
	return _getObjectClass();
}

FileLockProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
FileLockProxy::FileLockProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

FileLockProxy::~FileLockProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

FileLockProxy& FileLockProxy::operator=(const FileLockProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
jboolean FileLockProxy::isValid()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "isValid", "()Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid );
}

void FileLockProxy::release()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "release", "()V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid );
}

jboolean FileLockProxy::isShared()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "isShared", "()Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid );
}

jboolean FileLockProxy::overlaps(jlong p0, jlong p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "overlaps", "(JJ)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, p0, p1 );
}

::net::sourceforge::jnipp::JStringHelper FileLockProxy::toString()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "toString", "()Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::nio::channels::FileChannelProxy FileLockProxy::channel()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "channel", "()Ljava/nio/channels/FileChannel;" );
	return ::java::nio::channels::FileChannelProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

jlong FileLockProxy::position()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "position", "()J" );
	return JNIEnvHelper::CallLongMethod( _getPeerObject(), mid );
}

jlong FileLockProxy::size()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "size", "()J" );
	return JNIEnvHelper::CallLongMethod( _getPeerObject(), mid );
}

void FileLockProxy::close()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "close", "()V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid );
}

::java::nio::channels::ChannelProxy FileLockProxy::acquiredBy()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "acquiredBy", "()Ljava/nio/channels/Channel;" );
	return ::java::nio::channels::ChannelProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

