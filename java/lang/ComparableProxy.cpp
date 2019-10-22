#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "ComparableProxy.h"

// includes for parameter and return type proxy classes
#include "java\lang\ObjectProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::lang;


std::string ComparableProxy::className = "java/lang/Comparable";
jclass ComparableProxy::objectClass = NULL;

jclass ComparableProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

ComparableProxy::ComparableProxy(void* unused)
{
}

jobject ComparableProxy::_getPeerObject() const
{
	return peerObject;
}

jclass ComparableProxy::getObjectClass()
{
	return _getObjectClass();
}

ComparableProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
ComparableProxy::ComparableProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

ComparableProxy::~ComparableProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

ComparableProxy& ComparableProxy::operator=(const ComparableProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
jint ComparableProxy::compareTo(::java::lang::ObjectProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "compareTo", "(Ljava/lang/Object;)I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

