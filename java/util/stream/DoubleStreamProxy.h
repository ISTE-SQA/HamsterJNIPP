#ifndef __java_util_stream_DoubleStreamProxy_H
#define __java_util_stream_DoubleStreamProxy_H


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
#include "java\util\function\DoublePredicateProxyForward.h"
#include "java\util\function\DoubleBinaryOperatorProxyForward.h"
#include "java\util\function\SupplierProxyForward.h"
#include "java\util\function\ObjDoubleConsumerProxyForward.h"
#include "java\util\function\BiConsumerProxyForward.h"
#include "java\lang\ObjectProxyForward.h"
#include "java\util\DoubleSummaryStatisticsProxyForward.h"
#include "java\util\OptionalDoubleProxyForward.h"
#include "java\util\PrimitiveIterator_OfDoubleProxyForward.h"
#include "java\util\Spliterator_OfDoubleProxyForward.h"
#include "java\util\function\DoubleFunctionProxyForward.h"
#include "java\util\function\DoubleUnaryOperatorProxyForward.h"
#include "java\util\function\DoubleConsumerProxyForward.h"
#include "java\util\function\DoubleToIntFunctionProxyForward.h"
#include "java\util\stream\IntStreamProxyForward.h"
#include "java\util\function\DoubleToLongFunctionProxyForward.h"
#include "java\util\stream\LongStreamProxyForward.h"
#include "java\util\stream\StreamProxyForward.h"
#include "java\util\function\DoubleSupplierProxyForward.h"
#include "java\util\stream\DoubleStream_BuilderProxyForward.h"

namespace java
{
	namespace util
	{
		namespace stream
		{
			class DoubleStreamProxy
			{
			private:
				static std::string className;
				static jclass objectClass;
				jobject peerObject;

			protected:
				DoubleStreamProxy(void* unused);
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
				DoubleStreamProxy(jobject obj);

				virtual ~DoubleStreamProxy();
				DoubleStreamProxy& operator=(const DoubleStreamProxy& rhs);

