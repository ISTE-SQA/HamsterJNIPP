#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "IntBinaryOperatorProxy.h"

// includes for parameter and return type proxy classes

using namespace net::sourceforge::jnipp;
using namespace java::util::function;


std::string IntBinaryOperatorProxy::className = "java/util/function/IntBinaryOperator";
jclass IntBinaryOperatorProxy::objectClass = NULL;

jclass IntBinaryOperatorProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

IntBinaryOperatorProxy::IntBinaryOperatorProxy(void* unused)
{
}

jobject IntBinaryOperatorProxy::_getPeerObject() const
{
	return peerObject;
}

jclass IntBinaryOperatorProxy::getObjectClass()
{
	return _getObjectClass();
}

IntBinaryOperatorProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
IntBinaryOperatorProxy::IntBinaryOperatorProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

IntBinaryOperatorProxy::~IntBinaryOperatorProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

IntBinaryOperatorProxy& IntBinaryOperatorProxy::operator=(const IntBinaryOperatorProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
jint IntBinaryOperatorProxy::applyAsInt(jint p0, jint p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "applyAsInt", "(II)I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid, p0, p1 );
}

