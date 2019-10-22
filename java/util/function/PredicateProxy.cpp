#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "PredicateProxy.h"

// includes for parameter and return type proxy classes
#include "java\lang\ObjectProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::util::function;


std::string PredicateProxy::className = "java/util/function/Predicate";
jclass PredicateProxy::objectClass = NULL;

jclass PredicateProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

PredicateProxy::PredicateProxy(void* unused)
{
}

jobject PredicateProxy::_getPeerObject() const
{
	return peerObject;
}

jclass PredicateProxy::getObjectClass()
{
	return _getObjectClass();
}

PredicateProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
PredicateProxy::PredicateProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

PredicateProxy::~PredicateProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

PredicateProxy& PredicateProxy::operator=(const PredicateProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
jboolean PredicateProxy::test(::java::lang::ObjectProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "test", "(Ljava/lang/Object;)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

::java::util::function::PredicateProxy PredicateProxy::_and(::java::util::function::PredicateProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "and", "(Ljava/util/function/Predicate;)Ljava/util/function/Predicate;" );
	return ::java::util::function::PredicateProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::java::util::function::PredicateProxy PredicateProxy::negate()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "negate", "()Ljava/util/function/Predicate;" );
	return ::java::util::function::PredicateProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::util::function::PredicateProxy PredicateProxy::_or(::java::util::function::PredicateProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "or", "(Ljava/util/function/Predicate;)Ljava/util/function/Predicate;" );
	return ::java::util::function::PredicateProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::java::util::function::PredicateProxy PredicateProxy::isEqual(::java::lang::ObjectProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "isEqual", "(Ljava/lang/Object;)Ljava/util/function/Predicate;" );
	return ::java::util::function::PredicateProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, static_cast<jobject>( p0 ) )  );
}

