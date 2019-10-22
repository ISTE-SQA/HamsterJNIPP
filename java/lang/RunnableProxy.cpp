#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "RunnableProxy.h"

// includes for parameter and return type proxy classes

using namespace net::sourceforge::jnipp;
using namespace java::lang;


std::string RunnableProxy::className = "java/lang/Runnable";
jclass RunnableProxy::objectClass = NULL;

jclass RunnableProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

RunnableProxy::RunnableProxy(void* unused)
{
}

jobject RunnableProxy::_getPeerObject() const
{
	return peerObject;
}

jclass RunnableProxy::getObjectClass()
{
	return _getObjectClass();
}

RunnableProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
RunnableProxy::RunnableProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

RunnableProxy::~RunnableProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

RunnableProxy& RunnableProxy::operator=(const RunnableProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
void RunnableProxy::run()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "run", "()V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid );
}

