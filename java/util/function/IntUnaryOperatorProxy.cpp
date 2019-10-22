#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "IntUnaryOperatorProxy.h"

// includes for parameter and return type proxy classes

using namespace net::sourceforge::jnipp;
using namespace java::util::function;


std::string IntUnaryOperatorProxy::className = "java/util/function/IntUnaryOperator";
jclass IntUnaryOperatorProxy::objectClass = NULL;

jclass IntUnaryOperatorProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

IntUnaryOperatorProxy::IntUnaryOperatorProxy(void* unused)
{
}

jobject IntUnaryOperatorProxy::_getPeerObject() const
{
	return peerObject;
}

jclass IntUnaryOperatorProxy::getObjectClass()
{
	return _getObjectClass();
}

IntUnaryOperatorProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
IntUnaryOperatorProxy::IntUnaryOperatorProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

IntUnaryOperatorProxy::~IntUnaryOperatorProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

IntUnaryOperatorProxy& IntUnaryOperatorProxy::operator=(const IntUnaryOperatorProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
jint IntUnaryOperatorProxy::applyAsInt(jint p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "applyAsInt", "(I)I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid, p0 );
}

::java::util::function::IntUnaryOperatorProxy IntUnaryOperatorProxy::andThen(::java::util::function::IntUnaryOperatorProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "andThen", "(Ljava/util/function/IntUnaryOperator;)Ljava/util/function/IntUnaryOperator;" );
	return ::java::util::function::IntUnaryOperatorProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::java::util::function::IntUnaryOperatorProxy IntUnaryOperatorProxy::compose(::java::util::function::IntUnaryOperatorProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "compose", "(Ljava/util/function/IntUnaryOperator;)Ljava/util/function/IntUnaryOperator;" );
	return ::java::util::function::IntUnaryOperatorProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::java::util::function::IntUnaryOperatorProxy IntUnaryOperatorProxy::identity()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "identity", "()Ljava/util/function/IntUnaryOperator;" );
	return ::java::util::function::IntUnaryOperatorProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid )  );
}

