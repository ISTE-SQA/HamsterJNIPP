#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "TextStyleProxy.h"

// includes for parameter and return type proxy classes
#include "java\time\format\TextStyleProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::time::format;


std::string TextStyleProxy::className = "java/time/format/TextStyle";
jclass TextStyleProxy::objectClass = NULL;

jclass TextStyleProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

TextStyleProxy::TextStyleProxy(void* unused)
{
}

jobject TextStyleProxy::_getPeerObject() const
{
	return peerObject;
}

jclass TextStyleProxy::getObjectClass()
{
	return _getObjectClass();
}

TextStyleProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
TextStyleProxy::TextStyleProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

TextStyleProxy::~TextStyleProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

TextStyleProxy& TextStyleProxy::operator=(const TextStyleProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
jboolean TextStyleProxy::isStandalone()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "isStandalone", "()Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid );
}

::java::time::format::TextStyleProxy TextStyleProxy::asNormal()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "asNormal", "()Ljava/time/format/TextStyle;" );
	return ::java::time::format::TextStyleProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::time::format::TextStyleProxy TextStyleProxy::asStandalone()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "asStandalone", "()Ljava/time/format/TextStyle;" );
	return ::java::time::format::TextStyleProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::time::format::TextStyleProxy TextStyleProxy::valueOf(::net::sourceforge::jnipp::JStringHelper p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "valueOf", "(Ljava/lang/String;)Ljava/time/format/TextStyle;" );
	return ::java::time::format::TextStyleProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, static_cast<jstring>( p0 ) )  );
}

::net::sourceforge::jnipp::PA<::java::time::format::TextStyleProxy>::ProxyArray<1> TextStyleProxy::values()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "values", "()[Ljava/time/format/TextStyle;" );
	return ::net::sourceforge::jnipp::PA<::java::time::format::TextStyleProxy>::ProxyArray<1>( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid )  );
}

