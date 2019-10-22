#include "net/sourceforge/jnipp/JNIEnvHelper.h"
#include "DoubleStreamProxy.h"

// includes for parameter and return type proxy classes
#include "java\util\function\DoublePredicateProxy.h"
#include "java\util\function\DoubleBinaryOperatorProxy.h"
#include "java\util\function\SupplierProxy.h"
#include "java\util\function\ObjDoubleConsumerProxy.h"
#include "java\util\function\BiConsumerProxy.h"
#include "java\lang\ObjectProxy.h"
#include "java\util\DoubleSummaryStatisticsProxy.h"
#include "java\util\OptionalDoubleProxy.h"
#include "java\util\PrimitiveIterator_OfDoubleProxy.h"
#include "java\util\Spliterator_OfDoubleProxy.h"
#include "java\util\function\DoubleFunctionProxy.h"
#include "java\util\function\DoubleUnaryOperatorProxy.h"
#include "java\util\function\DoubleConsumerProxy.h"
#include "java\util\function\DoubleToIntFunctionProxy.h"
#include "java\util\stream\IntStreamProxy.h"
#include "java\util\function\DoubleToLongFunctionProxy.h"
#include "java\util\stream\LongStreamProxy.h"
#include "java\util\stream\StreamProxy.h"
#include "java\util\function\DoubleSupplierProxy.h"
#include "java\util\stream\DoubleStream_BuilderProxy.h"

using namespace net::sourceforge::jnipp;
using namespace java::util::stream;


std::string DoubleStreamProxy::className = "java/util/stream/DoubleStream";
jclass DoubleStreamProxy::objectClass = NULL;

jclass DoubleStreamProxy::_getObjectClass()
{
	if ( objectClass == NULL )
		objectClass = static_cast<jclass>( JNIEnvHelper::NewGlobalRef( JNIEnvHelper::FindClass( className.c_str() ) ) );

	return objectClass;
}

DoubleStreamProxy::DoubleStreamProxy(void* unused)
{
}

jobject DoubleStreamProxy::_getPeerObject() const
{
	return peerObject;
}

jclass DoubleStreamProxy::getObjectClass()
{
	return _getObjectClass();
}

DoubleStreamProxy::operator jobject()
{
	return _getPeerObject();
}

// constructors
DoubleStreamProxy::DoubleStreamProxy(jobject obj)
{
	peerObject = JNIEnvHelper::NewGlobalRef( obj );
}

DoubleStreamProxy::~DoubleStreamProxy()
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
}

DoubleStreamProxy& DoubleStreamProxy::operator=(const DoubleStreamProxy& rhs)
{
	JNIEnvHelper::DeleteGlobalRef( peerObject );
	peerObject = JNIEnvHelper::NewGlobalRef( rhs.peerObject );
	return *this;
}

// methods
jboolean DoubleStreamProxy::allMatch(::java::util::function::DoublePredicateProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "allMatch", "(Ljava/util/function/DoublePredicate;)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

jboolean DoubleStreamProxy::anyMatch(::java::util::function::DoublePredicateProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "anyMatch", "(Ljava/util/function/DoublePredicate;)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

jboolean DoubleStreamProxy::noneMatch(::java::util::function::DoublePredicateProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "noneMatch", "(Ljava/util/function/DoublePredicate;)Z" );
	return JNIEnvHelper::CallBooleanMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

jdouble DoubleStreamProxy::reduce(jdouble p0, ::java::util::function::DoubleBinaryOperatorProxy p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "reduce", "(DLjava/util/function/DoubleBinaryOperator;)D" );
	return JNIEnvHelper::CallDoubleMethod( _getPeerObject(), mid, p0, static_cast<jobject>( p1 ) );
}

jdouble DoubleStreamProxy::sum()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "sum", "()D" );
	return JNIEnvHelper::CallDoubleMethod( _getPeerObject(), mid );
}

::net::sourceforge::jnipp::JDoubleArrayHelper<1> DoubleStreamProxy::toArray()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "toArray", "()[D" );
	return ::net::sourceforge::jnipp::JDoubleArrayHelper<1>( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::lang::ObjectProxy DoubleStreamProxy::collect(::java::util::function::SupplierProxy p0, ::java::util::function::ObjDoubleConsumerProxy p1, ::java::util::function::BiConsumerProxy p2)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "collect", "(Ljava/util/function/Supplier;Ljava/util/function/ObjDoubleConsumer;Ljava/util/function/BiConsumer;)Ljava/lang/Object;" );
	return ::java::lang::ObjectProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ), static_cast<jobject>( p1 ), static_cast<jobject>( p2 ) )  );
}

