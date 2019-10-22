#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "DoublePredicateProxy.h"

// includes for parameter and return type proxy classes

using namespace net::sourceforge::jnipp;
using namespace java::util::function;


std::string DoublePredicateProxy::className = "java/util/function/DoublePredicate";
jclass DoublePredicateProxy::objectClass = NULL;

jclass DoublePredicateProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

DoublePredicateProxy::DoublePredicateProxy(void* unused)
{
}

jobject DoublePredicateProxy::_getPeerObject() const
{
	return peerObject;
}

jclass DoublePredicateProxy::getObjectClass()
{
	return _getObjectClass();
}

DoublePredicateProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
DoublePredicateProxy::DoublePredicateProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

DoublePredicateProxy::~DoublePredicateProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

DoublePredicateProxy& DoublePredicateProxy::operator=(const DoublePredicateProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
jboolean DoublePredicateProxy::test(jdouble p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "test", "(D)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, p0 );
}

::java::util::function::DoublePredicateProxy DoublePredicateProxy::_and(::java::util::function::DoublePredicateProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "and", "(Ljava/util/function/DoublePredicate;)Ljava/util/function/DoublePredicate;" );
	return ::java::util::function::DoublePredicateProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::java::util::function::DoublePredicateProxy DoublePredicateProxy::negate()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "negate", "()Ljava/util/function/DoublePredicate;" );
	return ::java::util::function::DoublePredicateProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::util::function::DoublePredicateProxy DoublePredicateProxy::_or(::java::util::function::DoublePredicateProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "or", "(Ljava/util/function/DoublePredicate;)Ljava/util/function/DoublePredicate;" );
	return ::java::util::function::DoublePredicateProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

