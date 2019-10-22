#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "ConcurrentHashMap_KeySetViewProxy.h"

// includes for parameter and return type proxy classes
#include "java\lang\ObjectProxy.h"
#include "java\util\CollectionProxy.h"
#include "java\util\IteratorProxy.h"
#include "java\util\SpliteratorProxy.h"
#include "java\util\function\ConsumerProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::util::concurrent;


std::string ConcurrentHashMap_KeySetViewProxy::className = "java/util/concurrent/ConcurrentHashMap$KeySetView";
jclass ConcurrentHashMap_KeySetViewProxy::objectClass = NULL;

jclass ConcurrentHashMap_KeySetViewProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

ConcurrentHashMap_KeySetViewProxy::ConcurrentHashMap_KeySetViewProxy(void* unused)
{
}

jobject ConcurrentHashMap_KeySetViewProxy::_getPeerObject() const
{
	return peerObject;
}

jclass ConcurrentHashMap_KeySetViewProxy::getObjectClass()
{
	return _getObjectClass();
}

ConcurrentHashMap_KeySetViewProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
ConcurrentHashMap_KeySetViewProxy::ConcurrentHashMap_KeySetViewProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

ConcurrentHashMap_KeySetViewProxy::~ConcurrentHashMap_KeySetViewProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

ConcurrentHashMap_KeySetViewProxy& ConcurrentHashMap_KeySetViewProxy::operator=(const ConcurrentHashMap_KeySetViewProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
jboolean ConcurrentHashMap_KeySetViewProxy::add(::java::lang::ObjectProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "add", "(Ljava/lang/Object;)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

jboolean ConcurrentHashMap_KeySetViewProxy::addAll(::java::util::CollectionProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "addAll", "(Ljava/util/Collection;)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

jboolean ConcurrentHashMap_KeySetViewProxy::contains(::java::lang::ObjectProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "contains", "(Ljava/lang/Object;)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

jboolean ConcurrentHashMap_KeySetViewProxy::equals(::java::lang::ObjectProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "equals", "(Ljava/lang/Object;)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

jboolean ConcurrentHashMap_KeySetViewProxy::remove(::java::lang::ObjectProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "remove", "(Ljava/lang/Object;)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

jint ConcurrentHashMap_KeySetViewProxy::hashCode()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "hashCode", "()I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid );
}

::java::lang::ObjectProxy ConcurrentHashMap_KeySetViewProxy::getMappedValue()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getMappedValue", "()Ljava/lang/Object;" );
	return ::java::lang::ObjectProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::util::IteratorProxy ConcurrentHashMap_KeySetViewProxy::iterator()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "iterator", "()Ljava/util/Iterator;" );
	return ::java::util::IteratorProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::util::SpliteratorProxy ConcurrentHashMap_KeySetViewProxy::spliterator()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "spliterator", "()Ljava/util/Spliterator;" );
	return ::java::util::SpliteratorProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

void ConcurrentHashMap_KeySetViewProxy::forEach(::java::util::function::ConsumerProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "forEach", "(Ljava/util/function/Consumer;)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

