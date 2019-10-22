#ifndef __java_nio_file_PathMatcherProxy_H
#define __java_nio_file_PathMatcherProxy_H


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
#include "java\nio\file\PathProxyForward.h"

namespace java
{
	namespace nio
	{
		namespace file
		{
			class PathMatcherProxy
			{
			private:
				static std::string className;
				static jclass objectClass;
				jobject peerObject;

			protected:
				PathMatcherProxy(void* unused);
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
				PathMatcherProxy(jobject obj);

				virtual ~PathMatcherProxy();
				PathMatcherProxy& operator=(const PathMatcherProxy& rhs);

				// methods
				/*
				 * boolean matches(Path);
				 */
				jboolean matches(::java::nio::file::PathProxy p0);

			};
		}
	}
}


#endif
