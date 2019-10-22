#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "FilteredListProxy.h"

// includes for parameter and return type proxy classes
#include "javafx\collections\ObservableListProxy.h"
#include "java\util\function\PredicateProxy.h"
#include "javafx\beans\property\ObjectPropertyProxy.h"
#include "java\lang\ObjectProxy.h"
#include "com\sun\javafx\collections\SortHelperProxy.h"

using namespace net::sourceforge::jnipp;
using namespace javafx::collections::transformation;


std::string FilteredListProxy::className = "javafx/collections/transformation/FilteredList";
jclass FilteredListProxy::objectClass = NULL;

jclass FilteredListProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

FilteredListProxy::FilteredListProxy(void* unused)
{
}

jobject FilteredListProxy::_getPeerObject() const
{
	return peerObject;
}

jclass FilteredListProxy::getObjectClass()
{
	return _getObjectClass();
}

FilteredListProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
FilteredListProxy::FilteredListProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

FilteredListProxy::FilteredListProxy(::javafx::collections::ObservableListProxy p0)
{
	jmethodID mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "<init>", "(Ljavafx/collections/ObservableList;)V" );
	peerObject = JNIEnvHelper::NewGlobalRef( JNIEnvHelper::NewObject( _getObjectClass(), mid, static_cast<jobject>( p0 ) ) );
}

FilteredListProxy::FilteredListProxy(::javafx::collections::ObservableListProxy p0, ::java::util::function::PredicateProxy p1)
{
	jmethodID mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "<init>", "(Ljavafx/collections/ObservableList;Ljava/util/function/Predicate;)V" );
	peerObject = JNIEnvHelper::NewGlobalRef( JNIEnvHelper::NewObject( _getObjectClass(), mid, static_cast<jobject>( p0 ), static_cast<jobject>( p1 ) ) );
}

FilteredListProxy::~FilteredListProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

FilteredListProxy& FilteredListProxy::operator=(const FilteredListProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
::java::util::function::PredicateProxy FilteredListProxy::getPredicate()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getPredicate", "()Ljava/util/function/Predicate;" );
	return ::java::util::function::PredicateProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::javafx::beans::property::ObjectPropertyProxy FilteredListProxy::predicateProperty()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "predicateProperty", "()Ljavafx/beans/property/ObjectProperty;" );
	return ::javafx::beans::property::ObjectPropertyProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

void FilteredListProxy::setPredicate(::java::util::function::PredicateProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "setPredicate", "(Ljava/util/function/Predicate;)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

jint FilteredListProxy::getSourceIndex(jint p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getSourceIndex", "(I)I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid, p0 );
}

jint FilteredListProxy::size()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "size", "()I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid );
}

::java::lang::ObjectProxy FilteredListProxy::get(jint p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "get", "(I)Ljava/lang/Object;" );
	return ::java::lang::ObjectProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0 )  );
}

