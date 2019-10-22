#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "ConcurrentHashMap_ValuesViewProxy.h"

// includes for parameter and return type proxy classes
#include "java\lang\ObjectProxy.h"
#include "java\util\CollectionProxy.h"
#include "java\util\IteratorProxy.h"
#include "java\util\SpliteratorProxy.h"
#include "java\util\function\ConsumerProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::util::concurrent;


std::string ConcurrentHashMap_ValuesViewProxy::className = "java/util/concurrent/ConcurrentHashMap$ValuesView";
jclass ConcurrentHashMap_ValuesViewProxy::objectClass = NULL;

jclass ConcurrentHashMap_ValuesViewProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

ConcurrentHashMap_ValuesViewProxy::ConcurrentHashMap_ValuesViewProxy(void* unused)
{
}

jobject ConcurrentHashMap_ValuesViewProxy::_getPeerObject() const
{
	return peerObject;
}

jclass ConcurrentHashMap_ValuesViewProxy::getObjectClass()
{
	return _getObjectClass();
}

ConcurrentHashMap_ValuesViewProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
ConcurrentHashMap_ValuesViewProxy::ConcurrentHashMap_ValuesViewProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

ConcurrentHashMap_ValuesViewProxy::~ConcurrentHashMap_ValuesViewProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

ConcurrentHashMap_ValuesViewProxy& ConcurrentHashMap_ValuesViewProxy::operator=(const ConcurrentHashMap_ValuesViewProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
jboolean ConcurrentHashMap_ValuesViewProxy::add(::java::lang::ObjectProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "add", "(Ljava/lang/Object;)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

jboolean ConcurrentHashMap_ValuesViewProxy::addAll(::java::util::CollectionProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "addAll", "(Ljava/util/Collection;)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

jboolean ConcurrentHashMap_ValuesViewProxy::contains(::java::lang::ObjectProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "contains", "(Ljava/lang/Object;)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

jboolean ConcurrentHashMap_ValuesViewProxy::remove(::java::lang::ObjectProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "remove", "(Ljava/lang/Object;)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

::java::util::IteratorProxy ConcurrentHashMap_ValuesViewProxy::iterator()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "iterator", "()Ljava/util/Iterator;" );
	return ::java::util::IteratorProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::util::SpliteratorProxy ConcurrentHashMap_ValuesViewProxy::spliterator()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "spliterator", "()Ljava/util/Spliterator;" );
	return ::java::util::SpliteratorProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

void ConcurrentHashMap_ValuesViewProxy::forEach(::java::util::function::ConsumerProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "forEach", "(Ljava/util/function/Consumer;)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

