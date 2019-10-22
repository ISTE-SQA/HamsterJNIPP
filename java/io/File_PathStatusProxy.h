#ifndef __java_io_File_PathStatusProxy_H
#define __java_io_File_PathStatusProxy_H


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
#include "java\io\File_PathStatusProxy.h"

namespace java
{
	namespace io
	{
		class File_PathStatusProxy
		{
		private:
			static std::string className;
			static jclass objectClass;
			jobject peerObject;

		protected:
			File_PathStatusProxy(void* unused);
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
			File_PathStatusProxy(jobject obj);

			virtual ~File_PathStatusProxy();
			File_PathStatusProxy& operator=(const File_PathStatusProxy& rhs);

			// methods
			/*
			 * static File$PathStatus valueOf(String);
			 */
			static ::java::io::File_PathStatusProxy valueOf(::net::sourceforge::jnipp::JStringHelper p0);
			/*
			 * static File$PathStatus[] values();
			 */
			static ::net::sourceforge::jnipp::PA<::java::io::File_PathStatusProxy>::ProxyArray<1> values();

		};
	}
}


#endif
