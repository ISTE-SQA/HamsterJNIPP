#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "TypeProxy.h"

// includes for parameter and return type proxy classes

using namespace net::sourceforge::jnipp;
using namespace java::lang::reflect;


std::string TypeProxy::className = "java/lang/reflect/Type";
jclass TypeProxy::objectClass = NULL;

jclass TypeProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

TypeProxy::TypeProxy(void* unused)
{
}

jobject TypeProxy::_getPeerObject() const
{
	return peerObject;
}

jclass TypeProxy::getObjectClass()
{
	return _getObjectClass();
}

TypeProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
TypeProxy::TypeProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

TypeProxy::~TypeProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

TypeProxy& TypeProxy::operator=(const TypeProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
::net::sourceforge::jnipp::JStringHelper TypeProxy::getTypeName()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getTypeName", "()Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

