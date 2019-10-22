#ifndef __java_nio_file_DirectoryStream_FilterProxy_H
#define __java_nio_file_DirectoryStream_FilterProxy_H


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

namespace java
{
	namespace nio
	{
		namespace file
		{
			class DirectoryStream_FilterProxy
			{
			private:
				static std::string className;
				static jclass objectClass;
				jobject peerObject;

			protected:
				DirectoryStream_FilterProxy(void* unused);
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
				DirectoryStream_FilterProxy(jobject obj);

				virtual ~DirectoryStream_FilterProxy();
				DirectoryStream_FilterProxy& operator=(const DirectoryStream_FilterProxy& rhs);

				// methods
				/*
				 * boolean accept(Object);
				 */
				jboolean accept(::java::lang::ObjectProxy p0);

			};
		}
	}
}


#endif
