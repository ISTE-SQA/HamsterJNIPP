#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "CompletionHandlerProxy.h"

// includes for parameter and return type proxy classes
#include "java\lang\ObjectProxy.h"
#include "java\lang\ThrowableProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::nio::channels;


std::string CompletionHandlerProxy::className = "java/nio/channels/CompletionHandler";
jclass CompletionHandlerProxy::objectClass = NULL;

jclass CompletionHandlerProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

CompletionHandlerProxy::CompletionHandlerProxy(void* unused)
{
}

jobject CompletionHandlerProxy::_getPeerObject() const
{
	return peerObject;
}

jclass CompletionHandlerProxy::getObjectClass()
{
	return _getObjectClass();
}

CompletionHandlerProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
CompletionHandlerProxy::CompletionHandlerProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

CompletionHandlerProxy::~CompletionHandlerProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

CompletionHandlerProxy& CompletionHandlerProxy::operator=(const CompletionHandlerProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
void CompletionHandlerProxy::completed(::java::lang::ObjectProxy p0, ::java::lang::ObjectProxy p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "completed", "(Ljava/lang/Object;Ljava/lang/Object;)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), static_cast<jobject>( p1 ) );
}

void CompletionHandlerProxy::failed(::java::lang::ThrowableProxy p0, ::java::lang::ObjectProxy p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "failed", "(Ljava/lang/Throwable;Ljava/lang/Object;)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), static_cast<jobject>( p1 ) );
}

