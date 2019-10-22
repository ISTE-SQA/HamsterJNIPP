#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "LongStream_BuilderProxy.h"

// includes for parameter and return type proxy classes
#include "java\util\stream\LongStreamProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::util::stream;


std::string LongStream_BuilderProxy::className = "java/util/stream/LongStream$Builder";
jclass LongStream_BuilderProxy::objectClass = NULL;

jclass LongStream_BuilderProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

LongStream_BuilderProxy::LongStream_BuilderProxy(void* unused)
{
}

jobject LongStream_BuilderProxy::_getPeerObject() const
{
	return peerObject;
}

jclass LongStream_BuilderProxy::getObjectClass()
{
	return _getObjectClass();
}

LongStream_BuilderProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
LongStream_BuilderProxy::LongStream_BuilderProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

LongStream_BuilderProxy::~LongStream_BuilderProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

LongStream_BuilderProxy& LongStream_BuilderProxy::operator=(const LongStream_BuilderProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
::java::util::stream::LongStreamProxy LongStream_BuilderProxy::build()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "build", "()Ljava/util/stream/LongStream;" );
	return ::java::util::stream::LongStreamProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

void LongStream_BuilderProxy::accept(jlong p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "accept", "(J)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, p0 );
}

::java::util::stream::LongStream_BuilderProxy LongStream_BuilderProxy::add(jlong p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "add", "(J)Ljava/util/stream/LongStream$Builder;" );
	return ::java::util::stream::LongStream_BuilderProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0 )  );
}

