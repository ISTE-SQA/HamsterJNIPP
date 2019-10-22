#ifndef __java_io_FilenameFilterProxy_H
#define __java_io_FilenameFilterProxy_H


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
#include "java\io\FileProxyForward.h"

namespace java
{
	namespace io
	{
		class FilenameFilterProxy
		{
		private:
			static std::string className;
			static jclass objectClass;
			jobject peerObject;

		protected:
			FilenameFilterProxy(void* unused);
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
			FilenameFilterProxy(jobject obj);

			virtual ~FilenameFilterProxy();
			FilenameFilterProxy& operator=(const FilenameFilterProxy& rhs);

			// methods
			/*
			 * boolean accept(File, String);
			 */
			jboolean accept(::java::io::FileProxy p0, ::net::sourceforge::jnipp::JStringHelper p1);

		};
	}
}


#endif
