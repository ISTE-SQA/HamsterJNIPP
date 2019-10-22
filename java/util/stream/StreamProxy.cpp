#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "StreamProxy.h"

// includes for parameter and return type proxy classes
#include "java\util\function\PredicateProxy.h"
#include "java\util\function\SupplierProxy.h"
#include "java\util\function\BiConsumerProxy.h"
#include "java\lang\ObjectProxy.h"
#include "java\util\stream\CollectorProxy.h"
#include "java\util\function\BiFunctionProxy.h"
#include "java\util\function\BinaryOperatorProxy.h"
#include "java\util\function\IntFunctionProxy.h"
#include "java\util\OptionalProxy.h"
#include "java\util\ComparatorProxy.h"
#include "java\util\function\FunctionProxy.h"
#include "java\util\stream\DoubleStreamProxy.h"
#include "java\util\function\ToDoubleFunctionProxy.h"
#include "java\util\stream\IntStreamProxy.h"
#include "java\util\function\ToIntFunctionProxy.h"
#include "java\util\stream\LongStreamProxy.h"
#include "java\util\function\ToLongFunctionProxy.h"
#include "java\util\function\ConsumerProxy.h"
#include "java\util\function\UnaryOperatorProxy.h"
#include "java\util\stream\Stream_BuilderProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::util::stream;


std::string StreamProxy::className = "java/util/stream/Stream";
jclass StreamProxy::objectClass = NULL;

jclass StreamProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

StreamProxy::StreamProxy(void* unused)
{
}

jobject StreamProxy::_getPeerObject() const
{
	return peerObject;
}

jclass StreamProxy::getObjectClass()
{
	return _getObjectClass();
}

StreamProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
StreamProxy::StreamProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

StreamProxy::~StreamProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

StreamProxy& StreamProxy::operator=(const StreamProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
jboolean StreamProxy::allMatch(::java::util::function::PredicateProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "allMatch", "(Ljava/util/function/Predicate;)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

jboolean StreamProxy::anyMatch(::java::util::function::PredicateProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "anyMatch", "(Ljava/util/function/Predicate;)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

jboolean StreamProxy::noneMatch(::java::util::function::PredicateProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "noneMatch", "(Ljava/util/function/Predicate;)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

::java::lang::ObjectProxy StreamProxy::collect(::java::util::function::SupplierProxy p0, ::java::util::function::BiConsumerProxy p1, ::java::util::function::BiConsumerProxy p2)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "collect", "(Ljava/util/function/Supplier;Ljava/util/function/BiConsumer;Ljava/util/function/BiConsumer;)Ljava/lang/Object;" );
	return ::java::lang::ObjectProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), static_cast<jobject>( p1 ), static_cast<jobject>( p2 ) )  );
}

::java::lang::ObjectProxy StreamProxy::collect(::java::util::stream::CollectorProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "collect", "(Ljava/util/stream/Collector;)Ljava/lang/Object;" );
	return ::java::lang::ObjectProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::java::lang::ObjectProxy StreamProxy::reduce(::java::lang::ObjectProxy p0, ::java::util::function::BiFunctionProxy p1, ::java::util::function::BinaryOperatorProxy p2)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "reduce", "(Ljava/lang/Object;Ljava/util/function/BiFunction;Ljava/util/function/BinaryOperator;)Ljava/lang/Object;" );
	return ::java::lang::ObjectProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), static_cast<jobject>( p1 ), static_cast<jobject>( p2 ) )  );
}

::java::lang::ObjectProxy StreamProxy::reduce(::java::lang::ObjectProxy p0, ::java::util::function::BinaryOperatorProxy p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "reduce", "(Ljava/lang/Object;Ljava/util/function/BinaryOperator;)Ljava/lang/Object;" );
	return ::java::lang::ObjectProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), static_cast<jobject>( p1 ) )  );
}

