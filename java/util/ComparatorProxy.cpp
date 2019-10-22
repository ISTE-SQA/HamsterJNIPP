#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "ComparatorProxy.h"

// includes for parameter and return type proxy classes
#include "java\lang\ObjectProxy.h"
#include "java\util\function\FunctionProxy.h"
#include "java\util\function\ToDoubleFunctionProxy.h"
#include "java\util\function\ToIntFunctionProxy.h"
#include "java\util\function\ToLongFunctionProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::util;


std::string ComparatorProxy::className = "java/util/Comparator";
jclass ComparatorProxy::objectClass = NULL;

jclass ComparatorProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

ComparatorProxy::ComparatorProxy(void* unused)
{
}

jobject ComparatorProxy::_getPeerObject() const
{
	return peerObject;
}

jclass ComparatorProxy::getObjectClass()
{
	return _getObjectClass();
}

ComparatorProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
ComparatorProxy::ComparatorProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

ComparatorProxy::~ComparatorProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

ComparatorProxy& ComparatorProxy::operator=(const ComparatorProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
jboolean ComparatorProxy::equals(::java::lang::ObjectProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "equals", "(Ljava/lang/Object;)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

jint ComparatorProxy::compare(::java::lang::ObjectProxy p0, ::java::lang::ObjectProxy p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "compare", "(Ljava/lang/Object;Ljava/lang/Object;)I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), static_cast<jobject>( p1 ) );
}

::java::util::ComparatorProxy ComparatorProxy::reversed()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "reversed", "()Ljava/util/Comparator;" );
	return ::java::util::ComparatorProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::util::ComparatorProxy ComparatorProxy::thenComparing(::java::util::ComparatorProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "thenComparing", "(Ljava/util/Comparator;)Ljava/util/Comparator;" );
	return ::java::util::ComparatorProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::java::util::ComparatorProxy ComparatorProxy::thenComparing(::java::util::function::FunctionProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "thenComparing", "(Ljava/util/function/Function;)Ljava/util/Comparator;" );
	return ::java::util::ComparatorProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::java::util::ComparatorProxy ComparatorProxy::thenComparing(::java::util::function::FunctionProxy p0, ::java::util::ComparatorProxy p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "thenComparing", "(Ljava/util/function/Function;Ljava/util/Comparator;)Ljava/util/Comparator;" );
	return ::java::util::ComparatorProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), static_cast<jobject>( p1 ) )  );
}

::java::util::ComparatorProxy ComparatorProxy::thenComparingDouble(::java::util::function::ToDoubleFunctionProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "thenComparingDouble", "(Ljava/util/function/ToDoubleFunction;)Ljava/util/Comparator;" );
	return ::java::util::ComparatorProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::java::util::ComparatorProxy ComparatorProxy::thenComparingInt(::java::util::function::ToIntFunctionProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "thenComparingInt", "(Ljava/util/function/ToIntFunction;)Ljava/util/Comparator;" );
	return ::java::util::ComparatorProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::java::util::ComparatorProxy ComparatorProxy::thenComparingLong(::java::util::function::ToLongFunctionProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "thenComparingLong", "(Ljava/util/function/ToLongFunction;)Ljava/util/Comparator;" );
	return ::java::util::ComparatorProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::java::util::ComparatorProxy ComparatorProxy::comparing(::java::util::function::FunctionProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "comparing", "(Ljava/util/function/Function;)Ljava/util/Comparator;" );
	return ::java::util::ComparatorProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, static_cast<jobject>( p0 ) )  );
}

::java::util::ComparatorProxy ComparatorProxy::comparing(::java::util::function::FunctionProxy p0, ::java::util::ComparatorProxy p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "comparing", "(Ljava/util/function/Function;Ljava/util/Comparator;)Ljava/util/Comparator;" );
	return ::java::util::ComparatorProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, static_cast<jobject>( p0 ), static_cast<jobject>( p1 ) )  );
}

::java::util::ComparatorProxy ComparatorProxy::comparingDouble(::java::util::function::ToDoubleFunctionProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "comparingDouble", "(Ljava/util/function/ToDoubleFunction;)Ljava/util/Comparator;" );
	return ::java::util::ComparatorProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, static_cast<jobject>( p0 ) )  );
}

::java::util::ComparatorProxy ComparatorProxy::comparingInt(::java::util::function::ToIntFunctionProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "comparingInt", "(Ljava/util/function/ToIntFunction;)Ljava/util/Comparator;" );
	return ::java::util::ComparatorProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, static_cast<jobject>( p0 ) )  );
}

::java::util::ComparatorProxy ComparatorProxy::comparingLong(::java::util::function::ToLongFunctionProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "comparingLong", "(Ljava/util/function/ToLongFunction;)Ljava/util/Comparator;" );
	return ::java::util::ComparatorProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, static_cast<jobject>( p0 ) )  );
}

::java::util::ComparatorProxy ComparatorProxy::naturalOrder()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "naturalOrder", "()Ljava/util/Comparator;" );
	return ::java::util::ComparatorProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid )  );
}

::java::util::ComparatorProxy ComparatorProxy::nullsFirst(::java::util::ComparatorProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "nullsFirst", "(Ljava/util/Comparator;)Ljava/util/Comparator;" );
	return ::java::util::ComparatorProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, static_cast<jobject>( p0 ) )  );
}

::java::util::ComparatorProxy ComparatorProxy::nullsLast(::java::util::ComparatorProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "nullsLast", "(Ljava/util/Comparator;)Ljava/util/Comparator;" );
	return ::java::util::ComparatorProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, static_cast<jobject>( p0 ) )  );
}

::java::util::ComparatorProxy ComparatorProxy::reverseOrder()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "reverseOrder", "()Ljava/util/Comparator;" );
	return ::java::util::ComparatorProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid )  );
}

