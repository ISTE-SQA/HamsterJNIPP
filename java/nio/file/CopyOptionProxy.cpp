#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "CopyOptionProxy.h"

// includes for parameter and return type proxy classes

using namespace net::sourceforge::jnipp;
using namespace java::nio::file;


std::string CopyOptionProxy::className = "java/nio/file/CopyOption";
jclass CopyOptionProxy::objectClass = NULL;

jclass CopyOptionProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

CopyOptionProxy::CopyOptionProxy(void* unused)
{
}

jobject CopyOptionProxy::_getPeerObject() const
{
	return peerObject;
}

jclass CopyOptionProxy::getObjectClass()
{
	return _getObjectClass();
}

CopyOptionProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
CopyOptionProxy::CopyOptionProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

CopyOptionProxy::~CopyOptionProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

CopyOptionProxy& CopyOptionProxy::operator=(const CopyOptionProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