				// methods
				/*
				 * boolean allMatch(DoublePredicate);
				 */
				jboolean allMatch(::java::util::function::DoublePredicateProxy p0);
				/*
				 * boolean anyMatch(DoublePredicate);
				 */
				jboolean anyMatch(::java::util::function::DoublePredicateProxy p0);
				/*
				 * boolean noneMatch(DoublePredicate);
				 */
				jboolean noneMatch(::java::util::function::DoublePredicateProxy p0);
				/*
				 * double reduce(double, DoubleBinaryOperator);
				 */
				jdouble reduce(jdouble p0, ::java::util::function::DoubleBinaryOperatorProxy p1);
				/*
				 * double sum();
				 */
				jdouble sum();
				/*
				 * double[] toArray();
				 */
				::net::sourceforge::jnipp::JDoubleArrayHelper<1> toArray();
				/*
				 * Object collect(Supplier, ObjDoubleConsumer, BiConsumer);
				 */
				::java::lang::ObjectProxy collect(::java::util::function::SupplierProxy p0, ::java::util::function::ObjDoubleConsumerProxy p1, ::java::util::function::BiConsumerProxy p2);
				/*
				 * DoubleSummaryStatistics summaryStatistics();
				 */
				::java::util::DoubleSummaryStatisticsProxy summaryStatistics();
				/*
				 * OptionalDouble average();
				 */
				::java::util::OptionalDoubleProxy average();
				/*
				 * OptionalDouble findAny();
				 */
				::java::util::OptionalDoubleProxy findAny();
				/*
				 * OptionalDouble findFirst();
				 */
				::java::util::OptionalDoubleProxy findFirst();
				/*
				 * OptionalDouble max();
				 */
				::java::util::OptionalDoubleProxy max();
				/*
				 * OptionalDouble min();
				 */
				::java::util::OptionalDoubleProxy min();
				/*
				 * OptionalDouble reduce(DoubleBinaryOperator);
				 */
				::java::util::OptionalDoubleProxy reduce(::java::util::function::DoubleBinaryOperatorProxy p0);
				/*
				 * PrimitiveIterator$OfDouble iterator();
				 */
				::java::util::PrimitiveIterator_OfDoubleProxy iterator();
				/*
				 * Spliterator$OfDouble spliterator();
				 */
				::java::util::Spliterator_OfDoubleProxy spliterator();
				/*
				 * DoubleStream distinct();
				 */
				::java::util::stream::DoubleStreamProxy distinct();
				/*
				 * DoubleStream filter(DoublePredicate);
				 */
				::java::util::stream::DoubleStreamProxy filter(::java::util::function::DoublePredicateProxy p0);
				/*
				 * DoubleStream flatMap(DoubleFunction);
				 */
				::java::util::stream::DoubleStreamProxy flatMap(::java::util::function::DoubleFunctionProxy p0);
				/*
				 * DoubleStream limit(long);
				 */
				::java::util::stream::DoubleStreamProxy limit(jlong p0);
				/*
				 * DoubleStream map(DoubleUnaryOperator);
				 */
				::java::util::stream::DoubleStreamProxy map(::java::util::function::DoubleUnaryOperatorProxy p0);
				/*
				 * DoubleStream parallel();
				 */
				::java::util::stream::DoubleStreamProxy parallel();
				/*
				 * DoubleStream peek(DoubleConsumer);
				 */
				::java::util::stream::DoubleStreamProxy peek(::java::util::function::DoubleConsumerProxy p0);
				/*
				 * DoubleStream sequential();
				 */
				::java::util::stream::DoubleStreamProxy sequential();
				/*
				 * DoubleStream skip(long);
				 */
				::java::util::stream::DoubleStreamProxy skip(jlong p0);
				/*
				 * DoubleStream sorted();
				 */
				::java::util::stream::DoubleStreamProxy sorted();
				/*
				 * IntStream mapToInt(DoubleToIntFunction);
				 */
				::java::util::stream::IntStreamProxy mapToInt(::java::util::function::DoubleToIntFunctionProxy p0);
				/*
				 * LongStream mapToLong(DoubleToLongFunction);
				 */
				::java::util::stream::LongStreamProxy mapToLong(::java::util::function::DoubleToLongFunctionProxy p0);
				/*
				 * Stream boxed();
				 */
				::java::util::stream::StreamProxy boxed();
				/*
				 * Stream mapToObj(DoubleFunction);
				 */
				::java::util::stream::StreamProxy mapToObj(::java::util::function::DoubleFunctionProxy p0);
				/*
				 * long count();
				 */
				jlong count();
				/*
				 * void forEach(DoubleConsumer);
				 */
				void forEach(::java::util::function::DoubleConsumerProxy p0);
				/*
				 * void forEachOrdered(DoubleConsumer);
				 */
				void forEachOrdered(::java::util::function::DoubleConsumerProxy p0);
				/*
				 * static DoubleStream concat(DoubleStream, DoubleStream);
				 */
				static ::java::util::stream::DoubleStreamProxy concat(::java::util::stream::DoubleStreamProxy p0, ::java::util::stream::DoubleStreamProxy p1);
				/*
				 * static DoubleStream empty();
				 */
				static ::java::util::stream::DoubleStreamProxy empty();
				/*
				 * static DoubleStream generate(DoubleSupplier);
				 */
				static ::java::util::stream::DoubleStreamProxy generate(::java::util::function::DoubleSupplierProxy p0);
				/*
				 * static DoubleStream iterate(double, DoubleUnaryOperator);
				 */
				static ::java::util::stream::DoubleStreamProxy iterate(jdouble p0, ::java::util::function::DoubleUnaryOperatorProxy p1);
				/*
				 * static DoubleStream of(double);
				 */
				static ::java::util::stream::DoubleStreamProxy of(jdouble p0);
				/*
				 * static DoubleStream of(double[]);
				 */
				static ::java::util::stream::DoubleStreamProxy of(::net::sourceforge::jnipp::JDoubleArrayHelper<1> p0);
				/*
				 * static DoubleStream$Builder builder();
				 */
				static ::java::util::stream::DoubleStream_BuilderProxy builder();

			};
		}
	}
}


#endif
