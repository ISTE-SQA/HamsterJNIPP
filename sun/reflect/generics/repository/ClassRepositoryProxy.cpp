#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "ClassRepositoryProxy.h"

// includes for parameter and return type proxy classes
#include "java\lang\reflect\TypeProxy.h"
#include "sun\reflect\generics\factory\GenericsFactoryProxy.h"

using namespace net::sourceforge::jnipp;
using namespace sun::reflect::generics::repository;


std::string ClassRepositoryProxy::className = "sun/reflect/generics/repository/ClassRepository";
jclass ClassRepositoryProxy::objectClass = NULL;

jclass ClassRepositoryProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

ClassRepositoryProxy::ClassRepositoryProxy(void* unused)
{
}

jobject ClassRepositoryProxy::_getPeerObject() const
{
	return peerObject;
}

jclass ClassRepositoryProxy::getObjectClass()
{
	return _getObjectClass();
}

ClassRepositoryProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
ClassRepositoryProxy::ClassRepositoryProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

ClassRepositoryProxy::~ClassRepositoryProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

ClassRepositoryProxy& ClassRepositoryProxy::operator=(const ClassRepositoryProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
::java::lang::reflect::TypeProxy ClassRepositoryProxy::getSuperclass()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getSuperclass", "()Ljava/lang/reflect/Type;" );
	return ::java::lang::reflect::TypeProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::net::sourceforge::jnipp::PA<::java::lang::reflect::TypeProxy>::ProxyArray<1> ClassRepositoryProxy::getSuperInterfaces()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getSuperInterfaces", "()[Ljava/lang/reflect/Type;" );
	return ::net::sourceforge::jnipp::PA<::java::lang::reflect::TypeProxy>::ProxyArray<1>( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::sun::reflect::generics::repository::ClassRepositoryProxy ClassRepositoryProxy::make(::net::sourceforge::jnipp::JStringHelper p0, ::sun::reflect::generics::factory::GenericsFactoryProxy p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "make", "(Ljava/lang/String;Lsun/reflect/generics/factory/GenericsFactory;)Lsun/reflect/generics/repository/ClassRepository;" );
	return ::sun::reflect::generics::repository::ClassRepositoryProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, static_cast<jstring>( p0 ), static_cast<jobject>( p1 ) )  );
}

