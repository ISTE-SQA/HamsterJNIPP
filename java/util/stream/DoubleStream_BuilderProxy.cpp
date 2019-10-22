#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "DoubleStream_BuilderProxy.h"

// includes for parameter and return type proxy classes
#include "java\util\stream\DoubleStreamProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::util::stream;


std::string DoubleStream_BuilderProxy::className = "java/util/stream/DoubleStream$Builder";
jclass DoubleStream_BuilderProxy::objectClass = NULL;

jclass DoubleStream_BuilderProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

DoubleStream_BuilderProxy::DoubleStream_BuilderProxy(void* unused)
{
}

jobject DoubleStream_BuilderProxy::_getPeerObject() const
{
	return peerObject;
}

jclass DoubleStream_BuilderProxy::getObjectClass()
{
	return _getObjectClass();
}

DoubleStream_BuilderProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
DoubleStream_BuilderProxy::DoubleStream_BuilderProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

DoubleStream_BuilderProxy::~DoubleStream_BuilderProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

DoubleStream_BuilderProxy& DoubleStream_BuilderProxy::operator=(const DoubleStream_BuilderProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
::java::util::stream::DoubleStreamProxy DoubleStream_BuilderProxy::build()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "build", "()Ljava/util/stream/DoubleStream;" );
	return ::java::util::stream::DoubleStreamProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

void DoubleStream_BuilderProxy::accept(jdouble p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "accept", "(D)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, p0 );
}

::java::util::stream::DoubleStream_BuilderProxy DoubleStream_BuilderProxy::add(jdouble p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "add", "(D)Ljava/util/stream/DoubleStream$Builder;" );
	return ::java::util::stream::DoubleStream_BuilderProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0 )  );
}

