#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "ClassLoaderProxy.h"

// includes for parameter and return type proxy classes
#include "java\io\InputStreamProxy.h"
#include "java\lang\ClassProxy.h"
#include "java\net\URLProxy.h"
#include "java\util\EnumerationProxy.h"
#include "java\lang\ObjectProxy.h"
#include "java\util\MapProxy.h"
#include "java\security\ProtectionDomainProxy.h"
#include "java\util\HashMapProxy.h"
#include "java\util\SetProxy.h"
#include "java\util\VectorProxy.h"
#include "java\util\concurrent\ConcurrentHashMapProxy.h"
#include "java\security\cert\CertificateProxy.h"
#include "java\util\StackProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::lang;


std::string ClassLoaderProxy::className = "java/lang/ClassLoader";
jclass ClassLoaderProxy::objectClass = NULL;

jclass ClassLoaderProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

ClassLoaderProxy::ClassLoaderProxy(void* unused)
{
}

jobject ClassLoaderProxy::_getPeerObject() const
{
	return peerObject;
}

jclass ClassLoaderProxy::getObjectClass()
{
	return _getObjectClass();
}

ClassLoaderProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
ClassLoaderProxy::ClassLoaderProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

ClassLoaderProxy::~ClassLoaderProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

ClassLoaderProxy& ClassLoaderProxy::operator=(const ClassLoaderProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
::java::lang::ClassLoaderProxy ClassLoaderProxy::getParent()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getParent", "()Ljava/lang/ClassLoader;" );
	return ::java::lang::ClassLoaderProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::io::InputStreamProxy ClassLoaderProxy::getResourceAsStream(::net::sourceforge::jnipp::JStringHelper p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getResourceAsStream", "(Ljava/lang/String;)Ljava/io/InputStream;" );
	return ::java::io::InputStreamProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jstring>( p0 ) )  );
}

::java::lang::ClassProxy ClassLoaderProxy::loadClass(::net::sourceforge::jnipp::JStringHelper p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "loadClass", "(Ljava/lang/String;)Ljava/lang/Class;" );
	return ::java::lang::ClassProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jstring>( p0 ) )  );
}

::java::net::URLProxy ClassLoaderProxy::getResource(::net::sourceforge::jnipp::JStringHelper p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getResource", "(Ljava/lang/String;)Ljava/net/URL;" );
	return ::java::net::URLProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jstring>( p0 ) )  );
}

::java::util::EnumerationProxy ClassLoaderProxy::getResources(::net::sourceforge::jnipp::JStringHelper p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getResources", "(Ljava/lang/String;)Ljava/util/Enumeration;" );
	return ::java::util::EnumerationProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jstring>( p0 ) )  );
}

::java::io::InputStreamProxy ClassLoaderProxy::getSystemResourceAsStream(::net::sourceforge::jnipp::JStringHelper p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "getSystemResourceAsStream", "(Ljava/lang/String;)Ljava/io/InputStream;" );
	return ::java::io::InputStreamProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, static_cast<jstring>( p0 ) )  );
}

::java::lang::ClassLoaderProxy ClassLoaderProxy::getSystemClassLoader()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "getSystemClassLoader", "()Ljava/lang/ClassLoader;" );
	return ::java::lang::ClassLoaderProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid )  );
}

::java::net::URLProxy ClassLoaderProxy::getSystemResource(::net::sourceforge::jnipp::JStringHelper p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "getSystemResource", "(Ljava/lang/String;)Ljava/net/URL;" );
	return ::java::net::URLProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, static_cast<jstring>( p0 ) )  );
}

::java::util::EnumerationProxy ClassLoaderProxy::getSystemResources(::net::sourceforge::jnipp::JStringHelper p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "getSystemResources", "(Ljava/lang/String;)Ljava/util/Enumeration;" );
	return ::java::util::EnumerationProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, static_cast<jstring>( p0 ) )  );
}

void ClassLoaderProxy::clearAssertionStatus()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "clearAssertionStatus", "()V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid );
}

void ClassLoaderProxy::setClassAssertionStatus(::net::sourceforge::jnipp::JStringHelper p0, jboolean p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "setClassAssertionStatus", "(Ljava/lang/String;Z)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, static_cast<jstring>( p0 ), p1 );
}

void ClassLoaderProxy::setDefaultAssertionStatus(jboolean p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "setDefaultAssertionStatus", "(Z)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, p0 );
}

void ClassLoaderProxy::setPackageAssertionStatus(::net::sourceforge::jnipp::JStringHelper p0, jboolean p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "setPackageAssertionStatus", "(Ljava/lang/String;Z)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, static_cast<jstring>( p0 ), p1 );
}

