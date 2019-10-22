#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "LinkOptionProxy.h"

// includes for parameter and return type proxy classes

using namespace net::sourceforge::jnipp;
using namespace java::nio::file;


std::string LinkOptionProxy::className = "java/nio/file/LinkOption";
jclass LinkOptionProxy::objectClass = NULL;

jclass LinkOptionProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

LinkOptionProxy::LinkOptionProxy(void* unused)
{
}

jobject LinkOptionProxy::_getPeerObject() const
{
	return peerObject;
}

jclass LinkOptionProxy::getObjectClass()
{
	return _getObjectClass();
}

LinkOptionProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
LinkOptionProxy::LinkOptionProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

LinkOptionProxy::~LinkOptionProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

LinkOptionProxy& LinkOptionProxy::operator=(const LinkOptionProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
::java::nio::file::LinkOptionProxy LinkOptionProxy::valueOf(::net::sourceforge::jnipp::JStringHelper p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "valueOf", "(Ljava/lang/String;)Ljava/nio/file/LinkOption;" );
	return ::java::nio::file::LinkOptionProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, static_cast<jstring>( p0 ) )  );
}

::net::sourceforge::jnipp::PA<::java::nio::file::LinkOptionProxy>::ProxyArray<1> LinkOptionProxy::values()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "values", "()[Ljava/nio/file/LinkOption;" );
	return ::net::sourceforge::jnipp::PA<::java::nio::file::LinkOptionProxy>::ProxyArray<1>( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid )  );
}

