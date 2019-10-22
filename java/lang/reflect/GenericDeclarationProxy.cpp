#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "GenericDeclarationProxy.h"

// includes for parameter and return type proxy classes
#include "java\lang\reflect\TypeVariableProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::lang::reflect;


std::string GenericDeclarationProxy::className = "java/lang/reflect/GenericDeclaration";
jclass GenericDeclarationProxy::objectClass = NULL;

jclass GenericDeclarationProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

GenericDeclarationProxy::GenericDeclarationProxy(void* unused)
{
}

jobject GenericDeclarationProxy::_getPeerObject() const
{
	return peerObject;
}

jclass GenericDeclarationProxy::getObjectClass()
{
	return _getObjectClass();
}

GenericDeclarationProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
GenericDeclarationProxy::GenericDeclarationProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

GenericDeclarationProxy::~GenericDeclarationProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

GenericDeclarationProxy& GenericDeclarationProxy::operator=(const GenericDeclarationProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
::net::sourceforge::jnipp::PA<::java::lang::reflect::TypeVariableProxy>::ProxyArray<1> GenericDeclarationProxy::getTypeParameters()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getTypeParameters", "()[Ljava/lang/reflect/TypeVariable;" );
	return ::net::sourceforge::jnipp::PA<::java::lang::reflect::TypeVariableProxy>::ProxyArray<1>( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

