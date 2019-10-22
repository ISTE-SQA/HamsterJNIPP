#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "ConcurrentHashMap_EntrySetViewProxy.h"

// includes for parameter and return type proxy classes
#include "java\util\Map_EntryProxy.h"
#include "java\util\CollectionProxy.h"
#include "java\lang\ObjectProxy.h"
#include "java\util\IteratorProxy.h"
#include "java\util\SpliteratorProxy.h"
#include "java\util\function\ConsumerProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::util::concurrent;


std::string ConcurrentHashMap_EntrySetViewProxy::className = "java/util/concurrent/ConcurrentHashMap$EntrySetView";
jclass ConcurrentHashMap_EntrySetViewProxy::objectClass = NULL;

jclass ConcurrentHashMap_EntrySetViewProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

ConcurrentHashMap_EntrySetViewProxy::ConcurrentHashMap_EntrySetViewProxy(void* unused)
{
}

jobject ConcurrentHashMap_EntrySetViewProxy::_getPeerObject() const
{
	return peerObject;
}

jclass ConcurrentHashMap_EntrySetViewProxy::getObjectClass()
{
	return _getObjectClass();
}

ConcurrentHashMap_EntrySetViewProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
ConcurrentHashMap_EntrySetViewProxy::ConcurrentHashMap_EntrySetViewProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

ConcurrentHashMap_EntrySetViewProxy::~ConcurrentHashMap_EntrySetViewProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

ConcurrentHashMap_EntrySetViewProxy& ConcurrentHashMap_EntrySetViewProxy::operator=(const ConcurrentHashMap_EntrySetViewProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
jboolean ConcurrentHashMap_EntrySetViewProxy::add(::java::util::Map_EntryProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "add", "(Ljava/util/Map$Entry;)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

jboolean ConcurrentHashMap_EntrySetViewProxy::addAll(::java::util::CollectionProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "addAll", "(Ljava/util/Collection;)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

jboolean ConcurrentHashMap_EntrySetViewProxy::contains(::java::lang::ObjectProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "contains", "(Ljava/lang/Object;)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

jboolean ConcurrentHashMap_EntrySetViewProxy::remove(::java::lang::ObjectProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "remove", "(Ljava/lang/Object;)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

jboolean ConcurrentHashMap_EntrySetViewProxy::equals(::java::lang::ObjectProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "equals", "(Ljava/lang/Object;)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

jint ConcurrentHashMap_EntrySetViewProxy::hashCode()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "hashCode", "()I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid );
}

::java::util::IteratorProxy ConcurrentHashMap_EntrySetViewProxy::iterator()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "iterator", "()Ljava/util/Iterator;" );
	return ::java::util::IteratorProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::util::SpliteratorProxy ConcurrentHashMap_EntrySetViewProxy::spliterator()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "spliterator", "()Ljava/util/Spliterator;" );
	return ::java::util::SpliteratorProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

void ConcurrentHashMap_EntrySetViewProxy::forEach(::java::util::function::ConsumerProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "forEach", "(Ljava/util/function/Consumer;)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

