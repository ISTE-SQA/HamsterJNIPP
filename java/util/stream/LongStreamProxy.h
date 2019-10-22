#ifndef __java_util_stream_LongStreamProxy_H
#define __java_util_stream_LongStreamProxy_H


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
#include "java\util\function\LongPredicateProxyForward.h"
#include "java\util\function\SupplierProxyForward.h"
#include "java\util\function\ObjLongConsumerProxyForward.h"
#include "java\util\function\BiConsumerProxyForward.h"
#include "java\lang\ObjectProxyForward.h"
#include "java\util\LongSummaryStatisticsProxyForward.h"
#include "java\util\OptionalDoubleProxyForward.h"
#include "java\util\OptionalLongProxyForward.h"
#include "java\util\function\LongBinaryOperatorProxyForward.h"
#include "java\util\PrimitiveIterator_OfLongProxyForward.h"
#include "java\util\Spliterator_OfLongProxyForward.h"
#include "java\util\stream\DoubleStreamProxyForward.h"
#include "java\util\function\LongToDoubleFunctionProxyForward.h"
#include "java\util\function\LongToIntFunctionProxyForward.h"
#include "java\util\stream\IntStreamProxyForward.h"
#include "java\util\function\LongFunctionProxyForward.h"
#include "java\util\function\LongUnaryOperatorProxyForward.h"
#include "java\util\function\LongConsumerProxyForward.h"
#include "java\util\stream\StreamProxyForward.h"
#include "java\util\function\LongSupplierProxyForward.h"
#include "java\util\stream\LongStream_BuilderProxyForward.h"

namespace java
{
	namespace util
	{
		namespace stream
		{
			class LongStreamProxy
			{
			private:
				static std::string className;
				static jclass objectClass;
				jobject peerObject;

			protected:
				LongStreamProxy(void* unused);
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
				LongStreamProxy(jobject obj);

				virtual ~LongStreamProxy();
				LongStreamProxy& operator=(const LongStreamProxy& rhs);

