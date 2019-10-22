#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "LongUnaryOperatorProxy.h"

// includes for parameter and return type proxy classes

using namespace net::sourceforge::jnipp;
using namespace java::util::function;


std::string LongUnaryOperatorProxy::className = "java/util/function/LongUnaryOperator";
jclass LongUnaryOperatorProxy::objectClass = NULL;

jclass LongUnaryOperatorProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

LongUnaryOperatorProxy::LongUnaryOperatorProxy(void* unused)
{
}

jobject LongUnaryOperatorProxy::_getPeerObject() const
{
	return peerObject;
}

jclass LongUnaryOperatorProxy::getObjectClass()
{
	return _getObjectClass();
}

LongUnaryOperatorProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
LongUnaryOperatorProxy::LongUnaryOperatorProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

LongUnaryOperatorProxy::~LongUnaryOperatorProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

LongUnaryOperatorProxy& LongUnaryOperatorProxy::operator=(const LongUnaryOperatorProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
jlong LongUnaryOperatorProxy::applyAsLong(jlong p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "applyAsLong", "(J)J" );
	return JNIEnvHelper::CallLongMethod( _getPeerObject(), mid, p0 );
}

::java::util::function::LongUnaryOperatorProxy LongUnaryOperatorProxy::andThen(::java::util::function::LongUnaryOperatorProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "andThen", "(Ljava/util/function/LongUnaryOperator;)Ljava/util/function/LongUnaryOperator;" );
	return ::java::util::function::LongUnaryOperatorProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::java::util::function::LongUnaryOperatorProxy LongUnaryOperatorProxy::compose(::java::util::function::LongUnaryOperatorProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "compose", "(Ljava/util/function/LongUnaryOperator;)Ljava/util/function/LongUnaryOperator;" );
	return ::java::util::function::LongUnaryOperatorProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::java::util::function::LongUnaryOperatorProxy LongUnaryOperatorProxy::identity()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "identity", "()Ljava/util/function/LongUnaryOperator;" );
	return ::java::util::function::LongUnaryOperatorProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid )  );
}

