#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "CodeSourceProxy.h"

// includes for parameter and return type proxy classes
#include "java\net\URLProxy.h"
#include "java\security\CodeSignerProxy.h"
#include "java\security\cert\CertificateProxy.h"
#include "java\lang\ObjectProxy.h"
#include "java\net\SocketPermissionProxy.h"
#include "java\security\cert\CertificateFactoryProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::security;


std::string CodeSourceProxy::className = "java/security/CodeSource";
jclass CodeSourceProxy::objectClass = NULL;

jclass CodeSourceProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

CodeSourceProxy::CodeSourceProxy(void* unused)
{
}

jobject CodeSourceProxy::_getPeerObject() const
{
	return peerObject;
}

jclass CodeSourceProxy::getObjectClass()
{
	return _getObjectClass();
}

CodeSourceProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
CodeSourceProxy::CodeSourceProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

CodeSourceProxy::CodeSourceProxy(::java::net::URLProxy p0, ::net::sourceforge::jnipp::PA<::java::security::CodeSignerProxy>::ProxyArray<1> p1)
{
	jmethodID mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "<init>", "(Ljava/net/URL;[Ljava/security/CodeSigner;)V" );
	peerObject = JNIEnvHelper::NewGlobalRef( JNIEnvHelper::NewObject( _getObjectClass(), mid, static_cast<jobject>( p0 ), static_cast<jobjectArray>( p1 ) ) );
}

CodeSourceProxy::CodeSourceProxy(::java::net::URLProxy p0, ::net::sourceforge::jnipp::PA<::java::security::cert::CertificateProxy>::ProxyArray<1> p1)
{
	jmethodID mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "<init>", "(Ljava/net/URL;[Ljava/security/cert/Certificate;)V" );
	peerObject = JNIEnvHelper::NewGlobalRef( JNIEnvHelper::NewObject( _getObjectClass(), mid, static_cast<jobject>( p0 ), static_cast<jobjectArray>( p1 ) ) );
}

CodeSourceProxy::~CodeSourceProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

CodeSourceProxy& CodeSourceProxy::operator=(const CodeSourceProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
jboolean CodeSourceProxy::equals(::java::lang::ObjectProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "equals", "(Ljava/lang/Object;)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

jboolean CodeSourceProxy::implies(::java::security::CodeSourceProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "implies", "(Ljava/security/CodeSource;)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

::java::net::URLProxy CodeSourceProxy::getLocation()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getLocation", "()Ljava/net/URL;" );
	return ::java::net::URLProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::net::sourceforge::jnipp::PA<::java::security::CodeSignerProxy>::ProxyArray<1> CodeSourceProxy::getCodeSigners()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getCodeSigners", "()[Ljava/security/CodeSigner;" );
	return ::net::sourceforge::jnipp::PA<::java::security::CodeSignerProxy>::ProxyArray<1>( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::net::sourceforge::jnipp::PA<::java::security::cert::CertificateProxy>::ProxyArray<1> CodeSourceProxy::getCertificates()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getCertificates", "()[Ljava/security/cert/Certificate;" );
	return ::net::sourceforge::jnipp::PA<::java::security::cert::CertificateProxy>::ProxyArray<1>( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

jint CodeSourceProxy::hashCode()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "hashCode", "()I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid );
}

::net::sourceforge::jnipp::JStringHelper CodeSourceProxy::toString()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "toString", "()Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

