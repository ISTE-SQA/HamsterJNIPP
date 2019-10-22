#ifndef __java_util_stream_IntStreamProxy_H
#define __java_util_stream_IntStreamProxy_H


#include <jni.h>
#include <string>

#include "net/sourceforge/jnipp/JBooleanArrayHelper.h"
#include "net/sourceforge/jnipp/JByteArrayHelper.h"
#include "net/sourceforge/jnipp/JCharArrayHelper.h"
#include "net/sourceforge/jnipp/JDoubleArrayHelper.h"
#include "net/sourceforge/jnipp/JFloatArrayHelper.h"
#include "net/sourceforge/jnipp/JIntArrayHelper.h"
#include "net/sourceforge/jnipp/JLongArrayHelper.h"
#include "net/sourceforge/jnipp/JShortArrayHelper.h"
#include "net/sourceforge/jnipp/JStringHelper.h"
#include "net/sourceforge/jnipp/JStringHelperArray.h"
#include "net/sourceforge/jnipp/ProxyArray.h"

// includes for parameter and return type proxy classes
#include "java\util\function\IntPredicateProxyForward.h"
#include "java\util\function\IntBinaryOperatorProxyForward.h"
#include "java\util\function\SupplierProxyForward.h"
#include "java\util\function\ObjIntConsumerProxyForward.h"
#include "java\util\function\BiConsumerProxyForward.h"
#include "java\lang\ObjectProxyForward.h"
#include "java\util\IntSummaryStatisticsProxyForward.h"
#include "java\util\OptionalDoubleProxyForward.h"
#include "java\util\OptionalIntProxyForward.h"
#include "java\util\PrimitiveIterator_OfIntProxyForward.h"
#include "java\util\Spliterator_OfIntProxyForward.h"
#include "java\util\stream\DoubleStreamProxyForward.h"
#include "java\util\function\IntToDoubleFunctionProxyForward.h"
#include "java\util\function\IntFunctionProxyForward.h"
#include "java\util\function\IntUnaryOperatorProxyForward.h"
#include "java\util\function\IntConsumerProxyForward.h"
#include "java\util\stream\LongStreamProxyForward.h"
#include "java\util\function\IntToLongFunctionProxyForward.h"
#include "java\util\stream\StreamProxyForward.h"
#include "java\util\function\IntSupplierProxyForward.h"
#include "java\util\stream\IntStream_BuilderProxyForward.h"

namespace java
{
	namespace util
	{
		namespace stream
		{
			class IntStreamProxy
			{
			private:
				static std::string className;
				static jclass objectClass;
				jobject peerObject;

			protected:
				IntStreamProxy(void* unused);
				virtual jobject _getPeerObject() const;

			public:
				static jclass _getObjectClass();
				static inline std::string _getClassName()
				{
					return className;
				}

				jclass getObjectClass();
				operator jobject();
				// constructors
				IntStreamProxy(jobject obj);

				virtual ~IntStreamProxy();
				IntStreamProxy& operator=(const IntStreamProxy& rhs);

