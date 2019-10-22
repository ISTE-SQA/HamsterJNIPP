#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "FormatStyleProxy.h"

// includes for parameter and return type proxy classes
#include "java\time\format\FormatStyleProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::time::format;


std::string FormatStyleProxy::className = "java/time/format/FormatStyle";
jclass FormatStyleProxy::objectClass = NULL;

jclass FormatStyleProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

FormatStyleProxy::FormatStyleProxy(void* unused)
{
}

jobject FormatStyleProxy::_getPeerObject() const
{
	return peerObject;
}

jclass FormatStyleProxy::getObjectClass()
{
	return _getObjectClass();
}

FormatStyleProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
FormatStyleProxy::FormatStyleProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

FormatStyleProxy::~FormatStyleProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

FormatStyleProxy& FormatStyleProxy::operator=(const FormatStyleProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
::java::time::format::FormatStyleProxy FormatStyleProxy::valueOf(::net::sourceforge::jnipp::JStringHelper p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "valueOf", "(Ljava/lang/String;)Ljava/time/format/FormatStyle;" );
	return ::java::time::format::FormatStyleProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, static_cast<jstring>( p0 ) )  );
}

::net::sourceforge::jnipp::PA<::java::time::format::FormatStyleProxy>::ProxyArray<1> FormatStyleProxy::values()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "values", "()[Ljava/time/format/FormatStyle;" );
	return ::net::sourceforge::jnipp::PA<::java::time::format::FormatStyleProxy>::ProxyArray<1>( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid )  );
}

