#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "WatchEvent_ModifierProxy.h"

// includes for parameter and return type proxy classes

using namespace net::sourceforge::jnipp;
using namespace java::nio::file;


std::string WatchEvent_ModifierProxy::className = "java/nio/file/WatchEvent$Modifier";
jclass WatchEvent_ModifierProxy::objectClass = NULL;

jclass WatchEvent_ModifierProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

WatchEvent_ModifierProxy::WatchEvent_ModifierProxy(void* unused)
{
}

jobject WatchEvent_ModifierProxy::_getPeerObject() const
{
	return peerObject;
}

jclass WatchEvent_ModifierProxy::getObjectClass()
{
	return _getObjectClass();
}

WatchEvent_ModifierProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
WatchEvent_ModifierProxy::WatchEvent_ModifierProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

WatchEvent_ModifierProxy::~WatchEvent_ModifierProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

WatchEvent_ModifierProxy& WatchEvent_ModifierProxy::operator=(const WatchEvent_ModifierProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
::net::sourceforge::jnipp::JStringHelper WatchEvent_ModifierProxy::name()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "name", "()Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

