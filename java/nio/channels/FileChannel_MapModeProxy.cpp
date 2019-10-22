#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "FileChannel_MapModeProxy.h"

// includes for parameter and return type proxy classes

using namespace net::sourceforge::jnipp;
using namespace java::nio::channels;


std::string FileChannel_MapModeProxy::className = "java/nio/channels/FileChannel$MapMode";
jclass FileChannel_MapModeProxy::objectClass = NULL;

jclass FileChannel_MapModeProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

FileChannel_MapModeProxy::FileChannel_MapModeProxy(void* unused)
{
}

jobject FileChannel_MapModeProxy::_getPeerObject() const
{
	return peerObject;
}

jclass FileChannel_MapModeProxy::getObjectClass()
{
	return _getObjectClass();
}

FileChannel_MapModeProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
FileChannel_MapModeProxy::FileChannel_MapModeProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

FileChannel_MapModeProxy::~FileChannel_MapModeProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

FileChannel_MapModeProxy& FileChannel_MapModeProxy::operator=(const FileChannel_MapModeProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
::net::sourceforge::jnipp::JStringHelper FileChannel_MapModeProxy::toString()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "toString", "()Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

