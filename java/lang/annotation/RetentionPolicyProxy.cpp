#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "RetentionPolicyProxy.h"

// includes for parameter and return type proxy classes
#include "java\lang\annotation\RetentionPolicyProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::lang::annotation;


std::string RetentionPolicyProxy::className = "java/lang/annotation/RetentionPolicy";
jclass RetentionPolicyProxy::objectClass = NULL;

jclass RetentionPolicyProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

RetentionPolicyProxy::RetentionPolicyProxy(void* unused)
{
}

jobject RetentionPolicyProxy::_getPeerObject() const
{
	return peerObject;
}

jclass RetentionPolicyProxy::getObjectClass()
{
	return _getObjectClass();
}

RetentionPolicyProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
RetentionPolicyProxy::RetentionPolicyProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

RetentionPolicyProxy::~RetentionPolicyProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

RetentionPolicyProxy& RetentionPolicyProxy::operator=(const RetentionPolicyProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
::java::lang::annotation::RetentionPolicyProxy RetentionPolicyProxy::valueOf(::net::sourceforge::jnipp::JStringHelper p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "valueOf", "(Ljava/lang/String;)Ljava/lang/annotation/RetentionPolicy;" );
	return ::java::lang::annotation::RetentionPolicyProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, static_cast<jstring>( p0 ) )  );
}

::net::sourceforge::jnipp::PA<::java::lang::annotation::RetentionPolicyProxy>::ProxyArray<1> RetentionPolicyProxy::values()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "values", "()[Ljava/lang/annotation/RetentionPolicy;" );
	return ::net::sourceforge::jnipp::PA<::java::lang::annotation::RetentionPolicyProxy>::ProxyArray<1>( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid )  );
}

