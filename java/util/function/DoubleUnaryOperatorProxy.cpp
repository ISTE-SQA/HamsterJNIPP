#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "DoubleUnaryOperatorProxy.h"

// includes for parameter and return type proxy classes

using namespace net::sourceforge::jnipp;
using namespace java::util::function;


std::string DoubleUnaryOperatorProxy::className = "java/util/function/DoubleUnaryOperator";
jclass DoubleUnaryOperatorProxy::objectClass = NULL;

jclass DoubleUnaryOperatorProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

DoubleUnaryOperatorProxy::DoubleUnaryOperatorProxy(void* unused)
{
}

jobject DoubleUnaryOperatorProxy::_getPeerObject() const
{
	return peerObject;
}

jclass DoubleUnaryOperatorProxy::getObjectClass()
{
	return _getObjectClass();
}

DoubleUnaryOperatorProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
DoubleUnaryOperatorProxy::DoubleUnaryOperatorProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

DoubleUnaryOperatorProxy::~DoubleUnaryOperatorProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

DoubleUnaryOperatorProxy& DoubleUnaryOperatorProxy::operator=(const DoubleUnaryOperatorProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
jdouble DoubleUnaryOperatorProxy::applyAsDouble(jdouble p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "applyAsDouble", "(D)D" );
	return JNIEnvHelper::CallDoubleMethod( _getPeerObject(), mid, p0 );
}

::java::util::function::DoubleUnaryOperatorProxy DoubleUnaryOperatorProxy::andThen(::java::util::function::DoubleUnaryOperatorProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "andThen", "(Ljava/util/function/DoubleUnaryOperator;)Ljava/util/function/DoubleUnaryOperator;" );
	return ::java::util::function::DoubleUnaryOperatorProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::java::util::function::DoubleUnaryOperatorProxy DoubleUnaryOperatorProxy::compose(::java::util::function::DoubleUnaryOperatorProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "compose", "(Ljava/util/function/DoubleUnaryOperator;)Ljava/util/function/DoubleUnaryOperator;" );
	return ::java::util::function::DoubleUnaryOperatorProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::java::util::function::DoubleUnaryOperatorProxy DoubleUnaryOperatorProxy::identity()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "identity", "()Ljava/util/function/DoubleUnaryOperator;" );
	return ::java::util::function::DoubleUnaryOperatorProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid )  );
}