				// methods
				/*
				 * boolean allMatch(LongPredicate);
				 */
				jboolean allMatch(::java::util::function::LongPredicateProxy p0);
				/*
				 * boolean anyMatch(LongPredicate);
				 */
				jboolean anyMatch(::java::util::function::LongPredicateProxy p0);
				/*
				 * boolean noneMatch(LongPredicate);
				 */
				jboolean noneMatch(::java::util::function::LongPredicateProxy p0);
				/*
				 * Object collect(Supplier, ObjLongConsumer, BiConsumer);
				 */
				::java::lang::ObjectProxy collect(::java::util::function::SupplierProxy p0, ::java::util::function::ObjLongConsumerProxy p1, ::java::util::function::BiConsumerProxy p2);
				/*
				 * LongSummaryStatistics summaryStatistics();
				 */
				::java::util::LongSummaryStatisticsProxy summaryStatistics();
				/*
				 * OptionalDouble average();
				 */
				::java::util::OptionalDoubleProxy average();
				/*
				 * OptionalLong findAny();
				 */
				::java::util::OptionalLongProxy findAny();
				/*
				 * OptionalLong findFirst();
				 */
				::java::util::OptionalLongProxy findFirst();
				/*
				 * OptionalLong max();
				 */
				::java::util::OptionalLongProxy max();
				/*
				 * OptionalLong min();
				 */
				::java::util::OptionalLongProxy min();
				/*
				 * OptionalLong reduce(LongBinaryOperator);
				 */
				::java::util::OptionalLongProxy reduce(::java::util::function::LongBinaryOperatorProxy p0);
				/*
				 * PrimitiveIterator$OfLong iterator();
				 */
				::java::util::PrimitiveIterator_OfLongProxy iterator();
				/*
				 * Spliterator$OfLong spliterator();
				 */
				::java::util::Spliterator_OfLongProxy spliterator();
				/*
				 * DoubleStream asDoubleStream();
				 */
				::java::util::stream::DoubleStreamProxy asDoubleStream();
				/*
				 * DoubleStream mapToDouble(LongToDoubleFunction);
				 */
				::java::util::stream::DoubleStreamProxy mapToDouble(::java::util::function::LongToDoubleFunctionProxy p0);
				/*
				 * IntStream mapToInt(LongToIntFunction);
				 */
				::java::util::stream::IntStreamProxy mapToInt(::java::util::function::LongToIntFunctionProxy p0);
				/*
				 * LongStream distinct();
				 */
				::java::util::stream::LongStreamProxy distinct();
				/*
				 * LongStream filter(LongPredicate);
				 */
				::java::util::stream::LongStreamProxy filter(::java::util::function::LongPredicateProxy p0);
				/*
				 * LongStream flatMap(LongFunction);
				 */
				::java::util::stream::LongStreamProxy flatMap(::java::util::function::LongFunctionProxy p0);
				/*
				 * LongStream limit(long);
				 */
				::java::util::stream::LongStreamProxy limit(jlong p0);
				/*
				 * LongStream map(LongUnaryOperator);
				 */
				::java::util::stream::LongStreamProxy map(::java::util::function::LongUnaryOperatorProxy p0);
				/*
				 * LongStream parallel();
				 */
				::java::util::stream::LongStreamProxy parallel();
				/*
				 * LongStream peek(LongConsumer);
				 */
				::java::util::stream::LongStreamProxy peek(::java::util::function::LongConsumerProxy p0);
				/*
				 * LongStream sequential();
				 */
				::java::util::stream::LongStreamProxy sequential();
				/*
				 * LongStream skip(long);
				 */
				::java::util::stream::LongStreamProxy skip(jlong p0);
				/*
				 * LongStream sorted();
				 */
				::java::util::stream::LongStreamProxy sorted();
				/*
				 * Stream boxed();
				 */
				::java::util::stream::StreamProxy boxed();
				/*
				 * Stream mapToObj(LongFunction);
				 */
				::java::util::stream::StreamProxy mapToObj(::java::util::function::LongFunctionProxy p0);
				/*
				 * long count();
				 */
				jlong count();
				/*
				 * long reduce(long, LongBinaryOperator);
				 */
				jlong reduce(jlong p0, ::java::util::function::LongBinaryOperatorProxy p1);
				/*
				 * long sum();
				 */
				jlong sum();
				/*
				 * long[] toArray();
				 */
				::net::sourceforge::jnipp::JLongArrayHelper<1> toArray();
				/*
				 * void forEach(LongConsumer);
				 */
				void forEach(::java::util::function::LongConsumerProxy p0);
				/*
				 * void forEachOrdered(LongConsumer);
				 */
				void forEachOrdered(::java::util::function::LongConsumerProxy p0);
				/*
				 * static LongStream concat(LongStream, LongStream);
				 */
				static ::java::util::stream::LongStreamProxy concat(::java::util::stream::LongStreamProxy p0, ::java::util::stream::LongStreamProxy p1);
				/*
				 * static LongStream empty();
				 */
				static ::java::util::stream::LongStreamProxy empty();
				/*
				 * static LongStream generate(LongSupplier);
				 */
				static ::java::util::stream::LongStreamProxy generate(::java::util::function::LongSupplierProxy p0);
				/*
				 * static LongStream iterate(long, LongUnaryOperator);
				 */
				static ::java::util::stream::LongStreamProxy iterate(jlong p0, ::java::util::function::LongUnaryOperatorProxy p1);
				/*
				 * static LongStream of(long);
				 */
				static ::java::util::stream::LongStreamProxy of(jlong p0);
				/*
				 * static LongStream of(long[]);
				 */
				static ::java::util::stream::LongStreamProxy of(::net::sourceforge::jnipp::JLongArrayHelper<1> p0);
				/*
				 * static LongStream range(long, long);
				 */
				static ::java::util::stream::LongStreamProxy range(jlong p0, jlong p1);
				/*
				 * static LongStream rangeClosed(long, long);
				 */
				static ::java::util::stream::LongStreamProxy rangeClosed(jlong p0, jlong p1);
				/*
				 * static LongStream$Builder builder();
				 */
				static ::java::util::stream::LongStream_BuilderProxy builder();

			};
		}
	}
}


#endif
