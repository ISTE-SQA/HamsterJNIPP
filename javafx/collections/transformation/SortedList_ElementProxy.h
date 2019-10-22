#ifndef __javafx_collections_transformation_SortedList_ElementProxy_H
#define __javafx_collections_transformation_SortedList_ElementProxy_H


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
#include "java\lang\ObjectProxyForward.h"

namespace javafx
{
	namespace collections
	{
		namespace transformation
		{
			class SortedList_ElementProxy
			{
			private:
				static std::string className;
				static jclass objectClass;
				jobject peerObject;

			protected:
				SortedList_ElementProxy(void* unused);
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
				SortedList_ElementProxy(jobject obj);
				SortedList_ElementProxy(::java::lang::ObjectProxy p0, jint p1);

				virtual ~SortedList_ElementProxy();
				SortedList_ElementProxy& operator=(const SortedList_ElementProxy& rhs);

				// methods

			};
		}
	}
}


#endif
