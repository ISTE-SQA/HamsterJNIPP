#ifndef __java_util_HashtableProxy_H
#define __java_util_HashtableProxy_H


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
#include "java\util\CollectionProxyForward.h"
#include "java\util\SetProxyForward.h"
#include "java\util\function\BiFunctionProxyForward.h"
#include "java\util\function\FunctionProxyForward.h"
#include "java\util\EnumerationProxyForward.h"
#include "java\util\function\BiConsumerProxyForward.h"
#include "java\util\Hashtable_EntryProxy.h"

namespace java
{
	namespace util
	{
		class HashtableProxy
		{
		private:
			static std::string className;
			static jclass objectClass;
			jobject peerObject;

		protected:
			HashtableProxy(void* unused);
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
			HashtableProxy(jobject obj);
			HashtableProxy();
			HashtableProxy(jint p0);
			HashtableProxy(jint p0, jfloat p1);
			HashtableProxy(::java::util::MapProxy p0);

			virtual ~HashtableProxy();
			HashtableProxy& operator=(const HashtableProxy& rhs);

			// methods
			/*
			 * boolean containsValue(Object);
			 */
			jboolean containsValue(::java::lang::ObjectProxy p0);
			/*
			 * Collection values();
			 */
			::java::util::CollectionProxy values();
			/*
			 * Set entrySet();
			 */
			::java::util::SetProxy entrySet();
			/*
			 * Set keySet();
			 */
			::java::util::SetProxy keySet();
			/*
			 * boolean contains(Object);
			 */
			jboolean contains(::java::lang::ObjectProxy p0);
			/*
			 * boolean containsKey(Object);
			 */
			jboolean containsKey(::java::lang::ObjectProxy p0);
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
			 * int hashCode();
			 */
			jint hashCode();
			/*
			 * int size();
			 */
			jint size();
			/*
			 * Object clone();
			 */
			::java::lang::ObjectProxy clone();
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
			 * Object remove(Object);
			 */
			::java::lang::ObjectProxy remove(::java::lang::ObjectProxy p0);
			/*
			 * Object replace(Object, Object);
			 */
			::java::lang::ObjectProxy replace(::java::lang::ObjectProxy p0, ::java::lang::ObjectProxy p1);
			/*
			 * String toString();
			 */
			::net::sourceforge::jnipp::JStringHelper toString();
			/*
			 * Enumeration elements();
			 */
			::java::util::EnumerationProxy elements();
			/*
			 * Enumeration keys();
			 */
			::java::util::EnumerationProxy keys();
			/*
			 * void clear();
			 */
			void clear();
			/*
			 * void forEach(BiConsumer);
			 */
			void forEach(::java::util::function::BiConsumerProxy p0);
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


#endif
