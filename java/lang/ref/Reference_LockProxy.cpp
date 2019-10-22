#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "Reference_LockProxy.h"

// includes for parameter and return type proxy classes

using namespace net::sourceforge::jnipp;
using namespace java::lang::ref;


std::string Reference_LockProxy::className = "java/lang/ref/Reference$Lock";
jclass Reference_LockProxy::objectClass = NULL;

jclass Reference_LockProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

Reference_LockProxy::Reference_LockProxy(void* unused)
{
}

jobject Reference_LockProxy::_getPeerObject() const
{
	return peerObject;
}

jclass Reference_LockProxy::getObjectClass()
{
	return _getObjectClass();
}

Reference_LockProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
Reference_LockProxy::Reference_LockProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

Reference_LockProxy::~Reference_LockProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

Reference_LockProxy& Reference_LockProxy::operator=(const Reference_LockProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
