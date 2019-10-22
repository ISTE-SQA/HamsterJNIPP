#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "IntStreamProxy.h"

// includes for parameter and return type proxy classes
#include "java\util\function\IntPredicateProxy.h"
#include "java\util\function\IntBinaryOperatorProxy.h"
#include "java\util\function\SupplierProxy.h"
#include "java\util\function\ObjIntConsumerProxy.h"
#include "java\util\function\BiConsumerProxy.h"
#include "java\lang\ObjectProxy.h"
#include "java\util\IntSummaryStatisticsProxy.h"
#include "java\util\OptionalDoubleProxy.h"
#include "java\util\OptionalIntProxy.h"
#include "java\util\PrimitiveIterator_OfIntProxy.h"
#include "java\util\Spliterator_OfIntProxy.h"
#include "java\util\stream\DoubleStreamProxy.h"
#include "java\util\function\IntToDoubleFunctionProxy.h"
#include "java\util\function\IntFunctionProxy.h"
#include "java\util\function\IntUnaryOperatorProxy.h"
#include "java\util\function\IntConsumerProxy.h"
#include "java\util\stream\LongStreamProxy.h"
#include "java\util\function\IntToLongFunctionProxy.h"
#include "java\util\stream\StreamProxy.h"
#include "java\util\function\IntSupplierProxy.h"
#include "java\util\stream\IntStream_BuilderProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::util::stream;


std::string IntStreamProxy::className = "java/util/stream/IntStream";
jclass IntStreamProxy::objectClass = NULL;

jclass IntStreamProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

IntStreamProxy::IntStreamProxy(void* unused)
{
}

jobject IntStreamProxy::_getPeerObject() const
{
	return peerObject;
}

jclass IntStreamProxy::getObjectClass()
{
	return _getObjectClass();
}

IntStreamProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
IntStreamProxy::IntStreamProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

IntStreamProxy::~IntStreamProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

IntStreamProxy& IntStreamProxy::operator=(const IntStreamProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
jboolean IntStreamProxy::allMatch(::java::util::function::IntPredicateProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "allMatch", "(Ljava/util/function/IntPredicate;)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

jboolean IntStreamProxy::anyMatch(::java::util::function::IntPredicateProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "anyMatch", "(Ljava/util/function/IntPredicate;)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

jboolean IntStreamProxy::noneMatch(::java::util::function::IntPredicateProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "noneMatch", "(Ljava/util/function/IntPredicate;)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

jint IntStreamProxy::reduce(jint p0, ::java::util::function::IntBinaryOperatorProxy p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "reduce", "(ILjava/util/function/IntBinaryOperator;)I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid, p0, static_cast<jobject>( p1 ) );
}

jint IntStreamProxy::sum()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "sum", "()I" );
	return JNIEnvHelper::CallIntMethod( _getPeerObject(), mid );
}

::net::sourceforge::jnipp::JIntArrayHelper<1> IntStreamProxy::toArray()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "toArray", "()[I" );
	return ::net::sourceforge::jnipp::JIntArrayHelper<1>( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::lang::ObjectProxy IntStreamProxy::collect(::java::util::function::SupplierProxy p0, ::java::util::function::ObjIntConsumerProxy p1, ::java::util::function::BiConsumerProxy p2)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "collect", "(Ljava/util/function/Supplier;Ljava/util/function/ObjIntConsumer;Ljava/util/function/BiConsumer;)Ljava/lang/Object;" );
	return ::java::lang::ObjectProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), static_cast<jobject>( p1 ), static_cast<jobject>( p2 ) )  );
}

