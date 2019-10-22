#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "SortedList_ElementProxy.h"

// includes for parameter and return type proxy classes
#include "java\lang\ObjectProxy.h"

using namespace net::sourceforge::jnipp;
using namespace javafx::collections::transformation;


std::string SortedList_ElementProxy::className = "javafx/collections/transformation/SortedList$Element";
jclass SortedList_ElementProxy::objectClass = NULL;

jclass SortedList_ElementProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

SortedList_ElementProxy::SortedList_ElementProxy(void* unused)
{
}

jobject SortedList_ElementProxy::_getPeerObject() const
{
	return peerObject;
}

jclass SortedList_ElementProxy::getObjectClass()
{
	return _getObjectClass();
}

SortedList_ElementProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
SortedList_ElementProxy::SortedList_ElementProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

SortedList_ElementProxy::SortedList_ElementProxy(::java::lang::ObjectProxy p0, jint p1)
{
	jmethodID mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "<init>", "(Ljava/lang/Object;I)V" );
	peerObject = JNIEnvHelper::NewGlobalRef( JNIEnvHelper::NewObject( _getObjectClass(), mid, static_cast<jobject>( p0 ), p1 ) );
}

SortedList_ElementProxy::~SortedList_ElementProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

SortedList_ElementProxy& SortedList_ElementProxy::operator=(const SortedList_ElementProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
