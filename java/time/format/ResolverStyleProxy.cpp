#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "ResolverStyleProxy.h"

// includes for parameter and return type proxy classes
#include "java\time\format\ResolverStyleProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::time::format;


std::string ResolverStyleProxy::className = "java/time/format/ResolverStyle";
jclass ResolverStyleProxy::objectClass = NULL;

jclass ResolverStyleProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

ResolverStyleProxy::ResolverStyleProxy(void* unused)
{
}

jobject ResolverStyleProxy::_getPeerObject() const
{
	return peerObject;
}

jclass ResolverStyleProxy::getObjectClass()
{
	return _getObjectClass();
}

ResolverStyleProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
ResolverStyleProxy::ResolverStyleProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

ResolverStyleProxy::~ResolverStyleProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

ResolverStyleProxy& ResolverStyleProxy::operator=(const ResolverStyleProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
::java::time::format::ResolverStyleProxy ResolverStyleProxy::valueOf(::net::sourceforge::jnipp::JStringHelper p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "valueOf", "(Ljava/lang/String;)Ljava/time/format/ResolverStyle;" );
	return ::java::time::format::ResolverStyleProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, static_cast<jstring>( p0 ) )  );
}

::net::sourceforge::jnipp::PA<::java::time::format::ResolverStyleProxy>::ProxyArray<1> ResolverStyleProxy::values()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "values", "()[Ljava/time/format/ResolverStyle;" );
	return ::net::sourceforge::jnipp::PA<::java::time::format::ResolverStyleProxy>::ProxyArray<1>( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid )  );
}

