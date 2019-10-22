#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "FieldProxy.h"

// includes for parameter and return type proxy classes
#include "java\lang\ObjectProxy.h"
#include "java\lang\ClassProxy.h"
#include "java\lang\annotation\AnnotationProxy.h"
#include "java\lang\reflect\AnnotatedTypeProxy.h"
#include "java\lang\reflect\TypeProxy.h"
#include "sun\reflect\FieldAccessorProxy.h"
#include "java\util\MapProxy.h"
#include "sun\reflect\generics\repository\FieldRepositoryProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::lang::reflect;


std::string FieldProxy::className = "java/lang/reflect/Field";
jclass FieldProxy::objectClass = NULL;

jclass FieldProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

FieldProxy::FieldProxy(void* unused)
{
}

jobject FieldProxy::_getPeerObject() const
{
	return peerObject;
}

jclass FieldProxy::getObjectClass()
{
	return _getObjectClass();
}

FieldProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
FieldProxy::FieldProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

FieldProxy::~FieldProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

FieldProxy& FieldProxy::operator=(const FieldProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
jboolean FieldProxy::equals(::java::lang::ObjectProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "equals", "(Ljava/lang/Object;)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

jboolean FieldProxy::getBoolean(::java::lang::ObjectProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getBoolean", "(Ljava/lang/Object;)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

jboolean FieldProxy::isEnumConstant()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "isEnumConstant", "()Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid );
}

jboolean FieldProxy::isSynthetic()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "isSynthetic", "()Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid );
}

jbyte FieldProxy::getByte(::java::lang::ObjectProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getByte", "(Ljava/lang/Object;)B" );
	return JNIEnvHelper::CallByteMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

jchar FieldProxy::getChar(::java::lang::ObjectProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getChar", "(Ljava/lang/Object;)C" );
	return JNIEnvHelper::CallCharMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

jdouble FieldProxy::getDouble(::java::lang::ObjectProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getDouble", "(Ljava/lang/Object;)D" );
	return JNIEnvHelper::CallDoubleMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

jfloat FieldProxy::getFloat(::java::lang::ObjectProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getFloat", "(Ljava/lang/Object;)F" );
	return JNIEnvHelper::CallFloatMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

jint FieldProxy::getInt(::java::lang::ObjectProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getInt", "(Ljava/lang/Object;)I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

jint FieldProxy::getModifiers()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getModifiers", "()I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid );
}

jint FieldProxy::hashCode()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "hashCode", "()I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid );
}

::java::lang::ClassProxy FieldProxy::getDeclaringClass()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getDeclaringClass", "()Ljava/lang/Class;" );
	return ::java::lang::ClassProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::lang::ClassProxy FieldProxy::getType()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getType", "()Ljava/lang/Class;" );
	return ::java::lang::ClassProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::lang::ObjectProxy FieldProxy::get(::java::lang::ObjectProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "get", "(Ljava/lang/Object;)Ljava/lang/Object;" );
	return ::java::lang::ObjectProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::net::sourceforge::jnipp::JStringHelper FieldProxy::getName()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getName", "()Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::net::sourceforge::jnipp::JStringHelper FieldProxy::toGenericString()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "toGenericString", "()Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::net::sourceforge::jnipp::JStringHelper FieldProxy::toString()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "toString", "()Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::lang::annotation::AnnotationProxy FieldProxy::getAnnotation(::java::lang::ClassProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getAnnotation", "(Ljava/lang/Class;)Ljava/lang/annotation/Annotation;" );
	return ::java::lang::annotation::AnnotationProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jclass>( p0 ) )  );
}

::net::sourceforge::jnipp::PA<::java::lang::annotation::AnnotationProxy>::ProxyArray<1> FieldProxy::getAnnotationsByType(::java::lang::ClassProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getAnnotationsByType", "(Ljava/lang/Class;)[Ljava/lang/annotation/Annotation;" );
	return ::net::sourceforge::jnipp::PA<::java::lang::annotation::AnnotationProxy>::ProxyArray<1>( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jclass>( p0 ) )  );
}

::net::sourceforge::jnipp::PA<::java::lang::annotation::AnnotationProxy>::ProxyArray<1> FieldProxy::getDeclaredAnnotations()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getDeclaredAnnotations", "()[Ljava/lang/annotation/Annotation;" );
	return ::net::sourceforge::jnipp::PA<::java::lang::annotation::AnnotationProxy>::ProxyArray<1>( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::lang::reflect::AnnotatedTypeProxy FieldProxy::getAnnotatedType()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getAnnotatedType", "()Ljava/lang/reflect/AnnotatedType;" );
	return ::java::lang::reflect::AnnotatedTypeProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::lang::reflect::TypeProxy FieldProxy::getGenericType()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getGenericType", "()Ljava/lang/reflect/Type;" );
	return ::java::lang::reflect::TypeProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

jlong FieldProxy::getLong(::java::lang::ObjectProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getLong", "(Ljava/lang/Object;)J" );
	return JNIEnvHelper::CallLongMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

jshort FieldProxy::getShort(::java::lang::ObjectProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getShort", "(Ljava/lang/Object;)S" );
	return JNIEnvHelper::CallShortMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

void FieldProxy::set(::java::lang::ObjectProxy p0, ::java::lang::ObjectProxy p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "set", "(Ljava/lang/Object;Ljava/lang/Object;)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), static_cast<jobject>( p1 ) );
}

void FieldProxy::setBoolean(::java::lang::ObjectProxy p0, jboolean p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "setBoolean", "(Ljava/lang/Object;Z)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), p1 );
}

void FieldProxy::setByte(::java::lang::ObjectProxy p0, jbyte p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "setByte", "(Ljava/lang/Object;B)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), p1 );
}

void FieldProxy::setChar(::java::lang::ObjectProxy p0, jchar p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "setChar", "(Ljava/lang/Object;C)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), p1 );
}

void FieldProxy::setDouble(::java::lang::ObjectProxy p0, jdouble p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "setDouble", "(Ljava/lang/Object;D)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), p1 );
}

void FieldProxy::setFloat(::java::lang::ObjectProxy p0, jfloat p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "setFloat", "(Ljava/lang/Object;F)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), p1 );
}

void FieldProxy::setInt(::java::lang::ObjectProxy p0, jint p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "setInt", "(Ljava/lang/Object;I)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), p1 );
}

void FieldProxy::setLong(::java::lang::ObjectProxy p0, jlong p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "setLong", "(Ljava/lang/Object;J)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), p1 );
}

void FieldProxy::setShort(::java::lang::ObjectProxy p0, jshort p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "setShort", "(Ljava/lang/Object;S)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), p1 );
}

