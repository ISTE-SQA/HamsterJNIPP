#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "ObjectStreamFieldProxy.h"

// includes for parameter and return type proxy classes
#include "java\lang\ClassProxy.h"
#include "java\lang\ObjectProxy.h"
#include "java\lang\reflect\FieldProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::io;


std::string ObjectStreamFieldProxy::className = "java/io/ObjectStreamField";
jclass ObjectStreamFieldProxy::objectClass = NULL;

jclass ObjectStreamFieldProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

ObjectStreamFieldProxy::ObjectStreamFieldProxy(void* unused)
{
}

jobject ObjectStreamFieldProxy::_getPeerObject() const
{
	return peerObject;
}

jclass ObjectStreamFieldProxy::getObjectClass()
{
	return _getObjectClass();
}

ObjectStreamFieldProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
ObjectStreamFieldProxy::ObjectStreamFieldProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

ObjectStreamFieldProxy::ObjectStreamFieldProxy(::net::sourceforge::jnipp::JStringHelper p0, ::java::lang::ClassProxy p1)
{
	jmethodID mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "<init>", "(Ljava/lang/String;Ljava/lang/Class;)V" );
	peerObject = JNIEnvHelper::NewGlobalRef( JNIEnvHelper::NewObject( _getObjectClass(), mid, static_cast<jstring>( p0 ), static_cast<jclass>( p1 ) ) );
}

ObjectStreamFieldProxy::ObjectStreamFieldProxy(::net::sourceforge::jnipp::JStringHelper p0, ::java::lang::ClassProxy p1, jboolean p2)
{
	jmethodID mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "<init>", "(Ljava/lang/String;Ljava/lang/Class;Z)V" );
	peerObject = JNIEnvHelper::NewGlobalRef( JNIEnvHelper::NewObject( _getObjectClass(), mid, static_cast<jstring>( p0 ), static_cast<jclass>( p1 ), p2 ) );
}

ObjectStreamFieldProxy::~ObjectStreamFieldProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

ObjectStreamFieldProxy& ObjectStreamFieldProxy::operator=(const ObjectStreamFieldProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
jboolean ObjectStreamFieldProxy::isPrimitive()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "isPrimitive", "()Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid );
}

jboolean ObjectStreamFieldProxy::isUnshared()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "isUnshared", "()Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid );
}

jchar ObjectStreamFieldProxy::getTypeCode()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getTypeCode", "()C" );
	return JNIEnvHelper::CallCharMethod( _getPeerObject(), mid );
}

jint ObjectStreamFieldProxy::compareTo(::java::lang::ObjectProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "compareTo", "(Ljava/lang/Object;)I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

jint ObjectStreamFieldProxy::getOffset()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getOffset", "()I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid );
}

::java::lang::ClassProxy ObjectStreamFieldProxy::getType()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getType", "()Ljava/lang/Class;" );
	return ::java::lang::ClassProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::net::sourceforge::jnipp::JStringHelper ObjectStreamFieldProxy::getName()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getName", "()Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::net::sourceforge::jnipp::JStringHelper ObjectStreamFieldProxy::getTypeString()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getTypeString", "()Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::net::sourceforge::jnipp::JStringHelper ObjectStreamFieldProxy::toString()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "toString", "()Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

