#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "LongStreamProxy.h"

// includes for parameter and return type proxy classes
#include "java\util\function\LongPredicateProxy.h"
#include "java\util\function\SupplierProxy.h"
#include "java\util\function\ObjLongConsumerProxy.h"
#include "java\util\function\BiConsumerProxy.h"
#include "java\lang\ObjectProxy.h"
#include "java\util\LongSummaryStatisticsProxy.h"
#include "java\util\OptionalDoubleProxy.h"
#include "java\util\OptionalLongProxy.h"
#include "java\util\function\LongBinaryOperatorProxy.h"
#include "java\util\PrimitiveIterator_OfLongProxy.h"
#include "java\util\Spliterator_OfLongProxy.h"
#include "java\util\stream\DoubleStreamProxy.h"
#include "java\util\function\LongToDoubleFunctionProxy.h"
#include "java\util\function\LongToIntFunctionProxy.h"
#include "java\util\stream\IntStreamProxy.h"
#include "java\util\function\LongFunctionProxy.h"
#include "java\util\function\LongUnaryOperatorProxy.h"
#include "java\util\function\LongConsumerProxy.h"
#include "java\util\stream\StreamProxy.h"
#include "java\util\function\LongSupplierProxy.h"
#include "java\util\stream\LongStream_BuilderProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::util::stream;


std::string LongStreamProxy::className = "java/util/stream/LongStream";
jclass LongStreamProxy::objectClass = NULL;

jclass LongStreamProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

LongStreamProxy::LongStreamProxy(void* unused)
{
}

jobject LongStreamProxy::_getPeerObject() const
{
	return peerObject;
}

jclass LongStreamProxy::getObjectClass()
{
	return _getObjectClass();
}

LongStreamProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
LongStreamProxy::LongStreamProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

LongStreamProxy::~LongStreamProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

LongStreamProxy& LongStreamProxy::operator=(const LongStreamProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
jboolean LongStreamProxy::allMatch(::java::util::function::LongPredicateProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "allMatch", "(Ljava/util/function/LongPredicate;)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

jboolean LongStreamProxy::anyMatch(::java::util::function::LongPredicateProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "anyMatch", "(Ljava/util/function/LongPredicate;)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

jboolean LongStreamProxy::noneMatch(::java::util::function::LongPredicateProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "noneMatch", "(Ljava/util/function/LongPredicate;)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

::java::lang::ObjectProxy LongStreamProxy::collect(::java::util::function::SupplierProxy p0, ::java::util::function::ObjLongConsumerProxy p1, ::java::util::function::BiConsumerProxy p2)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "collect", "(Ljava/util/function/Supplier;Ljava/util/function/ObjLongConsumer;Ljava/util/function/BiConsumer;)Ljava/lang/Object;" );
	return ::java::lang::ObjectProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), static_cast<jobject>( p1 ), static_cast<jobject>( p2 ) )  );
}

