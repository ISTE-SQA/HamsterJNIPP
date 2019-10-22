#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "Locale_FilteringModeProxy.h"

// includes for parameter and return type proxy classes
#include "java\util\Locale_FilteringModeProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::util;


std::string Locale_FilteringModeProxy::className = "java/util/Locale$FilteringMode";
jclass Locale_FilteringModeProxy::objectClass = NULL;

jclass Locale_FilteringModeProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

Locale_FilteringModeProxy::Locale_FilteringModeProxy(void* unused)
{
}

jobject Locale_FilteringModeProxy::_getPeerObject() const
{
	return peerObject;
}

jclass Locale_FilteringModeProxy::getObjectClass()
{
	return _getObjectClass();
}

Locale_FilteringModeProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
Locale_FilteringModeProxy::Locale_FilteringModeProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

Locale_FilteringModeProxy::~Locale_FilteringModeProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

Locale_FilteringModeProxy& Locale_FilteringModeProxy::operator=(const Locale_FilteringModeProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
::java::util::Locale_FilteringModeProxy Locale_FilteringModeProxy::valueOf(::net::sourceforge::jnipp::JStringHelper p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "valueOf", "(Ljava/lang/String;)Ljava/util/Locale$FilteringMode;" );
	return ::java::util::Locale_FilteringModeProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, static_cast<jstring>( p0 ) )  );
}

::net::sourceforge::jnipp::PA<::java::util::Locale_FilteringModeProxy>::ProxyArray<1> Locale_FilteringModeProxy::values()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "values", "()[Ljava/util/Locale$FilteringMode;" );
	return ::net::sourceforge::jnipp::PA<::java::util::Locale_FilteringModeProxy>::ProxyArray<1>( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid )  );
}

