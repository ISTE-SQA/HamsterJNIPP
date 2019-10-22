#ifndef __java_io_FileDescriptorProxy_H
#define __java_io_FileDescriptorProxy_H


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
#include "java\io\CloseableProxyForward.h"
#include "java\util\ListProxyForward.h"

namespace java
{
	namespace io
	{
		class FileDescriptorProxy
		{
		private:
			static std::string className;
			static jclass objectClass;
			jobject peerObject;

		protected:
			FileDescriptorProxy(void* unused);
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
			FileDescriptorProxy(jobject obj);
			FileDescriptorProxy();

			virtual ~FileDescriptorProxy();
			FileDescriptorProxy& operator=(const FileDescriptorProxy& rhs);

			// methods
			/*
			 * boolean valid();
			 */
			jboolean valid();
			/*
			 * void sync();
			 */
			void sync();

		};
	}
}


#endif
