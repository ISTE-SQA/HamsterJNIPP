#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "OptionalDataExceptionProxy.h"

// includes for parameter and return type proxy classes

using namespace net::sourceforge::jnipp;
using namespace java::io;


std::string OptionalDataExceptionProxy::className = "java/io/OptionalDataException";
jclass OptionalDataExceptionProxy::objectClass = NULL;

jclass OptionalDataExceptionProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

OptionalDataExceptionProxy::OptionalDataExceptionProxy(void* unused)
{
}

jobject OptionalDataExceptionProxy::_getPeerObject() const
{
	return peerObject;
}

jclass OptionalDataExceptionProxy::getObjectClass()
{
	return _getObjectClass();
}

OptionalDataExceptionProxy::operator jobject()
{
	return _getPeerObject();
}

OptionalDataExceptionProxy::operator jthrowable()
{
	return reinterpret_cast<jthrowable>(_getPeerObject());
}

// constructors
OptionalDataExceptionProxy::OptionalDataExceptionProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

OptionalDataExceptionProxy::~OptionalDataExceptionProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

OptionalDataExceptionProxy& OptionalDataExceptionProxy::operator=(const OptionalDataExceptionProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
