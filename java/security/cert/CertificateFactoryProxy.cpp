#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "CertificateFactoryProxy.h"

// includes for parameter and return type proxy classes
#include "java\security\ProviderProxy.h"
#include "java\io\InputStreamProxy.h"
#include "java\security\cert\CRLProxy.h"
#include "java\security\cert\CertPathProxy.h"
#include "java\util\ListProxy.h"
#include "java\security\cert\CertificateProxy.h"
#include "java\util\CollectionProxy.h"
#include "java\util\IteratorProxy.h"
#include "java\security\cert\CertificateFactorySpiProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::security::cert;


std::string CertificateFactoryProxy::className = "java/security/cert/CertificateFactory";
jclass CertificateFactoryProxy::objectClass = NULL;

jclass CertificateFactoryProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

CertificateFactoryProxy::CertificateFactoryProxy(void* unused)
{
}

jobject CertificateFactoryProxy::_getPeerObject() const
{
	return peerObject;
}

jclass CertificateFactoryProxy::getObjectClass()
{
	return _getObjectClass();
}

CertificateFactoryProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
CertificateFactoryProxy::CertificateFactoryProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

CertificateFactoryProxy::~CertificateFactoryProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

CertificateFactoryProxy& CertificateFactoryProxy::operator=(const CertificateFactoryProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
::net::sourceforge::jnipp::JStringHelper CertificateFactoryProxy::getType()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getType", "()Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::security::ProviderProxy CertificateFactoryProxy::getProvider()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getProvider", "()Ljava/security/Provider;" );
	return ::java::security::ProviderProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::security::cert::CRLProxy CertificateFactoryProxy::generateCRL(::java::io::InputStreamProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "generateCRL", "(Ljava/io/InputStream;)Ljava/security/cert/CRL;" );
	return ::java::security::cert::CRLProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::java::security::cert::CertPathProxy CertificateFactoryProxy::generateCertPath(::java::io::InputStreamProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "generateCertPath", "(Ljava/io/InputStream;)Ljava/security/cert/CertPath;" );
	return ::java::security::cert::CertPathProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::java::security::cert::CertPathProxy CertificateFactoryProxy::generateCertPath(::java::io::InputStreamProxy p0, ::net::sourceforge::jnipp::JStringHelper p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "generateCertPath", "(Ljava/io/InputStream;Ljava/lang/String;)Ljava/security/cert/CertPath;" );
	return ::java::security::cert::CertPathProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), static_cast<jstring>( p1 ) )  );
}

::java::security::cert::CertPathProxy CertificateFactoryProxy::generateCertPath(::java::util::ListProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "generateCertPath", "(Ljava/util/List;)Ljava/security/cert/CertPath;" );
	return ::java::security::cert::CertPathProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::java::security::cert::CertificateProxy CertificateFactoryProxy::generateCertificate(::java::io::InputStreamProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "generateCertificate", "(Ljava/io/InputStream;)Ljava/security/cert/Certificate;" );
	return ::java::security::cert::CertificateProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::java::util::CollectionProxy CertificateFactoryProxy::generateCRLs(::java::io::InputStreamProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "generateCRLs", "(Ljava/io/InputStream;)Ljava/util/Collection;" );
	return ::java::util::CollectionProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::java::util::CollectionProxy CertificateFactoryProxy::generateCertificates(::java::io::InputStreamProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "generateCertificates", "(Ljava/io/InputStream;)Ljava/util/Collection;" );
	return ::java::util::CollectionProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::java::util::IteratorProxy CertificateFactoryProxy::getCertPathEncodings()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getCertPathEncodings", "()Ljava/util/Iterator;" );
	return ::java::util::IteratorProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::security::cert::CertificateFactoryProxy CertificateFactoryProxy::getInstance(::net::sourceforge::jnipp::JStringHelper p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "getInstance", "(Ljava/lang/String;)Ljava/security/cert/CertificateFactory;" );
	return ::java::security::cert::CertificateFactoryProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, static_cast<jstring>( p0 ) )  );
}

::java::security::cert::CertificateFactoryProxy CertificateFactoryProxy::getInstance(::net::sourceforge::jnipp::JStringHelper p0, ::net::sourceforge::jnipp::JStringHelper p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "getInstance", "(Ljava/lang/String;Ljava/lang/String;)Ljava/security/cert/CertificateFactory;" );
	return ::java::security::cert::CertificateFactoryProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, static_cast<jstring>( p0 ), static_cast<jstring>( p1 ) )  );
}

::java::security::cert::CertificateFactoryProxy CertificateFactoryProxy::getInstance(::net::sourceforge::jnipp::JStringHelper p0, ::java::security::ProviderProxy p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "getInstance", "(Ljava/lang/String;Ljava/security/Provider;)Ljava/security/cert/CertificateFactory;" );
	return ::java::security::cert::CertificateFactoryProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, static_cast<jstring>( p0 ), static_cast<jobject>( p1 ) )  );
}

