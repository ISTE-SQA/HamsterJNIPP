#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "ListChangeListener_ChangeProxy.h"

// includes for parameter and return type proxy classes
#include "javafx\collections\ObservableListProxy.h"
#include "java\util\ListProxy.h"

using namespace net::sourceforge::jnipp;
using namespace javafx::collections;


std::string ListChangeListener_ChangeProxy::className = "javafx/collections/ListChangeListener$Change";
jclass ListChangeListener_ChangeProxy::objectClass = NULL;

jclass ListChangeListener_ChangeProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

ListChangeListener_ChangeProxy::ListChangeListener_ChangeProxy(void* unused)
{
}

jobject ListChangeListener_ChangeProxy::_getPeerObject() const
{
	return peerObject;
}

jclass ListChangeListener_ChangeProxy::getObjectClass()
{
	return _getObjectClass();
}

ListChangeListener_ChangeProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
ListChangeListener_ChangeProxy::ListChangeListener_ChangeProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

ListChangeListener_ChangeProxy::ListChangeListener_ChangeProxy(::javafx::collections::ObservableListProxy p0)
{
	jmethodID mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "<init>", "(Ljavafx/collections/ObservableList;)V" );
	peerObject = JNIEnvHelper::NewGlobalRef( JNIEnvHelper::NewObject( _getObjectClass(), mid, static_cast<jobject>( p0 ) ) );
}

ListChangeListener_ChangeProxy::~ListChangeListener_ChangeProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

ListChangeListener_ChangeProxy& ListChangeListener_ChangeProxy::operator=(const ListChangeListener_ChangeProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
jboolean ListChangeListener_ChangeProxy::next()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "next", "()Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid );
}

jint ListChangeListener_ChangeProxy::getFrom()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getFrom", "()I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid );
}

jint ListChangeListener_ChangeProxy::getTo()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getTo", "()I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid );
}

::java::util::ListProxy ListChangeListener_ChangeProxy::getRemoved()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getRemoved", "()Ljava/util/List;" );
	return ::java::util::ListProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

void ListChangeListener_ChangeProxy::reset()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "reset", "()V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid );
}

jboolean ListChangeListener_ChangeProxy::wasAdded()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "wasAdded", "()Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid );
}

jboolean ListChangeListener_ChangeProxy::wasPermutated()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "wasPermutated", "()Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid );
}

jboolean ListChangeListener_ChangeProxy::wasRemoved()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "wasRemoved", "()Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid );
}

jboolean ListChangeListener_ChangeProxy::wasReplaced()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "wasReplaced", "()Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid );
}

jboolean ListChangeListener_ChangeProxy::wasUpdated()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "wasUpdated", "()Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid );
}

jint ListChangeListener_ChangeProxy::getAddedSize()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getAddedSize", "()I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid );
}

jint ListChangeListener_ChangeProxy::getPermutation(jint p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getPermutation", "(I)I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid, p0 );
}

jint ListChangeListener_ChangeProxy::getRemovedSize()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getRemovedSize", "()I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid );
}

::java::util::ListProxy ListChangeListener_ChangeProxy::getAddedSubList()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getAddedSubList", "()Ljava/util/List;" );
	return ::java::util::ListProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::javafx::collections::ObservableListProxy ListChangeListener_ChangeProxy::getList()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "getList", "()Ljavafx/collections/ObservableList;" );
	return ::javafx::collections::ObservableListProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

