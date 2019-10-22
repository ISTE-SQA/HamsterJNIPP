#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "MethodRepositoryProxy.h"

// includes for parameter and return type proxy classes
#include "java\lang\reflect\TypeProxy.h"
#include "sun\reflect\generics\factory\GenericsFactoryProxy.h"

using namespace net::sourceforge::jnipp;
using namespace sun::reflect::generics::repository;


std::string MethodRepositoryProxy::className = "sun/reflect/generics/repository/MethodRepository";
jclass MethodRepositoryProxy::objectClass = NULL;

jclass MethodRepositoryProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

MethodRepositoryProxy::MethodRepositoryProxy(void* unused)
{
}

jobject MethodRepositoryProxy::_getPeerObject() const
{
	return peerObject;
}

jclass MethodRepositoryProxy::getObjectClass()
{
	return _getObjectClass();
}

MethodRepositoryProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
MethodRepositoryProxy::MethodRepositoryProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

MethodRepositoryProxy::~MethodRepositoryProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

MethodRepositoryProxy& MethodRepositoryProxy::operator=(const MethodRepositoryProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
::java::lang::reflect::TypeProxy MethodRepositoryProxy::getReturnType()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getReturnType", "()Ljava/lang/reflect/Type;" );
	return ::java::lang::reflect::TypeProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::sun::reflect::generics::repository::MethodRepositoryProxy MethodRepositoryProxy::make(::net::sourceforge::jnipp::JStringHelper p0, ::sun::reflect::generics::factory::GenericsFactoryProxy p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "make", "(Ljava/lang/String;Lsun/reflect/generics/factory/GenericsFactory;)Lsun/reflect/generics/repository/MethodRepository;" );
	return ::sun::reflect::generics::repository::MethodRepositoryProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, static_cast<jstring>( p0 ), static_cast<jobject>( p1 ) )  );
}

