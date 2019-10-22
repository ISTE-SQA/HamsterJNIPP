#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "VectorProxy.h"

// includes for parameter and return type proxy classes
#include "java\util\CollectionProxy.h"
#include "java\lang\ObjectProxy.h"
#include "java\util\EnumerationProxy.h"
#include "java\util\SpliteratorProxy.h"
#include "java\util\function\PredicateProxy.h"
#include "java\util\IteratorProxy.h"
#include "java\util\ListProxy.h"
#include "java\util\ListIteratorProxy.h"
#include "java\util\function\ConsumerProxy.h"
#include "java\util\function\UnaryOperatorProxy.h"
#include "java\util\ComparatorProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::util;


std::string VectorProxy::className = "java/util/Vector";
jclass VectorProxy::objectClass = NULL;

jclass VectorProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

VectorProxy::VectorProxy(void* unused)
{
}

jobject VectorProxy::_getPeerObject() const
{
	return peerObject;
}

jclass VectorProxy::getObjectClass()
{
	return _getObjectClass();
}

VectorProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
VectorProxy::VectorProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

VectorProxy::VectorProxy()
{
	jmethodID mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "<init>", "()V" );
	peerObject = JNIEnvHelper::NewGlobalRef( JNIEnvHelper::NewObject( _getObjectClass(), mid ) );
}

VectorProxy::VectorProxy(jint p0)
{
	jmethodID mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "<init>", "(I)V" );
	peerObject = JNIEnvHelper::NewGlobalRef( JNIEnvHelper::NewObject( _getObjectClass(), mid, p0 ) );
}

VectorProxy::VectorProxy(jint p0, jint p1)
{
	jmethodID mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "<init>", "(II)V" );
	peerObject = JNIEnvHelper::NewGlobalRef( JNIEnvHelper::NewObject( _getObjectClass(), mid, p0, p1 ) );
}

VectorProxy::VectorProxy(::java::util::CollectionProxy p0)
{
	jmethodID mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "<init>", "(Ljava/util/Collection;)V" );
	peerObject = JNIEnvHelper::NewGlobalRef( JNIEnvHelper::NewObject( _getObjectClass(), mid, static_cast<jobject>( p0 ) ) );
}

VectorProxy::~VectorProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

VectorProxy& VectorProxy::operator=(const VectorProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
jboolean VectorProxy::contains(::java::lang::ObjectProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "contains", "(Ljava/lang/Object;)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

jboolean VectorProxy::remove(::java::lang::ObjectProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "remove", "(Ljava/lang/Object;)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

jint VectorProxy::indexOf(::java::lang::ObjectProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "indexOf", "(Ljava/lang/Object;)I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

::java::util::EnumerationProxy VectorProxy::elements()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "elements", "()Ljava/util/Enumeration;" );
	return ::java::util::EnumerationProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::util::SpliteratorProxy VectorProxy::spliterator()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "spliterator", "()Ljava/util/Spliterator;" );
	return ::java::util::SpliteratorProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

jboolean VectorProxy::add(::java::lang::ObjectProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "add", "(Ljava/lang/Object;)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

jboolean VectorProxy::addAll(jint p0, ::java::util::CollectionProxy p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "addAll", "(ILjava/util/Collection;)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, p0, static_cast<jobject>( p1 ) );
}

jboolean VectorProxy::addAll(::java::util::CollectionProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "addAll", "(Ljava/util/Collection;)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

jboolean VectorProxy::containsAll(::java::util::CollectionProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "containsAll", "(Ljava/util/Collection;)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

jboolean VectorProxy::equals(::java::lang::ObjectProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "equals", "(Ljava/lang/Object;)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

jboolean VectorProxy::isEmpty()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "isEmpty", "()Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid );
}

jboolean VectorProxy::removeAll(::java::util::CollectionProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "removeAll", "(Ljava/util/Collection;)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

jboolean VectorProxy::removeElement(::java::lang::ObjectProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "removeElement", "(Ljava/lang/Object;)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

jboolean VectorProxy::removeIf(::java::util::function::PredicateProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "removeIf", "(Ljava/util/function/Predicate;)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

jboolean VectorProxy::retainAll(::java::util::CollectionProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "retainAll", "(Ljava/util/Collection;)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

jint VectorProxy::capacity()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "capacity", "()I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid );
}

jint VectorProxy::hashCode()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "hashCode", "()I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid );
}

jint VectorProxy::indexOf(::java::lang::ObjectProxy p0, jint p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "indexOf", "(Ljava/lang/Object;I)I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), p1 );
}

jint VectorProxy::lastIndexOf(::java::lang::ObjectProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "lastIndexOf", "(Ljava/lang/Object;)I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

jint VectorProxy::lastIndexOf(::java::lang::ObjectProxy p0, jint p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "lastIndexOf", "(Ljava/lang/Object;I)I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), p1 );
}

jint VectorProxy::size()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "size", "()I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid );
}

::java::lang::ObjectProxy VectorProxy::clone()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "clone", "()Ljava/lang/Object;" );
	return ::java::lang::ObjectProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::lang::ObjectProxy VectorProxy::elementAt(jint p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "elementAt", "(I)Ljava/lang/Object;" );
	return ::java::lang::ObjectProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0 )  );
}

::java::lang::ObjectProxy VectorProxy::firstElement()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "firstElement", "()Ljava/lang/Object;" );
	return ::java::lang::ObjectProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::lang::ObjectProxy VectorProxy::get(jint p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "get", "(I)Ljava/lang/Object;" );
	return ::java::lang::ObjectProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0 )  );
}

