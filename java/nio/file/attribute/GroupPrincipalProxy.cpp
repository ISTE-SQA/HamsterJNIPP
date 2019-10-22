#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "GroupPrincipalProxy.h"

// includes for parameter and return type proxy classes

using namespace net::sourceforge::jnipp;
using namespace java::nio::file::attribute;


std::string GroupPrincipalProxy::className = "java/nio/file/attribute/GroupPrincipal";
jclass GroupPrincipalProxy::objectClass = NULL;

jclass GroupPrincipalProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

GroupPrincipalProxy::GroupPrincipalProxy(void* unused)
{
}

jobject GroupPrincipalProxy::_getPeerObject() const
{
	return peerObject;
}

jclass GroupPrincipalProxy::getObjectClass()
{
	return _getObjectClass();
}

GroupPrincipalProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
GroupPrincipalProxy::GroupPrincipalProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

GroupPrincipalProxy::~GroupPrincipalProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

GroupPrincipalProxy& GroupPrincipalProxy::operator=(const GroupPrincipalProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
