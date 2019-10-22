#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "WatchEvent_KindProxy.h"

// includes for parameter and return type proxy classes
#include "java\lang\ClassProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::nio::file;


std::string WatchEvent_KindProxy::className = "java/nio/file/WatchEvent$Kind";
jclass WatchEvent_KindProxy::objectClass = NULL;

jclass WatchEvent_KindProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

WatchEvent_KindProxy::WatchEvent_KindProxy(void* unused)
{
}

jobject WatchEvent_KindProxy::_getPeerObject() const
{
	return peerObject;
}

jclass WatchEvent_KindProxy::getObjectClass()
{
	return _getObjectClass();
}

WatchEvent_KindProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
WatchEvent_KindProxy::WatchEvent_KindProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

WatchEvent_KindProxy::~WatchEvent_KindProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

WatchEvent_KindProxy& WatchEvent_KindProxy::operator=(const WatchEvent_KindProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
::java::lang::ClassProxy WatchEvent_KindProxy::type()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "type", "()Ljava/lang/Class;" );
	return ::java::lang::ClassProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::net::sourceforge::jnipp::JStringHelper WatchEvent_KindProxy::name()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "name", "()Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

