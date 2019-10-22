#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "AnnotatedTypeProxy.h"

// includes for parameter and return type proxy classes
#include "java\lang\reflect\TypeProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::lang::reflect;


std::string AnnotatedTypeProxy::className = "java/lang/reflect/AnnotatedType";
jclass AnnotatedTypeProxy::objectClass = NULL;

jclass AnnotatedTypeProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

AnnotatedTypeProxy::AnnotatedTypeProxy(void* unused)
{
}

jobject AnnotatedTypeProxy::_getPeerObject() const
{
	return peerObject;
}

jclass AnnotatedTypeProxy::getObjectClass()
{
	return _getObjectClass();
}

AnnotatedTypeProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
AnnotatedTypeProxy::AnnotatedTypeProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

AnnotatedTypeProxy::~AnnotatedTypeProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

AnnotatedTypeProxy& AnnotatedTypeProxy::operator=(const AnnotatedTypeProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
::java::lang::reflect::TypeProxy AnnotatedTypeProxy::getType()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getType", "()Ljava/lang/reflect/Type;" );
	return ::java::lang::reflect::TypeProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

