#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "ByteOrderProxy.h"

// includes for parameter and return type proxy classes

using namespace net::sourceforge::jnipp;
using namespace java::nio;


std::string ByteOrderProxy::className = "java/nio/ByteOrder";
jclass ByteOrderProxy::objectClass = NULL;

jclass ByteOrderProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

ByteOrderProxy::ByteOrderProxy(void* unused)
{
}

jobject ByteOrderProxy::_getPeerObject() const
{
	return peerObject;
}

jclass ByteOrderProxy::getObjectClass()
{
	return _getObjectClass();
}

ByteOrderProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
ByteOrderProxy::ByteOrderProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

ByteOrderProxy::~ByteOrderProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

ByteOrderProxy& ByteOrderProxy::operator=(const ByteOrderProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
::net::sourceforge::jnipp::JStringHelper ByteOrderProxy::toString()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "toString", "()Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::nio::ByteOrderProxy ByteOrderProxy::nativeOrder()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "nativeOrder", "()Ljava/nio/ByteOrder;" );
	return ::java::nio::ByteOrderProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid )  );
}

