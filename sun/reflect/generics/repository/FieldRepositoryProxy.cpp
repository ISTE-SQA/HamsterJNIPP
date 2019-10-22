#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "FieldRepositoryProxy.h"

// includes for parameter and return type proxy classes
#include "java\lang\reflect\TypeProxy.h"
#include "sun\reflect\generics\factory\GenericsFactoryProxy.h"

using namespace net::sourceforge::jnipp;
using namespace sun::reflect::generics::repository;


std::string FieldRepositoryProxy::className = "sun/reflect/generics/repository/FieldRepository";
jclass FieldRepositoryProxy::objectClass = NULL;

jclass FieldRepositoryProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

FieldRepositoryProxy::FieldRepositoryProxy(void* unused)
{
}

jobject FieldRepositoryProxy::_getPeerObject() const
{
	return peerObject;
}

jclass FieldRepositoryProxy::getObjectClass()
{
	return _getObjectClass();
}

FieldRepositoryProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
FieldRepositoryProxy::FieldRepositoryProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

FieldRepositoryProxy::~FieldRepositoryProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

FieldRepositoryProxy& FieldRepositoryProxy::operator=(const FieldRepositoryProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
::java::lang::reflect::TypeProxy FieldRepositoryProxy::getGenericType()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getGenericType", "()Ljava/lang/reflect/Type;" );
	return ::java::lang::reflect::TypeProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::sun::reflect::generics::repository::FieldRepositoryProxy FieldRepositoryProxy::make(::net::sourceforge::jnipp::JStringHelper p0, ::sun::reflect::generics::factory::GenericsFactoryProxy p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "make", "(Ljava/lang/String;Lsun/reflect/generics/factory/GenericsFactory;)Lsun/reflect/generics/repository/FieldRepository;" );
	return ::sun::reflect::generics::repository::FieldRepositoryProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, static_cast<jstring>( p0 ), static_cast<jobject>( p1 ) )  );
}

