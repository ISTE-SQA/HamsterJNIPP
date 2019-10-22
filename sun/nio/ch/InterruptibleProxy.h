#ifndef __sun_nio_ch_InterruptibleProxy_H
#define __sun_nio_ch_InterruptibleProxy_H


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
#include "java\lang\ThreadProxyForward.h"

namespace sun
{
	namespace nio
	{
		namespace ch
		{
			class InterruptibleProxy
			{
			private:
				static std::string className;
				static jclass objectClass;
				jobject peerObject;

			protected:
				InterruptibleProxy(void* unused);
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
				InterruptibleProxy(jobject obj);

				virtual ~InterruptibleProxy();
				InterruptibleProxy& operator=(const InterruptibleProxy& rhs);

				// methods
				/*
				 * void interrupt(Thread);
				 */
				void interrupt(::java::lang::ThreadProxy p0);

			};
		}
	}
}


#endif
