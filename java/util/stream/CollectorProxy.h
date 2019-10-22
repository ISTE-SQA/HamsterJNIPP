#ifndef __java_util_stream_CollectorProxy_H
#define __java_util_stream_CollectorProxy_H


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
#include "java\util\SetProxyForward.h"
#include "java\util\function\BiConsumerProxyForward.h"
#include "java\util\function\BinaryOperatorProxyForward.h"
#include "java\util\function\FunctionProxyForward.h"
#include "java\util\function\SupplierProxyForward.h"
#include "java\util\stream\Collector_CharacteristicsProxy.h"

namespace java
{
	namespace util
	{
		namespace stream
		{
			class CollectorProxy
			{
			private:
				static std::string className;
				static jclass objectClass;
				jobject peerObject;

			protected:
				CollectorProxy(void* unused);
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
				CollectorProxy(jobject obj);

				virtual ~CollectorProxy();
				CollectorProxy& operator=(const CollectorProxy& rhs);

				// methods
				/*
				 * Set characteristics();
				 */
				::java::util::SetProxy characteristics();
				/*
				 * BiConsumer accumulator();
				 */
				::java::util::function::BiConsumerProxy accumulator();
				/*
				 * BinaryOperator combiner();
				 */
				::java::util::function::BinaryOperatorProxy combiner();
				/*
				 * Function finisher();
				 */
				::java::util::function::FunctionProxy finisher();
				/*
				 * Supplier supplier();
				 */
				::java::util::function::SupplierProxy supplier();
				/*
				 * static Collector of(Supplier, BiConsumer, BinaryOperator, Function, Collector$Characteristics[]);
				 */
				static ::java::util::stream::CollectorProxy of(::java::util::function::SupplierProxy p0, ::java::util::function::BiConsumerProxy p1, ::java::util::function::BinaryOperatorProxy p2, ::java::util::function::FunctionProxy p3, ::net::sourceforge::jnipp::PA<::java::util::stream::Collector_CharacteristicsProxy>::ProxyArray<1> p4);
				/*
				 * static Collector of(Supplier, BiConsumer, BinaryOperator, Collector$Characteristics[]);
				 */
				static ::java::util::stream::CollectorProxy of(::java::util::function::SupplierProxy p0, ::java::util::function::BiConsumerProxy p1, ::java::util::function::BinaryOperatorProxy p2, ::net::sourceforge::jnipp::PA<::java::util::stream::Collector_CharacteristicsProxy>::ProxyArray<1> p3);

			};
		}
	}
}


#endif