::java::util::DoubleSummaryStatisticsProxy DoubleStreamProxy::summaryStatistics()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "summaryStatistics", "()Ljava/util/DoubleSummaryStatistics;" );
	return ::java::util::DoubleSummaryStatisticsProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::util::OptionalDoubleProxy DoubleStreamProxy::average()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "average", "()Ljava/util/OptionalDouble;" );
	return ::java::util::OptionalDoubleProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::util::OptionalDoubleProxy DoubleStreamProxy::findAny()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "findAny", "()Ljava/util/OptionalDouble;" );
	return ::java::util::OptionalDoubleProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::util::OptionalDoubleProxy DoubleStreamProxy::findFirst()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "findFirst", "()Ljava/util/OptionalDouble;" );
	return ::java::util::OptionalDoubleProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::util::OptionalDoubleProxy DoubleStreamProxy::max()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "max", "()Ljava/util/OptionalDouble;" );
	return ::java::util::OptionalDoubleProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::util::OptionalDoubleProxy DoubleStreamProxy::min()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "min", "()Ljava/util/OptionalDouble;" );
	return ::java::util::OptionalDoubleProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::util::OptionalDoubleProxy DoubleStreamProxy::reduce(::java::util::function::DoubleBinaryOperatorProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "reduce", "(Ljava/util/function/DoubleBinaryOperator;)Ljava/util/OptionalDouble;" );
	return ::java::util::OptionalDoubleProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::java::util::PrimitiveIterator_OfDoubleProxy DoubleStreamProxy::iterator()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "iterator", "()Ljava/util/PrimitiveIterator$OfDouble;" );
	return ::java::util::PrimitiveIterator_OfDoubleProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::util::Spliterator_OfDoubleProxy DoubleStreamProxy::spliterator()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "spliterator", "()Ljava/util/Spliterator$OfDouble;" );
	return ::java::util::Spliterator_OfDoubleProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::util::stream::DoubleStreamProxy DoubleStreamProxy::distinct()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "distinct", "()Ljava/util/stream/DoubleStream;" );
	return ::java::util::stream::DoubleStreamProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::util::stream::DoubleStreamProxy DoubleStreamProxy::filter(::java::util::function::DoublePredicateProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "filter", "(Ljava/util/function/DoublePredicate;)Ljava/util/stream/DoubleStream;" );
	return ::java::util::stream::DoubleStreamProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::java::util::stream::DoubleStreamProxy DoubleStreamProxy::flatMap(::java::util::function::DoubleFunctionProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "flatMap", "(Ljava/util/function/DoubleFunction;)Ljava/util/stream/DoubleStream;" );
	return ::java::util::stream::DoubleStreamProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::java::util::stream::DoubleStreamProxy DoubleStreamProxy::limit(jlong p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "limit", "(J)Ljava/util/stream/DoubleStream;" );
	return ::java::util::stream::DoubleStreamProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0 )  );
}

::java::util::stream::DoubleStreamProxy DoubleStreamProxy::map(::java::util::function::DoubleUnaryOperatorProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "map", "(Ljava/util/function/DoubleUnaryOperator;)Ljava/util/stream/DoubleStream;" );
	return ::java::util::stream::DoubleStreamProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::java::util::stream::DoubleStreamProxy DoubleStreamProxy::parallel()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "parallel", "()Ljava/util/stream/DoubleStream;" );
	return ::java::util::stream::DoubleStreamProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::util::stream::DoubleStreamProxy DoubleStreamProxy::peek(::java::util::function::DoubleConsumerProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "peek", "(Ljava/util/function/DoubleConsumer;)Ljava/util/stream/DoubleStream;" );
	return ::java::util::stream::DoubleStreamProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::java::util::stream::DoubleStreamProxy DoubleStreamProxy::sequential()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "sequential", "()Ljava/util/stream/DoubleStream;" );
	return ::java::util::stream::DoubleStreamProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::util::stream::DoubleStreamProxy DoubleStreamProxy::skip(jlong p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "skip", "(J)Ljava/util/stream/DoubleStream;" );
	return ::java::util::stream::DoubleStreamProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, p0 )  );
}

