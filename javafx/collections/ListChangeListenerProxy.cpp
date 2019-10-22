#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "ListChangeListenerProxy.h"

// includes for parameter and return type proxy classes
#include "javafx\collections\ListChangeListener_ChangeProxy.h"

using namespace net::sourceforge::jnipp;
using namespace javafx::collections;


std::string ListChangeListenerProxy::className = "javafx/collections/ListChangeListener";
jclass ListChangeListenerProxy::objectClass = NULL;

jclass ListChangeListenerProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

ListChangeListenerProxy::ListChangeListenerProxy(void* unused)
{
}

jobject ListChangeListenerProxy::_getPeerObject() const
{
	return peerObject;
}

jclass ListChangeListenerProxy::getObjectClass()
{
	return _getObjectClass();
}

ListChangeListenerProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
ListChangeListenerProxy::ListChangeListenerProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

ListChangeListenerProxy::~ListChangeListenerProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

ListChangeListenerProxy& ListChangeListenerProxy::operator=(const ListChangeListenerProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
void ListChangeListenerProxy::onChanged(::javafx::collections::ListChangeListener_ChangeProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "onChanged", "(Ljavafx/collections/ListChangeListener$Change;)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

