#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "ConstructorRepositoryProxy.h"

// includes for parameter and return type proxy classes
#include "java\lang\reflect\TypeProxy.h"
#include "sun\reflect\generics\factory\GenericsFactoryProxy.h"

using namespace net::sourceforge::jnipp;
using namespace sun::reflect::generics::repository;


std::string ConstructorRepositoryProxy::className = "sun/reflect/generics/repository/ConstructorRepository";
jclass ConstructorRepositoryProxy::objectClass = NULL;

jclass ConstructorRepositoryProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

ConstructorRepositoryProxy::ConstructorRepositoryProxy(void* unused)
{
}

jobject ConstructorRepositoryProxy::_getPeerObject() const
{
	return peerObject;
}

jclass ConstructorRepositoryProxy::getObjectClass()
{
	return _getObjectClass();
}

ConstructorRepositoryProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
ConstructorRepositoryProxy::ConstructorRepositoryProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

ConstructorRepositoryProxy::~ConstructorRepositoryProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

ConstructorRepositoryProxy& ConstructorRepositoryProxy::operator=(const ConstructorRepositoryProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
::net::sourceforge::jnipp::PA<::java::lang::reflect::TypeProxy>::ProxyArray<1> ConstructorRepositoryProxy::getExceptionTypes()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getExceptionTypes", "()[Ljava/lang/reflect/Type;" );
	return ::net::sourceforge::jnipp::PA<::java::lang::reflect::TypeProxy>::ProxyArray<1>( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::net::sourceforge::jnipp::PA<::java::lang::reflect::TypeProxy>::ProxyArray<1> ConstructorRepositoryProxy::getParameterTypes()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getParameterTypes", "()[Ljava/lang/reflect/Type;" );
	return ::net::sourceforge::jnipp::PA<::java::lang::reflect::TypeProxy>::ProxyArray<1>( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::sun::reflect::generics::repository::ConstructorRepositoryProxy ConstructorRepositoryProxy::make(::net::sourceforge::jnipp::JStringHelper p0, ::sun::reflect::generics::factory::GenericsFactoryProxy p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "make", "(Ljava/lang/String;Lsun/reflect/generics/factory/GenericsFactory;)Lsun/reflect/generics/repository/ConstructorRepository;" );
	return ::sun::reflect::generics::repository::ConstructorRepositoryProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, static_cast<jstring>( p0 ), static_cast<jobject>( p1 ) )  );
}

