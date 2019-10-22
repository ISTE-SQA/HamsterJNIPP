#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "AnnotationProxy.h"

// includes for parameter and return type proxy classes
#include "java\lang\ObjectProxy.h"
#include "java\lang\ClassProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::lang::annotation;


std::string AnnotationProxy::className = "java/lang/annotation/Annotation";
jclass AnnotationProxy::objectClass = NULL;

jclass AnnotationProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

AnnotationProxy::AnnotationProxy(void* unused)
{
}

jobject AnnotationProxy::_getPeerObject() const
{
	return peerObject;
}

jclass AnnotationProxy::getObjectClass()
{
	return _getObjectClass();
}

AnnotationProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
AnnotationProxy::AnnotationProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

AnnotationProxy::~AnnotationProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

AnnotationProxy& AnnotationProxy::operator=(const AnnotationProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
jboolean AnnotationProxy::equals(::java::lang::ObjectProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "equals", "(Ljava/lang/Object;)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

jint AnnotationProxy::hashCode()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "hashCode", "()I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid );
}

::java::lang::ClassProxy AnnotationProxy::annotationType()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "annotationType", "()Ljava/lang/Class;" );
	return ::java::lang::ClassProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::net::sourceforge::jnipp::JStringHelper AnnotationProxy::toString()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "toString", "()Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

