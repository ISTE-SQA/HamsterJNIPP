#ifndef __java_nio_file_DirectoryStreamProxy_H
#define __java_nio_file_DirectoryStreamProxy_H


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
#include "java\util\IteratorProxyForward.h"

namespace java
{
	namespace nio
	{
		namespace file
		{
			class DirectoryStreamProxy
			{
			private:
				static std::string className;
				static jclass objectClass;
				jobject peerObject;

			protected:
				DirectoryStreamProxy(void* unused);
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
				DirectoryStreamProxy(jobject obj);

				virtual ~DirectoryStreamProxy();
				DirectoryStreamProxy& operator=(const DirectoryStreamProxy& rhs);

				// methods
				/*
				 * Iterator iterator();
				 */
				::java::util::IteratorProxy iterator();

			};
		}
	}
}


#endif
