#ifndef __java_util_stream_Collector_CharacteristicsProxy_H
#define __java_util_stream_Collector_CharacteristicsProxy_H


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
#include "java\util\stream\Collector_CharacteristicsProxy.h"

namespace java
{
	namespace util
	{
		namespace stream
		{
			class Collector_CharacteristicsProxy
			{
			private:
				static std::string className;
				static jclass objectClass;
				jobject peerObject;

			protected:
				Collector_CharacteristicsProxy(void* unused);
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
				Collector_CharacteristicsProxy(jobject obj);

				virtual ~Collector_CharacteristicsProxy();
				Collector_CharacteristicsProxy& operator=(const Collector_CharacteristicsProxy& rhs);

				// methods
				/*
				 * static Collector$Characteristics valueOf(String);
				 */
				static ::java::util::stream::Collector_CharacteristicsProxy valueOf(::net::sourceforge::jnipp::JStringHelper p0);
				/*
				 * static Collector$Characteristics[] values();
				 */
				static ::net::sourceforge::jnipp::PA<::java::util::stream::Collector_CharacteristicsProxy>::ProxyArray<1> values();

			};
		}
	}
}


#endif
