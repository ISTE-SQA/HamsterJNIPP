#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "TypeVariableProxy.h"

// includes for parameter and return type proxy classes
#include "java\lang\reflect\AnnotatedTypeProxy.h"
#include "java\lang\reflect\GenericDeclarationProxy.h"
#include "java\lang\reflect\TypeProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::lang::reflect;


std::string TypeVariableProxy::className = "java/lang/reflect/TypeVariable";
jclass TypeVariableProxy::objectClass = NULL;

jclass TypeVariableProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

TypeVariableProxy::TypeVariableProxy(void* unused)
{
}

jobject TypeVariableProxy::_getPeerObject() const
{
	return peerObject;
}

jclass TypeVariableProxy::getObjectClass()
{
	return _getObjectClass();
}

TypeVariableProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
TypeVariableProxy::TypeVariableProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

TypeVariableProxy::~TypeVariableProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

TypeVariableProxy& TypeVariableProxy::operator=(const TypeVariableProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
::net::sourceforge::jnipp::JStringHelper TypeVariableProxy::getName()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getName", "()Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::net::sourceforge::jnipp::PA<::java::lang::reflect::AnnotatedTypeProxy>::ProxyArray<1> TypeVariableProxy::getAnnotatedBounds()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getAnnotatedBounds", "()[Ljava/lang/reflect/AnnotatedType;" );
	return ::net::sourceforge::jnipp::PA<::java::lang::reflect::AnnotatedTypeProxy>::ProxyArray<1>( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::lang::reflect::GenericDeclarationProxy TypeVariableProxy::getGenericDeclaration()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getGenericDeclaration", "()Ljava/lang/reflect/GenericDeclaration;" );
	return ::java::lang::reflect::GenericDeclarationProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::net::sourceforge::jnipp::PA<::java::lang::reflect::TypeProxy>::ProxyArray<1> TypeVariableProxy::getBounds()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getBounds", "()[Ljava/lang/reflect/Type;" );
	return ::net::sourceforge::jnipp::PA<::java::lang::reflect::TypeProxy>::ProxyArray<1>( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

