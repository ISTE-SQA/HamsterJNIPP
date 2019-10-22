#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "DoubleBinaryOperatorProxy.h"

// includes for parameter and return type proxy classes

using namespace net::sourceforge::jnipp;
using namespace java::util::function;


std::string DoubleBinaryOperatorProxy::className = "java/util/function/DoubleBinaryOperator";
jclass DoubleBinaryOperatorProxy::objectClass = NULL;

jclass DoubleBinaryOperatorProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

DoubleBinaryOperatorProxy::DoubleBinaryOperatorProxy(void* unused)
{
}

jobject DoubleBinaryOperatorProxy::_getPeerObject() const
{
	return peerObject;
}

jclass DoubleBinaryOperatorProxy::getObjectClass()
{
	return _getObjectClass();
}

DoubleBinaryOperatorProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
DoubleBinaryOperatorProxy::DoubleBinaryOperatorProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

DoubleBinaryOperatorProxy::~DoubleBinaryOperatorProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

DoubleBinaryOperatorProxy& DoubleBinaryOperatorProxy::operator=(const DoubleBinaryOperatorProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
jdouble DoubleBinaryOperatorProxy::applyAsDouble(jdouble p0, jdouble p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "applyAsDouble", "(DD)D" );
	return JNIEnvHelper::CallDoubleMethod( _getPeerObject(), mid, p0, p1 );
}

