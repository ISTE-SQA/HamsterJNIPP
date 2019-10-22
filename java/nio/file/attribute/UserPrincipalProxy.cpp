#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "UserPrincipalProxy.h"

// includes for parameter and return type proxy classes

using namespace net::sourceforge::jnipp;
using namespace java::nio::file::attribute;


std::string UserPrincipalProxy::className = "java/nio/file/attribute/UserPrincipal";
jclass UserPrincipalProxy::objectClass = NULL;

jclass UserPrincipalProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

UserPrincipalProxy::UserPrincipalProxy(void* unused)
{
}

jobject UserPrincipalProxy::_getPeerObject() const
{
	return peerObject;
}

jclass UserPrincipalProxy::getObjectClass()
{
	return _getObjectClass();
}

UserPrincipalProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
UserPrincipalProxy::UserPrincipalProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

UserPrincipalProxy::~UserPrincipalProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

UserPrincipalProxy& UserPrincipalProxy::operator=(const UserPrincipalProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
