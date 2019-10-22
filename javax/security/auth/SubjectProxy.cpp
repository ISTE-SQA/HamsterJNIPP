#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "SubjectProxy.h"

// includes for parameter and return type proxy classes
#include "java\util\SetProxy.h"
#include "java\lang\ObjectProxy.h"
#include "java\lang\ClassProxy.h"
#include "java\security\PrivilegedActionProxy.h"
#include "java\security\PrivilegedExceptionActionProxy.h"
#include "java\security\AccessControlContextProxy.h"

using namespace net::sourceforge::jnipp;
using namespace javax::security::auth;


std::string SubjectProxy::className = "javax/security/auth/Subject";
jclass SubjectProxy::objectClass = NULL;

jclass SubjectProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

SubjectProxy::SubjectProxy(void* unused)
{
}

jobject SubjectProxy::_getPeerObject() const
{
	return peerObject;
}

jclass SubjectProxy::getObjectClass()
{
	return _getObjectClass();
}

SubjectProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
SubjectProxy::SubjectProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

SubjectProxy::SubjectProxy()
{
	jmethodID mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "<init>", "()V" );
	peerObject = JNIEnvHelper::NewGlobalRef( JNIEnvHelper::NewObject( _getObjectClass(), mid ) );
}

SubjectProxy::SubjectProxy(jboolean p0, ::java::util::SetProxy p1, ::java::util::SetProxy p2, ::java::util::SetProxy p3)
{
	jmethodID mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "<init>", "(ZLjava/util/Set;Ljava/util/Set;Ljava/util/Set;)V" );
	peerObject = JNIEnvHelper::NewGlobalRef( JNIEnvHelper::NewObject( _getObjectClass(), mid, p0, static_cast<jobject>( p1 ), static_cast<jobject>( p2 ), static_cast<jobject>( p3 ) ) );
}

SubjectProxy::~SubjectProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

SubjectProxy& SubjectProxy::operator=(const SubjectProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
jboolean SubjectProxy::equals(::java::lang::ObjectProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "equals", "(Ljava/lang/Object;)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

jboolean SubjectProxy::isReadOnly()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "isReadOnly", "()Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid );
}

jint SubjectProxy::hashCode()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "hashCode", "()I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid );
}

::net::sourceforge::jnipp::JStringHelper SubjectProxy::toString()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "toString", "()Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::util::SetProxy SubjectProxy::getPrincipals()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getPrincipals", "()Ljava/util/Set;" );
	return ::java::util::SetProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::util::SetProxy SubjectProxy::getPrincipals(::java::lang::ClassProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getPrincipals", "(Ljava/lang/Class;)Ljava/util/Set;" );
	return ::java::util::SetProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jclass>( p0 ) )  );
}

::java::util::SetProxy SubjectProxy::getPrivateCredentials()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getPrivateCredentials", "()Ljava/util/Set;" );
	return ::java::util::SetProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::util::SetProxy SubjectProxy::getPrivateCredentials(::java::lang::ClassProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getPrivateCredentials", "(Ljava/lang/Class;)Ljava/util/Set;" );
	return ::java::util::SetProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jclass>( p0 ) )  );
}

::java::util::SetProxy SubjectProxy::getPublicCredentials()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getPublicCredentials", "()Ljava/util/Set;" );
	return ::java::util::SetProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::util::SetProxy SubjectProxy::getPublicCredentials(::java::lang::ClassProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getPublicCredentials", "(Ljava/lang/Class;)Ljava/util/Set;" );
	return ::java::util::SetProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jclass>( p0 ) )  );
}

::java::lang::ObjectProxy SubjectProxy::doAs(::javax::security::auth::SubjectProxy p0, ::java::security::PrivilegedActionProxy p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "doAs", "(Ljavax/security/auth/Subject;Ljava/security/PrivilegedAction;)Ljava/lang/Object;" );
	return ::java::lang::ObjectProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, static_cast<jobject>( p0 ), static_cast<jobject>( p1 ) )  );
}

::java::lang::ObjectProxy SubjectProxy::doAs(::javax::security::auth::SubjectProxy p0, ::java::security::PrivilegedExceptionActionProxy p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "doAs", "(Ljavax/security/auth/Subject;Ljava/security/PrivilegedExceptionAction;)Ljava/lang/Object;" );
	return ::java::lang::ObjectProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, static_cast<jobject>( p0 ), static_cast<jobject>( p1 ) )  );
}

::java::lang::ObjectProxy SubjectProxy::doAsPrivileged(::javax::security::auth::SubjectProxy p0, ::java::security::PrivilegedActionProxy p1, ::java::security::AccessControlContextProxy p2)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "doAsPrivileged", "(Ljavax/security/auth/Subject;Ljava/security/PrivilegedAction;Ljava/security/AccessControlContext;)Ljava/lang/Object;" );
	return ::java::lang::ObjectProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, static_cast<jobject>( p0 ), static_cast<jobject>( p1 ), static_cast<jobject>( p2 ) )  );
}

::java::lang::ObjectProxy SubjectProxy::doAsPrivileged(::javax::security::auth::SubjectProxy p0, ::java::security::PrivilegedExceptionActionProxy p1, ::java::security::AccessControlContextProxy p2)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "doAsPrivileged", "(Ljavax/security/auth/Subject;Ljava/security/PrivilegedExceptionAction;Ljava/security/AccessControlContext;)Ljava/lang/Object;" );
	return ::java::lang::ObjectProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, static_cast<jobject>( p0 ), static_cast<jobject>( p1 ), static_cast<jobject>( p2 ) )  );
}

::javax::security::auth::SubjectProxy SubjectProxy::getSubject(::java::security::AccessControlContextProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "getSubject", "(Ljava/security/AccessControlContext;)Ljavax/security/auth/Subject;" );
	return ::javax::security::auth::SubjectProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, static_cast<jobject>( p0 ) )  );
}

void SubjectProxy::setReadOnly()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "setReadOnly", "()V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid );
}