::java::util::LongSummaryStatisticsProxy LongStreamProxy::summaryStatistics()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "summaryStatistics", "()Ljava/util/LongSummaryStatistics;" );
	return ::java::util::LongSummaryStatisticsProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::util::OptionalDoubleProxy LongStreamProxy::average()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "average", "()Ljava/util/OptionalDouble;" );
	return ::java::util::OptionalDoubleProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::util::OptionalLongProxy LongStreamProxy::findAny()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "findAny", "()Ljava/util/OptionalLong;" );
	return ::java::util::OptionalLongProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::util::OptionalLongProxy LongStreamProxy::findFirst()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "findFirst", "()Ljava/util/OptionalLong;" );
	return ::java::util::OptionalLongProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::util::OptionalLongProxy LongStreamProxy::max()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "max", "()Ljava/util/OptionalLong;" );
	return ::java::util::OptionalLongProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::util::OptionalLongProxy LongStreamProxy::min()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "min", "()Ljava/util/OptionalLong;" );
	return ::java::util::OptionalLongProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::util::OptionalLongProxy LongStreamProxy::reduce(::java::util::function::LongBinaryOperatorProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "reduce", "(Ljava/util/function/LongBinaryOperator;)Ljava/util/OptionalLong;" );
	return ::java::util::OptionalLongProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::java::util::PrimitiveIterator_OfLongProxy LongStreamProxy::iterator()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "iterator", "()Ljava/util/PrimitiveIterator$OfLong;" );
	return ::java::util::PrimitiveIterator_OfLongProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::util::Spliterator_OfLongProxy LongStreamProxy::spliterator()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "spliterator", "()Ljava/util/Spliterator$OfLong;" );
	return ::java::util::Spliterator_OfLongProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::util::stream::DoubleStreamProxy LongStreamProxy::asDoubleStream()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "asDoubleStream", "()Ljava/util/stream/DoubleStream;" );
	return ::java::util::stream::DoubleStreamProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::util::stream::DoubleStreamProxy LongStreamProxy::mapToDouble(::java::util::function::LongToDoubleFunctionProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "mapToDouble", "(Ljava/util/function/LongToDoubleFunction;)Ljava/util/stream/DoubleStream;" );
	return ::java::util::stream::DoubleStreamProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::java::util::stream::IntStreamProxy LongStreamProxy::mapToInt(::java::util::function::LongToIntFunctionProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "mapToInt", "(Ljava/util/function/LongToIntFunction;)Ljava/util/stream/IntStream;" );
	return ::java::util::stream::IntStreamProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::java::util::stream::LongStreamProxy LongStreamProxy::distinct()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "distinct", "()Ljava/util/stream/LongStream;" );
	return ::java::util::stream::LongStreamProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::util::stream::LongStreamProxy LongStreamProxy::filter(::java::util::function::LongPredicateProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "filter", "(Ljava/util/function/LongPredicate;)Ljava/util/stream/LongStream;" );
	return ::java::util::stream::LongStreamProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::java::util::stream::LongStreamProxy LongStreamProxy::flatMap(::java::util::function::LongFunctionProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "flatMap", "(Ljava/util/function/LongFunction;)Ljava/util/stream/LongStream;" );
	return ::java::util::stream::LongStreamProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::java::util::stream::LongStreamProxy LongStreamProxy::limit(jlong p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "limit", "(J)Ljava/util/stream/LongStream;" );
	return ::java::util::stream::LongStreamProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0 )  );
}

::java::util::stream::LongStreamProxy LongStreamProxy::map(::java::util::function::LongUnaryOperatorProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "map", "(Ljava/util/function/LongUnaryOperator;)Ljava/util/stream/LongStream;" );
	return ::java::util::stream::LongStreamProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::java::util::stream::LongStreamProxy LongStreamProxy::parallel()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "parallel", "()Ljava/util/stream/LongStream;" );
	return ::java::util::stream::LongStreamProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::util::stream::LongStreamProxy LongStreamProxy::peek(::java::util::function::LongConsumerProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "peek", "(Ljava/util/function/LongConsumer;)Ljava/util/stream/LongStream;" );
	return ::java::util::stream::LongStreamProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::java::util::stream::LongStreamProxy LongStreamProxy::sequential()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "sequential", "()Ljava/util/stream/LongStream;" );
	return ::java::util::stream::LongStreamProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::util::stream::LongStreamProxy LongStreamProxy::skip(jlong p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "skip", "(J)Ljava/util/stream/LongStream;" );
	return ::java::util::stream::LongStreamProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0 )  );
}

::java::util::stream::LongStreamProxy LongStreamProxy::sorted()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "sorted", "()Ljava/util/stream/LongStream;" );
	return ::java::util::stream::LongStreamProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::util::stream::StreamProxy LongStreamProxy::boxed()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "boxed", "()Ljava/util/stream/Stream;" );
	return ::java::util::stream::StreamProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::util::stream::StreamProxy LongStreamProxy::mapToObj(::java::util::function::LongFunctionProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "mapToObj", "(Ljava/util/function/LongFunction;)Ljava/util/stream/Stream;" );
	return ::java::util::stream::StreamProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

