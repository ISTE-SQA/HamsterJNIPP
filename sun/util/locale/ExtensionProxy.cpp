#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "ExtensionProxy.h"

// includes for parameter and return type proxy classes

using namespace net::sourceforge::jnipp;
using namespace sun::util::locale;


std::string ExtensionProxy::className = "sun/util/locale/Extension";
jclass ExtensionProxy::objectClass = NULL;

jclass ExtensionProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

ExtensionProxy::ExtensionProxy(void* unused)
{
}

jobject ExtensionProxy::_getPeerObject() const
{
	return peerObject;
}

jclass ExtensionProxy::getObjectClass()
{
	return _getObjectClass();
}

ExtensionProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
ExtensionProxy::ExtensionProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

ExtensionProxy::~ExtensionProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

ExtensionProxy& ExtensionProxy::operator=(const ExtensionProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
jchar ExtensionProxy::getKey()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getKey", "()C" );
	return JNIEnvHelper::CallCharMethod( _getPeerObject(), mid );
}

::net::sourceforge::jnipp::JStringHelper ExtensionProxy::getID()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getID", "()Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::net::sourceforge::jnipp::JStringHelper ExtensionProxy::getValue()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getValue", "()Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::net::sourceforge::jnipp::JStringHelper ExtensionProxy::toString()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "toString", "()Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

