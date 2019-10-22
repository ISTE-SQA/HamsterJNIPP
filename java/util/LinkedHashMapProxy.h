#ifndef __java_util_LinkedHashMapProxy_H
#define __java_util_LinkedHashMapProxy_H


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
#include "java\util\function\BiConsumerProxyForward.h"
#include "java\util\function\BiFunctionProxyForward.h"
#include "java\util\LinkedHashMap_EntryProxyForward.h"

namespace java
{
	namespace util
	{
		class LinkedHashMapProxy
		{
		private:
			static std::string className;
			static jclass objectClass;
			jobject peerObject;

		protected:
			LinkedHashMapProxy(void* unused);
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
			LinkedHashMapProxy(jobject obj);
			LinkedHashMapProxy();
			LinkedHashMapProxy(jint p0);
			LinkedHashMapProxy(jint p0, jfloat p1);
			LinkedHashMapProxy(jint p0, jfloat p1, jboolean p2);
			LinkedHashMapProxy(::java::util::MapProxy p0);

			virtual ~LinkedHashMapProxy();
			LinkedHashMapProxy& operator=(const LinkedHashMapProxy& rhs);

			// methods
			/*
			 * boolean containsValue(Object);
			 */
			jboolean containsValue(::java::lang::ObjectProxy p0);
			/*
			 * Object get(Object);
			 */
			::java::lang::ObjectProxy get(::java::lang::ObjectProxy p0);
			/*
			 * Object getOrDefault(Object, Object);
			 */
			::java::lang::ObjectProxy getOrDefault(::java::lang::ObjectProxy p0, ::java::lang::ObjectProxy p1);
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
			 * void clear();
			 */
			void clear();
			/*
			 * void forEach(BiConsumer);
			 */
			void forEach(::java::util::function::BiConsumerProxy p0);
			/*
			 * void replaceAll(BiFunction);
			 */
			void replaceAll(::java::util::function::BiFunctionProxy p0);

		};
	}
}


#endif
