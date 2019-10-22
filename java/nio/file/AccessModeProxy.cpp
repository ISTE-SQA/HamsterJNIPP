#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "AccessModeProxy.h"

// includes for parameter and return type proxy classes

using namespace net::sourceforge::jnipp;
using namespace java::nio::file;


std::string AccessModeProxy::className = "java/nio/file/AccessMode";
jclass AccessModeProxy::objectClass = NULL;

jclass AccessModeProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

AccessModeProxy::AccessModeProxy(void* unused)
{
}

jobject AccessModeProxy::_getPeerObject() const
{
	return peerObject;
}

jclass AccessModeProxy::getObjectClass()
{
	return _getObjectClass();
}

AccessModeProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
AccessModeProxy::AccessModeProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

AccessModeProxy::~AccessModeProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

AccessModeProxy& AccessModeProxy::operator=(const AccessModeProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
::java::nio::file::AccessModeProxy AccessModeProxy::valueOf(::net::sourceforge::jnipp::JStringHelper p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "valueOf", "(Ljava/lang/String;)Ljava/nio/file/AccessMode;" );
	return ::java::nio::file::AccessModeProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, static_cast<jstring>( p0 ) )  );
}

::net::sourceforge::jnipp::PA<::java::nio::file::AccessModeProxy>::ProxyArray<1> AccessModeProxy::values()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "values", "()[Ljava/nio/file/AccessMode;" );
	return ::net::sourceforge::jnipp::PA<::java::nio::file::AccessModeProxy>::ProxyArray<1>( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid )  );
}

