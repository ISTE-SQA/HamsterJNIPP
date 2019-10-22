#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "FileNameMapProxy.h"

// includes for parameter and return type proxy classes

using namespace net::sourceforge::jnipp;
using namespace java::net;


std::string FileNameMapProxy::className = "java/net/FileNameMap";
jclass FileNameMapProxy::objectClass = NULL;

jclass FileNameMapProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

FileNameMapProxy::FileNameMapProxy(void* unused)
{
}

jobject FileNameMapProxy::_getPeerObject() const
{
	return peerObject;
}

jclass FileNameMapProxy::getObjectClass()
{
	return _getObjectClass();
}

FileNameMapProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
FileNameMapProxy::FileNameMapProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

FileNameMapProxy::~FileNameMapProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

FileNameMapProxy& FileNameMapProxy::operator=(const FileNameMapProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
::net::sourceforge::jnipp::JStringHelper FileNameMapProxy::getContentTypeFor(::net::sourceforge::jnipp::JStringHelper p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getContentTypeFor", "(Ljava/lang/String;)Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jstring>( p0 ) )  );
}

