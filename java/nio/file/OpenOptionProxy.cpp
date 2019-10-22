#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "OpenOptionProxy.h"

// includes for parameter and return type proxy classes

using namespace net::sourceforge::jnipp;
using namespace java::nio::file;


std::string OpenOptionProxy::className = "java/nio/file/OpenOption";
jclass OpenOptionProxy::objectClass = NULL;

jclass OpenOptionProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

OpenOptionProxy::OpenOptionProxy(void* unused)
{
}

jobject OpenOptionProxy::_getPeerObject() const
{
	return peerObject;
}

jclass OpenOptionProxy::getObjectClass()
{
	return _getObjectClass();
}

OpenOptionProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
OpenOptionProxy::OpenOptionProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

OpenOptionProxy::~OpenOptionProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

OpenOptionProxy& OpenOptionProxy::operator=(const OpenOptionProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
