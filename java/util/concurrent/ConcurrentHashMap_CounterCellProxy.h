#ifndef __java_util_concurrent_ConcurrentHashMap_CounterCellProxy_H
#define __java_util_concurrent_ConcurrentHashMap_CounterCellProxy_H


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

namespace java
{
	namespace util
	{
		namespace concurrent
		{
			class ConcurrentHashMap_CounterCellProxy
			{
			private:
				static std::string className;
				static jclass objectClass;
				jobject peerObject;

			protected:
				ConcurrentHashMap_CounterCellProxy(void* unused);
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
				ConcurrentHashMap_CounterCellProxy(jobject obj);

				virtual ~ConcurrentHashMap_CounterCellProxy();
				ConcurrentHashMap_CounterCellProxy& operator=(const ConcurrentHashMap_CounterCellProxy& rhs);

				// methods

			};
		}
	}
}


#endif
