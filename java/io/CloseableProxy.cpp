#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "CloseableProxy.h"

// includes for parameter and return type proxy classes

using namespace net::sourceforge::jnipp;
using namespace java::io;


std::string CloseableProxy::className = "java/io/Closeable";
jclass CloseableProxy::objectClass = NULL;

jclass CloseableProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

CloseableProxy::CloseableProxy(void* unused)
{
}

jobject CloseableProxy::_getPeerObject() const
{
	return peerObject;
}

jclass CloseableProxy::getObjectClass()
{
	return _getObjectClass();
}

CloseableProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
CloseableProxy::CloseableProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

CloseableProxy::~CloseableProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

CloseableProxy& CloseableProxy::operator=(const CloseableProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
void CloseableProxy::close()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "close", "()V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid );
}

