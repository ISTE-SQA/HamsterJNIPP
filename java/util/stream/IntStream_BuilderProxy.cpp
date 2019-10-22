#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "IntStream_BuilderProxy.h"

// includes for parameter and return type proxy classes
#include "java\util\stream\IntStreamProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::util::stream;


std::string IntStream_BuilderProxy::className = "java/util/stream/IntStream$Builder";
jclass IntStream_BuilderProxy::objectClass = NULL;

jclass IntStream_BuilderProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

IntStream_BuilderProxy::IntStream_BuilderProxy(void* unused)
{
}

jobject IntStream_BuilderProxy::_getPeerObject() const
{
	return peerObject;
}

jclass IntStream_BuilderProxy::getObjectClass()
{
	return _getObjectClass();
}

IntStream_BuilderProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
IntStream_BuilderProxy::IntStream_BuilderProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

IntStream_BuilderProxy::~IntStream_BuilderProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

IntStream_BuilderProxy& IntStream_BuilderProxy::operator=(const IntStream_BuilderProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
::java::util::stream::IntStreamProxy IntStream_BuilderProxy::build()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "build", "()Ljava/util/stream/IntStream;" );
	return ::java::util::stream::IntStreamProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

void IntStream_BuilderProxy::accept(jint p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "accept", "(I)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, p0 );
}

::java::util::stream::IntStream_BuilderProxy IntStream_BuilderProxy::add(jint p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "add", "(I)Ljava/util/stream/IntStream$Builder;" );
	return ::java::util::stream::IntStream_BuilderProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0 )  );
}

