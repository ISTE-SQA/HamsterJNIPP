#ifndef __java_time_chrono_IsoEraProxy_H
#define __java_time_chrono_IsoEraProxy_H


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
#include "java\time\chrono\IsoEraProxy.h"

namespace java
{
	namespace time
	{
		namespace chrono
		{
			class IsoEraProxy
			{
			private:
				static std::string className;
				static jclass objectClass;
				jobject peerObject;

			protected:
				IsoEraProxy(void* unused);
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
				IsoEraProxy(jobject obj);

				virtual ~IsoEraProxy();
				IsoEraProxy& operator=(const IsoEraProxy& rhs);

				// methods
				/*
				 * int getValue();
				 */
				jint getValue();
				/*
				 * static IsoEra of(int);
				 */
				static ::java::time::chrono::IsoEraProxy of(jint p0);
				/*
				 * static IsoEra valueOf(String);
				 */
				static ::java::time::chrono::IsoEraProxy valueOf(::net::sourceforge::jnipp::JStringHelper p0);
				/*
				 * static IsoEra[] values();
				 */
				static ::net::sourceforge::jnipp::PA<::java::time::chrono::IsoEraProxy>::ProxyArray<1> values();

			};
		}
	}
}


#endif
