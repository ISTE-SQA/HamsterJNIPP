#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "Locale_CategoryProxy.h"

// includes for parameter and return type proxy classes
#include "java\util\Locale_CategoryProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::util;


std::string Locale_CategoryProxy::className = "java/util/Locale$Category";
jclass Locale_CategoryProxy::objectClass = NULL;

jclass Locale_CategoryProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

Locale_CategoryProxy::Locale_CategoryProxy(void* unused)
{
}

jobject Locale_CategoryProxy::_getPeerObject() const
{
	return peerObject;
}

jclass Locale_CategoryProxy::getObjectClass()
{
	return _getObjectClass();
}

Locale_CategoryProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
Locale_CategoryProxy::Locale_CategoryProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

Locale_CategoryProxy::~Locale_CategoryProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

Locale_CategoryProxy& Locale_CategoryProxy::operator=(const Locale_CategoryProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
::java::util::Locale_CategoryProxy Locale_CategoryProxy::valueOf(::net::sourceforge::jnipp::JStringHelper p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "valueOf", "(Ljava/lang/String;)Ljava/util/Locale$Category;" );
	return ::java::util::Locale_CategoryProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, static_cast<jstring>( p0 ) )  );
}

::net::sourceforge::jnipp::PA<::java::util::Locale_CategoryProxy>::ProxyArray<1> Locale_CategoryProxy::values()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "values", "()[Ljava/util/Locale$Category;" );
	return ::net::sourceforge::jnipp::PA<::java::util::Locale_CategoryProxy>::ProxyArray<1>( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid )  );
}