jlong LongStreamProxy::count()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "count", "()J" );
	return JNIEnvHelper::CallLongMethod( _getPeerObject(), mid );
}

jlong LongStreamProxy::reduce(jlong p0, ::java::util::function::LongBinaryOperatorProxy p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "reduce", "(JLjava/util/function/LongBinaryOperator;)J" );
	return JNIEnvHelper::CallLongMethod( _getPeerObject(), mid, p0, static_cast<jobject>( p1 ) );
}

jlong LongStreamProxy::sum()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "sum", "()J" );
	return JNIEnvHelper::CallLongMethod( _getPeerObject(), mid );
}

::net::sourceforge::jnipp::JLongArrayHelper<1> LongStreamProxy::toArray()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "toArray", "()[J" );
	return ::net::sourceforge::jnipp::JLongArrayHelper<1>( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

void LongStreamProxy::forEach(::java::util::function::LongConsumerProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "forEach", "(Ljava/util/function/LongConsumer;)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

void LongStreamProxy::forEachOrdered(::java::util::function::LongConsumerProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "forEachOrdered", "(Ljava/util/function/LongConsumer;)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

::java::util::stream::LongStreamProxy LongStreamProxy::concat(::java::util::stream::LongStreamProxy p0, ::java::util::stream::LongStreamProxy p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "concat", "(Ljava/util/stream/LongStream;Ljava/util/stream/LongStream;)Ljava/util/stream/LongStream;" );
	return ::java::util::stream::LongStreamProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, static_cast<jobject>( p0 ), static_cast<jobject>( p1 ) )  );
}

::java::util::stream::LongStreamProxy LongStreamProxy::empty()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "empty", "()Ljava/util/stream/LongStream;" );
	return ::java::util::stream::LongStreamProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid )  );
}

::java::util::stream::LongStreamProxy LongStreamProxy::generate(::java::util::function::LongSupplierProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "generate", "(Ljava/util/function/LongSupplier;)Ljava/util/stream/LongStream;" );
	return ::java::util::stream::LongStreamProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, static_cast<jobject>( p0 ) )  );
}

::java::util::stream::LongStreamProxy LongStreamProxy::iterate(jlong p0, ::java::util::function::LongUnaryOperatorProxy p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "iterate", "(JLjava/util/function/LongUnaryOperator;)Ljava/util/stream/LongStream;" );
	return ::java::util::stream::LongStreamProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, p0, static_cast<jobject>( p1 ) )  );
}

::java::util::stream::LongStreamProxy LongStreamProxy::of(jlong p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "of", "(J)Ljava/util/stream/LongStream;" );
	return ::java::util::stream::LongStreamProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, p0 )  );
}

::java::util::stream::LongStreamProxy LongStreamProxy::of(::net::sourceforge::jnipp::JLongArrayHelper<1> p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "of", "([J)Ljava/util/stream/LongStream;" );
	return ::java::util::stream::LongStreamProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, static_cast<jlongArray>( p0 ) )  );
}

::java::util::stream::LongStreamProxy LongStreamProxy::range(jlong p0, jlong p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "range", "(JJ)Ljava/util/stream/LongStream;" );
	return ::java::util::stream::LongStreamProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, p0, p1 )  );
}

::java::util::stream::LongStreamProxy LongStreamProxy::rangeClosed(jlong p0, jlong p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "rangeClosed", "(JJ)Ljava/util/stream/LongStream;" );
	return ::java::util::stream::LongStreamProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, p0, p1 )  );
}

::java::util::stream::LongStream_BuilderProxy LongStreamProxy::builder()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "builder", "()Ljava/util/stream/LongStream$Builder;" );
	return ::java::util::stream::LongStream_BuilderProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid )  );
}

