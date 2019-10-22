#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "ObservableListProxy.h"

// includes for parameter and return type proxy classes
#include "java\lang\ObjectProxy.h"
#include "java\util\CollectionProxy.h"
#include "javafx\collections\ListChangeListenerProxy.h"
#include "java\util\function\PredicateProxy.h"
#include "javafx\collections\transformation\FilteredListProxy.h"
#include "javafx\collections\transformation\SortedListProxy.h"
#include "java\util\ComparatorProxy.h"

using namespace net::sourceforge::jnipp;
using namespace javafx::collections;


std::string ObservableListProxy::className = "javafx/collections/ObservableList";
jclass ObservableListProxy::objectClass = NULL;

jclass ObservableListProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

ObservableListProxy::ObservableListProxy(void* unused)
{
}

jobject ObservableListProxy::_getPeerObject() const
{
	return peerObject;
}

jclass ObservableListProxy::getObjectClass()
{
	return _getObjectClass();
}

ObservableListProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
ObservableListProxy::ObservableListProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

ObservableListProxy::~ObservableListProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

ObservableListProxy& ObservableListProxy::operator=(const ObservableListProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
jboolean ObservableListProxy::addAll(::net::sourceforge::jnipp::PA<::java::lang::ObjectProxy>::ProxyArray<1> p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "addAll", "([Ljava/lang/Object;)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, static_cast<jobjectArray>( p0 ) );
}

jboolean ObservableListProxy::removeAll(::net::sourceforge::jnipp::PA<::java::lang::ObjectProxy>::ProxyArray<1> p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "removeAll", "([Ljava/lang/Object;)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, static_cast<jobjectArray>( p0 ) );
}

jboolean ObservableListProxy::retainAll(::net::sourceforge::jnipp::PA<::java::lang::ObjectProxy>::ProxyArray<1> p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "retainAll", "([Ljava/lang/Object;)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, static_cast<jobjectArray>( p0 ) );
}

jboolean ObservableListProxy::setAll(::net::sourceforge::jnipp::PA<::java::lang::ObjectProxy>::ProxyArray<1> p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "setAll", "([Ljava/lang/Object;)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, static_cast<jobjectArray>( p0 ) );
}

jboolean ObservableListProxy::setAll(::java::util::CollectionProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "setAll", "(Ljava/util/Collection;)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

void ObservableListProxy::addListener(::javafx::collections::ListChangeListenerProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "addListener", "(Ljavafx/collections/ListChangeListener;)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

void ObservableListProxy::remove(jint p0, jint p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "remove", "(II)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, p0, p1 );
}

void ObservableListProxy::removeListener(::javafx::collections::ListChangeListenerProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "removeListener", "(Ljavafx/collections/ListChangeListener;)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

::javafx::collections::transformation::FilteredListProxy ObservableListProxy::filtered(::java::util::function::PredicateProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "filtered", "(Ljava/util/function/Predicate;)Ljavafx/collections/transformation/FilteredList;" );
	return ::javafx::collections::transformation::FilteredListProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::javafx::collections::transformation::SortedListProxy ObservableListProxy::sorted()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "sorted", "()Ljavafx/collections/transformation/SortedList;" );
	return ::javafx::collections::transformation::SortedListProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::javafx::collections::transformation::SortedListProxy ObservableListProxy::sorted(::java::util::ComparatorProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "sorted", "(Ljava/util/Comparator;)Ljavafx/collections/transformation/SortedList;" );
	return ::javafx::collections::transformation::SortedListProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

