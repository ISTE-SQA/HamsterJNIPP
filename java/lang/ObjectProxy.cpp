#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "ObjectProxy.h"

// includes for parameter and return type proxy classes
#include "java\lang\ClassProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::lang;


std::string ObjectProxy::className = "java/lang/Object";
jclass ObjectProxy::objectClass = NULL;

jclass ObjectProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

ObjectProxy::ObjectProxy(void* unused)
{
}

jobject ObjectProxy::_getPeerObject() const
{
	return peerObject;
}

jclass ObjectProxy::getObjectClass()
{
	return _getObjectClass();
}

ObjectProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
ObjectProxy::ObjectProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

ObjectProxy::ObjectProxy()
{
	jmethodID mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "<init>", "()V" );
	peerObject = JNIEnvHelper::NewGlobalRef( JNIEnvHelper::NewObject( _getObjectClass(), mid ) );
}

ObjectProxy::~ObjectProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

ObjectProxy& ObjectProxy::operator=(const ObjectProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
jboolean ObjectProxy::equals(::java::lang::ObjectProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "equals", "(Ljava/lang/Object;)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

::java::lang::ClassProxy ObjectProxy::getClass()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getClass", "()Ljava/lang/Class;" );
	return ::java::lang::ClassProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

void ObjectProxy::notify()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "notify", "()V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid );
}

void ObjectProxy::notifyAll()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "notifyAll", "()V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid );
}

void ObjectProxy::wait(jlong p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "wait", "(J)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, p0 );
}

void ObjectProxy::wait()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "wait", "()V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid );
}

void ObjectProxy::wait(jlong p0, jint p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "wait", "(JI)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, p0, p1 );
}

::net::sourceforge::jnipp::JStringHelper ObjectProxy::toString()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "toString", "()Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

jint ObjectProxy::hashCode()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "hashCode", "()I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid );
}

