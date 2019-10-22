#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "ReadOnlyObjectPropertyProxy.h"

// includes for parameter and return type proxy classes

using namespace net::sourceforge::jnipp;
using namespace javafx::beans::property;


std::string ReadOnlyObjectPropertyProxy::className = "javafx/beans/property/ReadOnlyObjectProperty";
jclass ReadOnlyObjectPropertyProxy::objectClass = NULL;

jclass ReadOnlyObjectPropertyProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

ReadOnlyObjectPropertyProxy::ReadOnlyObjectPropertyProxy(void* unused)
{
}

jobject ReadOnlyObjectPropertyProxy::_getPeerObject() const
{
	return peerObject;
}

jclass ReadOnlyObjectPropertyProxy::getObjectClass()
{
	return _getObjectClass();
}

ReadOnlyObjectPropertyProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
ReadOnlyObjectPropertyProxy::ReadOnlyObjectPropertyProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

ReadOnlyObjectPropertyProxy::ReadOnlyObjectPropertyProxy()
{
	jmethodID mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "<init>", "()V" );
	peerObject = JNIEnvHelper::NewGlobalRef( JNIEnvHelper::NewObject( _getObjectClass(), mid ) );
}

ReadOnlyObjectPropertyProxy::~ReadOnlyObjectPropertyProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

ReadOnlyObjectPropertyProxy& ReadOnlyObjectPropertyProxy::operator=(const ReadOnlyObjectPropertyProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
::net::sourceforge::jnipp::JStringHelper ReadOnlyObjectPropertyProxy::toString()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "toString", "()Ljava/lang/String;" );
	return ::net::sourceforge::jnipp::JStringHelper( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