::java::util::stream::DoubleStreamProxy DoubleStreamProxy::sorted()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "sorted", "()Ljava/util/stream/DoubleStream;" );
	return ::java::util::stream::DoubleStreamProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::util::stream::IntStreamProxy DoubleStreamProxy::mapToInt(::java::util::function::DoubleToIntFunctionProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "mapToInt", "(Ljava/util/function/DoubleToIntFunction;)Ljava/util/stream/IntStream;" );
	return ::java::util::stream::IntStreamProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::java::util::stream::LongStreamProxy DoubleStreamProxy::mapToLong(::java::util::function::DoubleToLongFunctionProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "mapToLong", "(Ljava/util/function/DoubleToLongFunction;)Ljava/util/stream/LongStream;" );
	return ::java::util::stream::LongStreamProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

::java::util::stream::StreamProxy DoubleStreamProxy::boxed()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "boxed", "()Ljava/util/stream/Stream;" );
	return ::java::util::stream::StreamProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid )  );
}

::java::util::stream::StreamProxy DoubleStreamProxy::mapToObj(::java::util::function::DoubleFunctionProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "mapToObj", "(Ljava/util/function/DoubleFunction;)Ljava/util/stream/Stream;" );
	return ::java::util::stream::StreamProxy( JNIEnvHelper::CallObjectMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) )  );
}

jlong DoubleStreamProxy::count()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "count", "()J" );
	return JNIEnvHelper::CallLongMethod( _getPeerObject(), mid );
}

void DoubleStreamProxy::forEach(::java::util::function::DoubleConsumerProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "forEach", "(Ljava/util/function/DoubleConsumer;)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

void DoubleStreamProxy::forEachOrdered(::java::util::function::DoubleConsumerProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetMethodID( _getObjectClass(), "forEachOrdered", "(Ljava/util/function/DoubleConsumer;)V" );
	JNIEnvHelper::CallVoidMethod( _getPeerObject(), mid, static_cast<jobject>( p0 ) );
}

::java::util::stream::DoubleStreamProxy DoubleStreamProxy::concat(::java::util::stream::DoubleStreamProxy p0, ::java::util::stream::DoubleStreamProxy p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "concat", "(Ljava/util/stream/DoubleStream;Ljava/util/stream/DoubleStream;)Ljava/util/stream/DoubleStream;" );
	return ::java::util::stream::DoubleStreamProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, static_cast<jobject>( p0 ), static_cast<jobject>( p1 ) )  );
}

::java::util::stream::DoubleStreamProxy DoubleStreamProxy::empty()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "empty", "()Ljava/util/stream/DoubleStream;" );
	return ::java::util::stream::DoubleStreamProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid )  );
}

::java::util::stream::DoubleStreamProxy DoubleStreamProxy::generate(::java::util::function::DoubleSupplierProxy p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "generate", "(Ljava/util/function/DoubleSupplier;)Ljava/util/stream/DoubleStream;" );
	return ::java::util::stream::DoubleStreamProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, static_cast<jobject>( p0 ) )  );
}

::java::util::stream::DoubleStreamProxy DoubleStreamProxy::iterate(jdouble p0, ::java::util::function::DoubleUnaryOperatorProxy p1)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "iterate", "(DLjava/util/function/DoubleUnaryOperator;)Ljava/util/stream/DoubleStream;" );
	return ::java::util::stream::DoubleStreamProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, p0, static_cast<jobject>( p1 ) )  );
}

::java::util::stream::DoubleStreamProxy DoubleStreamProxy::of(jdouble p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "of", "(D)Ljava/util/stream/DoubleStream;" );
	return ::java::util::stream::DoubleStreamProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, p0 )  );
}

::java::util::stream::DoubleStreamProxy DoubleStreamProxy::of(::net::sourceforge::jnipp::JDoubleArrayHelper<1> p0)
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "of", "([D)Ljava/util/stream/DoubleStream;" );
	return ::java::util::stream::DoubleStreamProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid, static_cast<jdoubleArray>( p0 ) )  );
}

::java::util::stream::DoubleStream_BuilderProxy DoubleStreamProxy::builder()
{
	static jmethodID mid = NULL;
	if ( mid == NULL )
		mid = JNIEnvHelper::GetStaticMethodID( _getObjectClass(), "builder", "()Ljava/util/stream/DoubleStream$Builder;" );
	return ::java::util::stream::DoubleStream_BuilderProxy( JNIEnvHelper::CallStaticObjectMethod( _getObjectClass(), mid )  );
}

