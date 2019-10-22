#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "ConcurrentHashMap_NodeProxy.h"

// includes for parameter and return type proxy classes
#include "java\lang\ObjectProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::util::concurrent;


std::string ConcurrentHashMap_NodeProxy::className = "java/util/concurrent/ConcurrentHashMap$Node";
jclass ConcurrentHashMap_NodeProxy::objectClass = NULL;

jclass ConcurrentHashMap_NodeProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

ConcurrentHashMap_NodeProxy::ConcurrentHashMap_NodeProxy(void* unused)
{
}

jobject ConcurrentHashMap_NodeProxy::_getPeerObject() const
{
	return peerObject;
}

jclass ConcurrentHashMap_NodeProxy::getObjectClass()
{
	return _getObjectClass();
}

ConcurrentHashMap_NodeProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
ConcurrentHashMap_NodeProxy::ConcurrentHashMap_NodeProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

ConcurrentHashMap_NodeProxy::~ConcurrentHashMap_NodeProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

ConcurrentHashMap_NodeProxy& ConcurrentHashMap_NodeProxy::operator=(const ConcurrentHashMap_NodeProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
jboolean ConcurrentHashMap_NodeProxy::equals(::java::lang::ObjectProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "equals", "(Ljava/lang/Object;)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

jint ConcurrentHashMap_NodeProxy::hashCode()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "hashCode", "()I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid );
}

::java::lang::ObjectProxy ConcurrentHashMap_NodeProxy::getKey()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getKey", "()Ljava/lang/Object;" );
	return ::java::lang::ObjectProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::lang::ObjectProxy ConcurrentHashMap_NodeProxy::getValue()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getValue", "()Ljava/lang/Object;" );
	return ::java::lang::ObjectProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::lang::ObjectProxy ConcurrentHashMap_NodeProxy::setValue(::java::lang::ObjectProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "setValue", "(Ljava/lang/Object;)Ljava/lang/Object;" );
	return ::java::lang::ObjectProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::net::sourceforge::jnipp::JStringHelper ConcurrentHashMap_NodeProxy::toString()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "toString", "()Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

