#ifndef __java_util_concurrent_ConcurrentHashMapProxy_H
#define __java_util_concurrent_ConcurrentHashMapProxy_H


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
#include "java\util\MapProxyForward.h"
#include "java\lang\ObjectProxyForward.h"
#include "java\util\function\ToDoubleFunctionProxyForward.h"
#include "java\util\function\DoubleBinaryOperatorProxyForward.h"
#include "java\util\function\ToDoubleBiFunctionProxyForward.h"
#include "java\util\function\ToIntFunctionProxyForward.h"
#include "java\util\function\IntBinaryOperatorProxyForward.h"
#include "java\util\function\ToIntBiFunctionProxyForward.h"
#include "java\util\function\BiFunctionProxyForward.h"
#include "java\util\function\FunctionProxyForward.h"
#include "java\util\CollectionProxyForward.h"
#include "java\util\EnumerationProxyForward.h"
#include "java\util\Map_EntryProxyForward.h"
#include "java\util\SetProxyForward.h"
#include "java\util\concurrent\ConcurrentHashMap_KeySetViewProxyForward.h"
#include "java\util\function\ToLongFunctionProxyForward.h"
#include "java\util\function\LongBinaryOperatorProxyForward.h"
#include "java\util\function\ToLongBiFunctionProxyForward.h"
#include "java\util\function\BiConsumerProxyForward.h"
#include "java\util\function\ConsumerProxyForward.h"
#include "sun\misc\UnsafeProxyForward.h"
#include "java\util\concurrent\ConcurrentHashMap_EntrySetViewProxyForward.h"
#include "java\util\concurrent\ConcurrentHashMap_ValuesViewProxyForward.h"
#include "java\io\ObjectStreamFieldProxy.h"
#include "java\util\concurrent\ConcurrentHashMap_CounterCellProxy.h"
#include "java\util\concurrent\ConcurrentHashMap_NodeProxy.h"

namespace java
{
	namespace util
	{
		namespace concurrent
		{
			class ConcurrentHashMapProxy
			{
			private:
				static std::string className;
				static jclass objectClass;
				jobject peerObject;

			protected:
				ConcurrentHashMapProxy(void* unused);
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
				ConcurrentHashMapProxy(jobject obj);
				ConcurrentHashMapProxy();
				ConcurrentHashMapProxy(jint p0);
				ConcurrentHashMapProxy(jint p0, jfloat p1);
				ConcurrentHashMapProxy(jint p0, jfloat p1, jint p2);
				ConcurrentHashMapProxy(::java::util::MapProxy p0);

				virtual ~ConcurrentHashMapProxy();
				ConcurrentHashMapProxy& operator=(const ConcurrentHashMapProxy& rhs);

