#ifndef __java_nio_file_LinkOptionProxy_H
#define __java_nio_file_LinkOptionProxy_H


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
#include "java\nio\file\LinkOptionProxy.h"

namespace java
{
	namespace nio
	{
		namespace file
		{
			class LinkOptionProxy
			{
			private:
				static std::string className;
				static jclass objectClass;
				jobject peerObject;

			protected:
				LinkOptionProxy(void* unused);
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
				LinkOptionProxy(jobject obj);

				virtual ~LinkOptionProxy();
				LinkOptionProxy& operator=(const LinkOptionProxy& rhs);

				// methods
				/*
				 * static LinkOption valueOf(String);
				 */
				static ::java::nio::file::LinkOptionProxy valueOf(::net::sourceforge::jnipp::JStringHelper p0);
				/*
				 * static LinkOption[] values();
				 */
				static ::net::sourceforge::jnipp::PA<::java::nio::file::LinkOptionProxy>::ProxyArray<1> values();

			};
		}
	}
}


#endif
