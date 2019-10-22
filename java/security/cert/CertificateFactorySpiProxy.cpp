#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "CertificateFactorySpiProxy.h"

// includes for parameter and return type proxy classes
#include "java\io\InputStreamProxy.h"
#include "java\security\cert\CRLProxy.h"
#include "java\security\cert\CertificateProxy.h"
#include "java\util\CollectionProxy.h"
#include "java\security\cert\CertPathProxy.h"
#include "java\util\ListProxy.h"
#include "java\util\IteratorProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::security::cert;


std::string CertificateFactorySpiProxy::className = "java/security/cert/CertificateFactorySpi";
jclass CertificateFactorySpiProxy::objectClass = NULL;

jclass CertificateFactorySpiProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

CertificateFactorySpiProxy::CertificateFactorySpiProxy(void* unused)
{
}

jobject CertificateFactorySpiProxy::_getPeerObject() const
{
	return peerObject;
}

jclass CertificateFactorySpiProxy::getObjectClass()
{
	return _getObjectClass();
}

CertificateFactorySpiProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
CertificateFactorySpiProxy::CertificateFactorySpiProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

CertificateFactorySpiProxy::CertificateFactorySpiProxy()
{
	jmethodID mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "<init>", "()V" );
	peerObject = JNIEnvHelper::NewGlobalRef( JNIEnvHelper::NewObject( _getObjectClass(), mid ) );
}

CertificateFactorySpiProxy::~CertificateFactorySpiProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

CertificateFactorySpiProxy& CertificateFactorySpiProxy::operator=(const CertificateFactorySpiProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
::java::security::cert::CRLProxy CertificateFactorySpiProxy::engineGenerateCRL(::java::io::InputStreamProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "engineGenerateCRL", "(Ljava/io/InputStream;)Ljava/security/cert/CRL;" );
	return ::java::security::cert::CRLProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::java::security::cert::CertificateProxy CertificateFactorySpiProxy::engineGenerateCertificate(::java::io::InputStreamProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "engineGenerateCertificate", "(Ljava/io/InputStream;)Ljava/security/cert/Certificate;" );
	return ::java::security::cert::CertificateProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::java::util::CollectionProxy CertificateFactorySpiProxy::engineGenerateCRLs(::java::io::InputStreamProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "engineGenerateCRLs", "(Ljava/io/InputStream;)Ljava/util/Collection;" );
	return ::java::util::CollectionProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::java::util::CollectionProxy CertificateFactorySpiProxy::engineGenerateCertificates(::java::io::InputStreamProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "engineGenerateCertificates", "(Ljava/io/InputStream;)Ljava/util/Collection;" );
	return ::java::util::CollectionProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::java::security::cert::CertPathProxy CertificateFactorySpiProxy::engineGenerateCertPath(::java::io::InputStreamProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "engineGenerateCertPath", "(Ljava/io/InputStream;)Ljava/security/cert/CertPath;" );
	return ::java::security::cert::CertPathProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::java::security::cert::CertPathProxy CertificateFactorySpiProxy::engineGenerateCertPath(::java::io::InputStreamProxy p0, ::net::sourceforge::jnipp::JStringHelper p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "engineGenerateCertPath", "(Ljava/io/InputStream;Ljava/lang/String;)Ljava/security/cert/CertPath;" );
	return ::java::security::cert::CertPathProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), static_cast<jstring>( p1 ) )  );
}

::java::security::cert::CertPathProxy CertificateFactorySpiProxy::engineGenerateCertPath(::java::util::ListProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "engineGenerateCertPath", "(Ljava/util/List;)Ljava/security/cert/CertPath;" );
	return ::java::security::cert::CertPathProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::java::util::IteratorProxy CertificateFactorySpiProxy::engineGetCertPathEncodings()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "engineGetCertPathEncodings", "()Ljava/util/Iterator;" );
	return ::java::util::IteratorProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