::java::lang::ObjectProxy VectorProxy::lastElement()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "lastElement", "()Ljava/lang/Object;" );
	return ::java::lang::ObjectProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::lang::ObjectProxy VectorProxy::remove(jint p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "remove", "(I)Ljava/lang/Object;" );
	return ::java::lang::ObjectProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0 )  );
}

::java::lang::ObjectProxy VectorProxy::set(jint p0, ::java::lang::ObjectProxy p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "set", "(ILjava/lang/Object;)Ljava/lang/Object;" );
	return ::java::lang::ObjectProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0, static_cast<jobject>( p1 ) )  );
}

::net::sourceforge::jnipp::PA<::java::lang::ObjectProxy>::ProxyArray<1> VectorProxy::toArray()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "toArray", "()[Ljava/lang/Object;" );
	return ::net::sourceforge::jnipp::PA<::java::lang::ObjectProxy>::ProxyArray<1>( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::net::sourceforge::jnipp::PA<::java::lang::ObjectProxy>::ProxyArray<1> VectorProxy::toArray(::net::sourceforge::jnipp::PA<::java::lang::ObjectProxy>::ProxyArray<1> p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "toArray", "([Ljava/lang/Object;)[Ljava/lang/Object;" );
	return ::net::sourceforge::jnipp::PA<::java::lang::ObjectProxy>::ProxyArray<1>( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobjectArray>( p0 ) )  );
}

::net::sourceforge::jnipp::JStringHelper VectorProxy::toString()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "toString", "()Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::util::IteratorProxy VectorProxy::iterator()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "iterator", "()Ljava/util/Iterator;" );
	return ::java::util::IteratorProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::util::ListProxy VectorProxy::subList(jint p0, jint p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "subList", "(II)Ljava/util/List;" );
	return ::java::util::ListProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0, p1 )  );
}

::java::util::ListIteratorProxy VectorProxy::listIterator()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "listIterator", "()Ljava/util/ListIterator;" );
	return ::java::util::ListIteratorProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::util::ListIteratorProxy VectorProxy::listIterator(jint p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "listIterator", "(I)Ljava/util/ListIterator;" );
	return ::java::util::ListIteratorProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0 )  );
}

void VectorProxy::addElement(::java::lang::ObjectProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "addElement", "(Ljava/lang/Object;)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

void VectorProxy::copyInto(::net::sourceforge::jnipp::PA<::java::lang::ObjectProxy>::ProxyArray<1> p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "copyInto", "([Ljava/lang/Object;)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, static_cast<jobjectArray>( p0 ) );
}

void VectorProxy::ensureCapacity(jint p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "ensureCapacity", "(I)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, p0 );
}

void VectorProxy::forEach(::java::util::function::ConsumerProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "forEach", "(Ljava/util/function/Consumer;)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

void VectorProxy::insertElementAt(::java::lang::ObjectProxy p0, jint p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "insertElementAt", "(Ljava/lang/Object;I)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), p1 );
}

void VectorProxy::removeAllElements()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "removeAllElements", "()V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid );
}

void VectorProxy::removeElementAt(jint p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "removeElementAt", "(I)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, p0 );
}

void VectorProxy::replaceAll(::java::util::function::UnaryOperatorProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "replaceAll", "(Ljava/util/function/UnaryOperator;)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

void VectorProxy::setElementAt(::java::lang::ObjectProxy p0, jint p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "setElementAt", "(Ljava/lang/Object;I)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), p1 );
}

void VectorProxy::setSize(jint p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "setSize", "(I)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, p0 );
}

void VectorProxy::sort(::java::util::ComparatorProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "sort", "(Ljava/util/Comparator;)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

void VectorProxy::trimToSize()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "trimToSize", "()V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid );
}

void VectorProxy::add(jint p0, ::java::lang::ObjectProxy p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "add", "(ILjava/lang/Object;)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, p0, static_cast<jobject>( p1 ) );
}

void VectorProxy::clear()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "clear", "()V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid );
}