::net::sourceforge::jnipp::PA<::java::lang::ObjectProxy>::ProxyArray<1> StreamProxy::toArray()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "toArray", "()[Ljava/lang/Object;" );
	return ::net::sourceforge::jnipp::PA<::java::lang::ObjectProxy>::ProxyArray<1>( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::net::sourceforge::jnipp::PA<::java::lang::ObjectProxy>::ProxyArray<1> StreamProxy::toArray(::java::util::function::IntFunctionProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "toArray", "(Ljava/util/function/IntFunction;)[Ljava/lang/Object;" );
	return ::net::sourceforge::jnipp::PA<::java::lang::ObjectProxy>::ProxyArray<1>( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::java::util::OptionalProxy StreamProxy::findAny()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "findAny", "()Ljava/util/Optional;" );
	return ::java::util::OptionalProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::util::OptionalProxy StreamProxy::findFirst()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "findFirst", "()Ljava/util/Optional;" );
	return ::java::util::OptionalProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::util::OptionalProxy StreamProxy::max(::java::util::ComparatorProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "max", "(Ljava/util/Comparator;)Ljava/util/Optional;" );
	return ::java::util::OptionalProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::java::util::OptionalProxy StreamProxy::min(::java::util::ComparatorProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "min", "(Ljava/util/Comparator;)Ljava/util/Optional;" );
	return ::java::util::OptionalProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::java::util::OptionalProxy StreamProxy::reduce(::java::util::function::BinaryOperatorProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "reduce", "(Ljava/util/function/BinaryOperator;)Ljava/util/Optional;" );
	return ::java::util::OptionalProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::java::util::stream::DoubleStreamProxy StreamProxy::flatMapToDouble(::java::util::function::FunctionProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "flatMapToDouble", "(Ljava/util/function/Function;)Ljava/util/stream/DoubleStream;" );
	return ::java::util::stream::DoubleStreamProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::java::util::stream::DoubleStreamProxy StreamProxy::mapToDouble(::java::util::function::ToDoubleFunctionProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "mapToDouble", "(Ljava/util/function/ToDoubleFunction;)Ljava/util/stream/DoubleStream;" );
	return ::java::util::stream::DoubleStreamProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::java::util::stream::IntStreamProxy StreamProxy::flatMapToInt(::java::util::function::FunctionProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "flatMapToInt", "(Ljava/util/function/Function;)Ljava/util/stream/IntStream;" );
	return ::java::util::stream::IntStreamProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::java::util::stream::IntStreamProxy StreamProxy::mapToInt(::java::util::function::ToIntFunctionProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "mapToInt", "(Ljava/util/function/ToIntFunction;)Ljava/util/stream/IntStream;" );
	return ::java::util::stream::IntStreamProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::java::util::stream::LongStreamProxy StreamProxy::flatMapToLong(::java::util::function::FunctionProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "flatMapToLong", "(Ljava/util/function/Function;)Ljava/util/stream/LongStream;" );
	return ::java::util::stream::LongStreamProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::java::util::stream::LongStreamProxy StreamProxy::mapToLong(::java::util::function::ToLongFunctionProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "mapToLong", "(Ljava/util/function/ToLongFunction;)Ljava/util/stream/LongStream;" );
	return ::java::util::stream::LongStreamProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::java::util::stream::StreamProxy StreamProxy::distinct()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "distinct", "()Ljava/util/stream/Stream;" );
	return ::java::util::stream::StreamProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::util::stream::StreamProxy StreamProxy::filter(::java::util::function::PredicateProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "filter", "(Ljava/util/function/Predicate;)Ljava/util/stream/Stream;" );
	return ::java::util::stream::StreamProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::java::util::stream::StreamProxy StreamProxy::flatMap(::java::util::function::FunctionProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "flatMap", "(Ljava/util/function/Function;)Ljava/util/stream/Stream;" );
	return ::java::util::stream::StreamProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::java::util::stream::StreamProxy StreamProxy::limit(jlong p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "limit", "(J)Ljava/util/stream/Stream;" );
	return ::java::util::stream::StreamProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0 )  );
}

::java::util::stream::StreamProxy StreamProxy::map(::java::util::function::FunctionProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "map", "(Ljava/util/function/Function;)Ljava/util/stream/Stream;" );
	return ::java::util::stream::StreamProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::java::util::stream::StreamProxy StreamProxy::peek(::java::util::function::ConsumerProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "peek", "(Ljava/util/function/Consumer;)Ljava/util/stream/Stream;" );
	return ::java::util::stream::StreamProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::java::util::stream::StreamProxy StreamProxy::skip(jlong p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "skip", "(J)Ljava/util/stream/Stream;" );
	return ::java::util::stream::StreamProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0 )  );
}

::java::util::stream::StreamProxy StreamProxy::sorted()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "sorted", "()Ljava/util/stream/Stream;" );
	return ::java::util::stream::StreamProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::util::stream::StreamProxy StreamProxy::sorted(::java::util::ComparatorProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "sorted", "(Ljava/util/Comparator;)Ljava/util/stream/Stream;" );
	return ::java::util::stream::StreamProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

jlong StreamProxy::count()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "count", "()J" );
	return JNIEnvHelper::CallLongMethod( _getPeerObject(), mid );
}

void StreamProxy::forEach(::java::util::function::ConsumerProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "forEach", "(Ljava/util/function/Consumer;)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

void StreamProxy::forEachOrdered(::java::util::function::ConsumerProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "forEachOrdered", "(Ljava/util/function/Consumer;)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

::java::util::stream::StreamProxy StreamProxy::concat(::java::util::stream::StreamProxy p0, ::java::util::stream::StreamProxy p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "concat", "(Ljava/util/stream/Stream;Ljava/util/stream/Stream;)Ljava/util/stream/Stream;" );
	return ::java::util::stream::StreamProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, static_cast<jobject>( p0 ), static_cast<jobject>( p1 ) )  );
}

::java::util::stream::StreamProxy StreamProxy::empty()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "empty", "()Ljava/util/stream/Stream;" );
	return ::java::util::stream::StreamProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid )  );
}

::java::util::stream::StreamProxy StreamProxy::generate(::java::util::function::SupplierProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "generate", "(Ljava/util/function/Supplier;)Ljava/util/stream/Stream;" );
	return ::java::util::stream::StreamProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, static_cast<jobject>( p0 ) )  );
}

::java::util::stream::StreamProxy StreamProxy::iterate(::java::lang::ObjectProxy p0, ::java::util::function::UnaryOperatorProxy p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "iterate", "(Ljava/lang/Object;Ljava/util/function/UnaryOperator;)Ljava/util/stream/Stream;" );
	return ::java::util::stream::StreamProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, static_cast<jobject>( p0 ), static_cast<jobject>( p1 ) )  );
}

::java::util::stream::StreamProxy StreamProxy::of(::java::lang::ObjectProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "of", "(Ljava/lang/Object;)Ljava/util/stream/Stream;" );
	return ::java::util::stream::StreamProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, static_cast<jobject>( p0 ) )  );
}

::java::util::stream::StreamProxy StreamProxy::of(::net::sourceforge::jnipp::PA<::java::lang::ObjectProxy>::ProxyArray<1> p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "of", "([Ljava/lang/Object;)Ljava/util/stream/Stream;" );
	return ::java::util::stream::StreamProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, static_cast<jobjectArray>( p0 ) )  );
}

::java::util::stream::Stream_BuilderProxy StreamProxy::builder()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "builder", "()Ljava/util/stream/Stream$Builder;" );
	return ::java::util::stream::Stream_BuilderProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid )  );
}

