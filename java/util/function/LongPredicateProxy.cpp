#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "LongPredicateProxy.h"

// includes for parameter and return type proxy classes

using namespace net::sourceforge::jnipp;
using namespace java::util::function;


std::string LongPredicateProxy::className = "java/util/function/LongPredicate";
jclass LongPredicateProxy::objectClass = NULL;

jclass LongPredicateProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

LongPredicateProxy::LongPredicateProxy(void* unused)
{
}

jobject LongPredicateProxy::_getPeerObject() const
{
	return peerObject;
}

jclass LongPredicateProxy::getObjectClass()
{
	return _getObjectClass();
}

LongPredicateProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
LongPredicateProxy::LongPredicateProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

LongPredicateProxy::~LongPredicateProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

LongPredicateProxy& LongPredicateProxy::operator=(const LongPredicateProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
jboolean LongPredicateProxy::test(jlong p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "test", "(J)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, p0 );
}

::java::util::function::LongPredicateProxy LongPredicateProxy::_and(::java::util::function::LongPredicateProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "and", "(Ljava/util/function/LongPredicate;)Ljava/util/function/LongPredicate;" );
	return ::java::util::function::LongPredicateProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::java::util::function::LongPredicateProxy LongPredicateProxy::negate()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "negate", "()Ljava/util/function/LongPredicate;" );
	return ::java::util::function::LongPredicateProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::util::function::LongPredicateProxy LongPredicateProxy::_or(::java::util::function::LongPredicateProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "or", "(Ljava/util/function/LongPredicate;)Ljava/util/function/LongPredicate;" );
	return ::java::util::function::LongPredicateProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