				// methods
				/*
				 * boolean contains(Object);
				 */
				jboolean contains(::java::lang::ObjectProxy p0);
				/*
				 * boolean containsKey(Object);
				 */
				jboolean containsKey(::java::lang::ObjectProxy p0);
				/*
				 * boolean containsValue(Object);
				 */
				jboolean containsValue(::java::lang::ObjectProxy p0);
				/*
				 * boolean equals(Object);
				 */
				jboolean equals(::java::lang::ObjectProxy p0);
				/*
				 * boolean isEmpty();
				 */
				jboolean isEmpty();
				/*
				 * boolean remove(Object, Object);
				 */
				jboolean remove(::java::lang::ObjectProxy p0, ::java::lang::ObjectProxy p1);
				/*
				 * boolean replace(Object, Object, Object);
				 */
				jboolean replace(::java::lang::ObjectProxy p0, ::java::lang::ObjectProxy p1, ::java::lang::ObjectProxy p2);
				/*
				 * double reduceEntriesToDouble(long, ToDoubleFunction, double, DoubleBinaryOperator);
				 */
				jdouble reduceEntriesToDouble(jlong p0, ::java::util::function::ToDoubleFunctionProxy p1, jdouble p2, ::java::util::function::DoubleBinaryOperatorProxy p3);
				/*
				 * double reduceKeysToDouble(long, ToDoubleFunction, double, DoubleBinaryOperator);
				 */
				jdouble reduceKeysToDouble(jlong p0, ::java::util::function::ToDoubleFunctionProxy p1, jdouble p2, ::java::util::function::DoubleBinaryOperatorProxy p3);
				/*
				 * double reduceToDouble(long, ToDoubleBiFunction, double, DoubleBinaryOperator);
				 */
				jdouble reduceToDouble(jlong p0, ::java::util::function::ToDoubleBiFunctionProxy p1, jdouble p2, ::java::util::function::DoubleBinaryOperatorProxy p3);
				/*
				 * double reduceValuesToDouble(long, ToDoubleFunction, double, DoubleBinaryOperator);
				 */
				jdouble reduceValuesToDouble(jlong p0, ::java::util::function::ToDoubleFunctionProxy p1, jdouble p2, ::java::util::function::DoubleBinaryOperatorProxy p3);
				/*
				 * int hashCode();
				 */
				jint hashCode();
				/*
				 * int reduceEntriesToInt(long, ToIntFunction, int, IntBinaryOperator);
				 */
				jint reduceEntriesToInt(jlong p0, ::java::util::function::ToIntFunctionProxy p1, jint p2, ::java::util::function::IntBinaryOperatorProxy p3);
				/*
				 * int reduceKeysToInt(long, ToIntFunction, int, IntBinaryOperator);
				 */
				jint reduceKeysToInt(jlong p0, ::java::util::function::ToIntFunctionProxy p1, jint p2, ::java::util::function::IntBinaryOperatorProxy p3);
				/*
				 * int reduceToInt(long, ToIntBiFunction, int, IntBinaryOperator);
				 */
				jint reduceToInt(jlong p0, ::java::util::function::ToIntBiFunctionProxy p1, jint p2, ::java::util::function::IntBinaryOperatorProxy p3);
				/*
				 * int reduceValuesToInt(long, ToIntFunction, int, IntBinaryOperator);
				 */
				jint reduceValuesToInt(jlong p0, ::java::util::function::ToIntFunctionProxy p1, jint p2, ::java::util::function::IntBinaryOperatorProxy p3);
				/*
				 * int size();
				 */
				jint size();
				/*
				 * Object compute(Object, BiFunction);
				 */
				::java::lang::ObjectProxy compute(::java::lang::ObjectProxy p0, ::java::util::function::BiFunctionProxy p1);
				/*
				 * Object computeIfAbsent(Object, Function);
				 */
				::java::lang::ObjectProxy computeIfAbsent(::java::lang::ObjectProxy p0, ::java::util::function::FunctionProxy p1);
				/*
				 * Object computeIfPresent(Object, BiFunction);
				 */
				::java::lang::ObjectProxy computeIfPresent(::java::lang::ObjectProxy p0, ::java::util::function::BiFunctionProxy p1);
				/*
				 * Object get(Object);
				 */
				::java::lang::ObjectProxy get(::java::lang::ObjectProxy p0);
				/*
				 * Object getOrDefault(Object, Object);
				 */
				::java::lang::ObjectProxy getOrDefault(::java::lang::ObjectProxy p0, ::java::lang::ObjectProxy p1);
				/*
				 * Object merge(Object, Object, BiFunction);
				 */
				::java::lang::ObjectProxy merge(::java::lang::ObjectProxy p0, ::java::lang::ObjectProxy p1, ::java::util::function::BiFunctionProxy p2);
				/*
				 * Object put(Object, Object);
				 */
				::java::lang::ObjectProxy put(::java::lang::ObjectProxy p0, ::java::lang::ObjectProxy p1);
				/*
				 * Object putIfAbsent(Object, Object);
				 */
				::java::lang::ObjectProxy putIfAbsent(::java::lang::ObjectProxy p0, ::java::lang::ObjectProxy p1);
				/*
				 * Object reduce(long, BiFunction, BiFunction);
				 */
				::java::lang::ObjectProxy reduce(jlong p0, ::java::util::function::BiFunctionProxy p1, ::java::util::function::BiFunctionProxy p2);
				/*
				 * Object reduceEntries(long, Function, BiFunction);
				 */
				::java::lang::ObjectProxy reduceEntries(jlong p0, ::java::util::function::FunctionProxy p1, ::java::util::function::BiFunctionProxy p2);
				/*
				 * Object reduceKeys(long, BiFunction);
				 */
				::java::lang::ObjectProxy reduceKeys(jlong p0, ::java::util::function::BiFunctionProxy p1);
				/*
				 * Object reduceKeys(long, Function, BiFunction);
				 */
				::java::lang::ObjectProxy reduceKeys(jlong p0, ::java::util::function::FunctionProxy p1, ::java::util::function::BiFunctionProxy p2);
				/*
				 * Object reduceValues(long, BiFunction);
				 */
				::java::lang::ObjectProxy reduceValues(jlong p0, ::java::util::function::BiFunctionProxy p1);
				/*
				 * Object reduceValues(long, Function, BiFunction);
				 */
				::java::lang::ObjectProxy reduceValues(jlong p0, ::java::util::function::FunctionProxy p1, ::java::util::function::BiFunctionProxy p2);
				/*
				 * Object remove(Object);
				 */
				::java::lang::ObjectProxy remove(::java::lang::ObjectProxy p0);
				/*
				 * Object replace(Object, Object);
				 */
				::java::lang::ObjectProxy replace(::java::lang::ObjectProxy p0, ::java::lang::ObjectProxy p1);
				/*
				 * Object search(long, BiFunction);
				 */
				::java::lang::ObjectProxy search(jlong p0, ::java::util::function::BiFunctionProxy p1);
				/*
				 * Object searchEntries(long, Function);
				 */
				::java::lang::ObjectProxy searchEntries(jlong p0, ::java::util::function::FunctionProxy p1);
				/*
				 * Object searchKeys(long, Function);
				 */
				::java::lang::ObjectProxy searchKeys(jlong p0, ::java::util::function::FunctionProxy p1);
				/*
				 * Object searchValues(long, Function);
				 */
				::java::lang::ObjectProxy searchValues(jlong p0, ::java::util::function::FunctionProxy p1);
				/*
				 * String toString();
				 */
				::net::sourceforge::jnipp::JStringHelper toString();
				/*
				 * Collection values();
				 */
				::java::util::CollectionProxy values();
				/*
				 * Enumeration elements();
				 */
				::java::util::EnumerationProxy elements();
				/*
				 * Enumeration keys();
				 */
				::java::util::EnumerationProxy keys();
				/*
				 * Map$Entry reduceEntries(long, BiFunction);
				 */
				::java::util::Map_EntryProxy reduceEntries(jlong p0, ::java::util::function::BiFunctionProxy p1);
				/*
				 * Set entrySet();
				 */
				::java::util::SetProxy entrySet();
				/*
				 * ConcurrentHashMap$KeySetView keySet();
				 */
				::java::util::concurrent::ConcurrentHashMap_KeySetViewProxy keySet();
				/*
				 * ConcurrentHashMap$KeySetView keySet(Object);
				 */
				::java::util::concurrent::ConcurrentHashMap_KeySetViewProxy keySet(::java::lang::ObjectProxy p0);
				/*
				 * long mappingCount();
				 */
				jlong mappingCount();
				/*
				 * long reduceEntriesToLong(long, ToLongFunction, long, LongBinaryOperator);
				 */
				jlong reduceEntriesToLong(jlong p0, ::java::util::function::ToLongFunctionProxy p1, jlong p2, ::java::util::function::LongBinaryOperatorProxy p3);
				/*
				 * long reduceKeysToLong(long, ToLongFunction, long, LongBinaryOperator);
				 */
				jlong reduceKeysToLong(jlong p0, ::java::util::function::ToLongFunctionProxy p1, jlong p2, ::java::util::function::LongBinaryOperatorProxy p3);
				/*
				 * long reduceToLong(long, ToLongBiFunction, long, LongBinaryOperator);
				 */
				jlong reduceToLong(jlong p0, ::java::util::function::ToLongBiFunctionProxy p1, jlong p2, ::java::util::function::LongBinaryOperatorProxy p3);
				/*
				 * long reduceValuesToLong(long, ToLongFunction, long, LongBinaryOperator);
				 */
				jlong reduceValuesToLong(jlong p0, ::java::util::function::ToLongFunctionProxy p1, jlong p2, ::java::util::function::LongBinaryOperatorProxy p3);
				/*
				 * static ConcurrentHashMap$KeySetView newKeySet();
				 */
				static ::java::util::concurrent::ConcurrentHashMap_KeySetViewProxy newKeySet();
				/*
				 * static ConcurrentHashMap$KeySetView newKeySet(int);
				 */
				static ::java::util::concurrent::ConcurrentHashMap_KeySetViewProxy newKeySet(jint p0);
				/*
				 * void clear();
				 */
				void clear();
				/*
				 * void forEach(BiConsumer);
				 */
				void forEach(::java::util::function::BiConsumerProxy p0);
				/*
				 * void forEach(long, BiConsumer);
				 */
				void forEach(jlong p0, ::java::util::function::BiConsumerProxy p1);
				/*
				 * void forEach(long, BiFunction, Consumer);
				 */
				void forEach(jlong p0, ::java::util::function::BiFunctionProxy p1, ::java::util::function::ConsumerProxy p2);
				/*
				 * void forEachEntry(long, Consumer);
				 */
				void forEachEntry(jlong p0, ::java::util::function::ConsumerProxy p1);
				/*
				 * void forEachEntry(long, Function, Consumer);
				 */
				void forEachEntry(jlong p0, ::java::util::function::FunctionProxy p1, ::java::util::function::ConsumerProxy p2);
				/*
				 * void forEachKey(long, Consumer);
				 */
				void forEachKey(jlong p0, ::java::util::function::ConsumerProxy p1);
				/*
				 * void forEachKey(long, Function, Consumer);
				 */
				void forEachKey(jlong p0, ::java::util::function::FunctionProxy p1, ::java::util::function::ConsumerProxy p2);
				/*
				 * void forEachValue(long, Consumer);
				 */
				void forEachValue(jlong p0, ::java::util::function::ConsumerProxy p1);
				/*
				 * void forEachValue(long, Function, Consumer);
				 */
				void forEachValue(jlong p0, ::java::util::function::FunctionProxy p1, ::java::util::function::ConsumerProxy p2);
				/*
				 * void putAll(Map);
				 */
				void putAll(::java::util::MapProxy p0);
				/*
				 * void replaceAll(BiFunction);
				 */
				void replaceAll(::java::util::function::BiFunctionProxy p0);

			};
		}
	}
}


#endif
