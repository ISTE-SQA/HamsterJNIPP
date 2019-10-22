#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "SortedMapProxy.h"

// includes for parameter and return type proxy classes
#include "java\lang\ObjectProxy.h"
#include "java\util\CollectionProxy.h"
#include "java\util\ComparatorProxy.h"
#include "java\util\SetProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::util;


std::string SortedMapProxy::className = "java/util/SortedMap";
jclass SortedMapProxy::objectClass = NULL;

jclass SortedMapProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

SortedMapProxy::SortedMapProxy(void* unused)
{
}

jobject SortedMapProxy::_getPeerObject() const
{
	return peerObject;
}

jclass SortedMapProxy::getObjectClass()
{
	return _getObjectClass();
}

SortedMapProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
SortedMapProxy::SortedMapProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

SortedMapProxy::~SortedMapProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

SortedMapProxy& SortedMapProxy::operator=(const SortedMapProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
::java::lang::ObjectProxy SortedMapProxy::firstKey()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "firstKey", "()Ljava/lang/Object;" );
	return ::java::lang::ObjectProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::lang::ObjectProxy SortedMapProxy::lastKey()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "lastKey", "()Ljava/lang/Object;" );
	return ::java::lang::ObjectProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::util::CollectionProxy SortedMapProxy::values()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "values", "()Ljava/util/Collection;" );
	return ::java::util::CollectionProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::util::ComparatorProxy SortedMapProxy::comparator()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "comparator", "()Ljava/util/Comparator;" );
	return ::java::util::ComparatorProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::util::SetProxy SortedMapProxy::entrySet()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "entrySet", "()Ljava/util/Set;" );
	return ::java::util::SetProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::util::SetProxy SortedMapProxy::keySet()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "keySet", "()Ljava/util/Set;" );
	return ::java::util::SetProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::util::SortedMapProxy SortedMapProxy::headMap(::java::lang::ObjectProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "headMap", "(Ljava/lang/Object;)Ljava/util/SortedMap;" );
	return ::java::util::SortedMapProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::java::util::SortedMapProxy SortedMapProxy::subMap(::java::lang::ObjectProxy p0, ::java::lang::ObjectProxy p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "subMap", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/SortedMap;" );
	return ::java::util::SortedMapProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), static_cast<jobject>( p1 ) )  );
}

::java::util::SortedMapProxy SortedMapProxy::tailMap(::java::lang::ObjectProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "tailMap", "(Ljava/lang/Object;)Ljava/util/SortedMap;" );
	return ::java::util::SortedMapProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

