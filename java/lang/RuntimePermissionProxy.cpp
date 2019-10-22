#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "RuntimePermissionProxy.h"

// includes for parameter and return type proxy classes

using namespace net::sourceforge::jnipp;
using namespace java::lang;


std::string RuntimePermissionProxy::className = "java/lang/RuntimePermission";
jclass RuntimePermissionProxy::objectClass = NULL;

jclass RuntimePermissionProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

RuntimePermissionProxy::RuntimePermissionProxy(void* unused)
{
}

jobject RuntimePermissionProxy::_getPeerObject() const
{
	return peerObject;
}

jclass RuntimePermissionProxy::getObjectClass()
{
	return _getObjectClass();
}

RuntimePermissionProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
RuntimePermissionProxy::RuntimePermissionProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

RuntimePermissionProxy::RuntimePermissionProxy(::net::sourceforge::jnipp::JStringHelper p0)
{
	jmethodID mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "<init>", "(Ljava/lang/String;)V" );
	peerObject = JNIEnvHelper::NewGlobalRef( JNIEnvHelper::NewObject( _getObjectClass(), mid, static_cast<jstring>( p0 ) ) );
}

RuntimePermissionProxy::RuntimePermissionProxy(::net::sourceforge::jnipp::JStringHelper p0, ::net::sourceforge::jnipp::JStringHelper p1)
{
	jmethodID mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "<init>", "(Ljava/lang/String;Ljava/lang/String;)V" );
	peerObject = JNIEnvHelper::NewGlobalRef( JNIEnvHelper::NewObject( _getObjectClass(), mid, static_cast<jstring>( p0 ), static_cast<jstring>( p1 ) ) );
}

RuntimePermissionProxy::~RuntimePermissionProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

RuntimePermissionProxy& RuntimePermissionProxy::operator=(const RuntimePermissionProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
