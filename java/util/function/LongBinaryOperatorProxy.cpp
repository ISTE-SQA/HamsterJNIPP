#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "LongBinaryOperatorProxy.h"

// includes for parameter and return type proxy classes

using namespace net::sourceforge::jnipp;
using namespace java::util::function;


std::string LongBinaryOperatorProxy::className = "java/util/function/LongBinaryOperator";
jclass LongBinaryOperatorProxy::objectClass = NULL;

jclass LongBinaryOperatorProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

LongBinaryOperatorProxy::LongBinaryOperatorProxy(void* unused)
{
}

jobject LongBinaryOperatorProxy::_getPeerObject() const
{
	return peerObject;
}

jclass LongBinaryOperatorProxy::getObjectClass()
{
	return _getObjectClass();
}

LongBinaryOperatorProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
LongBinaryOperatorProxy::LongBinaryOperatorProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

LongBinaryOperatorProxy::~LongBinaryOperatorProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

LongBinaryOperatorProxy& LongBinaryOperatorProxy::operator=(const LongBinaryOperatorProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
jlong LongBinaryOperatorProxy::applyAsLong(jlong p0, jlong p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "applyAsLong", "(JJ)J" );
	return JNIEnvHelper::CallLongMethod( _getPeerObject(), mid, p0, p1 );
}