::java::util::IntSummaryStatisticsProxy IntStreamProxy::summaryStatistics()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "summaryStatistics", "()Ljava/util/IntSummaryStatistics;" );
	return ::java::util::IntSummaryStatisticsProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::util::OptionalDoubleProxy IntStreamProxy::average()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "average", "()Ljava/util/OptionalDouble;" );
	return ::java::util::OptionalDoubleProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::util::OptionalIntProxy IntStreamProxy::findAny()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "findAny", "()Ljava/util/OptionalInt;" );
	return ::java::util::OptionalIntProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::util::OptionalIntProxy IntStreamProxy::findFirst()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "findFirst", "()Ljava/util/OptionalInt;" );
	return ::java::util::OptionalIntProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::util::OptionalIntProxy IntStreamProxy::max()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "max", "()Ljava/util/OptionalInt;" );
	return ::java::util::OptionalIntProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::util::OptionalIntProxy IntStreamProxy::min()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "min", "()Ljava/util/OptionalInt;" );
	return ::java::util::OptionalIntProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::util::OptionalIntProxy IntStreamProxy::reduce(::java::util::function::IntBinaryOperatorProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "reduce", "(Ljava/util/function/IntBinaryOperator;)Ljava/util/OptionalInt;" );
	return ::java::util::OptionalIntProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::java::util::PrimitiveIterator_OfIntProxy IntStreamProxy::iterator()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "iterator", "()Ljava/util/PrimitiveIterator$OfInt;" );
	return ::java::util::PrimitiveIterator_OfIntProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::util::Spliterator_OfIntProxy IntStreamProxy::spliterator()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "spliterator", "()Ljava/util/Spliterator$OfInt;" );
	return ::java::util::Spliterator_OfIntProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::util::stream::DoubleStreamProxy IntStreamProxy::asDoubleStream()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "asDoubleStream", "()Ljava/util/stream/DoubleStream;" );
	return ::java::util::stream::DoubleStreamProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::util::stream::DoubleStreamProxy IntStreamProxy::mapToDouble(::java::util::function::IntToDoubleFunctionProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "mapToDouble", "(Ljava/util/function/IntToDoubleFunction;)Ljava/util/stream/DoubleStream;" );
	return ::java::util::stream::DoubleStreamProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::java::util::stream::IntStreamProxy IntStreamProxy::distinct()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "distinct", "()Ljava/util/stream/IntStream;" );
	return ::java::util::stream::IntStreamProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::util::stream::IntStreamProxy IntStreamProxy::filter(::java::util::function::IntPredicateProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "filter", "(Ljava/util/function/IntPredicate;)Ljava/util/stream/IntStream;" );
	return ::java::util::stream::IntStreamProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::java::util::stream::IntStreamProxy IntStreamProxy::flatMap(::java::util::function::IntFunctionProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "flatMap", "(Ljava/util/function/IntFunction;)Ljava/util/stream/IntStream;" );
	return ::java::util::stream::IntStreamProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::java::util::stream::IntStreamProxy IntStreamProxy::limit(jlong p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "limit", "(J)Ljava/util/stream/IntStream;" );
	return ::java::util::stream::IntStreamProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0 )  );
}

::java::util::stream::IntStreamProxy IntStreamProxy::map(::java::util::function::IntUnaryOperatorProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "map", "(Ljava/util/function/IntUnaryOperator;)Ljava/util/stream/IntStream;" );
	return ::java::util::stream::IntStreamProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::java::util::stream::IntStreamProxy IntStreamProxy::parallel()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "parallel", "()Ljava/util/stream/IntStream;" );
	return ::java::util::stream::IntStreamProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::util::stream::IntStreamProxy IntStreamProxy::peek(::java::util::function::IntConsumerProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "peek", "(Ljava/util/function/IntConsumer;)Ljava/util/stream/IntStream;" );
	return ::java::util::stream::IntStreamProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::java::util::stream::IntStreamProxy IntStreamProxy::sequential()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "sequential", "()Ljava/util/stream/IntStream;" );
	return ::java::util::stream::IntStreamProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::util::stream::IntStreamProxy IntStreamProxy::skip(jlong p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "skip", "(J)Ljava/util/stream/IntStream;" );
	return ::java::util::stream::IntStreamProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0 )  );
}

