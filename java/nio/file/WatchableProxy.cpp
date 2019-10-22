#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "WatchableProxy.h"

// includes for parameter and return type proxy classes
#include "java\nio\file\WatchServiceProxy.h"
#include "java\nio\file\WatchEvent_KindProxy.h"
#include "java\nio\file\WatchKeyProxy.h"
#include "java\nio\file\WatchEvent_ModifierProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::nio::file;


std::string WatchableProxy::className = "java/nio/file/Watchable";
jclass WatchableProxy::objectClass = NULL;

jclass WatchableProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

WatchableProxy::WatchableProxy(void* unused)
{
}

jobject WatchableProxy::_getPeerObject() const
{
	return peerObject;
}

jclass WatchableProxy::getObjectClass()
{
	return _getObjectClass();
}

WatchableProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
WatchableProxy::WatchableProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

WatchableProxy::~WatchableProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

WatchableProxy& WatchableProxy::operator=(const WatchableProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
::java::nio::file::WatchKeyProxy WatchableProxy::_register(::java::nio::file::WatchServiceProxy p0, ::net::sourceforge::jnipp::PA<::java::nio::file::WatchEvent_KindProxy>::ProxyArray<1> p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "register", "(Ljava/nio/file/WatchService;[Ljava/nio/file/WatchEvent$Kind;)Ljava/nio/file/WatchKey;" );
	return ::java::nio::file::WatchKeyProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), static_cast<jobjectArray>( p1 ) )  );
}

::java::nio::file::WatchKeyProxy WatchableProxy::_register(::java::nio::file::WatchServiceProxy p0, ::net::sourceforge::jnipp::PA<::java::nio::file::WatchEvent_KindProxy>::ProxyArray<1> p1, ::net::sourceforge::jnipp::PA<::java::nio::file::WatchEvent_ModifierProxy>::ProxyArray<1> p2)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "register", "(Ljava/nio/file/WatchService;[Ljava/nio/file/WatchEvent$Kind;[Ljava/nio/file/WatchEvent$Modifier;)Ljava/nio/file/WatchKey;" );
	return ::java::nio::file::WatchKeyProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), static_cast<jobjectArray>( p1 ), static_cast<jobjectArray>( p2 ) )  );
}

