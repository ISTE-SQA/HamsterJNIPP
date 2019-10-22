#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "Stream_BuilderProxy.h"

// includes for parameter and return type proxy classes
#include "java\util\stream\StreamProxy.h"
#include "java\lang\ObjectProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::util::stream;


std::string Stream_BuilderProxy::className = "java/util/stream/Stream$Builder";
jclass Stream_BuilderProxy::objectClass = NULL;

jclass Stream_BuilderProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

Stream_BuilderProxy::Stream_BuilderProxy(void* unused)
{
}

jobject Stream_BuilderProxy::_getPeerObject() const
{
	return peerObject;
}

jclass Stream_BuilderProxy::getObjectClass()
{
	return _getObjectClass();
}

Stream_BuilderProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
Stream_BuilderProxy::Stream_BuilderProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

Stream_BuilderProxy::~Stream_BuilderProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

Stream_BuilderProxy& Stream_BuilderProxy::operator=(const Stream_BuilderProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
::java::util::stream::StreamProxy Stream_BuilderProxy::build()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "build", "()Ljava/util/stream/Stream;" );
	return ::java::util::stream::StreamProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

void Stream_BuilderProxy::accept(::java::lang::ObjectProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "accept", "(Ljava/lang/Object;)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

::java::util::stream::Stream_BuilderProxy Stream_BuilderProxy::add(::java::lang::ObjectProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "add", "(Ljava/lang/Object;)Ljava/util/stream/Stream$Builder;" );
	return ::java::util::stream::Stream_BuilderProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

