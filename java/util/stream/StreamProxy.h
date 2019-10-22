#ifndef __java_util_stream_StreamProxy_H
#define __java_util_stream_StreamProxy_H


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
#include "java\util\function\PredicateProxyForward.h"
#include "java\util\function\SupplierProxyForward.h"
#include "java\util\function\BiConsumerProxyForward.h"
#include "java\lang\ObjectProxyForward.h"
#include "java\util\stream\CollectorProxyForward.h"
#include "java\util\function\BiFunctionProxyForward.h"
#include "java\util\function\BinaryOperatorProxyForward.h"
#include "java\util\function\IntFunctionProxyForward.h"
#include "java\util\OptionalProxyForward.h"
#include "java\util\ComparatorProxyForward.h"
#include "java\util\function\FunctionProxyForward.h"
#include "java\util\stream\DoubleStreamProxyForward.h"
#include "java\util\function\ToDoubleFunctionProxyForward.h"
#include "java\util\stream\IntStreamProxyForward.h"
#include "java\util\function\ToIntFunctionProxyForward.h"
#include "java\util\stream\LongStreamProxyForward.h"
#include "java\util\function\ToLongFunctionProxyForward.h"
#include "java\util\function\ConsumerProxyForward.h"
#include "java\util\function\UnaryOperatorProxyForward.h"
#include "java\util\stream\Stream_BuilderProxyForward.h"
#include "java\lang\ObjectProxy.h"

namespace java
{
	namespace util
	{
		namespace stream
		{
			class StreamProxy
			{
			private:
				static std::string className;
				static jclass objectClass;
				jobject peerObject;

			protected:
				StreamProxy(void* unused);
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
				StreamProxy(jobject obj);

				virtual ~StreamProxy();
				StreamProxy& operator=(const StreamProxy& rhs);

