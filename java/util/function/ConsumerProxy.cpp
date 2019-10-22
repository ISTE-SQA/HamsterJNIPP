#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "ConsumerProxy.h"

// includes for parameter and return type proxy classes
#include "java\lang\ObjectProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::util::function;


std::string ConsumerProxy::className = "java/util/function/Consumer";
jclass ConsumerProxy::objectClass = NULL;

jclass ConsumerProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

ConsumerProxy::ConsumerProxy(void* unused)
{
}

jobject ConsumerProxy::_getPeerObject() const
{
	return peerObject;
}

jclass ConsumerProxy::getObjectClass()
{
	return _getObjectClass();
}

ConsumerProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
ConsumerProxy::ConsumerProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

ConsumerProxy::~ConsumerProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

ConsumerProxy& ConsumerProxy::operator=(const ConsumerProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
void ConsumerProxy::accept(::java::lang::ObjectProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "accept", "(Ljava/lang/Object;)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

::java::util::function::ConsumerProxy ConsumerProxy::andThen(::java::util::function::ConsumerProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "andThen", "(Ljava/util/function/Consumer;)Ljava/util/function/Consumer;" );
	return ::java::util::function::ConsumerProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

