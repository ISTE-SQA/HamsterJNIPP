#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "IllegalAccessExceptionProxy.h"

// includes for parameter and return type proxy classes

using namespace net::sourceforge::jnipp;
using namespace java::lang;


std::string IllegalAccessExceptionProxy::className = "java/lang/IllegalAccessException";
jclass IllegalAccessExceptionProxy::objectClass = NULL;

jclass IllegalAccessExceptionProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

IllegalAccessExceptionProxy::IllegalAccessExceptionProxy(void* unused)
{
}

jobject IllegalAccessExceptionProxy::_getPeerObject() const
{
	return peerObject;
}

jclass IllegalAccessExceptionProxy::getObjectClass()
{
	return _getObjectClass();
}

IllegalAccessExceptionProxy::operator jobject()
{
	return _getPeerObject();
}

IllegalAccessExceptionProxy::operator jthrowable()
{
	return reinterpret_cast<jthrowable>(_getPeerObject());
}

// constructors
IllegalAccessExceptionProxy::IllegalAccessExceptionProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

IllegalAccessExceptionProxy::IllegalAccessExceptionProxy()
{
	jmethodID mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "<init>", "()V" );
	peerObject = JNIEnvHelper::NewGlobalRef( JNIEnvHelper::NewObject( _getObjectClass(), mid ) );
}

IllegalAccessExceptionProxy::IllegalAccessExceptionProxy(::net::sourceforge::jnipp::JStringHelper p0)
{
	jmethodID mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "<init>", "(Ljava/lang/String;)V" );
	peerObject = JNIEnvHelper::NewGlobalRef( JNIEnvHelper::NewObject( _getObjectClass(), mid, static_cast<jstring>( p0 ) ) );
}

IllegalAccessExceptionProxy::~IllegalAccessExceptionProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

IllegalAccessExceptionProxy& IllegalAccessExceptionProxy::operator=(const IllegalAccessExceptionProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
