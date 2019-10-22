#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "IsoEraProxy.h"

// includes for parameter and return type proxy classes
#include "java\time\chrono\IsoEraProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::time::chrono;


std::string IsoEraProxy::className = "java/time/chrono/IsoEra";
jclass IsoEraProxy::objectClass = NULL;

jclass IsoEraProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

IsoEraProxy::IsoEraProxy(void* unused)
{
}

jobject IsoEraProxy::_getPeerObject() const
{
	return peerObject;
}

jclass IsoEraProxy::getObjectClass()
{
	return _getObjectClass();
}

IsoEraProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
IsoEraProxy::IsoEraProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

IsoEraProxy::~IsoEraProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

IsoEraProxy& IsoEraProxy::operator=(const IsoEraProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
jint IsoEraProxy::getValue()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getValue", "()I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid );
}

::java::time::chrono::IsoEraProxy IsoEraProxy::of(jint p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "of", "(I)Ljava/time/chrono/IsoEra;" );
	return ::java::time::chrono::IsoEraProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, p0 )  );
}

::java::time::chrono::IsoEraProxy IsoEraProxy::valueOf(::net::sourceforge::jnipp::JStringHelper p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "valueOf", "(Ljava/lang/String;)Ljava/time/chrono/IsoEra;" );
	return ::java::time::chrono::IsoEraProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, static_cast<jstring>( p0 ) )  );
}

::net::sourceforge::jnipp::PA<::java::time::chrono::IsoEraProxy>::ProxyArray<1> IsoEraProxy::values()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "values", "()[Ljava/time/chrono/IsoEra;" );
	return ::net::sourceforge::jnipp::PA<::java::time::chrono::IsoEraProxy>::ProxyArray<1>( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid )  );
}

