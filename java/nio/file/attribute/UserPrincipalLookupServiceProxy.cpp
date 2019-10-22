#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "UserPrincipalLookupServiceProxy.h"

// includes for parameter and return type proxy classes
#include "java\nio\file\attribute\GroupPrincipalProxy.h"
#include "java\nio\file\attribute\UserPrincipalProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::nio::file::attribute;


std::string UserPrincipalLookupServiceProxy::className = "java/nio/file/attribute/UserPrincipalLookupService";
jclass UserPrincipalLookupServiceProxy::objectClass = NULL;

jclass UserPrincipalLookupServiceProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

UserPrincipalLookupServiceProxy::UserPrincipalLookupServiceProxy(void* unused)
{
}

jobject UserPrincipalLookupServiceProxy::_getPeerObject() const
{
	return peerObject;
}

jclass UserPrincipalLookupServiceProxy::getObjectClass()
{
	return _getObjectClass();
}

UserPrincipalLookupServiceProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
UserPrincipalLookupServiceProxy::UserPrincipalLookupServiceProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

UserPrincipalLookupServiceProxy::~UserPrincipalLookupServiceProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

UserPrincipalLookupServiceProxy& UserPrincipalLookupServiceProxy::operator=(const UserPrincipalLookupServiceProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
::java::nio::file::attribute::GroupPrincipalProxy UserPrincipalLookupServiceProxy::lookupPrincipalByGroupName(::net::sourceforge::jnipp::JStringHelper p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "lookupPrincipalByGroupName", "(Ljava/lang/String;)Ljava/nio/file/attribute/GroupPrincipal;" );
	return ::java::nio::file::attribute::GroupPrincipalProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jstring>( p0 ) )  );
}

::java::nio::file::attribute::UserPrincipalProxy UserPrincipalLookupServiceProxy::lookupPrincipalByName(::net::sourceforge::jnipp::JStringHelper p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "lookupPrincipalByName", "(Ljava/lang/String;)Ljava/nio/file/attribute/UserPrincipal;" );
	return ::java::nio::file::attribute::UserPrincipalProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jstring>( p0 ) )  );
}