				// methods
				/*
				 * boolean allMatch(Predicate);
				 */
				jboolean allMatch(::java::util::function::PredicateProxy p0);
				/*
				 * boolean anyMatch(Predicate);
				 */
				jboolean anyMatch(::java::util::function::PredicateProxy p0);
				/*
				 * boolean noneMatch(Predicate);
				 */
				jboolean noneMatch(::java::util::function::PredicateProxy p0);
				/*
				 * Object collect(Supplier, BiConsumer, BiConsumer);
				 */
				::java::lang::ObjectProxy collect(::java::util::function::SupplierProxy p0, ::java::util::function::BiConsumerProxy p1, ::java::util::function::BiConsumerProxy p2);
				/*
				 * Object collect(Collector);
				 */
				::java::lang::ObjectProxy collect(::java::util::stream::CollectorProxy p0);
				/*
				 * Object reduce(Object, BiFunction, BinaryOperator);
				 */
				::java::lang::ObjectProxy reduce(::java::lang::ObjectProxy p0, ::java::util::function::BiFunctionProxy p1, ::java::util::function::BinaryOperatorProxy p2);
				/*
				 * Object reduce(Object, BinaryOperator);
				 */
				::java::lang::ObjectProxy reduce(::java::lang::ObjectProxy p0, ::java::util::function::BinaryOperatorProxy p1);
				/*
				 * Object[] toArray();
				 */
				::net::sourceforge::jnipp::PA<::java::lang::ObjectProxy>::ProxyArray<1> toArray();
				/*
				 * Object[] toArray(IntFunction);
				 */
				::net::sourceforge::jnipp::PA<::java::lang::ObjectProxy>::ProxyArray<1> toArray(::java::util::function::IntFunctionProxy p0);
				/*
				 * Optional findAny();
				 */
				::java::util::OptionalProxy findAny();
				/*
				 * Optional findFirst();
				 */
				::java::util::OptionalProxy findFirst();
				/*
				 * Optional max(Comparator);
				 */
				::java::util::OptionalProxy max(::java::util::ComparatorProxy p0);
				/*
				 * Optional min(Comparator);
				 */
				::java::util::OptionalProxy min(::java::util::ComparatorProxy p0);
				/*
				 * Optional reduce(BinaryOperator);
				 */
				::java::util::OptionalProxy reduce(::java::util::function::BinaryOperatorProxy p0);
				/*
				 * DoubleStream flatMapToDouble(Function);
				 */
				::java::util::stream::DoubleStreamProxy flatMapToDouble(::java::util::function::FunctionProxy p0);
				/*
				 * DoubleStream mapToDouble(ToDoubleFunction);
				 */
				::java::util::stream::DoubleStreamProxy mapToDouble(::java::util::function::ToDoubleFunctionProxy p0);
				/*
				 * IntStream flatMapToInt(Function);
				 */
				::java::util::stream::IntStreamProxy flatMapToInt(::java::util::function::FunctionProxy p0);
				/*
				 * IntStream mapToInt(ToIntFunction);
				 */
				::java::util::stream::IntStreamProxy mapToInt(::java::util::function::ToIntFunctionProxy p0);
				/*
				 * LongStream flatMapToLong(Function);
				 */
				::java::util::stream::LongStreamProxy flatMapToLong(::java::util::function::FunctionProxy p0);
				/*
				 * LongStream mapToLong(ToLongFunction);
				 */
				::java::util::stream::LongStreamProxy mapToLong(::java::util::function::ToLongFunctionProxy p0);
				/*
				 * Stream distinct();
				 */
				::java::util::stream::StreamProxy distinct();
				/*
				 * Stream filter(Predicate);
				 */
				::java::util::stream::StreamProxy filter(::java::util::function::PredicateProxy p0);
				/*
				 * Stream flatMap(Function);
				 */
				::java::util::stream::StreamProxy flatMap(::java::util::function::FunctionProxy p0);
				/*
				 * Stream limit(long);
				 */
				::java::util::stream::StreamProxy limit(jlong p0);
				/*
				 * Stream map(Function);
				 */
				::java::util::stream::StreamProxy map(::java::util::function::FunctionProxy p0);
				/*
				 * Stream peek(Consumer);
				 */
				::java::util::stream::StreamProxy peek(::java::util::function::ConsumerProxy p0);
				/*
				 * Stream skip(long);
				 */
				::java::util::stream::StreamProxy skip(jlong p0);
				/*
				 * Stream sorted();
				 */
				::java::util::stream::StreamProxy sorted();
				/*
				 * Stream sorted(Comparator);
				 */
				::java::util::stream::StreamProxy sorted(::java::util::ComparatorProxy p0);
				/*
				 * long count();
				 */
				jlong count();
				/*
				 * void forEach(Consumer);
				 */
				void forEach(::java::util::function::ConsumerProxy p0);
				/*
				 * void forEachOrdered(Consumer);
				 */
				void forEachOrdered(::java::util::function::ConsumerProxy p0);
				/*
				 * static Stream concat(Stream, Stream);
				 */
				static ::java::util::stream::StreamProxy concat(::java::util::stream::StreamProxy p0, ::java::util::stream::StreamProxy p1);
				/*
				 * static Stream empty();
				 */
				static ::java::util::stream::StreamProxy empty();
				/*
				 * static Stream generate(Supplier);
				 */
				static ::java::util::stream::StreamProxy generate(::java::util::function::SupplierProxy p0);
				/*
				 * static Stream iterate(Object, UnaryOperator);
				 */
				static ::java::util::stream::StreamProxy iterate(::java::lang::ObjectProxy p0, ::java::util::function::UnaryOperatorProxy p1);
				/*
				 * static Stream of(Object);
				 */
				static ::java::util::stream::StreamProxy of(::java::lang::ObjectProxy p0);
				/*
				 * static Stream of(Object[]);
				 */
				static ::java::util::stream::StreamProxy of(::net::sourceforge::jnipp::PA<::java::lang::ObjectProxy>::ProxyArray<1> p0);
				/*
				 * static Stream$Builder builder();
				 */
				static ::java::util::stream::Stream_BuilderProxy builder();

			};
		}
	}
}


#endif
