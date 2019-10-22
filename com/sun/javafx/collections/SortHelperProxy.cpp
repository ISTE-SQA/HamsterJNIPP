#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "SortHelperProxy.h"

// includes for parameter and return type proxy classes
#include "java\lang\ComparableProxy.h"
#include "java\lang\ObjectProxy.h"
#include "java\util\ComparatorProxy.h"
#include "java\util\ListProxy.h"

using namespace net::sourceforge::jnipp;
using namespace com::sun::javafx::collections;


std::string SortHelperProxy::className = "com/sun/javafx/collections/SortHelper";
jclass SortHelperProxy::objectClass = NULL;

jclass SortHelperProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

SortHelperProxy::SortHelperProxy(void* unused)
{
}

jobject SortHelperProxy::_getPeerObject() const
{
	return peerObject;
}

jclass SortHelperProxy::getObjectClass()
{
	return _getObjectClass();
}

SortHelperProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
SortHelperProxy::SortHelperProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

SortHelperProxy::SortHelperProxy()
{
	jmethodID mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "<init>", "()V" );
	peerObject = JNIEnvHelper::NewGlobalRef( JNIEnvHelper::NewObject( _getObjectClass(), mid ) );
}

SortHelperProxy::~SortHelperProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

SortHelperProxy& SortHelperProxy::operator=(const SortHelperProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
::net::sourceforge::jnipp::JIntArrayHelper<1> SortHelperProxy::sort(::net::sourceforge::jnipp::JIntArrayHelper<1> p0, jint p1, jint p2)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "sort", "([III)[I" );
	return ::net::sourceforge::jnipp::JIntArrayHelper<1>( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jintArray>( p0 ), p1, p2 )  );
}

::net::sourceforge::jnipp::JIntArrayHelper<1> SortHelperProxy::sort(::net::sourceforge::jnipp::PA<::java::lang::ComparableProxy>::ProxyArray<1> p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "sort", "([Ljava/lang/Comparable;)[I" );
	return ::net::sourceforge::jnipp::JIntArrayHelper<1>( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobjectArray>( p0 ) )  );
}

::net::sourceforge::jnipp::JIntArrayHelper<1> SortHelperProxy::sort(::net::sourceforge::jnipp::PA<::java::lang::ObjectProxy>::ProxyArray<1> p0, jint p1, jint p2, ::java::util::ComparatorProxy p3)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "sort", "([Ljava/lang/Object;IILjava/util/Comparator;)[I" );
	return ::net::sourceforge::jnipp::JIntArrayHelper<1>( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobjectArray>( p0 ), p1, p2, static_cast<jobject>( p3 ) )  );
}

::net::sourceforge::jnipp::JIntArrayHelper<1> SortHelperProxy::sort(::net::sourceforge::jnipp::PA<::java::lang::ObjectProxy>::ProxyArray<1> p0, ::java::util::ComparatorProxy p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "sort", "([Ljava/lang/Object;Ljava/util/Comparator;)[I" );
	return ::net::sourceforge::jnipp::JIntArrayHelper<1>( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobjectArray>( p0 ), static_cast<jobject>( p1 ) )  );
}

::net::sourceforge::jnipp::JIntArrayHelper<1> SortHelperProxy::sort(::java::util::ListProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "sort", "(Ljava/util/List;)[I" );
	return ::net::sourceforge::jnipp::JIntArrayHelper<1>( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::net::sourceforge::jnipp::JIntArrayHelper<1> SortHelperProxy::sort(::java::util::ListProxy p0, ::java::util::ComparatorProxy p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "sort", "(Ljava/util/List;Ljava/util/Comparator;)[I" );
	return ::net::sourceforge::jnipp::JIntArrayHelper<1>( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), static_cast<jobject>( p1 ) )  );
}

