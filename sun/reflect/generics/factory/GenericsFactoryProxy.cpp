#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "GenericsFactoryProxy.h"

// includes for parameter and return type proxy classes
#include "java\lang\reflect\TypeProxy.h"
#include "java\lang\reflect\ParameterizedTypeProxy.h"
#include "java\lang\reflect\TypeVariableProxy.h"
#include "sun\reflect\generics\tree\FieldTypeSignatureProxy.h"
#include "java\lang\reflect\WildcardTypeProxy.h"

using namespace net::sourceforge::jnipp;
using namespace sun::reflect::generics::factory;


std::string GenericsFactoryProxy::className = "sun/reflect/generics/factory/GenericsFactory";
jclass GenericsFactoryProxy::objectClass = NULL;

jclass GenericsFactoryProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

GenericsFactoryProxy::GenericsFactoryProxy(void* unused)
{
}

jobject GenericsFactoryProxy::_getPeerObject() const
{
	return peerObject;
}

jclass GenericsFactoryProxy::getObjectClass()
{
	return _getObjectClass();
}

GenericsFactoryProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
GenericsFactoryProxy::GenericsFactoryProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

GenericsFactoryProxy::~GenericsFactoryProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

GenericsFactoryProxy& GenericsFactoryProxy::operator=(const GenericsFactoryProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
::java::lang::reflect::ParameterizedTypeProxy GenericsFactoryProxy::makeParameterizedType(::java::lang::reflect::TypeProxy p0, ::net::sourceforge::jnipp::PA<::java::lang::reflect::TypeProxy>::ProxyArray<1> p1, ::java::lang::reflect::TypeProxy p2)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "makeParameterizedType", "(Ljava/lang/reflect/Type;[Ljava/lang/reflect/Type;Ljava/lang/reflect/Type;)Ljava/lang/reflect/ParameterizedType;" );
	return ::java::lang::reflect::ParameterizedTypeProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), static_cast<jobjectArray>( p1 ), static_cast<jobject>( p2 ) )  );
}

::java::lang::reflect::TypeProxy GenericsFactoryProxy::makeArrayType(::java::lang::reflect::TypeProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "makeArrayType", "(Ljava/lang/reflect/Type;)Ljava/lang/reflect/Type;" );
	return ::java::lang::reflect::TypeProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::java::lang::reflect::TypeProxy GenericsFactoryProxy::makeBool()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "makeBool", "()Ljava/lang/reflect/Type;" );
	return ::java::lang::reflect::TypeProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::lang::reflect::TypeProxy GenericsFactoryProxy::makeByte()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "makeByte", "()Ljava/lang/reflect/Type;" );
	return ::java::lang::reflect::TypeProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::lang::reflect::TypeProxy GenericsFactoryProxy::makeChar()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "makeChar", "()Ljava/lang/reflect/Type;" );
	return ::java::lang::reflect::TypeProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::lang::reflect::TypeProxy GenericsFactoryProxy::makeDouble()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "makeDouble", "()Ljava/lang/reflect/Type;" );
	return ::java::lang::reflect::TypeProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::lang::reflect::TypeProxy GenericsFactoryProxy::makeFloat()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "makeFloat", "()Ljava/lang/reflect/Type;" );
	return ::java::lang::reflect::TypeProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::lang::reflect::TypeProxy GenericsFactoryProxy::makeInt()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "makeInt", "()Ljava/lang/reflect/Type;" );
	return ::java::lang::reflect::TypeProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::lang::reflect::TypeProxy GenericsFactoryProxy::makeLong()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "makeLong", "()Ljava/lang/reflect/Type;" );
	return ::java::lang::reflect::TypeProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::lang::reflect::TypeProxy GenericsFactoryProxy::makeNamedType(::net::sourceforge::jnipp::JStringHelper p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "makeNamedType", "(Ljava/lang/String;)Ljava/lang/reflect/Type;" );
	return ::java::lang::reflect::TypeProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jstring>( p0 ) )  );
}

::java::lang::reflect::TypeProxy GenericsFactoryProxy::makeShort()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "makeShort", "()Ljava/lang/reflect/Type;" );
	return ::java::lang::reflect::TypeProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::lang::reflect::TypeProxy GenericsFactoryProxy::makeVoid()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "makeVoid", "()Ljava/lang/reflect/Type;" );
	return ::java::lang::reflect::TypeProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::lang::reflect::TypeVariableProxy GenericsFactoryProxy::findTypeVariable(::net::sourceforge::jnipp::JStringHelper p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "findTypeVariable", "(Ljava/lang/String;)Ljava/lang/reflect/TypeVariable;" );
	return ::java::lang::reflect::TypeVariableProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jstring>( p0 ) )  );
}

::java::lang::reflect::TypeVariableProxy GenericsFactoryProxy::makeTypeVariable(::net::sourceforge::jnipp::JStringHelper p0, ::net::sourceforge::jnipp::PA<::sun::reflect::generics::tree::FieldTypeSignatureProxy>::ProxyArray<1> p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "makeTypeVariable", "(Ljava/lang/String;[Lsun/reflect/generics/tree/FieldTypeSignature;)Ljava/lang/reflect/TypeVariable;" );
	return ::java::lang::reflect::TypeVariableProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jstring>( p0 ), static_cast<jobjectArray>( p1 ) )  );
}

::java::lang::reflect::WildcardTypeProxy GenericsFactoryProxy::makeWildcard(::net::sourceforge::jnipp::PA<::sun::reflect::generics::tree::FieldTypeSignatureProxy>::ProxyArray<1> p0, ::net::sourceforge::jnipp::PA<::sun::reflect::generics::tree::FieldTypeSignatureProxy>::ProxyArray<1> p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "makeWildcard", "([Lsun/reflect/generics/tree/FieldTypeSignature;[Lsun/reflect/generics/tree/FieldTypeSignature;)Ljava/lang/reflect/WildcardType;" );
	return ::java::lang::reflect::WildcardTypeProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobjectArray>( p0 ), static_cast<jobjectArray>( p1 ) )  );
}