::java::util::stream::IntStreamProxy IntStreamProxy::sorted()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "sorted", "()Ljava/util/stream/IntStream;" );
	return ::java::util::stream::IntStreamProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::util::stream::LongStreamProxy IntStreamProxy::asLongStream()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "asLongStream", "()Ljava/util/stream/LongStream;" );
	return ::java::util::stream::LongStreamProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::util::stream::LongStreamProxy IntStreamProxy::mapToLong(::java::util::function::IntToLongFunctionProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "mapToLong", "(Ljava/util/function/IntToLongFunction;)Ljava/util/stream/LongStream;" );
	return ::java::util::stream::LongStreamProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::java::util::stream::StreamProxy IntStreamProxy::boxed()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "boxed", "()Ljava/util/stream/Stream;" );
	return ::java::util::stream::StreamProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::util::stream::StreamProxy IntStreamProxy::mapToObj(::java::util::function::IntFunctionProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "mapToObj", "(Ljava/util/function/IntFunction;)Ljava/util/stream/Stream;" );
	return ::java::util::stream::StreamProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

jlong IntStreamProxy::count()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "count", "()J" );
	return JNIEnvHelper::CallLongMethod( _getPeerObject(), mid );
}

void IntStreamProxy::forEach(::java::util::function::IntConsumerProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "forEach", "(Ljava/util/function/IntConsumer;)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

void IntStreamProxy::forEachOrdered(::java::util::function::IntConsumerProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "forEachOrdered", "(Ljava/util/function/IntConsumer;)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

::java::util::stream::IntStreamProxy IntStreamProxy::concat(::java::util::stream::IntStreamProxy p0, ::java::util::stream::IntStreamProxy p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "concat", "(Ljava/util/stream/IntStream;Ljava/util/stream/IntStream;)Ljava/util/stream/IntStream;" );
	return ::java::util::stream::IntStreamProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, static_cast<jobject>( p0 ), static_cast<jobject>( p1 ) )  );
}

::java::util::stream::IntStreamProxy IntStreamProxy::empty()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "empty", "()Ljava/util/stream/IntStream;" );
	return ::java::util::stream::IntStreamProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid )  );
}

::java::util::stream::IntStreamProxy IntStreamProxy::generate(::java::util::function::IntSupplierProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "generate", "(Ljava/util/function/IntSupplier;)Ljava/util/stream/IntStream;" );
	return ::java::util::stream::IntStreamProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, static_cast<jobject>( p0 ) )  );
}

::java::util::stream::IntStreamProxy IntStreamProxy::iterate(jint p0, ::java::util::function::IntUnaryOperatorProxy p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "iterate", "(ILjava/util/function/IntUnaryOperator;)Ljava/util/stream/IntStream;" );
	return ::java::util::stream::IntStreamProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, p0, static_cast<jobject>( p1 ) )  );
}

::java::util::stream::IntStreamProxy IntStreamProxy::of(jint p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "of", "(I)Ljava/util/stream/IntStream;" );
	return ::java::util::stream::IntStreamProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, p0 )  );
}

::java::util::stream::IntStreamProxy IntStreamProxy::of(::net::sourceforge::jnipp::JIntArrayHelper<1> p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "of", "([I)Ljava/util/stream/IntStream;" );
	return ::java::util::stream::IntStreamProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, static_cast<jintArray>( p0 ) )  );
}

::java::util::stream::IntStreamProxy IntStreamProxy::range(jint p0, jint p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "range", "(II)Ljava/util/stream/IntStream;" );
	return ::java::util::stream::IntStreamProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, p0, p1 )  );
}

::java::util::stream::IntStreamProxy IntStreamProxy::rangeClosed(jint p0, jint p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "rangeClosed", "(II)Ljava/util/stream/IntStream;" );
	return ::java::util::stream::IntStreamProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, p0, p1 )  );
}

::java::util::stream::IntStream_BuilderProxy IntStreamProxy::builder()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "builder", "()Ljava/util/stream/IntStream$Builder;" );
	return ::java::util::stream::IntStream_BuilderProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid )  );
}

