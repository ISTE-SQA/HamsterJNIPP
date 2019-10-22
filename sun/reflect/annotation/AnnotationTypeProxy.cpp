#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "AnnotationTypeProxy.h"

// includes for parameter and return type proxy classes
#include "java\lang\annotation\RetentionPolicyProxy.h"
#include "java\util\MapProxy.h"
#include "java\lang\ClassProxy.h"

using namespace net::sourceforge::jnipp;
using namespace sun::reflect::annotation;


std::string AnnotationTypeProxy::className = "sun/reflect/annotation/AnnotationType";
jclass AnnotationTypeProxy::objectClass = NULL;

jclass AnnotationTypeProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

AnnotationTypeProxy::AnnotationTypeProxy(void* unused)
{
}

jobject AnnotationTypeProxy::_getPeerObject() const
{
	return peerObject;
}

jclass AnnotationTypeProxy::getObjectClass()
{
	return _getObjectClass();
}

AnnotationTypeProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
AnnotationTypeProxy::AnnotationTypeProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

AnnotationTypeProxy::~AnnotationTypeProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

AnnotationTypeProxy& AnnotationTypeProxy::operator=(const AnnotationTypeProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
jboolean AnnotationTypeProxy::isInherited()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "isInherited", "()Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid );
}

::net::sourceforge::jnipp::JStringHelper AnnotationTypeProxy::toString()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "toString", "()Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::lang::annotation::RetentionPolicyProxy AnnotationTypeProxy::retention()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "retention", "()Ljava/lang/annotation/RetentionPolicy;" );
	return ::java::lang::annotation::RetentionPolicyProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::util::MapProxy AnnotationTypeProxy::memberDefaults()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "memberDefaults", "()Ljava/util/Map;" );
	return ::java::util::MapProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::util::MapProxy AnnotationTypeProxy::memberTypes()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "memberTypes", "()Ljava/util/Map;" );
	return ::java::util::MapProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::util::MapProxy AnnotationTypeProxy::members()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "members", "()Ljava/util/Map;" );
	return ::java::util::MapProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::lang::ClassProxy AnnotationTypeProxy::invocationHandlerReturnType(::java::lang::ClassProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "invocationHandlerReturnType", "(Ljava/lang/Class;)Ljava/lang/Class;" );
	return ::java::lang::ClassProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, static_cast<jclass>( p0 ) )  );
}

::sun::reflect::annotation::AnnotationTypeProxy AnnotationTypeProxy::getInstance(::java::lang::ClassProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "getInstance", "(Ljava/lang/Class;)Lsun/reflect/annotation/AnnotationType;" );
	return ::sun::reflect::annotation::AnnotationTypeProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, static_cast<jclass>( p0 ) )  );
}

