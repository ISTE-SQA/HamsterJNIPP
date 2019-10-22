#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "IntPredicateProxy.h"

// includes for parameter and return type proxy classes

using namespace net::sourceforge::jnipp;
using namespace java::util::function;


std::string IntPredicateProxy::className = "java/util/function/IntPredicate";
jclass IntPredicateProxy::objectClass = NULL;

jclass IntPredicateProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

IntPredicateProxy::IntPredicateProxy(void* unused)
{
}

jobject IntPredicateProxy::_getPeerObject() const
{
	return peerObject;
}

jclass IntPredicateProxy::getObjectClass()
{
	return _getObjectClass();
}

IntPredicateProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
IntPredicateProxy::IntPredicateProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

IntPredicateProxy::~IntPredicateProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

IntPredicateProxy& IntPredicateProxy::operator=(const IntPredicateProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
jboolean IntPredicateProxy::test(jint p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "test", "(I)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, p0 );
}

::java::util::function::IntPredicateProxy IntPredicateProxy::_and(::java::util::function::IntPredicateProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "and", "(Ljava/util/function/IntPredicate;)Ljava/util/function/IntPredicate;" );
	return ::java::util::function::IntPredicateProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::java::util::function::IntPredicateProxy IntPredicateProxy::negate()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "negate", "()Ljava/util/function/IntPredicate;" );
	return ::java::util::function::IntPredicateProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::util::function::IntPredicateProxy IntPredicateProxy::_or(::java::util::function::IntPredicateProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "or", "(Ljava/util/function/IntPredicate;)Ljava/util/function/IntPredicate;" );
	return ::java::util::function::IntPredicateProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