				// methods
				/*
				 * boolean allMatch(IntPredicate);
				 */
				jboolean allMatch(::java::util::function::IntPredicateProxy p0);
				/*
				 * boolean anyMatch(IntPredicate);
				 */
				jboolean anyMatch(::java::util::function::IntPredicateProxy p0);
				/*
				 * boolean noneMatch(IntPredicate);
				 */
				jboolean noneMatch(::java::util::function::IntPredicateProxy p0);
				/*
				 * int reduce(int, IntBinaryOperator);
				 */
				jint reduce(jint p0, ::java::util::function::IntBinaryOperatorProxy p1);
				/*
				 * int sum();
				 */
				jint sum();
				/*
				 * int[] toArray();
				 */
				::net::sourceforge::jnipp::JIntArrayHelper<1> toArray();
				/*
				 * Object collect(Supplier, ObjIntConsumer, BiConsumer);
				 */
				::java::lang::ObjectProxy collect(::java::util::function::SupplierProxy p0, ::java::util::function::ObjIntConsumerProxy p1, ::java::util::function::BiConsumerProxy p2);
				/*
				 * IntSummaryStatistics summaryStatistics();
				 */
				::java::util::IntSummaryStatisticsProxy summaryStatistics();
				/*
				 * OptionalDouble average();
				 */
				::java::util::OptionalDoubleProxy average();
				/*
				 * OptionalInt findAny();
				 */
				::java::util::OptionalIntProxy findAny();
				/*
				 * OptionalInt findFirst();
				 */
				::java::util::OptionalIntProxy findFirst();
				/*
				 * OptionalInt max();
				 */
				::java::util::OptionalIntProxy max();
				/*
				 * OptionalInt min();
				 */
				::java::util::OptionalIntProxy min();
				/*
				 * OptionalInt reduce(IntBinaryOperator);
				 */
				::java::util::OptionalIntProxy reduce(::java::util::function::IntBinaryOperatorProxy p0);
				/*
				 * PrimitiveIterator$OfInt iterator();
				 */
				::java::util::PrimitiveIterator_OfIntProxy iterator();
				/*
				 * Spliterator$OfInt spliterator();
				 */
				::java::util::Spliterator_OfIntProxy spliterator();
				/*
				 * DoubleStream asDoubleStream();
				 */
				::java::util::stream::DoubleStreamProxy asDoubleStream();
				/*
				 * DoubleStream mapToDouble(IntToDoubleFunction);
				 */
				::java::util::stream::DoubleStreamProxy mapToDouble(::java::util::function::IntToDoubleFunctionProxy p0);
				/*
				 * IntStream distinct();
				 */
				::java::util::stream::IntStreamProxy distinct();
				/*
				 * IntStream filter(IntPredicate);
				 */
				::java::util::stream::IntStreamProxy filter(::java::util::function::IntPredicateProxy p0);
				/*
				 * IntStream flatMap(IntFunction);
				 */
				::java::util::stream::IntStreamProxy flatMap(::java::util::function::IntFunctionProxy p0);
				/*
				 * IntStream limit(long);
				 */
				::java::util::stream::IntStreamProxy limit(jlong p0);
				/*
				 * IntStream map(IntUnaryOperator);
				 */
				::java::util::stream::IntStreamProxy map(::java::util::function::IntUnaryOperatorProxy p0);
				/*
				 * IntStream parallel();
				 */
				::java::util::stream::IntStreamProxy parallel();
				/*
				 * IntStream peek(IntConsumer);
				 */
				::java::util::stream::IntStreamProxy peek(::java::util::function::IntConsumerProxy p0);
				/*
				 * IntStream sequential();
				 */
				::java::util::stream::IntStreamProxy sequential();
				/*
				 * IntStream skip(long);
				 */
				::java::util::stream::IntStreamProxy skip(jlong p0);
				/*
				 * IntStream sorted();
				 */
				::java::util::stream::IntStreamProxy sorted();
				/*
				 * LongStream asLongStream();
				 */
				::java::util::stream::LongStreamProxy asLongStream();
				/*
				 * LongStream mapToLong(IntToLongFunction);
				 */
				::java::util::stream::LongStreamProxy mapToLong(::java::util::function::IntToLongFunctionProxy p0);
				/*
				 * Stream boxed();
				 */
				::java::util::stream::StreamProxy boxed();
				/*
				 * Stream mapToObj(IntFunction);
				 */
				::java::util::stream::StreamProxy mapToObj(::java::util::function::IntFunctionProxy p0);
				/*
				 * long count();
				 */
				jlong count();
				/*
				 * void forEach(IntConsumer);
				 */
				void forEach(::java::util::function::IntConsumerProxy p0);
				/*
				 * void forEachOrdered(IntConsumer);
				 */
				void forEachOrdered(::java::util::function::IntConsumerProxy p0);
				/*
				 * static IntStream concat(IntStream, IntStream);
				 */
				static ::java::util::stream::IntStreamProxy concat(::java::util::stream::IntStreamProxy p0, ::java::util::stream::IntStreamProxy p1);
				/*
				 * static IntStream empty();
				 */
				static ::java::util::stream::IntStreamProxy empty();
				/*
				 * static IntStream generate(IntSupplier);
				 */
				static ::java::util::stream::IntStreamProxy generate(::java::util::function::IntSupplierProxy p0);
				/*
				 * static IntStream iterate(int, IntUnaryOperator);
				 */
				static ::java::util::stream::IntStreamProxy iterate(jint p0, ::java::util::function::IntUnaryOperatorProxy p1);
				/*
				 * static IntStream of(int);
				 */
				static ::java::util::stream::IntStreamProxy of(jint p0);
				/*
				 * static IntStream of(int[]);
				 */
				static ::java::util::stream::IntStreamProxy of(::net::sourceforge::jnipp::JIntArrayHelper<1> p0);
				/*
				 * static IntStream range(int, int);
				 */
				static ::java::util::stream::IntStreamProxy range(jint p0, jint p1);
				/*
				 * static IntStream rangeClosed(int, int);
				 */
				static ::java::util::stream::IntStreamProxy rangeClosed(jint p0, jint p1);
				/*
				 * static IntStream$Builder builder();
				 */
				static ::java::util::stream::IntStream_BuilderProxy builder();

			};
		}
	}
}


#endif
