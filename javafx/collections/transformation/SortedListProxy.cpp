#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "SortedListProxy.h"

// includes for parameter and return type proxy classes
#include "javafx\collections\ObservableListProxy.h"
#include "java\util\ComparatorProxy.h"
#include "javafx\beans\property\ObjectPropertyProxy.h"
#include "java\lang\ObjectProxy.h"
#include "com\sun\javafx\collections\SortHelperProxy.h"
#include "javafx\collections\transformation\SortedList_ElementProxy.h"

using namespace net::sourceforge::jnipp;
using namespace javafx::collections::transformation;


std::string SortedListProxy::className = "javafx/collections/transformation/SortedList";
jclass SortedListProxy::objectClass = NULL;

jclass SortedListProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

SortedListProxy::SortedListProxy(void* unused)
{
}

jobject SortedListProxy::_getPeerObject() const
{
	return peerObject;
}

jclass SortedListProxy::getObjectClass()
{
	return _getObjectClass();
}

SortedListProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
SortedListProxy::SortedListProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

SortedListProxy::SortedListProxy(::javafx::collections::ObservableListProxy p0)
{
	jmethodID mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "<init>", "(Ljavafx/collections/ObservableList;)V" );
	peerObject = JNIEnvHelper::NewGlobalRef( JNIEnvHelper::NewObject( _getObjectClass(), mid, static_cast<jobject>( p0 ) ) );
}

SortedListProxy::SortedListProxy(::javafx::collections::ObservableListProxy p0, ::java::util::ComparatorProxy p1)
{
	jmethodID mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "<init>", "(Ljavafx/collections/ObservableList;Ljava/util/Comparator;)V" );
	peerObject = JNIEnvHelper::NewGlobalRef( JNIEnvHelper::NewObject( _getObjectClass(), mid, static_cast<jobject>( p0 ), static_cast<jobject>( p1 ) ) );
}

SortedListProxy::~SortedListProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

SortedListProxy& SortedListProxy::operator=(const SortedListProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
::java::util::ComparatorProxy SortedListProxy::getComparator()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getComparator", "()Ljava/util/Comparator;" );
	return ::java::util::ComparatorProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::javafx::beans::property::ObjectPropertyProxy SortedListProxy::comparatorProperty()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "comparatorProperty", "()Ljavafx/beans/property/ObjectProperty;" );
	return ::javafx::beans::property::ObjectPropertyProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

void SortedListProxy::setComparator(::java::util::ComparatorProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "setComparator", "(Ljava/util/Comparator;)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

jint SortedListProxy::getSourceIndex(jint p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getSourceIndex", "(I)I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid, p0 );
}

jint SortedListProxy::size()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "size", "()I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid );
}

::java::lang::ObjectProxy SortedListProxy::get(jint p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "get", "(I)Ljava/lang/Object;" );
	return ::java::lang::ObjectProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0 )  );
}

