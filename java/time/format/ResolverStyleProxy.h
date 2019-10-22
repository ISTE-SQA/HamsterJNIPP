#ifndef __java_time_format_ResolverStyleProxy_H
#define __java_time_format_ResolverStyleProxy_H


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
#include "java\time\format\ResolverStyleProxy.h"

namespace java
{
	namespace time
	{
		namespace format
		{
			class ResolverStyleProxy
			{
			private:
				static std::string className;
				static jclass objectClass;
				jobject peerObject;

			protected:
				ResolverStyleProxy(void* unused);
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
				ResolverStyleProxy(jobject obj);

				virtual ~ResolverStyleProxy();
				ResolverStyleProxy& operator=(const ResolverStyleProxy& rhs);

				// methods
				/*
				 * static ResolverStyle valueOf(String);
				 */
				static ::java::time::format::ResolverStyleProxy valueOf(::net::sourceforge::jnipp::JStringHelper p0);
				/*
				 * static ResolverStyle[] values();
				 */
				static ::net::sourceforge::jnipp::PA<::java::time::format::ResolverStyleProxy>::ProxyArray<1> values();

			};
		}
	}
}


#endif
